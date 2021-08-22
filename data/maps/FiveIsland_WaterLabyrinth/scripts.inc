FiveIsland_WaterLabyrinth_MapScripts:: @ 816884D
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_WaterLabyrinth_OnTransition
	.byte 0

FiveIsland_WaterLabyrinth_OnTransition:: @ 8167E94
    compare VAR_SEASON, 1
    call_if_eq FiveIsland_WaterLabyrinth_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq FiveIsland_WaterLabyrinth_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq FiveIsland_WaterLabyrinth_EventScript_SetLayoutWinter
	end

FiveIsland_WaterLabyrinth_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_FIVE_ISLAND_WATER_LABYRINTH_SUMMER
    return

FiveIsland_WaterLabyrinth_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_FIVE_ISLAND_WATER_LABYRINTH_AUTUMN
    return

FiveIsland_WaterLabyrinth_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_FIVE_ISLAND_WATER_LABYRINTH_WINTER
    return

FiveIsland_WaterLabyrinth_EventScript_EggGentleman:: @ 816884E
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	lock
	faceplayer
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_PostEggComment
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
	specialvar VAR_RESULT, GetLeadMonFriendship
	compare VAR_RESULT, 6  @ Max friendship
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
	release
	end

FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment:: @ 8168895
	famechecker FAMECHECKER_DAISY, 2
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
	release
	end

FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship:: @ 81688AC
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
	end

FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg:: @ 81688BA
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
	setflag FLAG_GOT_TOGEPI_EGG
	giveegg SPECIES_TOGEPI
	textcolor 3
	playfanfare MUS_LEVEL_UP
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
	waitfanfare
	waitmessage
	call EventScript_RestorePrevTextColor
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
	end

@ If the player has a Togepi/Togetic from this game (assumed to be the one the man gave you) then comment on it
@ Otherwise make normal comment
FiveIsland_WaterLabyrinth_EventScript_PostEggComment:: @ 81688E3
	getspeciesname 1, SPECIES_TOGEPI
	setvar VAR_0x8004, SPECIES_TOGEPI
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
	compare VAR_RESULT, TRUE
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
	getspeciesname 1, SPECIES_TOGETIC
	setvar VAR_0x8004, SPECIES_TOGETIC
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
	compare VAR_RESULT, TRUE
	goto_if_eq FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
	release
	end

FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg:: @ 816891F
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
	release
	end

FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg:: @ 816892C
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
	end
