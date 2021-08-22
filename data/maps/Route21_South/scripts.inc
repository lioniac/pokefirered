Route21_South_MapScripts:: @ 816828A
	map_script MAP_SCRIPT_ON_TRANSITION, Route21_South_OnTransition
	.byte 0

Route21_South_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route21_South_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route21_South_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route21_South_EventScript_SetLayoutWinter
	end

Route21_South_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE21_SOUTH_SUMMER
    return

Route21_South_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE21_SOUTH_AUTUMN
    return

Route21_South_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE21_SOUTH_WINTER
    return
