SixIsland_WaterPath_MapScripts:: @ 8168B40
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_WaterPath_OnTransition
	.byte 0

SixIsland_WaterPath_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq SixIsland_WaterPath_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SixIsland_WaterPath_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SixIsland_WaterPath_EventScript_SetLayoutWinter
	end

SixIsland_WaterPath_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SIX_ISLAND_WATER_PATH_SUMMER
    return

SixIsland_WaterPath_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SIX_ISLAND_WATER_PATH_AUTUMN
    return

SixIsland_WaterPath_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SIX_ISLAND_WATER_PATH_WINTER
    return

SixIsland_WaterPath_EventScript_HornWantedSign:: @ 8168B41
	msgbox SixIsland_WaterPath_Text_WantedUltimateHorn, MSGBOX_SIGN
	end

SixIsland_WaterPath_EventScript_RouteSign:: @ 8168B4A
	msgbox SixIsland_WaterPath_Text_RouteSign, MSGBOX_SIGN
	end
