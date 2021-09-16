EventScript_Debug_GetFlags_Func:
    setflag FLAG_SYS_POKEMON_GET
    setflag FLAG_SYS_POKEDEX_GET
    clearflag FLAG_HIDE_OAK_IN_HIS_LAB
    setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
    setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
    setflag FLAG_OPENED_START_MENU
    setflag FLAG_VISITED_OAKS_LAB
    setvar VAR_STARTER_MON, 2                              @ Chose Charmander
    setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
    setflag FLAG_HIDE_RIVAL_IN_LAB
    setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
    setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
    setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6 @ Parcel delivery done
    setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2       @ Obtained the Town Map
    setvar RECEIVED_TOWN_MAP, TRUE
    setflag FLAG_HIDE_TOWN_MAP
    setvar VAR_MAP_SCENE_ROUTE22, 1                        @ Ready to fight the Rival in Route 22
    setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2             @ Parcel delivery done
    setflag FLAG_HIDE_POKEDEX
    setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2          @ Old Man's catching tutorial done
    setvar VAR_MAP_SCENE_PEWTER_CITY, 2                    @ Received the Running Shoes in Pewter City
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    setflag FLAG_BADGE03_GET
    setflag FLAG_BADGE04_GET
    setflag FLAG_BADGE05_GET
    setflag FLAG_BADGE06_GET
    setflag FLAG_BADGE07_GET
    setflag FLAG_BADGE08_GET
    setflag FLAG_WORLD_MAP_PALLET_TOWN
    setflag FLAG_WORLD_MAP_VIRIDIAN_CITY
    setflag FLAG_WORLD_MAP_PEWTER_CITY
    setflag FLAG_WORLD_MAP_CERULEAN_CITY
    setflag FLAG_WORLD_MAP_LAVENDER_TOWN
    setflag FLAG_WORLD_MAP_VERMILION_CITY
    setflag FLAG_WORLD_MAP_CELADON_CITY
    setflag FLAG_WORLD_MAP_FUCHSIA_CITY
    setflag FLAG_WORLD_MAP_CINNABAR_ISLAND
    setflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
    setflag FLAG_WORLD_MAP_SAFFRON_CITY
    setflag FLAG_WORLD_MAP_ONE_ISLAND
    setflag FLAG_WORLD_MAP_TWO_ISLAND
    setflag FLAG_WORLD_MAP_THREE_ISLAND
    setflag FLAG_WORLD_MAP_FOUR_ISLAND
    setflag FLAG_WORLD_MAP_FIVE_ISLAND
    setflag FLAG_WORLD_MAP_SEVEN_ISLAND
    setflag FLAG_WORLD_MAP_SIX_ISLAND
    setflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
    setflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
    setflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
    setflag FLAG_WORLD_MAP_MT_MOON_1F
    setflag FLAG_WORLD_MAP_SSANNE_EXTERIOR
    setflag FLAG_WORLD_MAP_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL
    setflag FLAG_WORLD_MAP_UNDERGROUND_PATH_EAST_WEST_TUNNEL
    setflag FLAG_WORLD_MAP_DIGLETTS_CAVE_B1F
    setflag FLAG_WORLD_MAP_VICTORY_ROAD_1F
    setflag FLAG_WORLD_MAP_ROCKET_HIDEOUT_B1F
    setflag FLAG_WORLD_MAP_SILPH_CO_1F
    setflag FLAG_WORLD_MAP_POKEMON_MANSION_1F
    setflag FLAG_WORLD_MAP_SAFARI_ZONE_CENTER
    setflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
    setflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
    setflag FLAG_WORLD_MAP_SEAFOAM_ISLANDS_1F
    setflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
    setflag FLAG_WORLD_MAP_CERULEAN_CAVE_1F
    setflag FLAG_WORLD_MAP_POWER_PLANT
    setflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
    setflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
    setflag FLAG_WORLD_MAP_FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE
    setflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
    setflag FLAG_WORLD_MAP_TRAINER_TOWER_LOBBY
    setflag FLAG_WORLD_MAP_SIX_ISLAND_DOTTED_HOLE_1F
    setflag FLAG_WORLD_MAP_FIVE_ISLAND_LOST_CAVE_ENTRANCE
    setflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
    setflag FLAG_WORLD_MAP_SIX_ISLAND_ALTERING_CAVE
    setflag FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER
    setflag FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
    setflag FLAG_WORLD_MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY
    return

EventScript_Debug_GetFlags::
    lock
    call EventScript_Debug_GetFlags_Func
    release
    end

EventScript_Debug_GetItems_Func:
    additem ITEM_POKE_BALL, 99
    additem ITEM_GREAT_BALL, 99
    additem ITEM_ULTRA_BALL, 99
    additem ITEM_MASTER_BALL, 99
    additem ITEM_FIRE_STONE, 99
    additem ITEM_WATER_STONE, 99
    additem ITEM_THUNDER_STONE, 99
    additem ITEM_LEAF_STONE, 99
    additem ITEM_SUN_STONE, 99
    additem ITEM_MOON_STONE, 99
    additem ITEM_RARE_CANDY, 99
    additem ITEM_HM01, 1
    additem ITEM_HM02, 1
    additem ITEM_HM03, 1
    additem ITEM_HM04, 1
    additem ITEM_HM05, 1
    additem ITEM_HM06, 1
    additem ITEM_HM07, 1
    additem ITEM_HM08, 1
    additem ITEM_TM01, 1
    additem ITEM_TM02, 1
    additem ITEM_TM03, 1
    additem ITEM_TM04, 1
    additem ITEM_TM05, 1
    additem ITEM_TM06, 1
    additem ITEM_TM07, 1
    additem ITEM_TM08, 1
    additem ITEM_TM09, 1
    additem ITEM_TM10, 1
    additem ITEM_TM11, 1
    additem ITEM_TM12, 1
    additem ITEM_TM13, 1
    additem ITEM_TM14, 1
    additem ITEM_TM15, 1
    additem ITEM_TM16, 1
    additem ITEM_TM17, 1
    additem ITEM_TM18, 1
    additem ITEM_TM19, 1
    additem ITEM_TM20, 1
    additem ITEM_TM21, 1
    additem ITEM_TM22, 1
    additem ITEM_TM23, 1
    additem ITEM_TM24, 1
    additem ITEM_TM25, 1
    additem ITEM_TM26, 1
    additem ITEM_TM27, 1
    additem ITEM_TM28, 1
    additem ITEM_TM29, 1
    additem ITEM_TM30, 1
    additem ITEM_TM31, 1
    additem ITEM_TM32, 1
    additem ITEM_TM33, 1
    additem ITEM_TM34, 1
    additem ITEM_TM35, 1
    additem ITEM_TM36, 1
    additem ITEM_TM37, 1
    additem ITEM_TM38, 1
    additem ITEM_TM39, 1
    additem ITEM_TM40, 1
    additem ITEM_TM41, 1
    additem ITEM_TM42, 1
    additem ITEM_TM43, 1
    additem ITEM_TM44, 1
    additem ITEM_TM45, 1
    additem ITEM_TM46, 1
    additem ITEM_TM47, 1
    additem ITEM_TM48, 1
    additem ITEM_TM49, 1
    additem ITEM_TM50, 1
    additem ITEM_TM54, 1
    additem ITEM_TM61, 1
    additem ITEM_TM62, 1
    additem ITEM_TM64, 1
    additem ITEM_TM67, 1
    additem ITEM_TM73, 1
    additem ITEM_TM75, 1
    additem ITEM_TM77, 1
    additem ITEM_TM80, 1
    additem ITEM_TM82, 1
    additem ITEM_TM85, 1
    additem ITEM_TM87, 1
    additem ITEM_TM90, 1
    additem ITEM_TOWN_MAP, 1
    additem ITEM_TEACHY_TV, 1
    additem ITEM_EXP_SHARE, 1
    additem ITEM_OLD_ROD, 1
    additem ITEM_GOOD_ROD, 1
    additem ITEM_SUPER_ROD, 1
    return

EventScript_Debug_GetItems::
    lock
    call EventScript_Debug_GetItems_Func
    release
    end

EventScript_Debug_GetMons_Func:
    givecustommon SPECIES_CHARIZARD, 50, 0, NATURE_SERIOUS, 0, 31
    givecustommon SPECIES_BLASTOISE, 50, 0, NATURE_SERIOUS, 0, 31
    givecustommon SPECIES_VENUSAUR,  50, 0, NATURE_SERIOUS, 0, 31
    givecustommon SPECIES_PIKACHU,   50, 0, NATURE_SERIOUS, 0, 31
    givecustommon SPECIES_SNORLAX,   50, 0, NATURE_SERIOUS, 0, 31
    givecustommon SPECIES_LAPRAS,    50, 0, NATURE_SERIOUS, 0, 31
    setmonmove 0, 0, 53
    setmonmove 0, 1, 337
    setmonmove 0, 2, 19
    setmonmove 0, 3, 315
    setmonmove 1, 0, 57
    setmonmove 1, 1, 58
    setmonmove 1, 2, 127
    setmonmove 1, 3, 44
    setmonmove 2, 0, 76
    setmonmove 2, 1, 79
    setmonmove 2, 2, 202
    setmonmove 2, 3, 15
    setmonmove 3, 0, 85
    setmonmove 3, 1, 86
    setmonmove 3, 2, 91
    setmonmove 3, 3, 148
    setmonmove 4, 0, 70
    setmonmove 4, 1, 249
    setmonmove 4, 2, 8
    setmonmove 4, 3, 9
    setmonmove 5, 0, 58
    setmonmove 5, 1, 57
    setmonmove 5, 2, 94
    setmonmove 5, 3, 87
    return

EventScript_Debug_GetMons::
    lock
    call EventScript_Debug_GetMons_Func
    release
    end

EventScript_Debug_GetAll::
    lock
    call EventScript_Debug_GetFlags_Func
    call EventScript_Debug_GetItems_Func
    call EventScript_Debug_GetMons_Func
    release
    end

EventScript_Debug_PC::
    lockall
    goto EventScript_PCMainMenu
    releaseall
    end
