Route20_MapScripts:: @ 816823B
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
	.byte 0

Route20_OnTransition:: @ 8168241
    compare VAR_SEASON, 1
    call_if_eq Route20_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route20_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route20_EventScript_SetLayoutWinter
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB3F
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB4F
	end

Route20_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE20_SUMMER
    return

Route20_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE20_AUTUMN
    return

Route20_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE20_WINTER
    return

Route20_EventScript_ResetSeafoamBouldersForB3F:: @ 8168254
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_1
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
	return

Route20_EventScript_ResetSeafoamBouldersForB4F:: @ 816826D
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
	return

Route20_EventScript_SeafoamIslandsSign:: @ 8168280
	msgbox Route20_Text_SeafoamIslands, MSGBOX_SIGN
	end
