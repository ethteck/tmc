
typedef enum {
    NONE,
    BGM_CASTLE_TOURNAMENT,
    BGM_VAATI_MOTIF,
    BGM_TITLE_SCREEN,
    BGM_CASTLE_MOTIF,
    BGM_ELEMENT_GET,
    BGM_FAIRY_FOUNTAIN,
    BGM_FILE_SELECT,
    BGM_INTRO_CUTSCENE,
    BGM_CREDITS,
    BGM_GAMEOVER,
    BGM_SAVING_ZELDA,
    BGM_LTTP_TITLE,
    BGM_VAATI_THEME,
    BGM_EZLO_THEME,
    BGM_STORY,
    BGM_FESTIVAL_APPROACH,
    BGM_BEAT_VAATI,

    BGM_BEANSTALK = 0x13,
    BGM_HOUSE,
    BGM_CUCCO_MINIGAME,
    BGM_SYRUP_THEME,
    BGM_DUNGEON,
    BGM_ELEMENT_THEME,
    BGM_HYRULE_FIELD,
    BGM_HYRULE_CASTLE,
    BGM_HYRULE_CASTLE_NOINTRO,
    BGM_MINISH_VILLAGE,
    BGM_MINISH_WOODS,
    BGM_CRENEL_STORM,
    BGM_CASTOR_WILDS,
    BGM_HYRULE_TOWN,
    BGM_ROYAL_VALLEY,
    BGM_CLOUD_TOPS,
    BGM_DARK_HYRULE_CASTLE,
    BGM_SECRET_CASTLE_ENTRANCE,
    BGM_DEEPWOOD_SHRINE,
    BGM_CAVE_OF_FLAMES,
    BGM_FORTRESS_OF_WINDS,
    BGM_TEMPLE_OF_DROPLETS,
    BGM_PALACE_OF_WINDS,
    BGM_EZLO_STORY,
    BGM_ROYAL_CRYPT,
    BGM_ELEMENTAL_SANCTUARY,
    BGM_FIGHT_THEME,
    BGM_BOSS_THEME,
    BGM_VAATI_REBORN,
    BGM_VAATI_TRANSFIGURED,
    BGM_CASTLE_COLLAPSE,
    BGM_VAATI_WRATH,
    BGM_FIGHT_THEME2,
    BGM_DIGGING_CAVE,
    BGM_SWIFTBLADE_DOJO,
    BGM_MINISH_CAP,
    BGM_MT_CRENEL,
    BGM_PICORI_FESTIVAL,
    BGM_LOST_WOODS,
    BGM_FAIRY_FOUNTAIN2,
    BGM_WIND_RUINS,

    BGM_LEARN_SCROLL = 0x5E,
    BGM_EZLO_GET,

    SFX_BEEP = 0x64,
    SFX_TEXTBOX_OPEN,
    SFX_TEXTBOX_CLOSE,
    SFX_TEXTBOX_NEXT,
    SFX_TEXTBOX_SWAP,
    SFX_TEXTBOX_CHOICE,
    SFX_TEXTBOX_SELECT,
    SFX_6B,
    SFX_MENU_CANCEL,
    SFX_MENU_ERROR,
    SFX_RUPEE_BOUNCE,
    SFX_RUPEE_GET,
    SFX_HEART_BOUNCE,
    SFX_HEART_GET,
    SFX_SECRET,
    SFX_SECRET_BIG,
    SFX_METAL_CLINK,
    SFX_PLY_VO1,
    SFX_PLY_VO2,
    SFX_PLY_VO3,
    SFX_PLY_VO4,
    SFX_PLY_VO5,
    SFX_PLY_VO6,
    SFX_PLY_VO7,
    SFX_PLY_JUMP,
    SFX_PLY_LAND,
    SFX_7E,
    SFX_PLY_LIFT,
    SFX_80,
    SFX_81,
    SFX_82,
    SFX_WATER_WALK,
    SFX_WATER_SPLASH,
    SFX_FALL_HOLE,
    SFX_86,
    SFX_PLY_DIE,
    SFX_88,
    SFX_BARREL_RELEASE,
    SFX_BARREL_ENTER,
    SFX_BARREL_ROLL,
    SFX_BARREL_ROLL_STOP,
    SFX_VO_EZLO1,
    SFX_VO_EZLO2,
    SFX_VO_EZLO3,
    SFX_VO_EZLO4,
    SFX_VO_EZLO5,
    SFX_VO_EZLO6,
    SFX_VO_EZLO7,
    SFX_VO_ZELDA1,
    SFX_VO_ZELDA2,
    SFX_VO_ZELDA3,
    SFX_VO_ZELDA4,
    SFX_VO_ZELDA5,
    SFX_VO_ZELDA6,
    SFX_VO_ZELDA7,
    SFX_9B,
    SFX_9C,
    SFX_9D,
    SFX_9E,
    SFX_9F,
    SFX_A0,
    SFX_VO_TINGLE1,
    SFX_VO_TINGLE2,
    SFX_VO_KING1,
    SFX_VO_KING2,
    SFX_VO_KING3,
    SFX_VO_KING4,
    SFX_VO_KING5,
    SFX_A8,
    SFX_A9,
    SFX_AA,
    SFX_SPIRITS_RELEASE,
    SFX_AC,
    SFX_VO_BEEDLE,
    SFX_AE,
    SFX_AF,
    SFX_B0,
    SFX_VO_MINISH1,
    SFX_VO_MINISH2,
    SFX_VO_MINISH3,
    SFX_VO_MINISH4,

    SFX_REM_SLEEP = 0xCC,
    SFX_TASK_COMPLETE,
    SFX_KEY_APPEAR,
    SFX_CF,
    SFX_D0,
    SFX_VO_DOG,
    SFX_VO_CAT,
    SFX_VO_EPONA,
    SFX_VO_COW,
    SFX_VO_CUCCO_CALL,
    SFX_VO_CHEEP,
    SFX_ITEM_SWORD_CHARGE,
    SFX_ITEM_SWORD_CHARGE_FINISH,
    SFX_D9,
    SFX_DA,
    SFX_VO_STURGEON,
    SFX_HAMMER1,
    SFX_HAMMER2,
    SFX_HAMMER3,
    SFX_HAMMER4,
    SFX_HAMMER5,
    SFX_HAMMER6,
    SFX_CUCCO_MINIGAME_BELL,
    SFX_E3,
    SFX_E4,
    SFX_BUTTON_DEPRESS,
    SFX_THUD_HEAVY,
    SFX_WIND1,
    SFX_WIND2,
    SFX_WIND3,

    SFX_SUMMON = 0xF4,
    SFX_F5,
    SFX_EVAPORATE,
    SFX_APPARATE,
    SFX_F8,
    SFX_TELEPORTER,

    SFX_ITEM_BOMB_EXPLODE = 0xFD,
    SFX_HIT,

    SFX_ITEM_SHIELD_BOUNCE = 0x118,
    SFX_ITEM_GLOVES_KNOCKBACK,
    SFX_EM_ARMOS_ON,

    SFX_EM_MOBLIN_SPEAR = 0x11E,
    SFX_LOW_HEALTH,
    SFX_CHARGING_UP,
    SFX_STAIRS,

    SFX_BOSS_HIT = 0x127,
    SFX_BOSS_DIE,
    SFX_BOSS_EXPLODE,

    SFX_ITEM_LANTERN_ON = 0x13D,
    SFX_ITEM_LANTERN_OFF,
    SFX_ITEM_SWORD_BEAM,
    SFX_140,
    SFX_HEART_CONTAINER_SPAWN,
    SFX_SPARKLES,

    SFX_PLY_SHRINKING = 0x16F,
    SFX_PLY_GROW,

    SFX_LAVA_TILE_STEP = 0x17B,
    SFX_LAVA_TILE_WOBBLE,
    SFX_LAVA_TILE_SINK,
    SFX_LAVA_TILE_FLIP,
    SFX_LAVA_TILE_LAND,

    SFX_STAIRS_ASCEND = 0x187,
    SFX_STAIRS_DESCEND,

    SFX_ICE_BLOCK_SLIDE = 0x1B1,
    SFX_ICE_BLOCK_STOP,
    SFX_ICE_BLOCK_MELT,

    SFX_VO_GORON1 = 0x1B7,
    SFX_VO_GORON2,
    SFX_VO_GORON3,
    SFX_VO_GORON4,
    SFX_EM_DEKUSCRUB_HIT,

    SFX_ELEMENT_PLACE = 0x1CD,
    SFX_ELEMENT_FLOAT,
    SFX_ELEMENT_CHARGE,
    SFX_1D0,
    SFX_ELEMENT_INFUSE,

    SFX_VO_CUCCO1 = 0x1D6,
    SFX_VO_CUCCO2,
    SFX_VO_CUCCO3,
    SFX_VO_CUCCO4,
    SFX_VO_CUCCO5,
} Sound;