EventScript_PkmnCenterNurse:: @ 81A6578
	goto_if_questlog EventScript_ReleaseEnd
	@ message Text_WelcomeWantToHealPkmn
	@ waitmessage
	@ multichoice 19, 8, MULTICHOICE_YES_NO, FALSE | (TRUE << 1)
	@ switch VAR_RESULT
	@ case 0, EventScript_PkmnCenterNurse_HealPkmn
	@ case 1 EventScript_PkmnCenterNurse_Goodbye
    goto EventScript_PkmnCenterNurse_HealPkmn
	case SCR_MENU_CANCEL, EventScript_PkmnCenterNurse_Goodbye
	end

EventScript_PkmnCenterNurse_HealPkmn:: @ 81A65B8
	incrementgamestat GAME_STAT_USED_POKECENTER
	message Text_TakeYourPkmnForFewSeconds
	waitmessage
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	special SetUsedPkmnCenterQuestLogEvent
	goto EventScript_PkmnCenterNurse_ReturnPkmn
	end

EventScript_PkmnCenterNurse_TakeAndHealPkmn:: @ 81A65CE
	applymovement VAR_LAST_TALKED, Movement_WalkInPlaceFastestLeft
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement VAR_LAST_TALKED, Movement_WalkInPlaceFastestDown
	waitmovement 0
	special HealPlayerParty
	return

EventScript_PkmnCenterNurse_ReturnPkmn:: @ 81A661D
	@ message Text_RestoredPkmnToFullHealth
	@ waitmessage
	applymovement VAR_LAST_TALKED, Movement_Bow
	waitmovement 0
	msgbox Text_WeHopeToSeeYouAgain
	waitmessage
	goto EventScript_PkmnCenterNurse_PlayerTurn
	return

EventScript_PkmnCenterNurse_PlayerWaitingInUionRoom:: @ 81A6636
	goto_if_set FLAG_SYS_INFORMED_OF_LOCAL_WIRELESS_PLAYER, EventScript_PkmnCenterNurse_ReturnPkmn
	msgbox Text_RestoredPkmnToFullHealth
	setflag FLAG_SYS_INFORMED_OF_LOCAL_WIRELESS_PLAYER
	message Text_PlayerIsPlayingRightNowGoForIt
	waitmessage
	applymovement VAR_LAST_TALKED, Movement_Bow
	waitmovement 0
	msgbox Text_WeHopeToSeeYouAgain
	return

EventScript_PkmnCenterNurse_Goodbye:: @ 81A6663
	msgbox Text_WeHopeToSeeYouAgain
	return

EventScript_PkmnCenterNurse_PlayerTurn::
    applymovement OBJ_EVENT_ID_PLAYER, Movement_FaceDown
    waitmovement 0
    release
    end

Movement_Bow:: @ 81A666C
	nurse_joy_bow
	delay_4
	step_end
