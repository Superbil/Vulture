#ifndef _jtp_tile_h_
#define _jtp_tile_h_

/*
 * Magic colors used in the tile files
 */
/*
 * This one is only used to draw the border around the
 * tile. It is checked in the conversion utility
 * (and when SANITY_CHECKS is defined)
 * to verify that the correct dimensions have been,
 * specified but isn't used otherwise.
 */
#define JTP_COLOR_BORDER  79
/*
 * This one is used to mark the hotspot for mouse cursors,
 * and also is used by other tiles to mark the center.
 * If you change this, you also have to change all tile files.
 */
#define JTP_COLOR_HOTSPOT 16
/*
 * The transparent background pixel. This should not be changed.
 */
#define JTP_COLOR_BACKGROUND 0
/*
 * colors used to draw text
 */
#define JTP_COLOR_TEXT 15
#define JTP_COLOR_INTRO_TEXT 255
/*
 * colors used to draw the mini-map
 */
#define JTP_COLOR_MINI_CORRIDOR 238
#define JTP_COLOR_MINI_STAIRS   165
#define JTP_COLOR_MINI_DOOR      96
#define JTP_COLOR_MINI_FLOOR    236
#define JTP_COLOR_MINI_YOU       15


/*
 * Default tiles to use, when there is no special tile
 */
#define JTP_TILE_DEFAULT_MONSTER JTP_TILE_KNIGHT
#define JTP_TILE_DEFAULT_OBJECT  JTP_TILE_MISC
#define JTP_DEFAULT_FLOOR_STYLE JTP_FLOOR_STYLE_COBBLESTONE
#define JTP_DEFAULT_FLOOR_EDGE_STYLE JTP_FLOOR_EDGE_STYLE_COBBLESTONE


/* Wall styles */
enum jtp_wall_style {
  JTP_WALL_STYLE_BRICK = 0,
  JTP_WALL_STYLE_BRICK_BANNER,
  JTP_WALL_STYLE_BRICK_PAINTING,
  JTP_WALL_STYLE_BRICK_POCKET,
  JTP_WALL_STYLE_BRICK_PILLAR,
  JTP_WALL_STYLE_ROUGH,
  JTP_WALL_STYLE_STUCCO,
  JTP_WALL_STYLE_VINE_COVERED,
  JTP_WALL_STYLE_MARBLE,
  JTP_WALL_STYLE_DARK,
  JTP_WALL_STYLE_LIGHT,
  JTP_MAX_WALL_STYLES
};

/* Floor styles */
enum jtp_floor_style_enum {
  JTP_FLOOR_STYLE_COBBLESTONE = 0,
  JTP_FLOOR_STYLE_ROUGH,
  JTP_FLOOR_STYLE_CERAMIC,
  JTP_FLOOR_STYLE_MOSS_COVERED,
  JTP_FLOOR_STYLE_MARBLE,
  JTP_FLOOR_STYLE_LAVA,
  JTP_FLOOR_STYLE_WATER,
  JTP_FLOOR_STYLE_ICE,
  JTP_FLOOR_STYLE_MURAL,
  JTP_FLOOR_STYLE_MURAL_2,
  JTP_FLOOR_STYLE_CARPET,
  JTP_FLOOR_STYLE_ROUGH_LIT,
  JTP_FLOOR_STYLE_AIR,
  JTP_FLOOR_STYLE_DARK,
  JTP_MAX_FLOOR_STYLES
};

/* Floor edge styles */
enum jtp_floor_edege_style_enum {
    JTP_FLOOR_EDGE_STYLE_COBBLESTONE = 0,
    JTP_MAX_FLOOR_EDGE_STYLES
};

/* Tile graphic indices. Each of these values is a valid entry in jtp_tiles */
typedef enum {
  JTP_TILE_NONE = 0,          /* jtp_tiles[JTP_TILE_NONE] should always be NULL */
  JTP_TILE_UNMAPPED_AREA,
/* Wall tiles */
  JTP_TILE_WALL_GENERIC,
  JTP_TILE_WALL_BRICK,
  JTP_TILE_WALL_ROUGH,
  JTP_TILE_WALL_DARK,
  JTP_TILE_WALL_LIGHT,
/* Floor tiles */
  JTP_TILE_FLOOR_COBBLESTONE,
  JTP_TILE_FLOOR_ROUGH,
  JTP_TILE_FLOOR_WATER,
  JTP_TILE_FLOOR_ICE,
  JTP_TILE_FLOOR_LAVA,
  JTP_TILE_FLOOR_CARPETED,
  JTP_TILE_FLOOR_ROUGH_LIT,
  JTP_TILE_FLOOR_AIR,
  JTP_TILE_FLOOR_DARK,
/* Door tiles */
  JTP_TILE_VDOOR_WOOD_OPEN,
  JTP_TILE_VDOOR_WOOD_CLOSED,
  JTP_TILE_HDOOR_WOOD_OPEN,
  JTP_TILE_HDOOR_WOOD_CLOSED,
  JTP_TILE_DOOR_WOOD_BROKEN,
/* Other cmap tiles */
  JTP_TILE_STAIRS_UP,
  JTP_TILE_STAIRS_DOWN,
  JTP_TILE_FOUNTAIN,
  JTP_TILE_ALTAR,
  JTP_TILE_TRAP_TELEPORTER,
  JTP_TILE_TREE,
  JTP_TILE_TRAP_PIT,
  JTP_TILE_GAS_TRAP,
  JTP_TILE_GRAVE,
  JTP_TILE_SINK,
  JTP_TILE_TRAP_BEAR,
  JTP_TILE_TRAP_MAGIC,
  JTP_TILE_TRAP_WATER,
  JTP_TILE_TRAP_DOOR,
  JTP_TILE_FLOOR_NOT_VISIBLE,
  JTP_TILE_TRAP_ANTI_MAGIC,
  JTP_TILE_TRAP_ARROW,
  JTP_TILE_TRAP_SLEEPGAS,
  JTP_TILE_ROLLING_BOULDER_TRAP,
  JTP_TILE_TRAP_FIRE,
  JTP_TILE_ZAP_HORIZONTAL,
  JTP_TILE_ZAP_VERTICAL,
  JTP_TILE_ZAP_SLANT_LEFT,
  JTP_TILE_ZAP_SLANT_RIGHT,
  JTP_TILE_LADDER_DOWN,
  JTP_TILE_LADDER_UP,
  JTP_TILE_EXPLOSION_NORTHWEST,
  JTP_TILE_EXPLOSION_NORTH,
  JTP_TILE_EXPLOSION_NORTHEAST,
  JTP_TILE_EXPLOSION_WEST,
  JTP_TILE_EXPLOSION_CENTER,
  JTP_TILE_EXPLOSION_EAST,
  JTP_TILE_EXPLOSION_SOUTHWEST,
  JTP_TILE_EXPLOSION_SOUTH,
  JTP_TILE_EXPLOSION_SOUTHEAST,
  JTP_TILE_THRONE,
  JTP_TILE_BARS,
  JTP_TILE_HILITE_PET,
  JTP_TILE_TRAP_POLYMORPH,
  JTP_TILE_RESIST_SPELL_1,
  JTP_TILE_RESIST_SPELL_2,
  JTP_TILE_RESIST_SPELL_3,
  JTP_TILE_RESIST_SPELL_4,
  JTP_TILE_WEB_TRAP,
  JTP_TILE_DART_TRAP,
  JTP_TILE_FALLING_ROCK_TRAP,
  JTP_TILE_SQUEAKY_BOARD,
  JTP_TILE_LAND_MINE,
  JTP_TILE_MAGIC_PORTAL,
  JTP_TILE_TILE_SPIKED_PIT,
  JTP_TILE_HOLE,
  JTP_TILE_LEVEL_TELEPORTER,
  JTP_TILE_MAGIC_TRAP,
  JTP_TILE_DIGBEAM,
  JTP_TILE_FLASHBEAM,
  JTP_TILE_BOOMLEFT,
  JTP_TILE_BOOMRIGHT,
  JTP_TILE_HCDBRIDGE,
  JTP_TILE_VCDBRIDGE,
  JTP_TILE_HODBRIDGE,
  JTP_TILE_VODBRIDGE,
  JTP_TILE_CLOUD,

/* Tile graphic indices, object tiles */
  JTP_TILE_MISC,
  JTP_TILE_BOULDER,
  JTP_TILE_BONES,
  JTP_TILE_STATUE,
  JTP_TILE_CHEST,
  JTP_TILE_COINS,
  JTP_TILE_BOOK,
  JTP_TILE_HELMET,
  JTP_TILE_SHIELD,
  JTP_TILE_BOOTS,
  JTP_TILE_SPEAR,
  JTP_TILE_WATER,
  JTP_TILE_SCROLL,
  JTP_TILE_WAND,
  JTP_TILE_SWORD,
  JTP_TILE_BLUE_GLASS,
  JTP_TILE_GREEN_GLASS,
  JTP_TILE_RED_GLASS,
  JTP_TILE_YELLOW_GLASS,
  JTP_TILE_WHITE_GLASS,
  JTP_TILE_BLACK_GLASS,
  JTP_TILE_VIOLET_GLASS,
  JTP_TILE_ORANGE_GLASS,
  JTP_TILE_HAMMER,
  JTP_TILE_AXE,
  JTP_TILE_LANTERN,
  JTP_TILE_RING,
  JTP_TILE_AMULET,
  JTP_TILE_LEATHER_ARMOR,
  JTP_TILE_PLATE_MAIL,
  JTP_TILE_SCALE_MAIL,
  JTP_TILE_RING_MAIL,
  JTP_TILE_CHAIN_MAIL,
  JTP_TILE_CLOAK,
  JTP_TILE_TRIDENT,
  JTP_TILE_CAMERA,
  JTP_TILE_FEDORA,
  JTP_TILE_CLUB,
  JTP_TILE_ARROW,
  JTP_TILE_PEAR,
  JTP_TILE_APPLE,
  JTP_TILE_DAGGER,
  JTP_TILE_KEY,
  JTP_TILE_BOW,
  JTP_TILE_WHIP,
  JTP_TILE_CANDLE,
  JTP_TILE_EGG,
  JTP_TILE_GLOVES,
  JTP_TILE_BELL,
  JTP_TILE_MACE,
  JTP_TILE_TOOLED_HORN,
  JTP_TILE_CRYSTAL_BALL,
  JTP_TILE_FROST_HORN,
  JTP_TILE_UNICORN_HORN,
  JTP_TILE_HAWAIIAN_SHIRT,
  JTP_TILE_CREDIT_CARD,
  JTP_TILE_MIRROR,
  JTP_TILE_CROSSBOW,
  JTP_TILE_CONICAL_HAT,
  JTP_TILE_MAGIC_MARKER,
  JTP_TILE_STAFF,
  JTP_TILE_FOOD_RATION,
  JTP_TILE_PANCAKE,
  JTP_TILE_TRIPE_RATION,
  JTP_TILE_MEAT_STICK,
  JTP_TILE_SHURIKEN,
  JTP_TILE_STONE,
  JTP_TILE_PICKAXE,
  JTP_TILE_TIN,
  JTP_TILE_CANDY_BAR,
  JTP_TILE_FORTUNE_COOKIE,
  JTP_TILE_CREAM_PIE,
  JTP_TILE_LEMBAS_WAFER,
  JTP_TILE_ORANGE,
  JTP_TILE_BANANA,
  JTP_TILE_MELON,
  JTP_TILE_EUCALYPTUS_LEAF,
  JTP_TILE_KELP_FROND,
  JTP_TILE_SLIME_MOLD,
  JTP_TILE_CARROT,
  JTP_TILE_SPRIG_OF_WOLFSBANE,
  JTP_TILE_CLOVE_OF_GARLIC,
  JTP_TILE_CRAM_RATION,
  JTP_TILE_HUGE_CHUNK_OF_MEAT,
  JTP_TILE_MEATBALL,
  JTP_TILE_K_RATION,
  JTP_TILE_C_RATION,
  JTP_TILE_LUMP_OF_ROYAL_JELLY,
  JTP_TILE_MEAT_RING,
  JTP_TILE_AGATE,
  JTP_TILE_AMBER,
  JTP_TILE_AMETHYST,
  JTP_TILE_AQUAMARINE,
  JTP_TILE_BLACK_OPAL,
  JTP_TILE_CHRYSOBERYL,
  JTP_TILE_CITRINE,
  JTP_TILE_DIAMOND,
  JTP_TILE_DILITHIUM_CRYSTAL,
  JTP_TILE_EMERALD,
  JTP_TILE_FLUORITE,
  JTP_TILE_GARNET,
  JTP_TILE_JACINTH,
  JTP_TILE_JADE,
  JTP_TILE_JASPER,
  JTP_TILE_JET,
  JTP_TILE_OBSIDIAN,
  JTP_TILE_OPAL,
  JTP_TILE_RUBY,
  JTP_TILE_SAPPHIRE,
  JTP_TILE_TOPAZ,
  JTP_TILE_TURQUOISE,
  JTP_TILE_LUCKSTONE,
  JTP_TILE_FLINT,
  JTP_TILE_LOADSTONE,
  JTP_TILE_TINNING_KIT,
  JTP_TILE_FIRE_HORN,
  JTP_TILE_RUBY_POTION,
  JTP_TILE_PINK_POTION,
  JTP_TILE_ORANGE_POTION,
  JTP_TILE_YELLOW_POTION,
  JTP_TILE_EMERALD_POTION,
  JTP_TILE_DARK_GREEN_POTION,
  JTP_TILE_CYAN_POTION,
  JTP_TILE_SKY_BLUE_POTION,
  JTP_TILE_BRILLIANT_BLUE_POTION,
  JTP_TILE_MAGENTA_POTION,
  JTP_TILE_PURPLE_RED_POTION,
  JTP_TILE_PUCE_POTION,
  JTP_TILE_MILKY_POTION,
  JTP_TILE_SWIRLY_POTION,
  JTP_TILE_BUBBLY_POTION,
  JTP_TILE_SMOKY_POTION,
  JTP_TILE_CLOUDY_POTION,
  JTP_TILE_EFFERVESCENT_POTION,
  JTP_TILE_BLACK_POTION,
  JTP_TILE_GOLDEN_POTION,
  JTP_TILE_BROWN_POTION,
  JTP_TILE_FIZZY_POTION,
  JTP_TILE_DARK_POTION,
  JTP_TILE_WHITE_POTION,
  JTP_TILE_MURKY_POTION,
  JTP_TILE_HOLY_WATER,
  JTP_TILE_UNHOLY_WATER,
  JTP_TILE_SACK,
  JTP_TILE_BAG_OF_HOLDING,
  JTP_TILE_OILSKIN_SACK,
  JTP_TILE_BAG_OF_TRICKS,
  JTP_TILE_ICE_BOX,
  JTP_TILE_LARGE_BOX,
  JTP_TILE_TOUCHSTONE,
  JTP_TILE_UNIDENTIFIED_BAG,
  JTP_TILE_ROCKS,
  JTP_TILE_BROWN_GLASS,
  JTP_TILE_HEALTHSTONE,
  JTP_TILE_WHETSTONE, 
  JTP_TILE_BOOMERANG,

/* Tile graphic indices, monster tiles */
  JTP_TILE_PLAYER_INVIS,

  JTP_TILE_KNIGHT,
  JTP_TILE_LITTLE_DOG,
  JTP_TILE_GREEN_SLIME,
  JTP_TILE_LIZARD,
  JTP_TILE_GIANT_SPIDER,
  JTP_TILE_GOBLIN,
  JTP_TILE_EYE,
  JTP_TILE_IMP,
  JTP_TILE_FIRE_ELEMENTAL,
  JTP_TILE_OGRE,
  JTP_TILE_NAGA,
  JTP_TILE_KITTEN,
  JTP_TILE_WIZARD,
  JTP_TILE_VALKYRIE,
  JTP_TILE_RANGER,
  JTP_TILE_MOUNTAIN_NYMPH,
  JTP_TILE_WATER_NYMPH,
  JTP_TILE_WOOD_NYMPH,
  JTP_TILE_SKELETON,
  JTP_TILE_GHOST,
  JTP_TILE_WRAITH,
  JTP_TILE_HUMAN_ZOMBIE,
  JTP_TILE_RAT,
  JTP_TILE_TROLL,
  JTP_TILE_MOUNTAIN_CENTAUR,
  JTP_TILE_GIANT_ANT,
  JTP_TILE_ARCHEOLOGIST,
  JTP_TILE_KILLER_BEE,
  JTP_TILE_TOURIST,
  JTP_TILE_ROGUE,
  JTP_TILE_PRIEST,
  JTP_TILE_YELLOW_LIGHT,
  JTP_TILE_BLACK_LIGHT,
  JTP_TILE_YELLOW_MOLD,
  JTP_TILE_RED_MOLD,
  JTP_TILE_VIOLET_FUNGUS,
  JTP_TILE_BROWN_MOLD,
  JTP_TILE_SHRIEKER,
  JTP_TILE_COCKATRICE,
  JTP_TILE_KRAKEN,
  JTP_TILE_GIANT_EEL,
  JTP_TILE_SHARK,
  JTP_TILE_PYROLISK,
  JTP_TILE_CHICKATRICE,
  JTP_TILE_ACID_BLOB,
  JTP_TILE_QUIVERING_BLOB,
  JTP_TILE_GELATINOUS_CUBE,
  JTP_TILE_LICHEN,
  JTP_TILE_GREEN_MOLD,
  JTP_TILE_STALKER,
  JTP_TILE_AIR_ELEMENTAL,
  JTP_TILE_EARTH_ELEMENTAL,
  JTP_TILE_WATER_ELEMENTAL,
  JTP_TILE_SMALL_MIMIC,
  JTP_TILE_LARGE_MIMIC,
  JTP_TILE_GIANT_MIMIC,
  JTP_TILE_JACKAL,
  JTP_TILE_FOX,
  JTP_TILE_COYOTE,
  JTP_TILE_DOG,
  JTP_TILE_LARGE_DOG,
  JTP_TILE_ROCK_PIERCER,
  JTP_TILE_IRON_PIERCER,
  JTP_TILE_GLASS_PIERCER,
  JTP_TILE_WATER_DEMON,
  JTP_TILE_GECKO,
  JTP_TILE_NEWT,
  JTP_TILE_SHOPKEEPER,
  JTP_TILE_GAS_SPORE,
  JTP_TILE_HOUSECAT,
  JTP_TILE_LARGE_CAT,
  JTP_TILE_PONY,
  JTP_TILE_HORSE,
  JTP_TILE_WARHORSE,
  JTP_TILE_FREEZING_SPHERE,
  JTP_TILE_FLAMING_SPHERE,
  JTP_TILE_SHOCKING_SPHERE,
  JTP_TILE_ROTHE,
  JTP_TILE_GNOME,
  JTP_TILE_GREEN_ELF,
  JTP_TILE_DWARF,
  JTP_TILE_WATER_MOCCASIN,
  JTP_TILE_MANES,
  JTP_TILE_HOBBIT,
  JTP_TILE_BLACK_UNICORN,
  JTP_TILE_GRAY_UNICORN,
  JTP_TILE_WHITE_UNICORN,
  JTP_TILE_SOLDIER_ANT,
  JTP_TILE_FIRE_ANT,
  JTP_TILE_ELVENKING,
  JTP_TILE_ELF_LORD,
  JTP_TILE_GREY_ELF,
  JTP_TILE_WOODLAND_ELF,
  JTP_TILE_ELF,
  JTP_TILE_ROCK_MOLE,
  JTP_TILE_DWARF_LORD,
  JTP_TILE_DWARF_KING,
  JTP_TILE_GNOME_LORD,
  JTP_TILE_GNOME_KING,
  JTP_TILE_GNOMISH_WIZARD,
  JTP_TILE_ORC,
  JTP_TILE_HILL_ORC,
  JTP_TILE_MORDOR_ORC,
  JTP_TILE_URUK_HAI,
  JTP_TILE_HOBGOBLIN,
  JTP_TILE_BUGBEAR,
  JTP_TILE_KOBOLD,
  JTP_TILE_LARGE_KOBOLD,
  JTP_TILE_KOBOLD_LORD,
  JTP_TILE_KOBOLD_SHAMAN,
  JTP_TILE_ORC_CAPTAIN,
  JTP_TILE_ORC_SHAMAN,
  JTP_TILE_LEPRECHAUN,
  JTP_TILE_GARTER_SNAKE,
  JTP_TILE_SNAKE,
  JTP_TILE_PIT_VIPER,
  JTP_TILE_PYTHON,
  JTP_TILE_COBRA,
  JTP_TILE_GIANT,
  JTP_TILE_ETTIN,
  JTP_TILE_ROGUE_LEVEL_A,
  JTP_TILE_ROGUE_LEVEL_B,
  JTP_TILE_ROGUE_LEVEL_C,
  JTP_TILE_ROGUE_LEVEL_D,
  JTP_TILE_ROGUE_LEVEL_E,
  JTP_TILE_ROGUE_LEVEL_F,
  JTP_TILE_ROGUE_LEVEL_G,
  JTP_TILE_ROGUE_LEVEL_H,
  JTP_TILE_ROGUE_LEVEL_I,
  JTP_TILE_ROGUE_LEVEL_J,
  JTP_TILE_ROGUE_LEVEL_K,
  JTP_TILE_ROGUE_LEVEL_L,
  JTP_TILE_ROGUE_LEVEL_M,
  JTP_TILE_ROGUE_LEVEL_N,
  JTP_TILE_ROGUE_LEVEL_O,
  JTP_TILE_ROGUE_LEVEL_P,
  JTP_TILE_ROGUE_LEVEL_Q,
  JTP_TILE_ROGUE_LEVEL_R,
  JTP_TILE_ROGUE_LEVEL_S,
  JTP_TILE_ROGUE_LEVEL_T,
  JTP_TILE_ROGUE_LEVEL_U,
  JTP_TILE_ROGUE_LEVEL_V,
  JTP_TILE_ROGUE_LEVEL_W,
  JTP_TILE_ROGUE_LEVEL_X,
  JTP_TILE_ROGUE_LEVEL_Y,
  JTP_TILE_ROGUE_LEVEL_Z,
  JTP_TILE_COUATL,
  JTP_TILE_ALEAX,
  JTP_TILE_ANGEL,
  JTP_TILE_KI_RIN,
  JTP_TILE_ARCHON,
  JTP_TILE_FOREST_CENTAUR,
  JTP_TILE_PLAINS_CENTAUR,
  JTP_TILE_BABY_GRAY_DRAGON,
  JTP_TILE_BABY_SILVER_DRAGON,
  JTP_TILE_BABY_RED_DRAGON,
  JTP_TILE_BABY_WHITE_DRAGON,
  JTP_TILE_BABY_ORANGE_DRAGON,
  JTP_TILE_BABY_BLACK_DRAGON,
  JTP_TILE_BABY_BLUE_DRAGON,
  JTP_TILE_BABY_YELLOW_DRAGON,
  JTP_TILE_BABY_GREEN_DRAGON,
  JTP_TILE_GRAY_DRAGON,
  JTP_TILE_SILVER_DRAGON,
  JTP_TILE_RED_DRAGON,
  JTP_TILE_WHITE_DRAGON,
  JTP_TILE_ORANGE_DRAGON,
  JTP_TILE_BLACK_DRAGON,
  JTP_TILE_BLUE_DRAGON,
  JTP_TILE_YELLOW_DRAGON,
  JTP_TILE_GREEN_DRAGON,
  JTP_TILE_STONE_GIANT,
  JTP_TILE_HILL_GIANT,
  JTP_TILE_FIRE_GIANT,
  JTP_TILE_FROST_GIANT,
  JTP_TILE_STORM_GIANT,
  JTP_TILE_TITAN,
  JTP_TILE_MINOTAUR,
  JTP_TILE_JABBERWOCK,
  JTP_TILE_UMBER_HULK,
  JTP_TILE_KEYSTONE_KOP,
  JTP_TILE_KOP_SERGEANT,
  JTP_TILE_KOP_LIEUTENANT,
  JTP_TILE_KOP_KAPTAIN,
  JTP_TILE_LICH,
  JTP_TILE_DEMILICH,
  JTP_TILE_MASTER_LICH,
  JTP_TILE_ARCH_LICH,
  JTP_TILE_KOBOLD_MUMMY,
  JTP_TILE_GNOME_MUMMY,
  JTP_TILE_DWARF_MUMMY,
  JTP_TILE_ORC_MUMMY,
  JTP_TILE_ELF_MUMMY,
  JTP_TILE_HUMAN_MUMMY,
  JTP_TILE_ETTIN_MUMMY,
  JTP_TILE_GIANT_MUMMY,
  JTP_TILE_RED_NAGA_HATCHLING,
  JTP_TILE_BLACK_NAGA_HATCHLING,
  JTP_TILE_GOLDEN_NAGA_HATCHLING,
  JTP_TILE_GUARDIAN_NAGA_HATCHLING,
  JTP_TILE_RED_NAGA,
  JTP_TILE_BLACK_NAGA,
  JTP_TILE_GOLDEN_NAGA,
  JTP_TILE_GUARDIAN_NAGA,
  JTP_TILE_OGRE_LORD,
  JTP_TILE_OGRE_KING,
  JTP_TILE_GRAY_OOZE,
  JTP_TILE_BROWN_PUDDING,
  JTP_TILE_BLACK_PUDDING,
  JTP_TILE_RUST_MONSTER,
  JTP_TILE_DISENCHANTER,
  JTP_TILE_ICE_TROLL,
  JTP_TILE_ROCK_TROLL,
  JTP_TILE_WATER_TROLL,
  JTP_TILE_OLOG_HAI,
  JTP_TILE_VAMPIRE,
  JTP_TILE_VAMPIRE_LORD,
  JTP_TILE_BARROW_WIGHT,
  JTP_TILE_NAZGUL,
  JTP_TILE_XORN,
  JTP_TILE_MONKEY,
  JTP_TILE_APE,
  JTP_TILE_OWLBEAR,
  JTP_TILE_YETI,
  JTP_TILE_CARNIVOROUS_APE,
  JTP_TILE_SASQUATCH,
  JTP_TILE_KOBOLD_ZOMBIE,
  JTP_TILE_GNOME_ZOMBIE,
  JTP_TILE_DWARF_ZOMBIE,
  JTP_TILE_ORC_ZOMBIE,
  JTP_TILE_ELF_ZOMBIE,
  JTP_TILE_GIANT_ZOMBIE,
  JTP_TILE_ETTIN_ZOMBIE,
  JTP_TILE_HOMUNCULUS,
  JTP_TILE_LEMURE,
  JTP_TILE_QUASIT,
  JTP_TILE_TENGU,
  JTP_TILE_WUMPUS,
  JTP_TILE_ORACLE,
  JTP_TILE_LAWFUL_PRIEST,
  JTP_TILE_NEUTRAL_PRIEST,
  JTP_TILE_CHAOTIC_PRIEST,
  JTP_TILE_UNALIGNED_PRIEST,
  JTP_TILE_WATCHMAN,
  JTP_TILE_WATCH_CAPTAIN,
  JTP_TILE_SOLDIER,
  JTP_TILE_SERGEANT,
  JTP_TILE_LIEUTENANT,
  JTP_TILE_CAPTAIN,
  JTP_TILE_GRID_BUG,
  JTP_TILE_XAN,
  JTP_TILE_GARGOYLE,
  JTP_TILE_WINGED_GARGOYLE,
  JTP_TILE_DINGO,
  JTP_TILE_WOLF,
  JTP_TILE_WEREWOLF,
  JTP_TILE_WARG,
  JTP_TILE_WINTER_WOLF_CUB,
  JTP_TILE_WINTER_WOLF,
  JTP_TILE_HELL_HOUND_PUP,
  JTP_TILE_HELL_HOUND,
  JTP_TILE_JAGUAR,
  JTP_TILE_LYNX,
  JTP_TILE_PANTHER,
  JTP_TILE_TIGER,
  JTP_TILE_MIND_FLAYER,
  JTP_TILE_MASTER_MIND_FLAYER,
  JTP_TILE_SUCCUBUS,
  JTP_TILE_INCUBUS,
  JTP_TILE_GREMLIN,
  JTP_TILE_BABY_PURPLE_WORM,
  JTP_TILE_PURPLE_WORM,
  JTP_TILE_BABY_LONG_WORM,
  JTP_TILE_LONG_WORM,
  JTP_TILE_LONG_WORM_TAIL,
  JTP_TILE_MUMAK,
  JTP_TILE_LEOCROTTA,
  JTP_TILE_TITANOTHERE,
  JTP_TILE_BALUCHITHERIUM,
  JTP_TILE_MASTADON,
  JTP_TILE_ZRUTY,
  JTP_TILE_WIZARD_OF_YENDOR,
  JTP_TILE_STRAW_GOLEM,
  JTP_TILE_PAPER_GOLEM,
  JTP_TILE_ROPE_GOLEM,
  JTP_TILE_GOLD_GOLEM,
  JTP_TILE_LEATHER_GOLEM,
  JTP_TILE_WOOD_GOLEM,
  JTP_TILE_FLESH_GOLEM,
  JTP_TILE_CLAY_GOLEM,
  JTP_TILE_STONE_GOLEM,
  JTP_TILE_GLASS_GOLEM,
  JTP_TILE_IRON_GOLEM,
  JTP_TILE_QUEEN_BEE,
  JTP_TILE_GIANT_BEETLE,
  JTP_TILE_CENTIPEDE,
  JTP_TILE_CAVE_SPIDER,
  JTP_TILE_SCORPION,
  JTP_TILE_BAT,
  JTP_TILE_GIANT_BAT,
  JTP_TILE_RAVEN,
  JTP_TILE_VAMPIRE_BAT,
  JTP_TILE_QUANTUM_MECHANIC,
  JTP_TILE_DJINNI,
  JTP_TILE_LURKER_ABOVE,
  JTP_TILE_TRAPPER,

/* Engulf tiles */
  JTP_TILE_ENGULF_OCHRE_JELLY,
  JTP_TILE_ENGULF_LURKER_ABOVE,
  JTP_TILE_ENGULF_TRAPPER,
  JTP_TILE_ENGULF_PURPLE_WORM,
  JTP_TILE_ENGULF_DUST_VORTEX,
  JTP_TILE_ENGULF_ICE_VORTEX,
  JTP_TILE_ENGULF_ENERGY_VORTEX,
  JTP_TILE_ENGULF_STEAM_VORTEX,
  JTP_TILE_ENGULF_FIRE_VORTEX,
  JTP_TILE_ENGULF_FOG_CLOUD,
  JTP_TILE_ENGULF_AIR_ELEMENTAL,
  JTP_TILE_ENGULF_JUIBLEX,
  
  /* The generic invisible monster tile*/
  JTP_TILE_INVISIBLE_MONSTER,
  
  /* tiles for Warning. These must remain sequentially ordered */
  JTP_TILE_WARNLEV_1,
  JTP_TILE_WARNLEV_2,
  JTP_TILE_WARNLEV_3,
  JTP_TILE_WARNLEV_4,
  JTP_TILE_WARNLEV_5,
  JTP_TILE_WARNLEV_6,
  
  JTP_MAX_TILES /* must always be last */
} jtp_tilenumber;


#endif