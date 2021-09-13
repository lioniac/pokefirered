.equ LOCALID_MOM, 1

PalletTown_PlayersHouse_2F_MapScripts:: @ 8168CA3
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_2F_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_PlayersHouse_2F_OnWarp
	.byte 0

PalletTown_PlayersHouse_2F_OnTransition:: @ 8168CAE
	compare VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0
	call_if_eq PalletTown_PlayersHouse_2F_EventScript_SetRespawn
	end

PalletTown_PlayersHouse_2F_EventScript_SetRespawn:: @ 8168CBA
	setrespawn SPAWN_PALLET_TOWN
	return

PalletTown_PlayersHouse_2F_OnWarp:: @ 8168CBE
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_FirstWarpIn
	.2byte 0

PalletTown_PlayersHouse_2F_FirstWarpIn:: @ 8168CC8
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 1
	end

PalletTown_PlayersHouse_2F_EventScript_NES:: @ 8168CD2
	msgbox PalletTown_PlayersHouse_2F_Text_PlayedWithNES, MSGBOX_SIGN
	end

PalletTown_PlayersHouse_2F_EventScript_Sign:: @ 8168CDB
	msgbox PalletTown_PlayersHouse_2F_Text_PressLRForHelp, MSGBOX_SIGN
	end

PalletTown_PlayersHouse_2F_EventScript_PC:: @ 8168CE4
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	setvar VAR_0x8004, HELPCONTEXT_BEDROOM_PC
	special Script_SetHelpContext
	setvar VAR_0x8004, 1
	special AnimatePcTurnOn
	playse SE_PC_ON
	msgbox Text_PlayerBootedUpPC
	special BedroomPC
	waitstate
	special SetHelpContextForMap
	releaseall
	end

EventScript_PalletTown_PlayersHouse_2F_ShutDownPC:: @ 8168D17
	setvar VAR_0x8004, 1
	playse SE_PC_OFF
	special AnimatePcTurnOff
	special SetHelpContextForMap
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_Mom_Season_Before::
	lock
	faceplayer
	goto PalletTown_PlayersHouse_2F_StarterSeason
	end

PalletTown_PlayersHouse_2F_EventScript_Mom_Season_After::
	special BufferAndSetSeason
	msgbox PalletTown_PlayersHouse_2F_Text_StarterSeason_Mom2
	giveitem ITEM_TOWN_MAP
	msgbox PalletTown_PlayersHouse_2F_Text_StarterSeason_Mom3
	closemessage
	applymovement LOCALID_MOM, PalletTown_PlayersHouse_2F_Movement_Mom_Season_After_Leave
	waitmovement 0
	removeobject LOCALID_MOM
	setflag FLAG_HIDE_MOM_SEASON
	setvar VAR_MAP_SCENE_MOM_SEASON, 1
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
	release
	end

PalletTown_PlayersHouse_2F_Movement_Mom_Season_After_Leave::
	walk_left
	step_end

PalletTown_PlayersHouse_2F_StarterSeason::
	msgbox PalletTown_PlayersHouse_2F_Text_StarterSeason_Mom1
	waitmessage
	multichoicedefault 0, 0, MULTICHOICE_STARTER_SEASON, 0, TRUE
	goto PalletTown_PlayersHouse_2F_StarterSeason_Choose
	end

PalletTown_PlayersHouse_2F_StarterSeason_Choose::
	switch VAR_RESULT
	case 0, PalletTown_PlayersHouse_2F_StarterSeason_Spring
	case 1, PalletTown_PlayersHouse_2F_StarterSeason_Summer
	case 2, PalletTown_PlayersHouse_2F_StarterSeason_Autumn
	case 3, PalletTown_PlayersHouse_2F_StarterSeason_Winter
	case 4, PalletTown_PlayersHouse_2F_StarterSeason_Random
	end

PalletTown_PlayersHouse_2F_StarterSeason_Spring::
	setvar VAR_SEASON, 0
	closemessage
	goto PalletTown_PlayersHouse_2F_EventScript_Mom_Season_After
	end

PalletTown_PlayersHouse_2F_StarterSeason_Summer::
	setvar VAR_SEASON, 1
	closemessage
	goto PalletTown_PlayersHouse_2F_EventScript_Mom_Season_After
	end

PalletTown_PlayersHouse_2F_StarterSeason_Autumn::
	setvar VAR_SEASON, 2
	closemessage
	goto PalletTown_PlayersHouse_2F_EventScript_Mom_Season_After
	end

PalletTown_PlayersHouse_2F_StarterSeason_Winter::
	setvar VAR_SEASON, 3
	closemessage
	goto PalletTown_PlayersHouse_2F_EventScript_Mom_Season_After
	end

PalletTown_PlayersHouse_2F_StarterSeason_Random::
	random 4
	compare VAR_RESULT, 0
	goto_if_eq PalletTown_PlayersHouse_2F_StarterSeason_Spring
	compare VAR_RESULT, 1
	goto_if_eq PalletTown_PlayersHouse_2F_StarterSeason_Summer
	compare VAR_RESULT, 2
	goto_if_eq PalletTown_PlayersHouse_2F_StarterSeason_Autumn
	compare VAR_RESULT, 3
	goto_if_eq PalletTown_PlayersHouse_2F_StarterSeason_Winter
	end
