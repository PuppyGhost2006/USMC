class CfgPatches
{
	class PUP_UM_Cap_Military_F
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
			"PUP_UM_Cap_Military_woodland_F",
			"PUP_UM_Cap_Military_desert_F"
		};
		weapons[]=
		{
			"PUP_UM_Cap_Military_woodland_F",
			"PUP_UM_Cap_Military_desert_F"
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
	class PUP_UM_Cap_Military_base_F: HelmetBase
	{
		author="Pup";
		_generalMacro="PUP_UM_Cap_Military_base_F";
		scope=1;
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_ocamo_ca.paa";
		model="\UM_Headgear\H_Cap_Military_F\H_Cap_Military_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={901,701,605};
			uniformModel="\UM_Headgear\H_Cap_Military_F\H_Cap_Military_F.p3d";
			modelSides[]={1,2,3,4,5,6,7};
		};
	};
	class PUP_UM_Cap_Military_woodland_F: PUP_UM_Cap_Military_base_F
	{
		author="Pup";
		_generalMacro="PUP_UM_Cap_Military_woodland_F";
		scope=2;
		displayName="Field Cap (MARPAT-W)";
		picture = "\UM_Headgear\data\UI\icon_H_MilCap_wdl_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"UM_Headgear\data\textures\H_Cap_Military_woodland_CO.paa"
		};
	};
	class PUP_UM_Cap_Military_desert_F: PUP_UM_Cap_Military_base_F
	{
		author="Pup";
		_generalMacro="PUP_UM_Cap_Military_desert_F";
		scope=2;
		displayName="Field Cap (MARPAT-D)";
		picture = "\UM_Headgear\data\UI\icon_H_MilCap_des_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"UM_Headgear\data\textures\H_Cap_Military_desert_CO.paa"
		};
	};
};