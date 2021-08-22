Route10_MapScripts:: @ 8167FD9
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_OnTransition
	.byte 0

Route10_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq Route10_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq Route10_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq Route10_EventScript_SetLayoutWinter
	end

Route10_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_ROUTE10_SUMMER
    return

Route10_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_ROUTE10_AUTUMN
    return

Route10_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_ROUTE10_WINTER
    return

Route10_EventScript_Unused:: @ 8167FDA
	end

Route10_EventScript_NorthRockTunnelSign:: @ 8167FDB
	msgbox Route10_Text_RockTunnelDetourToLavender, MSGBOX_SIGN
	end

Route10_EventScript_SouthRockTunnelSign:: @ 8167FE4
	msgbox Route10_Text_RockTunnel, MSGBOX_SIGN
	end

Route10_EventScript_PowerPlantSign:: @ 8167FED
	msgbox Route10_Text_PowerPlant, MSGBOX_SIGN
	end
