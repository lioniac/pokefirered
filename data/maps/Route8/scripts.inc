Route8_MapScripts:: @ 8167FC5
	map_script MAP_SCRIPT_ON_TRANSITION, Route8_OnTransition
	.byte 0

Route8_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route8_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route8_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route8_EventScript_SetLayoutWinter
	end

Route8_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE8_SUMMER
    return

Route8_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE8_AUTUMN
    return

Route8_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE8_WINTER
    return

Route8_EventScript_UndergroundPathSign:: @ 8167FC6
	msgbox Route8_Text_UndergroundPathSign, MSGBOX_SIGN
	end
