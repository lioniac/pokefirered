#if DEBUG

#include "global.h"
#include "list_menu.h"
#include "main.h"
#include "map_name_popup.h"
#include "menu.h"
#include "new_menu_helpers.h"
#include "script.h"
#include "sound.h"
#include "strings.h"
#include "task.h"
#include "constants/songs.h"
#include "pokemon_storage_system.h"
#include "constants/species.h"
#include "constants/maps.h"
#include "overworld.h"
#include "field_fadetransition.h"
#include "pokedex.h"
#include "constants/flags.h"
#include "event_data.h"
#include "script.h"
#include "event_scripts.h"

#define DEBUG_MAIN_MENU_HEIGHT 8
#define DEBUG_MAIN_MENU_WIDTH 17

#define ARRAY_COUNT(array) (sizeof(array) / sizeof((array)[0]))

void Debug_ShowMainMenu(void);
static void Debug_DestroyMainMenu(u8);
static void DebugAction_Cancel(u8);
static void DebugTask_HandleMainMenuInput(u8);
static void DebugAction_GetFlags(u8);
static void DebugAction_GetKeyItems(u8);
static void DebugAction_GetItems(u8);
static void DebugAction_GetMons(u8);
static void DebugAction_CompletePokedex(u8);
static void DebugAction_AccessPC(u8);
static void DebugAction_WarpToPallet(u8);

enum {
    DEBUG_MENU_ITEM_CANCEL,
    DEBUG_MENU_ITEM_GETFLAGS,
    DEBUG_MENU_ITEM_GETKEYITEMS,
    DEBUG_MENU_ITEM_GETITEMS,
    DEBUG_MENU_ITEM_GETMONS,
    DEBUG_MENU_ITEM_COMPLETEPOKEDEX,
    DEBUG_MENU_ITEM_ACCESSPC,
    DEBUG_MENU_ITEM_WARPTOPALLET,
};

static const u8 gDebugText_Cancel[] = _("Cancel");
static const u8 gDebugText_GetFlags[] = _("Get Important Flags");
static const u8 gDebugText_GetKeyItems[] = _("Get Debug Key Items");
static const u8 gDebugText_GetItems[] = _("Get Debug Items");
static const u8 gDebugText_GetMons[] = _("Get Pokémon");
static const u8 gDebugText_CompletePokedex[] = _("Complete Pokédex");
static const u8 gDebugText_AccessPC[] = _("Access PC");
static const u8 gDebugText_WarpToPallet[] = _("Warp to Pallet");

static const struct ListMenuItem sDebugMenuItems[] =
{
    [DEBUG_MENU_ITEM_CANCEL] = {gDebugText_Cancel, DEBUG_MENU_ITEM_CANCEL},
    [DEBUG_MENU_ITEM_GETFLAGS] = {gDebugText_GetFlags, DEBUG_MENU_ITEM_GETFLAGS},
    [DEBUG_MENU_ITEM_GETKEYITEMS] = {gDebugText_GetKeyItems, DEBUG_MENU_ITEM_GETKEYITEMS},
    [DEBUG_MENU_ITEM_GETITEMS] = {gDebugText_GetItems, DEBUG_MENU_ITEM_GETITEMS},
    [DEBUG_MENU_ITEM_GETMONS] = {gDebugText_GetMons, DEBUG_MENU_ITEM_GETMONS},
    [DEBUG_MENU_ITEM_COMPLETEPOKEDEX] = {gDebugText_CompletePokedex, DEBUG_MENU_ITEM_COMPLETEPOKEDEX},
    [DEBUG_MENU_ITEM_ACCESSPC] = {gDebugText_AccessPC, DEBUG_MENU_ITEM_ACCESSPC},
    [DEBUG_MENU_ITEM_WARPTOPALLET] = {gDebugText_WarpToPallet, DEBUG_MENU_ITEM_WARPTOPALLET},
};

static void (*const sDebugMenuActions[])(u8) =
{
    [DEBUG_MENU_ITEM_CANCEL] = DebugAction_Cancel,
    [DEBUG_MENU_ITEM_GETFLAGS] = DebugAction_GetFlags,
    [DEBUG_MENU_ITEM_GETKEYITEMS] = DebugAction_GetKeyItems,
    [DEBUG_MENU_ITEM_GETITEMS] = DebugAction_GetItems,
    [DEBUG_MENU_ITEM_GETMONS] = DebugAction_GetMons,
    [DEBUG_MENU_ITEM_COMPLETEPOKEDEX] = DebugAction_CompletePokedex,
    [DEBUG_MENU_ITEM_ACCESSPC] = DebugAction_AccessPC,
    [DEBUG_MENU_ITEM_WARPTOPALLET] = DebugAction_WarpToPallet,
};

static const struct WindowTemplate sDebugMenuWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = DEBUG_MAIN_MENU_WIDTH,
    .height = 2 * DEBUG_MAIN_MENU_HEIGHT,
    .paletteNum = 15,
    .baseBlock = 1,
};

static const struct ListMenuTemplate sDebugMenuListTemplate =
{
    .items = sDebugMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenuItems),
    .maxShowed = DEBUG_MAIN_MENU_HEIGHT,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 1,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = 1,
    .cursorKind = 0
};

void Debug_ShowMainMenu(void) {
    struct ListMenuTemplate menuTemplate;
    u8 windowId;
    u8 menuTaskId;
    u8 inputTaskId;

    // create window
    DismissMapNamePopup();
    LoadStdWindowFrameGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    // create list menu
    menuTemplate = sDebugMenuListTemplate;
    menuTemplate.windowId = windowId;
    menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

    // draw everything
    CopyWindowToVram(windowId, 3);

    // create input handler task
    inputTaskId = CreateTask(DebugTask_HandleMainMenuInput, 3);
    gTasks[inputTaskId].data[0] = menuTaskId;
    gTasks[inputTaskId].data[1] = windowId;
}

static void Debug_DestroyMainMenu(u8 taskId)
{
    DestroyListMenuTask(gTasks[taskId].data[0], NULL, NULL);
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
    DestroyTask(taskId);
    EnableBothScriptContexts();
}

static void DebugTask_HandleMainMenuInput(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenuActions[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMainMenu(taskId);
    }
}

static void DebugAction_Cancel(u8 taskId)
{
    Debug_DestroyMainMenu(taskId);
}

static void DebugAction_GetFlags(u8 taskId)
{
    Debug_DestroyMainMenu(taskId);
    ScriptContext1_SetupScript(EventScript_Debug_GetFlags);
}

static void DebugAction_GetKeyItems(u8 taskId)
{
    Debug_DestroyMainMenu(taskId);
    ScriptContext1_SetupScript(EventScript_Debug_GetKeyItems);
}

static void DebugAction_GetItems(u8 taskId)
{
    Debug_DestroyMainMenu(taskId);
    ScriptContext1_SetupScript(EventScript_Debug_GetItems);
}

static void DebugAction_GetMons(u8 taskId)
{
    Debug_DestroyMainMenu(taskId);
    ScriptContext1_SetupScript(EventScript_Debug_GetMons);
}

static void DebugAction_CompletePokedex(u8 taskId)
{
    u16 i;
    Debug_DestroyMainMenu(taskId);
    for (i = 0; i < NATIONAL_DEX_COUNT + 1; i++)
    {
        GetSetPokedexFlag(i, FLAG_SET_SEEN);
        GetSetPokedexFlag(i, FLAG_SET_CAUGHT);
    }
    gSaveBlock2Ptr->pokedex.unownPersonality = 0xDEADBEEF;
    gSaveBlock2Ptr->pokedex.spindaPersonality = 0xDEADBEEF;
    PlaySE(SE_SAVE);
}

//BUGGED
static void DebugAction_AccessPC(u8 taskId)
{
    Debug_DestroyMainMenu(taskId);
    ScriptContext1_SetupScript(EventScript_Debug_PC);
}

static void DebugAction_WarpToPallet(u8 taskId)
{
    Debug_DestroyMainMenu(taskId);
    SetWarpDestination(MAP_GROUP(PALLET_TOWN), MAP_NUM(PALLET_TOWN), -1, 3, 6);
    DoTeleportWarp();
}

#endif
