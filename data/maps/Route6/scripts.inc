Route6_MapScripts:: @ 8167FB1
	map_script MAP_SCRIPT_ON_TRANSITION, Route6_OnTransition
	.byte 0

Route6_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route6_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route6_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route6_EventScript_SetLayoutWinter
	end

Route6_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE6_SUMMER
    return

Route6_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE6_AUTUMN
    return

Route6_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE6_WINTER
    return

Route6_EventScript_UndergroundPathSign:: @ 8167FB2
	msgbox Route6_Text_UndergroundPathSign, MSGBOX_SIGN
	end
