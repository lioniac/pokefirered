ThreeIsland_BondBridge_MapScripts:: @ 8168776
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_BondBridge_OnTransition
	.byte 0

ThreeIsland_BondBridge_OnTransition::
    compare VAR_SEASON, 1
    call_if_eq ThreeIsland_BondBridge_EventScript_SetLayoutSummer
    compare VAR_SEASON, 2
    call_if_eq ThreeIsland_BondBridge_EventScript_SetLayoutAutumn
    compare VAR_SEASON, 3
    call_if_eq ThreeIsland_BondBridge_EventScript_SetLayoutWinter
	end

ThreeIsland_BondBridge_EventScript_SetLayoutSummer::
    setmaplayoutindex LAYOUT_THREE_ISLAND_BOND_BRIDGE_SUMMER
    return

ThreeIsland_BondBridge_EventScript_SetLayoutAutumn::
    setmaplayoutindex LAYOUT_THREE_ISLAND_BOND_BRIDGE_AUTUMN
    return

ThreeIsland_BondBridge_EventScript_SetLayoutWinter::
    setmaplayoutindex LAYOUT_THREE_ISLAND_BOND_BRIDGE_WINTER
    return

ThreeIsland_BondBridge_EventScript_BerryForestSign:: @ 8168777
	msgbox ThreeIsland_BondBridge_Text_BerryForestAhead, MSGBOX_SIGN
	end

ThreeIsland_BondBridge_EventScript_BondBridgeSign:: @ 8168780
	msgbox ThreeIsland_BondBridge_Text_BondBridgeSign, MSGBOX_SIGN
	end
