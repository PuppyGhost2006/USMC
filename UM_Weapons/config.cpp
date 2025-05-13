class CfgPatches
{
	class PUP_UM_Weapons_MX_F
	{
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_epa",
			"A3_Weapons_F_epb",
			"A3_Weapons_F_epc",
			"A3_Weapons_F_beta",
			"A3_Weapons_F_gamma",
			"A3_Weapons_F_exp",
			"A3_Weapons_F_tank",
			"A3_Weapons_F_jets",
			"A3_Weapons_F_mark",
			"A3_Weapons_F_orange",
			"A3_Weapons_F_enoch"
		};
		requiredVersion=0.1;
		units[]=
		{
			"PUP_UM_Weapon_arifle_MX_F",
			"PUP_UM_Weapon_arifle_MXGL_F"
		};
		weapons[]=
		{
			"PUP_UM_arifle_MX_F",
			"PUP_UM_arifle_MX_GL_F"
		};
	};
};
class CfgWeapons
{
	class arifle_MX_F;
	class arifle_MX_GL_F;
	class PUP_UM_arifle_MX_F: arifle_MX_F
	{
		author="Pup";
		_generalMacro="PUP_UM_arifle_MX_F";
		baseWeapon="PUP_UM_arifle_MX_F";
		scope=2;
		displayName="MX 6.5 mm (Black/Sand)";
		picture = "\A3\weapons_F\Rifles\MX\data\UI\gear_mx_rifle_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\UM_Weapons\data\textures\arifle_MX_snd.paa",
			"\UM_Weapons\data\textures\arifle_MXC_snd.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
            "\UM_Weapons\data\textures\arifle_MX.rvmat",
            "\UM_Weapons\data\textures\arifle_MXC.rvmat"
	    };
		magazineWell[] = 
        {
            "MX_65x39",
            "MX_65x39_Large"
        };
	};
	class PUP_UM_arifle_MXGL_F: arifle_MX_GL_F
	{
		author="Pup";
		_generalMacro="PUP_UM_arifle_MXGL_F";
		baseWeapon="PUP_UM_arifle_MXGL_F";
		scope=2;
		displayName="MX 3GL 6.5 mm (Black/Sand)";
		picture = "\A3\weapons_F\Rifles\MX\data\UI\gear_mx_rifle_gl_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\UM_Weapons\data\textures\arifle_MX_snd.paa",
			"\UM_Weapons\data\textures\arifle_MXGL_blk.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
            "\UM_Weapons\data\textures\arifle_MX.rvmat",
            "\UM_Weapons\data\textures\arifle_MXGL.rvmat"
	    };
		magazineWell[] = 
        {
            "MX_65x39",
            "MX_65x39_Large"
        };
	};
};