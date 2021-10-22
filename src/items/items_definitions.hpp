/**
 * Canary - A free and open-source MMORPG server emulator
 * Copyright (C) 2021 OpenTibiaBR <opentibiabr@outlook.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef SRC_ITEMS_ITEMS_DEFINITIONS_HPP_
#define SRC_ITEMS_ITEMS_DEFINITIONS_HPP_

#define IMBUEMENT_SLOT 500

// Enums
enum ItemProperty {
	CONST_PROP_BLOCKSOLID = 0,
	CONST_PROP_HASHEIGHT,
	CONST_PROP_BLOCKPROJECTILE,
	CONST_PROP_BLOCKPATH,
	CONST_PROP_ISVERTICAL,
	CONST_PROP_ISHORIZONTAL,
	CONST_PROP_MOVEABLE,
	CONST_PROP_IMMOVABLEBLOCKSOLID,
	CONST_PROP_IMMOVABLEBLOCKPATH,
	CONST_PROP_IMMOVABLENOFIELDBLOCKPATH,
	CONST_PROP_NOFIELDBLOCKPATH,
	CONST_PROP_SUPPORTHANGABLE,
};

enum Attr_ReadValue {
	ATTR_READ_CONTINUE,
	ATTR_READ_ERROR,
	ATTR_READ_END,
};

enum ReturnValue {
	RETURNVALUE_NOERROR,
	RETURNVALUE_NOTPOSSIBLE,
	RETURNVALUE_NOTENOUGHROOM,
	RETURNVALUE_PLAYERISPZLOCKED,
	RETURNVALUE_PLAYERISNOTINVITED,
	RETURNVALUE_CANNOTTHROW,
	RETURNVALUE_THEREISNOWAY,
	RETURNVALUE_DESTINATIONOUTOFREACH,
	RETURNVALUE_CREATUREBLOCK,
	RETURNVALUE_NOTMOVEABLE,
	RETURNVALUE_DROPTWOHANDEDITEM,
	RETURNVALUE_BOTHHANDSNEEDTOBEFREE,
	RETURNVALUE_CANONLYUSEONEWEAPON,
	RETURNVALUE_NEEDEXCHANGE,
	RETURNVALUE_CANNOTBEDRESSED,
	RETURNVALUE_PUTTHISOBJECTINYOURHAND,
	RETURNVALUE_PUTTHISOBJECTINBOTHHANDS,
	RETURNVALUE_TOOFARAWAY,
	RETURNVALUE_FIRSTGODOWNSTAIRS,
	RETURNVALUE_FIRSTGOUPSTAIRS,
	RETURNVALUE_CONTAINERNOTENOUGHROOM,
	RETURNVALUE_ONLYAMMOINQUIVER,
	RETURNVALUE_NOTENOUGHCAPACITY,
	RETURNVALUE_CANNOTPICKUP,
	RETURNVALUE_THISISIMPOSSIBLE,
	RETURNVALUE_DEPOTISFULL,
	RETURNVALUE_CREATUREDOESNOTEXIST,
	RETURNVALUE_CANNOTUSETHISOBJECT,
	RETURNVALUE_PLAYERWITHTHISNAMEISNOTONLINE,
	RETURNVALUE_NOTREQUIREDLEVELTOUSERUNE,
	RETURNVALUE_YOUAREALREADYTRADING,
	RETURNVALUE_THISPLAYERISALREADYTRADING,
	RETURNVALUE_YOUMAYNOTLOGOUTDURINGAFIGHT,
	RETURNVALUE_DIRECTPLAYERSHOOT,
	RETURNVALUE_NOTENOUGHLEVEL,
	RETURNVALUE_NOTENOUGHMAGICLEVEL,
	RETURNVALUE_NOTENOUGHMANA,
	RETURNVALUE_NOTENOUGHSOUL,
	RETURNVALUE_YOUAREEXHAUSTED,
	RETURNVALUE_YOUCANNOTUSEOBJECTSTHATFAST,
	RETURNVALUE_PLAYERISNOTREACHABLE,
	RETURNVALUE_CANONLYUSETHISRUNEONCREATURES,
	RETURNVALUE_ACTIONNOTPERMITTEDINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKTHISPLAYER,
	RETURNVALUE_YOUMAYNOTATTACKAPERSONINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKAPERSONWHILEINPROTECTIONZONE,
	RETURNVALUE_YOUMAYNOTATTACKTHISCREATURE,
	RETURNVALUE_YOUCANONLYUSEITONCREATURES,
	RETURNVALUE_CREATUREISNOTREACHABLE,
	RETURNVALUE_TURNSECUREMODETOATTACKUNMARKEDPLAYERS,
	RETURNVALUE_YOUNEEDPREMIUMACCOUNT,
	RETURNVALUE_YOUNEEDTOLEARNTHISSPELL,
	RETURNVALUE_YOURVOCATIONCANNOTUSETHISSPELL,
	RETURNVALUE_YOUNEEDAWEAPONTOUSETHISSPELL,
	RETURNVALUE_PLAYERISPZLOCKEDLEAVEPVPZONE,
	RETURNVALUE_PLAYERISPZLOCKEDENTERPVPZONE,
	RETURNVALUE_ACTIONNOTPERMITTEDINANOPVPZONE,
	RETURNVALUE_YOUCANNOTLOGOUTHERE,
	RETURNVALUE_YOUNEEDAMAGICITEMTOCASTSPELL,
	RETURNVALUE_CANNOTCONJUREITEMHERE,
	RETURNVALUE_YOUNEEDTOSPLITYOURSPEARS,
	RETURNVALUE_NAMEISTOOAMBIGUOUS,
	RETURNVALUE_CANONLYUSEONESHIELD,
	RETURNVALUE_NOPARTYMEMBERSINRANGE,
	RETURNVALUE_YOUARENOTTHEOWNER,
	RETURNVALUE_YOUCANTOPENCORPSEADM,
	RETURNVALUE_NOSUCHRAIDEXISTS,
	RETURNVALUE_ANOTHERRAIDISALREADYEXECUTING,
	RETURNVALUE_TRADEPLAYERFARAWAY,
	RETURNVALUE_YOUDONTOWNTHISHOUSE,
	RETURNVALUE_TRADEPLAYERALREADYOWNSAHOUSE,
	RETURNVALUE_TRADEPLAYERHIGHESTBIDDER,
	RETURNVALUE_YOUCANNOTTRADETHISHOUSE,
	RETURNVALUE_YOUDONTHAVEREQUIREDPROFESSION,
	RETURNVALUE_NOTENOUGHFISTLEVEL,
	RETURNVALUE_NOTENOUGHCLUBLEVEL,
	RETURNVALUE_NOTENOUGHSWORDLEVEL,
	RETURNVALUE_NOTENOUGHAXELEVEL,
	RETURNVALUE_NOTENOUGHDISTANCELEVEL,
	RETURNVALUE_NOTENOUGHSHIELDLEVEL,
	RETURNVALUE_NOTENOUGHFISHLEVEL,
	RETURNVALUE_REWARDCHESTISEMPTY,
};

enum ItemGroup_t {
	ITEM_GROUP_NONE,

	ITEM_GROUP_GROUND,
	ITEM_GROUP_CONTAINER,
	ITEM_GROUP_WEAPON, //deprecated
	ITEM_GROUP_AMMUNITION, //deprecated
	ITEM_GROUP_ARMOR, //deprecated
	ITEM_GROUP_CHARGES,
	ITEM_GROUP_TELEPORT, //deprecated
	ITEM_GROUP_MAGICFIELD, //deprecated
	ITEM_GROUP_WRITEABLE, //deprecated
	ITEM_GROUP_KEY, //deprecated
	ITEM_GROUP_SPLASH,
	ITEM_GROUP_FLUID,
	ITEM_GROUP_DOOR, //deprecated
	ITEM_GROUP_DEPRECATED,

	ITEM_GROUP_LAST
};

enum ClientVersion_t {
	CLIENT_VERSION_750 = 1,
	CLIENT_VERSION_755 = 2,
	CLIENT_VERSION_760 = 3,
	CLIENT_VERSION_770 = 3,
	CLIENT_VERSION_780 = 4,
	CLIENT_VERSION_790 = 5,
	CLIENT_VERSION_792 = 6,
	CLIENT_VERSION_800 = 7,
	CLIENT_VERSION_810 = 8,
	CLIENT_VERSION_811 = 9,
	CLIENT_VERSION_820 = 10,
	CLIENT_VERSION_830 = 11,
	CLIENT_VERSION_840 = 12,
	CLIENT_VERSION_841 = 13,
	CLIENT_VERSION_842 = 14,
	CLIENT_VERSION_850 = 15,
	CLIENT_VERSION_854_BAD = 16,
	CLIENT_VERSION_854 = 17,
	CLIENT_VERSION_855 = 18,
	CLIENT_VERSION_860_OLD = 19,
	CLIENT_VERSION_860 = 20,
	CLIENT_VERSION_861 = 21,
	CLIENT_VERSION_862 = 22,
	CLIENT_VERSION_870 = 23,
	CLIENT_VERSION_871 = 24,
	CLIENT_VERSION_872 = 25,
	CLIENT_VERSION_873 = 26,
	CLIENT_VERSION_900 = 27,
	CLIENT_VERSION_910 = 28,
	CLIENT_VERSION_920 = 29,
	CLIENT_VERSION_940 = 30,
	CLIENT_VERSION_944_V1 = 31,
	CLIENT_VERSION_944_V2 = 32,
	CLIENT_VERSION_944_V3 = 33,
	CLIENT_VERSION_944_V4 = 34,
	CLIENT_VERSION_946 = 35,
	CLIENT_VERSION_950 = 36,
	CLIENT_VERSION_952 = 37,
	CLIENT_VERSION_953 = 38,
	CLIENT_VERSION_954 = 39,
	CLIENT_VERSION_960 = 40,
	CLIENT_VERSION_961 = 41,
	CLIENT_VERSION_963 = 42,
	CLIENT_VERSION_970 = 43,
	CLIENT_VERSION_980 = 44,
	CLIENT_VERSION_981 = 45,
	CLIENT_VERSION_982 = 46,
	CLIENT_VERSION_983 = 47,
	CLIENT_VERSION_985 = 48,
	CLIENT_VERSION_986 = 49,
	CLIENT_VERSION_1010 = 50,
	CLIENT_VERSION_1020 = 51,
	CLIENT_VERSION_1021 = 52,
	CLIENT_VERSION_1030 = 53,
	CLIENT_VERSION_1031 = 54,
	CLIENT_VERSION_1035 = 55,
	CLIENT_VERSION_1076 = 56,
	CLIENT_VERSION_1098 = 57,
	CLIENT_VERSION_1100_V1 = 58, // No relased
	CLIENT_VERSION_1100_V2 = 59,
	CLIENT_VERSION_1100_V3 = 60, // No relased
	CLIENT_VERSION_1100_V4 = 61, // No relased
	CLIENT_VERSION_1140 = 62,
};

enum RootAttrib_ {
	ROOT_ATTR_VERSION = 0x01,
};

enum ItemAttrib_t {
	ITEM_ATTR_FIRST = 0x10,
	ITEM_ATTR_SERVERID = ITEM_ATTR_FIRST,
	ITEM_ATTR_CLIENTID,
	ITEM_ATTR_NAME,
	ITEM_ATTR_DESCR,
	ITEM_ATTR_SPEED,
	ITEM_ATTR_SLOT,
	ITEM_ATTR_MAXITEMS,
	ITEM_ATTR_WEIGHT,
	ITEM_ATTR_WEAPON,
	ITEM_ATTR_AMU,
	ITEM_ATTR_ARMOR,
	ITEM_ATTR_MAGLEVEL,
	ITEM_ATTR_MAGFIELDTYPE,
	ITEM_ATTR_WRITEABLE,
	ITEM_ATTR_ROTATETO,
	ITEM_ATTR_DECAY,
	ITEM_ATTR_SPRITEHASH,
	ITEM_ATTR_MINIMAPCOLOR,
	ITEM_ATTR_07,
	ITEM_ATTR_08,
	ITEM_ATTR_LIGHT,

	//1-byte aligned
	ITEM_ATTR_DECAY2, //deprecated
	ITEM_ATTR_WEAPON2, //deprecated
	ITEM_ATTR_AMU2, //deprecated
	ITEM_ATTR_ARMOR2, //deprecated
	ITEM_ATTR_WRITEABLE2, //deprecated
	ITEM_ATTR_LIGHT2,
	ITEM_ATTR_TOPORDER,
	ITEM_ATTR_WRITEABLE3, //deprecated

	ITEM_ATTR_WAREID,

	ITEM_ATTR_LAST
};

enum ItemFlags_t {
	FLAG_BLOCK_SOLID = 1 << 0,
	FLAG_BLOCK_PROJECTILE = 1 << 1,
	FLAG_BLOCK_PATHFIND = 1 << 2,
	FLAG_HAS_HEIGHT = 1 << 3,
	FLAG_USEABLE = 1 << 4,
	FLAG_PICKUPABLE = 1 << 5,
	FLAG_MOVEABLE = 1 << 6,
	FLAG_STACKABLE = 1 << 7,
	FLAG_FLOORCHANGEDOWN = 1 << 8, // unused
	FLAG_FLOORCHANGENORTH = 1 << 9, // unused
	FLAG_FLOORCHANGEEAST = 1 << 10, // unused
	FLAG_FLOORCHANGESOUTH = 1 << 11, // unused
	FLAG_FLOORCHANGEWEST = 1 << 12, // unused
	FLAG_ALWAYSONTOP = 1 << 13,
	FLAG_READABLE = 1 << 14,
	FLAG_ROTATABLE = 1 << 15,
	FLAG_HANGABLE = 1 << 16,
	FLAG_VERTICAL = 1 << 17,
	FLAG_HORIZONTAL = 1 << 18,
	FLAG_CANNOTDECAY = 1 << 19, // unused
	FLAG_ALLOWDISTREAD = 1 << 20,
	FLAG_UNUSED = 1 << 21, // unused
	FLAG_CLIENTCHARGES = 1 << 22, /* deprecated */
	FLAG_LOOKTHROUGH = 1 << 23,
	FLAG_ANIMATION = 1 << 24,
	FLAG_FULLTILE = 1 << 25, // unused
	FLAG_FORCEUSE = 1 << 26,
	FLAG_WRAPCONTAINER = 1 << 27,
};

enum ItemTypes_t {
	ITEM_TYPE_NONE,
	ITEM_TYPE_DEPOT,
	ITEM_TYPE_MAILBOX,
	ITEM_TYPE_TRASHHOLDER,
	ITEM_TYPE_CONTAINER,
	ITEM_TYPE_DOOR,
	ITEM_TYPE_MAGICFIELD,
	ITEM_TYPE_TELEPORT,
	ITEM_TYPE_BED,
	ITEM_TYPE_KEY,
	ITEM_TYPE_RUNE,
	ITEM_TYPE_SUPPLY,
	ITEM_TYPE_REWARDCHEST,
	ITEM_TYPE_CARPET,
	ITEM_TYPE_CREATUREPRODUCT,
	ITEM_TYPE_FOOD,
	ITEM_TYPE_VALUABLE,
	ITEM_TYPE_POTION,

	ITEM_TYPE_ARMOR,
	ITEM_TYPE_AMULET,
	ITEM_TYPE_BOOTS,
	ITEM_TYPE_DECORATION,
	ITEM_TYPE_HELMET,
	ITEM_TYPE_LEGS,
	ITEM_TYPE_OTHER,
	ITEM_TYPE_RING,
	ITEM_TYPE_SHIELD,
	ITEM_TYPE_TOOLS,
	ITEM_TYPE_AMMO,
	ITEM_TYPE_AXE,
	ITEM_TYPE_CLUB,
	ITEM_TYPE_DISTANCE,
	ITEM_TYPE_SWORD,
	ITEM_TYPE_WAND,

	ITEM_TYPE_RETRIEVE,
	ITEM_TYPE_GOLD,
	ITEM_TYPE_UNASSIGNED,
	ITEM_TYPE_LAST,
};

enum TradeEvents_t {
	ON_TRADE_TRANSFER,
	ON_TRADE_CANCEL,
};

enum ItemDecayState_t : uint8_t {
	DECAYING_FALSE = 0,
	DECAYING_TRUE,
	DECAYING_PENDING,
};

enum AttrTypes_t {
	//ATTR_DESCRIPTION = 1,
	//ATTR_EXT_FILE = 2,
	ATTR_TILE_FLAGS = 3,
	ATTR_ACTION_ID = 4,
	ATTR_UNIQUE_ID = 5,
	ATTR_TEXT = 6,
	ATTR_DESC = 7,
	ATTR_TELE_DEST = 8,
	ATTR_ITEM = 9,
	ATTR_DEPOT_ID = 10,
	//ATTR_EXT_SPAWN_FILE = 11,
	ATTR_RUNE_CHARGES = 12,
	//ATTR_EXT_HOUSE_FILE = 13,
	ATTR_HOUSEDOORID = 14,
	ATTR_COUNT = 15,
	ATTR_DURATION = 16,
	ATTR_DECAYING_STATE = 17,
	ATTR_WRITTENDATE = 18,
	ATTR_WRITTENBY = 19,
	ATTR_SLEEPERGUID = 20,
	ATTR_SLEEPSTART = 21,
	ATTR_CHARGES = 22,
	ATTR_CONTAINER_ITEMS = 23,
	ATTR_NAME = 24,
	ATTR_ARTICLE = 25,
	ATTR_PLURALNAME = 26,
	ATTR_WEIGHT = 27,
	ATTR_ATTACK = 28,
	ATTR_DEFENSE = 29,
	ATTR_EXTRADEFENSE = 30,
	ATTR_ARMOR = 31,
	ATTR_HITCHANCE = 32,
	ATTR_SHOOTRANGE = 33,
	ATTR_SPECIAL = 34,
	ATTR_IMBUINGSLOTS = 35,
	ATTR_OPENCONTAINER = 36,
	ATTR_CUSTOM_ATTRIBUTES = 37,

	ATTR_QUICKLOOTCONTAINER = 38
};

enum SlotPositionBits : uint32_t {
	SLOTP_WHEREEVER = 0xFFFFFFFF,
	SLOTP_HEAD = 1 << 0,
	SLOTP_NECKLACE = 1 << 1,
	SLOTP_BACKPACK = 1 << 2,
	SLOTP_ARMOR = 1 << 3,
	SLOTP_RIGHT = 1 << 4,
	SLOTP_LEFT = 1 << 5,
	SLOTP_LEGS = 1 << 6,
	SLOTP_FEET = 1 << 7,
	SLOTP_RING = 1 << 8,
	SLOTP_AMMO = 1 << 9,
	SLOTP_DEPOT = 1 << 10,
	SLOTP_TWO_HAND = 1 << 11,
	SLOTP_HAND = (SLOTP_LEFT | SLOTP_RIGHT)
};

enum ItemAttrTypes : uint32_t {
	ITEM_ATTRIBUTE_NONE,

	ITEM_ATTRIBUTE_ACTIONID = 1 << 0,
	ITEM_ATTRIBUTE_UNIQUEID = 1 << 1,
	ITEM_ATTRIBUTE_DESCRIPTION = 1 << 2,
	ITEM_ATTRIBUTE_TEXT = 1 << 3,
	ITEM_ATTRIBUTE_DATE = 1 << 4,
	ITEM_ATTRIBUTE_WRITER = 1 << 5,
	ITEM_ATTRIBUTE_NAME = 1 << 6,
	ITEM_ATTRIBUTE_ARTICLE = 1 << 7,
	ITEM_ATTRIBUTE_PLURALNAME = 1 << 8,
	ITEM_ATTRIBUTE_WEIGHT = 1 << 9,
	ITEM_ATTRIBUTE_ATTACK = 1 << 10,
	ITEM_ATTRIBUTE_DEFENSE = 1 << 11,
	ITEM_ATTRIBUTE_EXTRADEFENSE = 1 << 12,
	ITEM_ATTRIBUTE_ARMOR = 1 << 13,
	ITEM_ATTRIBUTE_HITCHANCE = 1 << 14,
	ITEM_ATTRIBUTE_SHOOTRANGE = 1 << 15,
	ITEM_ATTRIBUTE_OWNER = 1 << 16,
	ITEM_ATTRIBUTE_DURATION = 1 << 17,
	ITEM_ATTRIBUTE_DECAYSTATE = 1 << 18,
	ITEM_ATTRIBUTE_CORPSEOWNER = 1 << 19,
	ITEM_ATTRIBUTE_CHARGES = 1 << 20,
	ITEM_ATTRIBUTE_FLUIDTYPE = 1 << 21,
	ITEM_ATTRIBUTE_DOORID = 1 << 22,
	ITEM_ATTRIBUTE_SPECIAL = 1 << 23,
	ITEM_ATTRIBUTE_IMBUINGSLOTS = 1 << 24,
	ITEM_ATTRIBUTE_OPENCONTAINER = 1 << 25,
	ITEM_ATTRIBUTE_QUICKLOOTCONTAINER = 1 << 26,
	ITEM_ATTRIBUTE_CUSTOM = 1U << 31
};

enum TileFlags_t : uint32_t {
	TILESTATE_NONE = 0,

	TILESTATE_FLOORCHANGE_DOWN = 1 << 0,
	TILESTATE_FLOORCHANGE_NORTH = 1 << 1,
	TILESTATE_FLOORCHANGE_SOUTH = 1 << 2,
	TILESTATE_FLOORCHANGE_EAST = 1 << 3,
	TILESTATE_FLOORCHANGE_WEST = 1 << 4,
	TILESTATE_FLOORCHANGE_SOUTH_ALT = 1 << 5,
	TILESTATE_FLOORCHANGE_EAST_ALT = 1 << 6,
	TILESTATE_PROTECTIONZONE = 1 << 7,
	TILESTATE_NOPVPZONE = 1 << 8,
	TILESTATE_NOLOGOUT = 1 << 9,
	TILESTATE_PVPZONE = 1 << 10,
	TILESTATE_TELEPORT = 1 << 11,
	TILESTATE_MAGICFIELD = 1 << 12,
	TILESTATE_MAILBOX = 1 << 13,
	TILESTATE_TRASHHOLDER = 1 << 14,
	TILESTATE_BED = 1 << 15,
	TILESTATE_DEPOT = 1 << 16,
	TILESTATE_BLOCKSOLID = 1 << 17,
	TILESTATE_BLOCKPATH = 1 << 18,
	TILESTATE_IMMOVABLEBLOCKSOLID = 1 << 19,
	TILESTATE_IMMOVABLEBLOCKPATH = 1 << 20,
	TILESTATE_IMMOVABLENOFIELDBLOCKPATH = 1 << 21,
	TILESTATE_NOFIELDBLOCKPATH = 1 << 22,
	TILESTATE_SUPPORTS_HANGABLE = 1 << 23,

	TILESTATE_FLOORCHANGE = TILESTATE_FLOORCHANGE_DOWN |
                            TILESTATE_FLOORCHANGE_NORTH |
                            TILESTATE_FLOORCHANGE_SOUTH |
                            TILESTATE_FLOORCHANGE_EAST |
                            TILESTATE_FLOORCHANGE_WEST |
                            TILESTATE_FLOORCHANGE_SOUTH_ALT |
                            TILESTATE_FLOORCHANGE_EAST_ALT,
};

enum ZoneType_t {
	ZONE_PROTECTION,
	ZONE_NOPVP,
	ZONE_PVP,
	ZONE_NOLOGOUT,
	ZONE_NORMAL,
};

enum CylinderFlags_t {
	FLAG_NOLIMIT = 1 << 0, //Bypass limits like capacity/container limits, blocking items/creatures etc.
	FLAG_IGNOREBLOCKITEM = 1 << 1, //Bypass movable blocking item checks
	FLAG_IGNOREBLOCKCREATURE = 1 << 2, //Bypass creature checks
	FLAG_CHILDISOWNER = 1 << 3, //Used by containers to query capacity of the carrier (player)
	FLAG_PATHFINDING = 1 << 4, //An additional check is done for floor changing/teleport items
	FLAG_IGNOREFIELDDAMAGE = 1 << 5, //Bypass field damage checks
	FLAG_IGNORENOTMOVEABLE = 1 << 6, //Bypass check for mobility
	FLAG_IGNOREAUTOSTACK = 1 << 7, //queryDestination will not try to stack items together
};

enum CylinderLink_t {
	LINK_OWNER,
	LINK_PARENT,
	LINK_TOPPARENT,
	LINK_NEAR,
};

enum ItemParseAttributes_t {
	ITEM_PARSE_TYPE,
	ITEM_PARSE_DESCRIPTION,
	ITEM_PARSE_RUNESPELLNAME,
	ITEM_PARSE_WEIGHT,
	ITEM_PARSE_SHOWCOUNT,
	ITEM_PARSE_ARMOR,
	ITEM_PARSE_DEFENSE,
	ITEM_PARSE_EXTRADEF,
	ITEM_PARSE_ATTACK,
	ITEM_PARSE_ROTATETO,
	ITEM_PARSE_WRAPCONTAINER,
	ITEM_PARSE_IMBUINGSLOT,
	ITEM_PARSE_WRAPABLETO,
	ITEM_PARSE_MOVEABLE,
	ITEM_PARSE_PODIUM,
	ITEM_PARSE_BLOCKPROJECTILE,
	ITEM_PARSE_PICKUPABLE,
	ITEM_PARSE_FLOORCHANGE,
	ITEM_PARSE_CORPSETYPE,
	ITEM_PARSE_CONTAINERSIZE,
	ITEM_PARSE_FLUIDSOURCE,
	ITEM_PARSE_READABLE,
	ITEM_PARSE_WRITEABLE,
	ITEM_PARSE_MAXTEXTLEN,
	ITEM_PARSE_WRITEONCEITEMID,
	ITEM_PARSE_WEAPONTYPE,
	ITEM_PARSE_SLOTTYPE,
	ITEM_PARSE_AMMOTYPE,
	ITEM_PARSE_SHOOTTYPE,
	ITEM_PARSE_EFFECT,
	ITEM_PARSE_LOOTTYPE,
	ITEM_PARSE_RANGE,
	ITEM_PARSE_STOPDURATION,
	ITEM_PARSE_DECAYTO,
	ITEM_PARSE_TRANSFORMEQUIPTO,
	ITEM_PARSE_TRANSFORMDEEQUIPTO,
	ITEM_PARSE_DURATION,
	ITEM_PARSE_SHOWDURATION,
	ITEM_PARSE_CHARGES,
	ITEM_PARSE_SHOWCHARGES,
	ITEM_PARSE_SHOWATTRIBUTES,
	ITEM_PARSE_HITCHANCE,
	ITEM_PARSE_MAXHITCHANCE,
	ITEM_PARSE_INVISIBLE,
	ITEM_PARSE_SPEED,
	ITEM_PARSE_HEALTHGAIN,
	ITEM_PARSE_HEALTHTICKS,
	ITEM_PARSE_MANAGAIN,
	ITEM_PARSE_MANATICKS,
	ITEM_PARSE_MANASHIELD,
	ITEM_PARSE_SKILLSWORD,
	ITEM_PARSE_SKILLAXE,
	ITEM_PARSE_SKILLCLUB,
	ITEM_PARSE_SKILLDIST,
	ITEM_PARSE_SKILLFISH,
	ITEM_PARSE_SKILLSHIELD,
	ITEM_PARSE_SKILLFIST,
	ITEM_PARSE_CRITICALHITCHANCE,
	ITEM_PARSE_CRITICALHITAMOUNT,
	ITEM_PARSE_CRITICALHITDAMAGE,
	ITEM_PARSE_LIFELEECHCHANCE,
	ITEM_PARSE_LIFELEECHAMOUNT,
	ITEM_PARSE_MANALEECHCHANCE,
	ITEM_PARSE_MANALEECHAMOUNT,
	ITEM_PARSE_MAXHITPOINTS,
	ITEM_PARSE_MAXHITPOINTSPERCENT,
	ITEM_PARSE_MAXMANAPOINTS,
	ITEM_PARSE_MAXMANAPOINTSPERCENT,
	ITEM_PARSE_MAGICPOINTS,
	ITEM_PARSE_MAGICPOINTSPERCENT,
	ITEM_PARSE_FIELDABSORBPERCENTENERGY,
	ITEM_PARSE_FIELDABSORBPERCENTFIRE,
	ITEM_PARSE_FIELDABSORBPERCENTPOISON,
	ITEM_PARSE_ABSORBPERCENTALL,
	ITEM_PARSE_ABSORBPERCENTELEMENTS,
	ITEM_PARSE_ABSORBPERCENTMAGIC,
	ITEM_PARSE_ABSORBPERCENTENERGY,
	ITEM_PARSE_ABSORBPERCENTFIRE,
	ITEM_PARSE_ABSORBPERCENTPOISON,
	ITEM_PARSE_ABSORBPERCENTICE,
	ITEM_PARSE_ABSORBPERCENTHOLY,
	ITEM_PARSE_ABSORBPERCENTDEATH,
	ITEM_PARSE_ABSORBPERCENTLIFEDRAIN,
	ITEM_PARSE_ABSORBPERCENTMANADRAIN,
	ITEM_PARSE_ABSORBPERCENTDROWN,
	ITEM_PARSE_ABSORBPERCENTPHYSICAL,
	ITEM_PARSE_ABSORBPERCENTHEALING,
	ITEM_PARSE_SUPPRESSDRUNK,
	ITEM_PARSE_SUPPRESSENERGY,
	ITEM_PARSE_SUPPRESSFIRE,
	ITEM_PARSE_SUPPRESSPOISON,
	ITEM_PARSE_SUPPRESSDROWN,
	ITEM_PARSE_SUPPRESSPHYSICAL,
	ITEM_PARSE_SUPPRESSFREEZE,
	ITEM_PARSE_SUPPRESSDAZZLE,
	ITEM_PARSE_SUPPRESSCURSE,
	ITEM_PARSE_FIELD,
	ITEM_PARSE_REPLACEABLE,
	ITEM_PARSE_PARTNERDIRECTION,
	ITEM_PARSE_LEVELDOOR,
	ITEM_PARSE_MALETRANSFORMTO,
	ITEM_PARSE_FEMALETRANSFORMTO,
	ITEM_PARSE_TRANSFORMTO,
	ITEM_PARSE_DESTROYTO,
	ITEM_PARSE_ELEMENTICE,
	ITEM_PARSE_ELEMENTEARTH,
	ITEM_PARSE_ELEMENTFIRE,
	ITEM_PARSE_ELEMENTENERGY,
	ITEM_PARSE_ELEMENTDEATH,
	ITEM_PARSE_ELEMENTHOLY,
	ITEM_PARSE_WALKSTACK,
	ITEM_PARSE_BLOCK_SOLID,
	ITEM_PARSE_ALLOWDISTREAD,
};

#endif  // SRC_ITEMS_ITEMS_DEFINITIONS_HPP_
