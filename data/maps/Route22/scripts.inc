.set LOCALID_RIVAL, 1

Route22_MapScripts:: @ 816828B
	map_script MAP_SCRIPT_ON_TRANSITION, Route22_OnTransition
	.byte 0

Route22_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route22_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route22_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route22_EventScript_SetLayoutWinter
	end

Route22_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE22_SUMMER
    return

Route22_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE22_AUTUMN
    return

Route22_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE22_WINTER
    return

Route22_EventScript_EarlyRivalTriggerTop:: @ 816828C
	lockall
	setvar VAR_TEMP_1, 0
	goto Route22_EventScript_EarlyRival
	end

Route22_EventScript_EarlyRivalTriggerMid:: @ 8168298
	lockall
	setvar VAR_TEMP_1, 1
	setobjectxyperm LOCALID_RIVAL, 25, 5
	goto Route22_EventScript_EarlyRival
	end

Route22_EventScript_EarlyRivalTriggerBottom:: @ 81682AB
	lockall
	setvar VAR_TEMP_1, 2
	setobjectxyperm LOCALID_RIVAL, 25, 5
	goto Route22_EventScript_EarlyRival
	end

Route22_EventScript_EarlyRival:: @ 81682BE
	textcolor 0
	playbgm MUS_ENCOUNTER_RIVAL, 0
	addobject LOCALID_RIVAL
	compare VAR_TEMP_1, 0
	call_if_eq Route22_EventScript_EarlyRivalApproach
	compare VAR_TEMP_1, 1
	call_if_eq Route22_EventScript_EarlyRivalApproach
	compare VAR_TEMP_1, 2
	call_if_eq Route22_EventScript_EarlyRivalApproachBottom
	delay 6
	msgbox Route22_Text_EarlyRivalIntro
	compare VAR_STARTER_MON, 2
	call_if_eq Route22_EventScript_EarlyRivalSquirtle
	compare VAR_STARTER_MON, 1
	call_if_eq Route22_EventScript_EarlyRivalBulbasaur
	compare VAR_STARTER_MON, 0
	call_if_eq Route22_EventScript_EarlyRivalCharmander
	compare VAR_STARTER_MON, 5
	call_if_eq Route22_EventScript_EarlyRivalSquirtle
	compare VAR_STARTER_MON, 4
	call_if_eq Route22_EventScript_EarlyRivalBulbasaur
	compare VAR_STARTER_MON, 3
	call_if_eq Route22_EventScript_EarlyRivalCharmander
	compare VAR_STARTER_MON, 8
	call_if_eq Route22_EventScript_EarlyRivalSquirtle
	compare VAR_STARTER_MON, 7
	call_if_eq Route22_EventScript_EarlyRivalBulbasaur
	compare VAR_STARTER_MON, 6
	call_if_eq Route22_EventScript_EarlyRivalCharmander
	compare VAR_STARTER_MON, 11
	call_if_eq Route22_EventScript_EarlyRivalSquirtle
	compare VAR_STARTER_MON, 10
	call_if_eq Route22_EventScript_EarlyRivalBulbasaur
	compare VAR_STARTER_MON, 9
	call_if_eq Route22_EventScript_EarlyRivalCharmander
	msgbox Route22_Text_EarlyRivalPostBattle
	closemessage
	delay 10
	playbgm MUS_RIVAL_EXIT, 0
	compare VAR_TEMP_1, 0
	call_if_eq Route22_EventScript_EarlyRivalExit
	compare VAR_TEMP_1, 1
	call_if_eq Route22_EventScript_EarlyRivalExit
	compare VAR_TEMP_1, 2
	call_if_eq Route22_EventScript_EarlyRivalExitBottom
	fadedefaultbgm
	removeobject LOCALID_RIVAL
	setvar VAR_MAP_SCENE_ROUTE22, 2
	releaseall
	end

Route22_EventScript_EarlyRivalApproach:: @ 8168350
	applymovement LOCALID_RIVAL, Route22_Movement_RivalApproach
	waitmovement 0
	return

Route22_EventScript_EarlyRivalApproachBottom:: @ 816835B
	applymovement LOCALID_RIVAL, Route22_Movement_RivalApproachBottom
	applymovement OBJ_EVENT_ID_PLAYER, Route22_Movement_PlayerFaceRival
	waitmovement 0
	return

Route22_EventScript_EarlyRivalSquirtle::
	compare VAR_OBJ_GFX_ID_RIVAL, 7
	call_if_eq Route22_EventScript_EarlyRivalBlueSquirtle
	compare VAR_OBJ_GFX_ID_RIVAL, 0
	call_if_eq Route22_EventScript_EarlyRivalRedSquirtle
	return

Route22_EventScript_EarlyRivalBulbasaur::
	compare VAR_OBJ_GFX_ID_RIVAL, 7
	call_if_eq Route22_EventScript_EarlyRivalBlueBulbasaur
	compare VAR_OBJ_GFX_ID_RIVAL, 0
	call_if_eq Route22_EventScript_EarlyRivalRedBulbasaur
	return

Route22_EventScript_EarlyRivalCharmander::
	compare VAR_OBJ_GFX_ID_RIVAL, 7
	call_if_eq Route22_EventScript_EarlyRivalBlueCharmander
	compare VAR_OBJ_GFX_ID_RIVAL, 0
	call_if_eq Route22_EventScript_EarlyRivalRedCharmander
	return

Route22_EventScript_EarlyRivalBlueSquirtle::
	trainerbattle_earlyrival TRAINER_RIVAL_BLUE_ROUTE22_EARLY_SQUIR, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return

Route22_EventScript_EarlyRivalBlueBulbasaur::
	trainerbattle_earlyrival TRAINER_RIVAL_BLUE_ROUTE22_EARLY_BULBA, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return

Route22_EventScript_EarlyRivalBlueCharmander::
	trainerbattle_earlyrival TRAINER_RIVAL_BLUE_ROUTE22_EARLY_CHARM, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return

Route22_EventScript_EarlyRivalRedSquirtle::
	trainerbattle_earlyrival TRAINER_RIVAL_RED_ROUTE22_EARLY_SQUIR, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return

Route22_EventScript_EarlyRivalRedBulbasaur::
	trainerbattle_earlyrival TRAINER_RIVAL_RED_ROUTE22_EARLY_BULBA, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return

Route22_EventScript_EarlyRivalRedCharmander::
	trainerbattle_earlyrival TRAINER_RIVAL_RED_ROUTE22_EARLY_CHARM, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
	return

Route22_EventScript_EarlyRivalExit:: @ 816839A
	applymovement LOCALID_RIVAL, Route22_Movement_EarlyRivalExit
	waitmovement 0
	return

Route22_EventScript_EarlyRivalExitBottom:: @ 81683A5
	applymovement LOCALID_RIVAL, Route22_Movement_EarlyRivalExitBottom
	waitmovement 0
	return

Route22_Movement_UnusedRivalExit:: @ 8
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route22_Movement_EarlyRivalExit:: @ 81683B8
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route22_Movement_EarlyRivalExitBottom:: @ 81683C5
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route22_Movement_RivalApproach:: @ 81683D1
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route22_Movement_RivalApproachBottom:: @ 81683D9
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end

Route22_Movement_PlayerFaceRival:: @ 81683E3
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_fastest_up
	step_end

Route22_EventScript_LateRivalTriggerTop:: @ 81683ED
	lockall
	setvar VAR_TEMP_1, 0
	goto Route22_EventScript_LateRival
	end

Route22_EventScript_LateRivalTriggerMid:: @ 81683F9
	lockall
	setvar VAR_TEMP_1, 1
	setobjectxyperm LOCALID_RIVAL, 25, 5
	goto Route22_EventScript_LateRival
	end

Route22_EventScript_LateRivalTriggerBottom:: @ 816840C
	lockall
	setvar VAR_TEMP_1, 2
	setobjectxyperm LOCALID_RIVAL, 25, 5
	goto Route22_EventScript_LateRival
	end

Route22_EventScript_LateRival:: @ 816841F
	textcolor 0
	playbgm MUS_ENCOUNTER_RIVAL, 0
	addobject LOCALID_RIVAL
	compare VAR_TEMP_1, 0
	call_if_eq Route22_EventScript_LateRivalApproach
	compare VAR_TEMP_1, 1
	call_if_eq Route22_EventScript_LateRivalApproach
	compare VAR_TEMP_1, 2
	call_if_eq Route22_EventScript_LateRivalApproachBottom
	msgbox Route22_Text_LateRivalIntro
	setvar VAR_LAST_TALKED, LOCALID_RIVAL
	compare VAR_STARTER_MON, 2
	call_if_eq Route22_EventScript_LateRivalSquirtle
	compare VAR_STARTER_MON, 1
	call_if_eq Route22_EventScript_LateRivalBulbasaur
	compare VAR_STARTER_MON, 0
	call_if_eq Route22_EventScript_LateRivalCharmander
	compare VAR_STARTER_MON, 5
	call_if_eq Route22_EventScript_LateRivalSquirtle
	compare VAR_STARTER_MON, 4
	call_if_eq Route22_EventScript_LateRivalBulbasaur
	compare VAR_STARTER_MON, 3
	call_if_eq Route22_EventScript_LateRivalCharmander
	compare VAR_STARTER_MON, 8
	call_if_eq Route22_EventScript_LateRivalSquirtle
	compare VAR_STARTER_MON, 7
	call_if_eq Route22_EventScript_LateRivalBulbasaur
	compare VAR_STARTER_MON, 6
	call_if_eq Route22_EventScript_LateRivalCharmander
	compare VAR_STARTER_MON, 11
	call_if_eq Route22_EventScript_LateRivalSquirtle
	compare VAR_STARTER_MON, 10
	call_if_eq Route22_EventScript_LateRivalBulbasaur
	compare VAR_STARTER_MON, 9
	call_if_eq Route22_EventScript_LateRivalCharmander
	msgbox Route22_Text_LateRivalPostBattle
	closemessage
	delay 10
	playbgm MUS_RIVAL_EXIT, 0
	applymovement LOCALID_RIVAL, Route22_Movement_LateRivalExit
	waitmovement 0
	fadedefaultbgm
	removeobject LOCALID_RIVAL
	setvar VAR_MAP_SCENE_ROUTE22, 4
	releaseall
	end

Route22_EventScript_LateRivalApproach:: @ 816849C
	applymovement LOCALID_RIVAL, Route22_Movement_RivalApproach
	waitmovement 0
	return

Route22_EventScript_LateRivalApproachBottom:: @ 81684A7
	applymovement LOCALID_RIVAL, Route22_Movement_RivalApproachBottom
	applymovement OBJ_EVENT_ID_PLAYER, Route22_Movement_PlayerFaceRival
	waitmovement 0
	return

Route22_EventScript_LateRivalSquirtle::
	compare VAR_OBJ_GFX_ID_RIVAL, 7
	call_if_eq Route22_EventScript_LateRivalBlueSquirtle
	compare VAR_OBJ_GFX_ID_RIVAL, 0
	call_if_eq Route22_EventScript_LateRivalRedSquirtle
	return

Route22_EventScript_LateRivalBulbasaur::
	compare VAR_OBJ_GFX_ID_RIVAL, 7
	call_if_eq Route22_EventScript_LateRivalBlueBulbasaur
	compare VAR_OBJ_GFX_ID_RIVAL, 0
	call_if_eq Route22_EventScript_LateRivalRedBulbasaur
	return

Route22_EventScript_LateRivalCharmander::
	compare VAR_OBJ_GFX_ID_RIVAL, 7
	call_if_eq Route22_EventScript_LateRivalBlueCharmander
	compare VAR_OBJ_GFX_ID_RIVAL, 0
	call_if_eq Route22_EventScript_LateRivalRedCharmander
	return

Route22_EventScript_LateRivalBlueSquirtle::
	trainerbattle_no_intro TRAINER_RIVAL_BLUE_ROUTE22_LATE_SQUIR, Route22_Text_LateRivalDefeat
	return

Route22_EventScript_LateRivalBlueBulbasaur::
	trainerbattle_no_intro TRAINER_RIVAL_BLUE_ROUTE22_LATE_BULBA, Route22_Text_LateRivalDefeat
	return

Route22_EventScript_LateRivalBlueCharmander::
	trainerbattle_no_intro TRAINER_RIVAL_BLUE_ROUTE22_LATE_CHARM, Route22_Text_LateRivalDefeat
	return

Route22_EventScript_LateRivalRedSquirtle::
	trainerbattle_no_intro TRAINER_RIVAL_RED_ROUTE22_LATE_SQUIR, Route22_Text_LateRivalDefeat
	return

Route22_EventScript_LateRivalRedBulbasaur::
	trainerbattle_no_intro TRAINER_RIVAL_RED_ROUTE22_LATE_BULBA, Route22_Text_LateRivalDefeat
	return

Route22_EventScript_LateRivalRedCharmander::
	trainerbattle_no_intro TRAINER_RIVAL_RED_ROUTE22_LATE_CHARM, Route22_Text_LateRivalDefeat
	return

Route22_Movement_LateRivalExit:: @ 81684DA
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route22_EventScript_LeagueGateSign:: @ 81684E2
	msgbox Route22_Text_LeagueGateSign, MSGBOX_SIGN
	end
