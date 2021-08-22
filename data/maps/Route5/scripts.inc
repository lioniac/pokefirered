Route5_MapScripts:: @ 8167FA7
	map_script MAP_SCRIPT_ON_TRANSITION, Route5_OnTransition
	.byte 0

Route5_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route5_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route5_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route5_EventScript_SetLayoutWinter
	end

Route5_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE5_SUMMER
    return

Route5_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE5_AUTUMN
    return

Route5_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE5_WINTER
    return

Route5_EventScript_UndergroundPathSign:: @ 8167FA8
	msgbox Route5_Text_UndergroundPathSign, MSGBOX_SIGN
	end
