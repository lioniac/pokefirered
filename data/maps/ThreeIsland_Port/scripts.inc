ThreeIsland_Port_MapScripts:: @ 8168789
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_Port_OnTransition
	.byte 0

ThreeIsland_Port_OnTransition:: @ 816878F
    compare VAR_SEASON, 1
    call_if_eq ThreeIsland_Port_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq ThreeIsland_Port_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq ThreeIsland_Port_EventScript_SetLayoutWinter
	clearflag FLAG_SYS_PC_STORAGE_DISABLED
	setflag FLAG_SEVII_DETOUR_FINISHED
	end

ThreeIsland_Port_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_THREE_ISLAND_PORT_SUMMER
    return

ThreeIsland_Port_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_THREE_ISLAND_PORT_AUTUMN
    return

ThreeIsland_Port_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_THREE_ISLAND_PORT_WINTER
    return

ThreeIsland_Port_EventScript_Woman:: @ 8168796
	lock
	faceplayer
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
	goto_if_ge ThreeIsland_Port_EventScript_WomanLostelleFound
	compare VAR_MAP_SCENE_THREE_ISLAND, 4
	goto_if_ge ThreeIsland_Port_EventScript_WomanBikersGone
	msgbox ThreeIsland_Port_Text_IllCallThePolice
	release
	end

ThreeIsland_Port_EventScript_WomanLostelleFound:: @ 81687B8
	msgbox ThreeIsland_Port_Text_EverythingTurnedOutForBest
	release
	end

ThreeIsland_Port_EventScript_WomanBikersGone:: @ 81687C2
	msgbox ThreeIsland_Port_Text_ThankGoodnessBikersGone
	release
	end

ThreeIsland_Port_EventScript_Biker1:: @ 81687CC
	msgbox ThreeIsland_Port_Text_WereKantoRiderFederation, MSGBOX_NPC
	end

ThreeIsland_Port_EventScript_Biker2:: @ 81687D5
	lock
	msgbox ThreeIsland_Port_Text_ForkOverMoney
	release
	end
