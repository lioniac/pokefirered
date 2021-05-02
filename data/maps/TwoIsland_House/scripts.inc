TwoIsland_House_MapScripts:: @ 816D894
	.byte 0

TwoIsland_House_EventScript_MoveDeleter:: @ 816D895
	lock
	faceplayer
	msgbox TwoIsland_House_Text_WouldYouLikeToForgetMove, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TwoIsland_House_EventScript_ChooseMonForMoveDeleter
	goto TwoIsland_House_EventScript_CancelForgetMove
	end

TwoIsland_House_EventScript_ChooseMonForMoveDeleter:: @ 816D8B0
	msgbox TwoIsland_House_Text_WhichMonShouldForgetMove
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge TwoIsland_House_EventScript_CancelForgetMove
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq TwoIsland_House_EventScript_CantForgetMoveEgg
	special GetNumMovesSelectedMonHas
	compare VAR_RESULT, 1
	goto_if_eq TwoIsland_House_EventScript_CantForgetOnlyMove
	msgbox TwoIsland_House_Text_WhichMoveShouldBeForgotten
	fadescreen FADE_TO_BLACK
	special SelectMoveDeleterMove
	fadescreen FADE_FROM_BLACK
	compare VAR_0x8005, MAX_MON_MOVES
	goto_if_eq TwoIsland_House_EventScript_ChooseMonForMoveDeleter
	special BufferMoveDeleterNicknameAndMove
	msgbox TwoIsland_House_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq TwoIsland_House_EventScript_ForgetMove
	goto TwoIsland_House_EventScript_CancelForgetMove
	end

TwoIsland_House_EventScript_ForgetMove:: @ 816D919
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox TwoIsland_House_Text_MonHasForgottenMoveCompletely
	release
	end

TwoIsland_House_EventScript_CantForgetOnlyMove:: @ 816D92A
	special BufferMoveDeleterNicknameAndMove
	msgbox TwoIsland_House_Text_MonOnlyKnowsOneMove
	release
	end

TwoIsland_House_EventScript_CantForgetMoveEgg:: @ 816D937
	msgbox TwoIsland_House_Text_NoEggShouldKnowMoves
	release
	end

TwoIsland_House_EventScript_CancelForgetMove:: @ 816D941
	msgbox TwoIsland_House_Text_ComeAgainToForgetOtherMoves
	release
	end
