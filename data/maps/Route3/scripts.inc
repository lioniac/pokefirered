Route3_MapScripts:: @ 8167F77
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_OnTransition
	.byte 0

Route3_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route3_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route3_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route3_EventScript_SetLayoutWinter
	end

Route3_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE3_SUMMER
    return

Route3_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE3_AUTUMN
    return

Route3_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE3_WINTER
    return

Route3_EventScript_Youngster:: @ 8167F78
	msgbox Route3_Text_TunnelFromCeruleanTiring, MSGBOX_NPC
	end

Route3_EventScript_RouteSign:: @ 8167F81
	msgbox Route3_Text_RouteSign, MSGBOX_SIGN
	end
