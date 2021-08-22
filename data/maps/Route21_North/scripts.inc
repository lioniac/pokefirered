Route21_North_MapScripts:: @ 8168289
	map_script MAP_SCRIPT_ON_TRANSITION, Route21_North_OnTransition
	.byte 0

Route21_North_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route21_North_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route21_North_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route21_North_EventScript_SetLayoutWinter
	end

Route21_North_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE21_NORTH_SUMMER
    return

Route21_North_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE21_NORTH_AUTUMN
    return

Route21_North_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE21_NORTH_WINTER
    return
