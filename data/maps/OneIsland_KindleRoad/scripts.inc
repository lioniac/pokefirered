OneIsland_KindleRoad_MapScripts:: @ 8168758
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_KindleRoad_OnTransition
	.byte 0

OneIsland_KindleRoad_OnTransition:: @ 816748F
    compare VAR_SEASON, 1
    call_if_eq OneIsland_KindleRoad_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq OneIsland_KindleRoad_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq OneIsland_KindleRoad_EventScript_SetLayoutWinter
	end

OneIsland_KindleRoad_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ONE_ISLAND_KINDLE_ROAD_SUMMER
    return

OneIsland_KindleRoad_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ONE_ISLAND_KINDLE_ROAD_AUTUMN
    return

OneIsland_KindleRoad_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ONE_ISLAND_KINDLE_ROAD_WINTER
    return

OneIsland_KindleRoad_EventScript_RouteSign:: @ 8168759
	msgbox OneIsland_KindleRoad_Text_RouteSign, MSGBOX_SIGN
	end

OneIsland_KindleRoad_EventScript_EmberSpaSign:: @ 8168762
	msgbox OneIsland_KindleRoad_Text_EmberSpaSign, MSGBOX_SIGN
	end
