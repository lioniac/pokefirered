SixIsland_GreenPath_MapScripts:: @ 8168B2D
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_GreenPath_OnTransition
	.byte 0

SixIsland_GreenPath_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq SixIsland_GreenPath_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SixIsland_GreenPath_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SixIsland_GreenPath_EventScript_SetLayoutWinter
	end

SixIsland_GreenPath_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SIX_ISLAND_GREEN_PATH_SUMMER
    return

SixIsland_GreenPath_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SIX_ISLAND_GREEN_PATH_AUTUMN
    return

SixIsland_GreenPath_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SIX_ISLAND_GREEN_PATH_WINTER
    return
	
SixIsland_GreenPath_EventScript_RightRouteSign:: @ 8168B2E
	msgbox SixIsland_GreenPath_Text_LeftRouteSign, MSGBOX_SIGN
	end

SixIsland_GreenPath_EventScript_LeftRouteSign:: @ 8168B37
	msgbox SixIsland_GreenPath_Text_RightRouteSign, MSGBOX_SIGN
	end
