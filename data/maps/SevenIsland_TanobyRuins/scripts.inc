SevenIsland_TanobyRuins_MapScripts:: @ 8168C07
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TanobyRuins_OnTransition
	.byte 0

SevenIsland_TanobyRuins_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq SevenIsland_TanobyRuins_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SevenIsland_TanobyRuins_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SevenIsland_TanobyRuins_EventScript_SetLayoutWinter
	end

SevenIsland_TanobyRuins_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_TANOBY_RUINS_SUMMER
    return

SevenIsland_TanobyRuins_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_TANOBY_RUINS_AUTUMN
    return

SevenIsland_TanobyRuins_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_TANOBY_RUINS_WINTER
    return

