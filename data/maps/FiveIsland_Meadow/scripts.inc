FiveIsland_Meadow_MapScripts:: @ 8168932
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_Meadow_OnTransition
	.byte 0

FiveIsland_Meadow_OnTransition:: @ 8167E94
    compare VAR_SEASON, 1
    call_if_eq FiveIsland_Meadow_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq FiveIsland_Meadow_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq FiveIsland_Meadow_EventScript_SetLayoutWinter
	end

FiveIsland_Meadow_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_FIVE_ISLAND_MEADOW_SUMMER
    return

FiveIsland_Meadow_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_FIVE_ISLAND_MEADOW_AUTUMN
    return

FiveIsland_Meadow_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_FIVE_ISLAND_MEADOW_WINTER
    return

FiveIsland_Meadow_OnLoad:: @ 8168938
	call_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
	end

FiveIsland_Meadow_EventScript_WarehouseDoor:: @ 8168942
	lockall
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_OpenWarehouseDoor
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
	releaseall
	end

FiveIsland_Meadow_EventScript_OpenWarehouseDoor:: @ 816895F
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
	waitmessage
	delay 60
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
	special DrawWholeMapView
	playse SE_PIN
	waitse
	releaseall
	end

FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen:: @ 8168979
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
	releaseall
	end

FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked:: @ 8168983
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
	return

FiveIsland_Meadow_EventScript_Rocket1:: @ 816898D
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_Meadow_EventScript_Rocket2:: @ 81689A4
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_Meadow_EventScript_Rocket3:: @ 81689BB
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
	end
