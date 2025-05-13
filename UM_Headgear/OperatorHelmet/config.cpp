class CfgPatches
{
	class PUP_H_HelmetFASTMT_Cover_F
	{
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_epa",
			"A3_Characters_F_epb",
			"A3_Characters_F_epc",
			"A3_Characters_F_exp",
			"A3_Characters_F_beta",
			"A3_Characters_F_kart",
			"A3_Characters_F_mark",
			"A3_Characters_F_jets",
			"A3_Characters_F_tank",
			"A3_Characters_F_gamma",
			"A3_Characters_F_enoch",
			"A3_Characters_F_oldman",
			"A3_Characters_F_orange",
			"A3_Characters_F_tacops",
			"A3_Characters_F_bootcamp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"PUP_H_HelmetFASTMT_Cover_woodland_F",
			"PUP_H_HelmetFASTMT_Cover_desert_F",
			"PUP_H_HelmetFASTMT_FAST_desert_F",
			"PUP_H_HelmetFASTMT_FAST_woodland_F"
		};
		weapons[]=
		{
			"PUP_H_HelmetFASTMT_Cover_woodland_F",
			"PUP_H_HelmetFASTMT_Cover_desert_F",
			"PUP_H_HelmetFASTMT_FAST_desert_F",
			"PUP_H_HelmetFASTMT_FAST_woodland_F"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class HelmetBase: ItemCore
	{
		class ItemInfo: HeadgearItem{};
	};
	class PUP_H_HelmetFASTMT_Cover_base_F: HelmetBase
	{
		author="Pup";
		_generalMacro="PUP_H_HelmetFASTMT_Cover_base_F";
		scope=1;
		picture="\A3_Aegis\characters_f_aegis\Headgear\Data\UI\Aegis_H_Helmet_FASTMT_Cover_tan_F_ca.paa";
		model="\UM_Headgear\OperatorHelmet\PUP_H_HelmetFASTMT_Cover_F.p3d";
		descriptionShort="$STR_A3_SP_AL_II";
		class ItemInfo: HeadgearItem
        {
            mass = 25;
            hiddenSelections[] = {"camo","camo1"};
            uniformModel = "\UM_Headgear\OperatorHelmet\PUP_H_HelmetFASTMT_Cover_F.p3d";
            modelSides[] =
            {
                TWest,
                TCivilian
            };
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = HitHead;
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
	};
	class PUP_H_HelmetFASTMT_FAST_base_F: HelmetBase
	{
		author="Pup";
		_generalMacro="PUP_H_HelmetFASTMT_FAST_base_F";
		scope=1;
		picture="\A3_Aegis\characters_f_aegis\Headgear\Data\UI\Aegis_H_Helmet_FASTMT_Cover_tan_F_ca.paa";
		model="\UM_Headgear\OperatorHelmet\PUP_H_HelmetFASTMT_FAST_F.p3d";
		descriptionShort="$STR_A3_SP_AL_II";
		class ItemInfo: HeadgearItem
        {
            mass = 30;
            hiddenSelections[] = {"camo","camo1"};
            uniformModel = "\UM_Headgear\OperatorHelmet\PUP_H_HelmetFASTMT_FAST_F.p3d";
            modelSides[] =
            {
                TWest,
                TCivilian
            };
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = HitHead;
                    armor = 6;
                    passThrough = 0.5;
                };
            };
        };
	};
	class PUP_H_HelmetFASTMT_FAST_woodland_F: PUP_H_HelmetFASTMT_FAST_base_F
	{
		author="Pup";
		_generalMacro="PUP_H_HelmetFASTMT_FAST_woodland_F";
		scope=2;
		displayName="Operator Helmet [USMC] (FAST, MARPAT-W)";
		picture="\UM_Headgear\data\UI\Wdl.paa";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
        { 
		"\UM_Headgear\data\textures\H_HelmetFASTMT_cbr.paa",
		"\UM_Headgear\data\textures\H_HelmetFASTMT_Cover_MARPAT.paa"
        };
	};
	class PUP_H_HelmetFASTMT_FAST_desert_F: PUP_H_HelmetFASTMT_FAST_base_F
	{
		author="Pup";
		_generalMacro="PUP_H_HelmetFASTMT_FAST_desert_F";
		scope=2;
		displayName="Operator Helmet [USMC] (FAST, MARPAT-D)";
		picture="\UM_Headgear\data\UI\Des.paa";
		hiddenSelections[] = { "camo","camo1"};
		hiddenSelectionsTextures[] =
        { 
		"\UM_Headgear\data\textures\H_HelmetFASTMT_cbr.paa",
		"\UM_Headgear\data\textures\H_HelmetFASTMT_Cover_MARPAT-D.paa"
        };
	};
	class PUP_H_HelmetFASTMT_Cover_woodland_F: PUP_H_HelmetFASTMT_Cover_base_F
	{
		author="Pup";
		_generalMacro="PUP_H_HelmetFASTMT_Cover_woodland_F";
		scope=2;
		displayName="Operator Helmet [USMC] (Light, MARPAT-W)";
		picture="\UM_Headgear\data\UI\Wdl.paa";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] =
        { 
		"\UM_Headgear\data\textures\H_HelmetFASTMT_cbr.paa",
		"\UM_Headgear\data\textures\H_HelmetFASTMT_Cover_MARPAT.paa"
        };
	};
	class PUP_H_HelmetFASTMT_Cover_desert_F: PUP_H_HelmetFASTMT_Cover_base_F
	{
		author="Pup";
		_generalMacro="PUP_H_HelmetFASTMT_Cover_desert_F";
		scope=2;
		displayName="Operator Helmet [USMC] (Light, MARPAT-D)";
		picture="\UM_Headgear\data\UI\Des.paa";
		hiddenSelections[] = { "camo","camo1"};
		hiddenSelectionsTextures[] =
        { 
		"\UM_Headgear\data\textures\H_HelmetFASTMT_cbr.paa",
		"\UM_Headgear\data\textures\H_HelmetFASTMT_Cover_MARPAT-D.paa"
        };
	};
};