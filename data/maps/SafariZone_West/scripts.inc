SafariZone_West_MapScripts:: @ 81623C6
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_West_OnTransition
	.byte 0

SafariZone_West_OnTransition:: @ 816235D
    compare VAR_SEASON, 1
    call_if_eq SafariZone_West_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SafariZone_West_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SafariZone_West_EventScript_SetLayoutWinter
	end

SafariZone_West_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SAFARI_ZONE_WEST_SUMMER
    return

SafariZone_West_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SAFARI_ZONE_WEST_AUTUMN
    return

SafariZone_West_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SAFARI_ZONE_WEST_WINTER
    return

SafariZone_West_EventScript_RestHouseSign:: @ 81623C7
	msgbox SafariZone_West_Text_RestHouse, MSGBOX_SIGN
	end

SafariZone_West_EventScript_LostTeethNotice:: @ 81623D0
	msgbox SafariZone_West_Text_PleaseFindWardensLostTeeth, MSGBOX_SIGN
	end

SafariZone_West_EventScript_TrainerTips:: @ 81623D9
	msgbox SafariZone_West_Text_SearchForSecretHouse, MSGBOX_SIGN
	end

SafariZone_West_EventScript_AreaSign:: @ 81623E2
	msgbox SafariZone_West_Text_AreaSign, MSGBOX_SIGN
	end
