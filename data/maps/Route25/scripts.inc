Route25_MapScripts:: @ 8168745
	map_script MAP_SCRIPT_ON_TRANSITION, Route25_OnTransition
	.byte 0

Route25_OnTransition:: @ 81684F1
    compare VAR_SEASON, 1
    call_if_eq Route25_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route25_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route25_EventScript_SetLayoutWinter
	end

Route25_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE25_SUMMER
    return

Route25_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE25_AUTUMN
    return

Route25_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE25_WINTER
    return

Route25_EventScript_SeaCottageSign:: @ 8168746
	msgbox Route25_Text_SeaCottageSign, MSGBOX_SIGN
	end

Route25_EventScript_Man:: @ 816874F
	msgbox Route25_Text_AreYouHereAlone, MSGBOX_NPC
	end
