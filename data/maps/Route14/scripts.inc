Route14_MapScripts:: @ 81680D1
	map_script MAP_SCRIPT_ON_TRANSITION, Route14_OnTransition
	.byte 0

Route14_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route14_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route14_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route14_EventScript_SetLayoutWinter
	end

Route14_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE14_SUMMER
    return

Route14_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE14_AUTUMN
    return

Route14_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE14_WINTER
    return

Route14_EventScript_RouteSign:: @ 81680D2
	msgbox Route14_Text_RouteSign, MSGBOX_SIGN
	end
