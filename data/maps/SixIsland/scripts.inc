SixIsland_MapScripts:: @ 8167ED8
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
	.byte 0

SixIsland_OnTransition:: @ 8167EDE
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND
    compare VAR_SEASON, 1
    call_if_eq SixIsland_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SixIsland_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SixIsland_EventScript_SetLayoutWinter
	end

SixIsland_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SIX_ISLAND_SUMMER
    return

SixIsland_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SIX_ISLAND_AUTUMN
    return

SixIsland_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SIX_ISLAND_WINTER
    return

SixIsland_EventScript_Hiker:: @ 8167EE2
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
	end

SixIsland_EventScript_Boy:: @ 8167EEB
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
	end

SixIsland_EventScript_IslandSign:: @ 8167EF4
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
	end
