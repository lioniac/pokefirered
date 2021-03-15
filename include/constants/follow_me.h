#ifndef GUARD_CONSTANTS_FOLLOW_ME_H
#define GUARD_CONSTANTS_FOLLOW_ME_H

// script command cases
#define FLAG_SET_FOLLOWER       0
#define FLAG_REMOVE_FOLLOWER    1
#define FLAG_FACE_FOLLOWER      2
#define FLAG_CHECK_FOLLOWER     3

// follower flags
#define FOLLOWER_FLAG_HAS_RUNNING_FRAMES    0x1
#define FOLLOWER_FLAG_CAN_BIKE              0x2
#define FOLLOWER_FLAG_CAN_LEAVE_ROUTE       0x4     // teleport, dig, fly, etc
#define FOLLOWER_FLAG_CAN_SURF              0x8
#define FOLLOWER_FLAG_CAN_WATERFALL         0x10
#define FOLLOWER_FLAG_CAN_DIVE              0x20    // to do: implement dive
#define FOLLOWER_FLAG_CAN_ROCK_CLIMB        0x40    // to do: need rock climb field move implemented
#define FOLLOWER_FLAG_CLEAR_ON_WHITE_OUT    0x80
#define FOLLOWER_FLAG_CUSTOM_FOLLOW_SCRIPT  0x100   // follower has custom script while following (use loadword prior to setfollower)

#define FOLLOWER_FLAG_ALL_WATER             FOLLOWER_FLAG_CAN_SURF | FOLLOWER_FLAG_CAN_WATERFALL | FOLLOWER_FLAG_CAN_DIVE
#define FOLLOWER_FLAG_ALL_LAND              FOLLOWER_FLAG_HAS_RUNNING_FRAMES | FOLLOWER_FLAG_CAN_BIKE | FOLLOWER_FLAG_CAN_LEAVE_ROUTE
#define FOLLOWER_FLAG_ALL                   FOLLOWER_FLAG_ALL_WATER | FOLLOWER_FLAG_ALL_LAND | FOLLOWER_FLAG_CLEAR_ON_WHITE_OUT


#endif // GUARD_CONSTANTS_FOLLOW_ME_H