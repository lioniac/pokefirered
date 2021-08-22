Route17_MapScripts:: @ 81681BF
	map_script MAP_SCRIPT_ON_TRANSITION, Route17_OnTransition
	.byte 0

Route17_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route17_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route17_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route17_EventScript_SetLayoutWinter
	end

Route17_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE17_SUMMER
    return

Route17_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE17_AUTUMN
    return

Route17_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE17_WINTER
    return

Route17_EventScript_ItemsNotice:: @ 81681C0
	msgbox Route17_Text_WatchOutForDiscardedItems, MSGBOX_SIGN
	end

Route17_EventScript_TrainerTips1:: @ 81681C9
	msgbox Route17_Text_SameSpeciesGrowDifferentRates, MSGBOX_SIGN
	end

Route17_EventScript_TrainerTips2:: @ 81681D2
	msgbox Route17_Text_PressBToStayInPlace, MSGBOX_SIGN
	end

Route17_EventScript_RouteSign:: @ 81681DB
	msgbox Route17_Text_RouteSign, MSGBOX_SIGN
	end

Route17_EventScript_BallsNotice:: @ 81681E4
	msgbox Route17_Text_DontThrowGameThrowBalls, MSGBOX_SIGN
	end

Route17_EventScript_CyclingRoadSign:: @ 81681ED
	msgbox Route17_Text_CyclingRoadSign, MSGBOX_SIGN
	end
