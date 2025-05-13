class CfgPatches
{
	class PUP_UM_B
	{
        name = "bags";
		author = "Pup";
		requiredVersion = 1.88;
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
		units[] = {};
	};
};  
class CfgVehicles
{
	class B_AssaultPack_Kerry;
	class Bag_Base;
    class Weapon_Bag_Base: Bag_Base
    {
     class assembleInfo;
    };
	class PUP_AP_5_pack: Weapon_Bag_Base
   {
    mapSize = 0.6;
    scope = 2;
    scopeCurator =2;
    displayName = "UAV Bag (AP-5, Sand) [USMC]";
    model = "\lxWS\air_f_lxWS\Bags\UAV_backpack_lxWS.p3d";
    editorCategory = EdCat_Equipment;
    editorSubcategory = EdSubcat_Backpacks;
    picture = "\lxWS\air_f_lxWS\Data\UI\icon_B_UAV_02_backpack_lxWS_CA.paa";
    hiddenSelectionsTextures[] = {"\lxWS\air_f_lxWS\Bags\Data\UAV_backpack_NATO_CO.paa"};
    maximumLoad = 0;
    mass = 400;
    class assembleInfo: assembleInfo
    {
        base = "";
        displayName = "AP-5 Stinger";
        assembleTo = "PUP_UMD_AP_5_Stinger";
    };
   };
	class PUP_UM_B_AssaultPack_F: B_AssaultPack_Kerry
    {
     author = "Pup";
	 scope = 2;
     picture = "\A3_Aegis\Supplies_F_Aegis\Bags\Data\UI\icon_B_AssaultPackSpec_cbr_CA.paa";
     displayName = "Assault Pack [USMC] (Coyote)";
     hiddenSelectionsTextures[] = 
        {
            "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_compact_cbr_CO.paa",
            "\UM_Backpacks\data\textures\UM_V_cbr.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\UM_Backpacks\data\textures\B_CombatPack.rvmat",
			"\A3\Characters_F\BLUFOR\Data\vests.rvmat"
        };
    };
};