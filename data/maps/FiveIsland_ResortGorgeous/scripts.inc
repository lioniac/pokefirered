.equ LOCALID_SELPHY, 8

FiveIsland_ResortGorgeous_MapScripts:: @ 81687E4
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FiveIsland_ResortGorgeous_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_ResortGorgeous_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_ResortGorgeous_OnTransition
	.byte 0

FiveIsland_ResortGorgeous_OnTransition:: @ 8167E94
    compare VAR_SEASON, 1
    call_if_eq FiveIsland_ResortGorgeous_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq FiveIsland_ResortGorgeous_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq FiveIsland_ResortGorgeous_EventScript_SetLayoutWinter
	end

FiveIsland_ResortGorgeous_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_FIVE_ISLAND_RESORT_GORGEOUS_SUMMER
    return

FiveIsland_ResortGorgeous_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_FIVE_ISLAND_RESORT_GORGEOUS_AUTUMN
    return

FiveIsland_ResortGorgeous_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_FIVE_ISLAND_RESORT_GORGEOUS_WINTER
    return

FiveIsland_ResortGorgeous_OnWarp:: @ 81687EF
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth
	.2byte 0

FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth:: @ 81687F9
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

FiveIsland_ResortGorgeous_OnFrame:: @ 81687FE
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene
	.2byte 0

FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene:: @ 8168808
	lockall
	textcolor 1
	msgbox FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow
	closemessage
	applymovement LOCALID_SELPHY, Movement_WalkInPlaceFastestUp
	waitmovement 0
	opendoor 39, 8
	waitdooranim
	applymovement LOCALID_SELPHY, FiveIsland_ResortGorgeous_Movement_SelphyEnterHome
	waitmovement 0
	closedoor 39, 8
	waitdooranim
	removeobject LOCALID_SELPHY
	clearflag FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 2
	releaseall
	end

FiveIsland_ResortGorgeous_Movement_SelphyEnterHome:: @ 8168841
	walk_up
	set_invisible
	step_end

FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign:: @ 8168844
	msgbox FiveIsland_ResortGorgeous_Text_SelphysHouse, MSGBOX_SIGN
	end
