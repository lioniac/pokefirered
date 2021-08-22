SafariZone_North_MapScripts:: @ 8162398
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZone_North_OnTransition
	.byte 0

SafariZone_North_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq SafariZone_North_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SafariZone_North_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SafariZone_North_EventScript_SetLayoutWinter
	end

SafariZone_North_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SAFARI_ZONE_NORTH_SUMMER
    return

SafariZone_North_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SAFARI_ZONE_NORTH_AUTUMN
    return

SafariZone_North_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SAFARI_ZONE_NORTH_WINTER
    return

SafariZone_North_EventScript_RestHouseSign:: @ 8162399
	msgbox SafariZone_North_Text_RestHouse, MSGBOX_SIGN
	end

SafariZone_North_EventScript_TrainerTips1:: @ 81623A2
	msgbox SafariZone_North_Text_SecretHouseStillAhead, MSGBOX_SIGN
	end

SafariZone_North_EventScript_AreaSign:: @ 81623AB
	msgbox SafariZone_North_Text_Area2, MSGBOX_SIGN
	end

SafariZone_North_EventScript_TrainerTips2:: @ 81623B4
	msgbox SafariZone_North_Text_ZigzagThroughTallGrass, MSGBOX_SIGN
	end

SafariZone_North_EventScript_TrainerTips3:: @ 81623BD
	msgbox SafariZone_North_Text_WinFreeHMFindSecretHouse, MSGBOX_SIGN
	end
