TwoIsland_CapeBrink_MapScripts:: @ 8168775
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_CapeBrink_OnTransition
	.byte 0

TwoIsland_CapeBrink_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq TwoIsland_CapeBrink_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq TwoIsland_CapeBrink_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq TwoIsland_CapeBrink_EventScript_SetLayoutWinter
	end

TwoIsland_CapeBrink_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_TWO_ISLAND_CAPE_BRINK_SUMMER
    return

TwoIsland_CapeBrink_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_TWO_ISLAND_CAPE_BRINK_AUTUMN
    return

TwoIsland_CapeBrink_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_TWO_ISLAND_CAPE_BRINK_WINTER
    return
