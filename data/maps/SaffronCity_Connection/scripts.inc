SaffronCity_Connection_MapScripts:: @ 8167483
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_Connection_OnTransition
	.byte 0

SaffronCity_Connection_OnTransition:: @ 8165217
    compare VAR_SEASON, 1
    call_if_eq SaffronCity_Connection_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq SaffronCity_Connection_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq SaffronCity_Connection_EventScript_SetLayoutWinter
	end

SaffronCity_Connection_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_SAFFRON_CITY_CONNECTION_SUMMER
    return

SaffronCity_Connection_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_SAFFRON_CITY_CONNECTION_AUTUMN
    return

SaffronCity_Connection_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_SAFFRON_CITY_CONNECTION_WINTER
    return
