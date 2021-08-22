Route13_MapScripts:: @ 81680B5
	map_script MAP_SCRIPT_ON_TRANSITION, Route13_OnTransition
	.byte 0

Route13_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route13_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route13_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route13_EventScript_SetLayoutWinter
	end

Route13_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE13_SUMMER
    return

Route13_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE13_AUTUMN
    return

Route13_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE13_WINTER
    return

Route13_EventScript_TrainerTips1:: @ 81680B6
	msgbox Route13_Text_LookToLeftOfThatPost, MSGBOX_SIGN
	end

Route13_EventScript_TrainerTips2:: @ 81680BF
	msgbox Route13_Text_SelectToSwitchItems, MSGBOX_SIGN
	end

Route13_EventScript_RouteSign:: @ 81680C8
	msgbox Route13_Text_RouteSign, MSGBOX_SIGN
	end
