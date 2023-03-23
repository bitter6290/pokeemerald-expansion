const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = {.NoItemDefaultMoves = NULL},
    },
    
    [TRAINER_EVO_TEST] =
    {
    	.trainerClass = TRAINER_CLASS_RIVAL,
    	.encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    	.trainerPic = TRAINER_PIC_LEAF,
    	.trainerName = _("TEST"),
    	.items = {},
    	.doubleBattle = FALSE,
    	.aiFlags = 0,
    	.party = ITEM_CUSTOM_MOVES(sParty_EvoTest),
    	.scalingCoeff = 0,
    	.doEvoMon = TRUE,
    },
};
