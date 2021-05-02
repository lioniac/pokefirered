EventScript_Debug_GetFlags_Func:
    setflag FLAG_SYS_POKEMON_GET
    setflag FLAG_SYS_POKEDEX_GET
    setflag FLAG_SYS_QUEST_MENU_GET
    clearflag FLAG_HIDE_OAK_IN_HIS_LAB
    setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
    setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
    setflag FLAG_OPENED_START_MENU
    setflag FLAG_VISITED_OAKS_LAB
    setvar VAR_STARTER_MON, 2                              @ Chose Charmander
    setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
    setflag FLAG_HIDE_RIVAL_IN_LAB
    setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
    setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
    setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6 @ Parcel delivery done
    setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2       @ Obtained the Town Map
    setvar RECEIVED_TOWN_MAP, TRUE
    setflag FLAG_HIDE_TOWN_MAP
    setvar VAR_MAP_SCENE_ROUTE22, 1                        @ Ready to fight the Rival in Route 22
    setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2             @ Parcel delivery done
    setflag FLAG_HIDE_POKEDEX
    setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2          @ Old Man's catching tutorial done
    setvar VAR_MAP_SCENE_PEWTER_CITY, 2                    @ Received the Running Shoes in Pewter City
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    setflag FLAG_BADGE03_GET
    setflag FLAG_BADGE04_GET
    setflag FLAG_BADGE05_GET
    setflag FLAG_BADGE06_GET
    setflag FLAG_BADGE07_GET
    setflag FLAG_BADGE08_GET
    return

EventScript_Debug_GetFlags::
    lock
    call EventScript_Debug_GetFlags_Func
    release
    end

EventScript_Debug_GetItems_Func:
    additem ITEM_POKE_BALL, 99
    additem ITEM_GREAT_BALL, 99
    additem ITEM_ULTRA_BALL, 99
    additem ITEM_MASTER_BALL, 99
    additem ITEM_FIRE_STONE, 99
    additem ITEM_WATER_STONE, 99
    additem ITEM_THUNDER_STONE, 99
    additem ITEM_LEAF_STONE, 99
    additem ITEM_SUN_STONE, 99
    additem ITEM_MOON_STONE, 99
    additem ITEM_RARE_CANDY, 99
    additem ITEM_HM01, 1
    additem ITEM_HM02, 1
    additem ITEM_HM03, 1
    additem ITEM_HM04, 1
    additem ITEM_HM05, 1
    additem ITEM_HM06, 1
    additem ITEM_HM07, 1
    additem ITEM_HM08, 1
    additem ITEM_TM01, 1
    additem ITEM_TM02, 1
    additem ITEM_TM03, 1
    additem ITEM_TM04, 1
    additem ITEM_TM05, 1
    additem ITEM_TM06, 1
    additem ITEM_TM07, 1
    additem ITEM_TM08, 1
    additem ITEM_TM09, 1
    additem ITEM_TM10, 1
    additem ITEM_TM11, 1
    additem ITEM_TM12, 1
    additem ITEM_TM13, 1
    additem ITEM_TM14, 1
    additem ITEM_TM15, 1
    additem ITEM_TM16, 1
    additem ITEM_TM17, 1
    additem ITEM_TM18, 1
    additem ITEM_TM19, 1
    additem ITEM_TM20, 1
    additem ITEM_TM21, 1
    additem ITEM_TM22, 1
    additem ITEM_TM23, 1
    additem ITEM_TM24, 1
    additem ITEM_TM25, 1
    additem ITEM_TM26, 1
    additem ITEM_TM27, 1
    additem ITEM_TM28, 1
    additem ITEM_TM29, 1
    additem ITEM_TM30, 1
    additem ITEM_TM31, 1
    additem ITEM_TM32, 1
    additem ITEM_TM33, 1
    additem ITEM_TM34, 1
    additem ITEM_TM35, 1
    additem ITEM_TM36, 1
    additem ITEM_TM37, 1
    additem ITEM_TM38, 1
    additem ITEM_TM39, 1
    additem ITEM_TM40, 1
    additem ITEM_TM41, 1
    additem ITEM_TM42, 1
    additem ITEM_TM43, 1
    additem ITEM_TM44, 1
    additem ITEM_TM45, 1
    additem ITEM_TM46, 1
    additem ITEM_TM47, 1
    additem ITEM_TM48, 1
    additem ITEM_TM49, 1
    additem ITEM_TM50, 1
    additem ITEM_TM54, 1
    additem ITEM_TM61, 1
    additem ITEM_TM62, 1
    additem ITEM_TM64, 1
    additem ITEM_TM67, 1
    additem ITEM_TM73, 1
    additem ITEM_TM75, 1
    additem ITEM_TM77, 1
    additem ITEM_TM80, 1
    additem ITEM_TM82, 1
    additem ITEM_TM85, 1
    additem ITEM_TM87, 1
    additem ITEM_TM90, 1
    additem ITEM_TOWN_MAP, 1
    additem ITEM_TEACHY_TV, 1
    additem ITEM_EXP_SHARE, 1
    additem ITEM_OLD_ROD, 1
    additem ITEM_GOOD_ROD, 1
    additem ITEM_SUPER_ROD, 1
    return

EventScript_Debug_GetItems::
    lock
    call EventScript_Debug_GetItems_Func
    release
    end

EventScript_Debug_GetMons_Func:
    givecustommon SPECIES_BULBASAUR, 10, 0, NATURE_DOCILE, 0, 31
    givecustommon SPECIES_CHARMANDER, 10, 0, NATURE_DOCILE, 0, 31
    givecustommon SPECIES_SQUIRTLE, 10, 0, NATURE_DOCILE, 0, 31
    givecustommon SPECIES_PIKACHU, 10, 0, NATURE_DOCILE, 0, 31
    givecustommon SPECIES_SNORLAX, 10, 0, NATURE_DOCILE, 0, 31
    givecustommon SPECIES_LAPRAS, 10, 0, NATURE_DOCILE, 0, 31
    return

EventScript_Debug_GetMons::
    lock
    call EventScript_Debug_GetMons_Func
    release
    end

EventScript_Debug_GetAll::
    lock
    call EventScript_Debug_GetFlags_Func
    call EventScript_Debug_GetItems_Func
    call EventScript_Debug_GetMons_Func
    release
    end

EventScript_Debug_PC::
    lockall
    goto EventScript_PCMainMenu
    releaseall
    end

EventScript_Debug_Clock::
    lockall
    gettime
    getnumberstring 0, VAR_0x8000
    getnumberstring 1, VAR_0x8001
    compare VAR_0x8003, 0
    call_if_eq EventScript_Debug_Clock_Sunday
    compare VAR_0x8003, 1
    call_if_eq EventScript_Debug_Clock_Monday
    compare VAR_0x8003, 2
    call_if_eq EventScript_Debug_Clock_Tuesday
    compare VAR_0x8003, 3
    call_if_eq EventScript_Debug_Clock_Wednesday
    compare VAR_0x8003, 4
    call_if_eq EventScript_Debug_Clock_Thursday
    compare VAR_0x8003, 5
    call_if_eq EventScript_Debug_Clock_Friday
    compare VAR_0x8003, 6
    call_if_eq EventScript_Debug_Clock_Saturday
    msgbox EventScript_Debug_Clock_Text
    waitmessage
    releaseall
    end

EventScript_Debug_Clock_Sunday::
    getstdstring 2, STDSTRING_SUNDAY
    return
EventScript_Debug_Clock_Monday::
    getstdstring 2, STDSTRING_MONDAY
    return
EventScript_Debug_Clock_Tuesday::
    getstdstring 2, STDSTRING_TUESDAY
    return
EventScript_Debug_Clock_Wednesday::
    getstdstring 2, STDSTRING_WEDNESDAY
    return
EventScript_Debug_Clock_Thursday::
    getstdstring 2, STDSTRING_THURSDAY
    return
EventScript_Debug_Clock_Friday::
    getstdstring 2, STDSTRING_FRIDAY
    return
EventScript_Debug_Clock_Saturday::
    getstdstring 2, STDSTRING_SATURDAY
    return

EventScript_Debug_Clock_Text::
    .string "{STR_VAR_3}, {STR_VAR_1}:{STR_VAR_2}$"
