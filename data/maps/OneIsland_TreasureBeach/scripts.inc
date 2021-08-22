OneIsland_TreasureBeach_MapScripts:: @ 816876B
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_TreasureBeach_OnTransition
	.byte 0

OneIsland_TreasureBeach_OnTransition:: @ 816748F
    compare VAR_SEASON, 1
    call_if_eq OneIsland_TreasureBeach_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq OneIsland_TreasureBeach_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq OneIsland_TreasureBeach_EventScript_SetLayoutWinter
	end

OneIsland_TreasureBeach_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ONE_ISLAND_TREASURE_BEACH_SUMMER
    return

OneIsland_TreasureBeach_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ONE_ISLAND_TREASURE_BEACH_AUTUMN
    return

OneIsland_TreasureBeach_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ONE_ISLAND_TREASURE_BEACH_WINTER
    return

OneIsland_TreasureBeach_EventScript_Boy:: @ 816876C
	msgbox OneIsland_TreasureBeach_Text_GoodThingsWashUpOnBeach, MSGBOX_NPC
	end
