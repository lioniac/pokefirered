NavelRock_Exterior_MapScripts:: @ 81646AE
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Exterior_OnTransition
	.byte 0

NavelRock_Exterior_OnTransition:: @ 81646B4
	setworldmapflag FLAG_WORLD_MAP_NAVEL_ROCK_EXTERIOR
    compare VAR_SEASON, 1
    call_if_eq NavelRock_Exterior_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq NavelRock_Exterior_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq NavelRock_Exterior_EventScript_SetLayoutWinter
	end

NavelRock_Exterior_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_NAVEL_ROCK_EXTERIOR_SUMMER
    return

NavelRock_Exterior_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_NAVEL_ROCK_EXTERIOR_AUTUMN
    return

NavelRock_Exterior_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_NAVEL_ROCK_EXTERIOR_WINTER
    return
