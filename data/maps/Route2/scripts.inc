Route2_MapScripts:: @ 8167F64
	map_script MAP_SCRIPT_ON_TRANSITION, Route2_OnTransition
	.byte 0

Route2_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route2_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route2_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route2_EventScript_SetLayoutWinter
	end

Route2_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE2_SUMMER
    return

Route2_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE2_AUTUMN
    return

Route2_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE2_WINTER
    return

Route2_EventScript_RouteSign:: @ 8167F65
	msgbox Route2_Text_RouteSign, MSGBOX_SIGN
	end

Route2_EventScript_DiglettsCaveSign:: @ 8167F6E
	msgbox Route2_Text_DiglettsCave, MSGBOX_SIGN
	end
