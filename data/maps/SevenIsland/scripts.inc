SevenIsland_MapScripts:: @ 8167EB3
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_OnTransition
	.byte 0

SevenIsland_OnTransition:: @ 8167EB9
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND
    compare VAR_SEASON, 1
    call_if_eq SevenIsland_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SevenIsland_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SevenIsland_EventScript_SetLayoutWinter
	end

SevenIsland_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_SUMMER
    return

SevenIsland_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_AUTUMN
    return

SevenIsland_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_WINTER
    return

SevenIsland_EventScript_IslandSign:: @ 8167EBD
	msgbox SevenIsland_Text_IslandSign, MSGBOX_SIGN
	end

SevenIsland_EventScript_OldWoman:: @ 8167EC6
	msgbox SevenIsland_Text_IslandsMadeInSevenDays, MSGBOX_NPC
	end

SevenIsland_EventScript_Scientist:: @ 8167ECF
	msgbox SevenIsland_Text_IslandVirtuallyUntouched, MSGBOX_NPC
	end
