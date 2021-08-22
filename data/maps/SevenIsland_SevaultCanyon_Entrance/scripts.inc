SevenIsland_SevaultCanyon_Entrance_MapScripts:: @ 8168BF3
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_SevaultCanyon_Entrance_OnTransition
	.byte 0

SevenIsland_SevaultCanyon_Entrance_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq SevenIsland_SevaultCanyon_Entrance_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SevenIsland_SevaultCanyon_Entrance_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SevenIsland_SevaultCanyon_Entrance_EventScript_SetLayoutWinter
	end

SevenIsland_SevaultCanyon_Entrance_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE_SUMMER
    return

SevenIsland_SevaultCanyon_Entrance_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE_AUTUMN
    return

SevenIsland_SevaultCanyon_Entrance_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE_WINTER
    return

SevenIsland_SevaultCanyon_Entrance_EventScript_RouteSign:: @ 8168BF4
	msgbox SevenIsland_SevaultCanyon_Entrance_Text_RouteSign, MSGBOX_SIGN
	end
