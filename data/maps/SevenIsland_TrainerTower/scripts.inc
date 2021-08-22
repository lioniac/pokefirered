SevenIsland_TrainerTower_MapScripts:: @ 8168BD5
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TrainerTower_OnTransition
	.byte 0

SevenIsland_TrainerTower_OnTransition:: @ 8168BDB
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
    compare VAR_SEASON, 1
    call_if_eq SevenIsland_TrainerTower_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SevenIsland_TrainerTower_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SevenIsland_TrainerTower_EventScript_SetLayoutWinter
	end

SevenIsland_TrainerTower_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_TRAINER_TOWER_SUMMER
    return

SevenIsland_TrainerTower_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_TRAINER_TOWER_AUTUMN
    return

SevenIsland_TrainerTower_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_TRAINER_TOWER_WINTER
    return

SevenIsland_TrainerTower_EventScript_TrainerTowerSign:: @ 8168BE1
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerSign, MSGBOX_SIGN
	end

SevenIsland_TrainerTower_EventScript_TrainerTowerAheadSign:: @ 8168BEA
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerAhead, MSGBOX_SIGN
	end
