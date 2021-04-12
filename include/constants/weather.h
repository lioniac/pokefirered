#ifndef GUARD_CONSTANTS_WEATHER_H
#define GUARD_CONSTANTS_WEATHER_H

#define WEATHER_NONE               0
#define WEATHER_SUNNY_CLOUDS       1   // unused
#define WEATHER_SUNNY              2
#define WEATHER_RAIN               3   // unused
#define WEATHER_SNOW               4   // unused
#define WEATHER_RAIN_THUNDERSTORM  5   // unused
#define WEATHER_FOG_HORIZONTAL     6
#define WEATHER_VOLCANIC_ASH       7   // unused
#define WEATHER_SANDSTORM          8   // unused
#define WEATHER_FOG_DIAGONAL       9   // unused
#define WEATHER_UNDERWATER         10  // unused
#define WEATHER_SHADE              11
#define WEATHER_DROUGHT            12  // unused and broken in overworld
#define WEATHER_DOWNPOUR           13  // unused
#define WEATHER_UNDERWATER_BUBBLES 14  // unused
#define WEATHER_ROUTE119_CYCLE     20  // unused
#define WEATHER_ROUTE123_CYCLE     21  // unused

//Seasons Random Weather
#define WEATHER_RANDOM             15
#define WEATHER_FLAKES WEATHER_SNOW
#define WEATHER_THUNDER WEATHER_RAIN_THUNDERSTORM
#define WEATHER_HARSH_SUN WEATHER_DROUGHT
#define SEASON_SPRING 0
#define SEASON_SUMMER 1
#define SEASON_AUTUMN 2
#define SEASON_WINTER 3

#endif  // GUARD_CONSTANTS_WEATHER_H
