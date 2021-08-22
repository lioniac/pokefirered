SafariZone_East_MapScripts:: @ 816237C
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_East_OnTransition
	.byte 0

SafariZone_East_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq SafariZone_East_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SafariZone_East_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SafariZone_East_EventScript_SetLayoutWinter
	end

SafariZone_East_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SAFARI_ZONE_EAST_SUMMER
    return

SafariZone_East_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SAFARI_ZONE_EAST_AUTUMN
    return

SafariZone_East_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SAFARI_ZONE_EAST_WINTER
    return

SafariZone_East_EventScript_RestHouseSign:: @ 816237D
	msgbox SafariZone_East_Text_RestHouse, MSGBOX_SIGN
	end

SafariZone_East_EventScript_TrainerTips:: @ 8162386
	msgbox SafariZone_East_Text_TimeDeclinesOnlyWhileYouWalk, MSGBOX_SIGN
	end

SafariZone_East_EventScript_AreaSign:: @ 816238F
	msgbox SafariZone_East_Text_AreaSign, MSGBOX_SIGN
	end
