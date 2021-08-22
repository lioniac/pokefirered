Route11_MapScripts:: @ 8167FF6
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_OnTransition
	.byte 0

Route11_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route11_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route11_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route11_EventScript_SetLayoutWinter
	end

Route11_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE11_SUMMER
    return

Route11_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE11_AUTUMN
    return

Route11_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE11_WINTER
    return

Route11_EventScript_DiglettsCaveSign:: @ 8167FF7
	msgbox Route11_Text_DiglettsCave, MSGBOX_SIGN
	end
