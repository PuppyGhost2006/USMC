class CfgPatches
{
	class PUP_UM_H
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
			"PUP_UM_H_Opscore",
            "PUP_UM_H_Opscore2",
			"PUP_UM_H_Opscore3",
			"PUP_UM_H_Opscore4"
		};
		weapons[]=
		{
			"PUP_UM_H_Opscore",
            "PUP_UM_H_Opscore2",
			"PUP_UM_H_Opscore3",
			"PUP_UM_H_Opscore4"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class PUP_UM_H_Opscore: ItemCore
	{
		author = "Pup";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Operator Helmet [USMC] (Cover, MARPAT-W)";
		picture = "\UM_Headgear\data\UI\Wdl_cover.paa";
		model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetFASTMT_Cover_F";
		hiddenSelections[] = { "camo1","camo2","camo"};
		hiddenSelectionsTextures[] =
        { 

        "\UM_Headgear\data\textures\H_HelmetFASTMT_Cover_MARPAT.paa",
		"\UM_Headgear\data\textures\H_HeadsetWest_tan_CO.paa",
		"\UM_Headgear\data\textures\H_HelmetFASTMT_cbr.paa"

        };
		class ItemInfo : HeadgearItem
		{
			mass = 30;
			uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetFASTMT_Cover_F";
			modelSides[] = {0,1,2,3,4,5,6,7};
			hiddenSelections[] = { "camo1","camo2","camo"};

			// if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well.
			// Currently works only for Headgear + NVG + Radio item combinations.
			// subItems[] = { "Integrated_NVG_F" };

			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
    };
    class PUP_UM_H_Opscore2: ItemCore
	{
		author = "Pup";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Operator Helmet [USMC] (Cover, MARPAT-D)";
		picture = "\UM_Headgear\data\UI\Des_cover.paa";
		model = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetFASTMT_Cover_F";
		hiddenSelections[] = { "camo1","camo2","camo"};
		hiddenSelectionsTextures[] =
        { 

        "\UM_Headgear\data\textures\H_HelmetFASTMT_Cover_MARPAT-D.paa",
		"\UM_Headgear\data\textures\H_HeadsetWest_tan_CO.paa",
		"\UM_Headgear\data\textures\H_HelmetFASTMT_cbr.paa"

        };
		class ItemInfo : HeadgearItem
		{
			mass = 30;
			uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\H_HelmetFASTMT_Cover_F";
			modelSides[] = {0,1,2,3,4,5,6,7};
			hiddenSelections[] = { "camo1","camo2","camo"};

			// if defined, this headgear item gains functionality (visual modes) of given NVG item and will occupy its slot as well.
			// Currently works only for Headgear + NVG + Radio item combinations.
			// subItems[] = { "Integrated_NVG_F" };

			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
    };
	class PUP_UM_H_Booniehat_W: ItemCore 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Booniehat (MARPAT-W)";
        picture = "\UM_Headgear\data\UI\icon_H_Booniehat_wdl_ca.paa";
        model = "\A3\Characters_F\Common\booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\UM_Headgear\data\textures\booniehat_woodland_co.paa"};
        class ItemInfo: HeadgearItem {
            mass = 5;
            uniformModel = "\A3\Characters_F\Common\booniehat";
            hiddenSelections[] = {"camo"};
            allowedSlots[] = {901};
            modelSides[] = {0,1,2,3,4,5,6,7};
            armor = 0;
            passThrough = 0.8;
            hiddenSelectionsTextures[] = {"\UM_Headgear\data\textures\booniehat_woodland_co.paa"};
        };
    };
	class PUP_UM_H_Booniehat_D: ItemCore 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Booniehat (MARPAT-D)";
        picture = "\UM_Headgear\data\UI\icon_H_Booniehat_des_ca.paa";
        model = "\A3\Characters_F\Common\booniehat";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\UM_Headgear\data\textures\booniehat_desert_co.paa"};
        class ItemInfo: HeadgearItem {
            mass = 5;
            uniformModel = "\A3\Characters_F\Common\booniehat";
            hiddenSelections[] = {"camo"};
            allowedSlots[] = {901};
            modelSides[] = {0,1,2,3,4,5,6,7};
            armor = 0;
            passThrough = 0.8;
            hiddenSelectionsTextures[] = {"\UM_Headgear\data\textures\booniehat_desert_co.paa"};
        };
    };
	class PUP_UM_H_Booniehat_W_hs: ItemCore 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Booniehat (Headset, MARPAT-W)";
        picture = "\UM_Headgear\data\UI\icon_H_Booniehat_wdl_hs_ca.paa";
        model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\UM_Headgear\data\textures\booniehat_woodland_co.paa"};
        class ItemInfo: HeadgearItem {
            mass = 5;
            uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
            hiddenSelections[] = {"camo"};
            allowedSlots[] = {901};
            modelSides[] = {0,1,2,3,4,5,6,7};
            armor = 0;
            passThrough = 0.8;
            hiddenSelectionsTextures[] = {"\UM_Headgear\data\textures\booniehat_woodland_co.paa"};
        };
    };
	class PUP_UM_H_Booniehat_D_hs: ItemCore 
	{
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Booniehat (Headset, MARPAT-D)";
        picture = "\UM_Headgear\data\UI\icon_H_Booniehat_Des_hs_ca.paa";
        model = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\UM_Headgear\data\textures\booniehat_desert_co.paa"};
        class ItemInfo: HeadgearItem {
            mass = 5;
            uniformModel = "\A3\Characters_F_EPB\Common\booniehat_hs.p3d";
            hiddenSelections[] = {"camo"};
            allowedSlots[] = {901};
            modelSides[] = {0,1,2,3,4,5,6,7};
            armor = 0;
            passThrough = 0.8;
            hiddenSelectionsTextures[] = {"\UM_Headgear\data\textures\booniehat_desert_co.paa"};
        };
    };
};  