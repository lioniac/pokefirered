Route7_MapScripts:: @ 8167FBB
	map_script MAP_SCRIPT_ON_TRANSITION, Route7_OnTransition
	.byte 0

Route7_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route7_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route7_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route7_EventScript_SetLayoutWinter
	end

Route7_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE7_SUMMER
    return

Route7_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE7_AUTUMN
    return

Route7_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE7_WINTER
    return

Route7_EventScript_UndergroundPathSign:: @ 8167FBC
	msgbox Route7_Text_UndergroundPathSign, MSGBOX_SIGN
	end
