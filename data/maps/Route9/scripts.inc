Route9_MapScripts:: @ 8167FCF
	map_script MAP_SCRIPT_ON_TRANSITION, Route9_OnTransition
	.byte 0

Route9_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route9_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route9_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route9_EventScript_SetLayoutWinter
	end

Route9_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE9_SUMMER
    return

Route9_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE9_AUTUMN
    return

Route9_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE9_WINTER
    return

Route9_EventScript_RouteSign:: @ 8167FD0
	msgbox Route9_Text_RouteSign, MSGBOX_SIGN
	end
