const struct MonCoords gTrainerBackPicCoords[] = {
    {.size = 8, .y_offset = 5},
    {.size = 8, .y_offset = 5},
    {.size = 8, .y_offset = 4},
    {.size = 8, .y_offset = 4},
    {.size = 8, .y_offset = 4},
    {.size = 8, .y_offset = 4}
};

const struct CompressedSpriteSheet gTrainerBackPicTable[] = {
    { (const u32 *)gTrainerBackPic_Red, 0x2800, 0 },
    { (const u32 *)gTrainerBackPic_Blue, 0x2800, 1 },
    { (const u32 *)gTrainerBackPic_Green, 0x2800, 2 },
    { (const u32 *)gTrainerBackPic_RSBrendan, 0x2000, 3 },
    { (const u32 *)gTrainerBackPic_RSMay, 0x2000, 4 },
    { (const u32 *)gTrainerBackPic_Pokedude, 0x2000, 5 },
    { (const u32 *)gTrainerBackPic_OldMan, 0x2000, 6 }
};

const struct CompressedSpritePalette gTrainerBackPicPaletteTable[] = {
    { gTrainerPalette_RedBackPic, 0 },
    { gTrainerPalette_BlueBackPic, 1 },
    { gTrainerPalette_GreenBackPic, 2 },
    { gTrainerPalette_RSBrendan2, 3 },
    { gTrainerPalette_RSMay2, 4 },
    { gTrainerPalette_PokedudeBackPic, 5 },
    { gTrainerPalette_OldManBackPic, 6 }
};
