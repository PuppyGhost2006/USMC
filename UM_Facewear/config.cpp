class CfgPatches
{
	class PUP_UM_F
	{
        name = "facewear";
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
class CfgWeapons
{
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
class PUP_UM_TAC_G_N: NVGoggles
{
    author = "Pup";
    displayName = "Tactical Goggles (Clear)";
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
    hiddenSelections[]=
        {
            "camo"
        };
    hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\TAC_G_C.paa"};
    model = "\lxws\characters_f_lxws\headgear\pmc\goggles_tactical_lxws.p3d";
    picture = "\lxws\characters_f_lxws\headgear\pmc\data\ui\gear_x_combat_CA.paa";
    visionMode[] = {Normal};
    class ItemInfo: ItemInfo
    {
        uniformModel = "\lxws\characters_f_lxws\headgear\pmc\goggles_tactical_lxws.p3d";
        modelOff = "\lxws\characters_f_lxws\headgear\pmc\goggles_tactical_lxws.p3d";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\TAC_G_C.paa"};
        mass = 2;
    };
};
class PUP_UM_TAC_G2_N: NVGoggles
{
    author = "Pup";
    displayName = "Tactical Goggles (Tinted)";
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
    hiddenSelections[]=
        {
            "camo"
        };
    hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\TAC_G.paa"};
    model = "\lxws\characters_f_lxws\headgear\pmc\goggles_tactical_lxws.p3d";
    picture = "\lxws\characters_f_lxws\headgear\pmc\data\ui\gear_x_combat_CA.paa";
    visionMode[] = {Normal};
    class ItemInfo: ItemInfo
    {
        uniformModel = "\lxws\characters_f_lxws\headgear\pmc\goggles_tactical_lxws.p3d";
        modelOff = "\lxws\characters_f_lxws\headgear\pmc\goggles_tactical_lxws.p3d";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\TAC_G.paa"};
        mass = 2;
    };
};
class PUP_UM_G_Headset_Tactical: NVGoggles
{
    author = "Pup";
    displayName = "Tactical Headset (Black)";
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
    hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_blk_CO.paa"
		};
    model="\A3_Aegis\Characters_F_Aegis\Headgear\H_Headset_Tactical.p3d";
    picture="\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headset_light_CA.paa";
    visionMode[] = {Normal};
    class ItemInfo: ItemInfo
    {
        uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Headset_Tactical.p3d";
        modelOff = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Headset_Tactical.p3d";
        hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		descriptionShort="$STR_A3_SP_noarmor";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_blk_CO.paa"
		};
        mass = 6;
    };
};
class PUP_UM_G_Headset_Tactical_khk: NVGoggles
{
    author = "Pup";
    displayName = "Tactical Headset (Khaki)";
    modelOptics = "\A3\Weapons_F\Reticle\optics_empty.p3d";
    hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa"
		};
    model="\A3_Aegis\Characters_F_Aegis\Headgear\H_Headset_Tactical.p3d";
    picture="\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_Headset_light_CA.paa";
    visionMode[] = {Normal};
    class ItemInfo: ItemInfo
    {
        uniformModel = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Headset_Tactical.p3d";
        modelOff = "\A3_Aegis\Characters_F_Aegis\Headgear\H_Headset_Tactical.p3d";
        hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		descriptionShort="$STR_A3_SP_noarmor";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_Headset_Tactical_khk_CO.paa"
		};
        mass = 6;
    };
};
};
class CfgGlasses
{
	class G_Combat_LxWS;
    class None;
	class G_Shades_Black;
	class G_Shades_Blue;
	class G_Shades_Green;
	class G_Shades_Red;
	class G_Tactical_Clear;
	class G_Tactical_Black;
	class Aegis_G_Condor_EyePro_F;
	class PUP_Aegis_G_Condor_EyePro_F: Aegis_G_Condor_EyePro_F
	{
		_generalMacro="PUP_Aegis_G_Condor_EyePro_F";
		author="Pup";
		identityTypes[]=
		{
			"G_USMC",
			20
		};
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
	};
	class PUP_None: None
	{
		author="Pup";
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
	};
	class PUP_G_Tactical_Clear: G_Tactical_Clear
	{
		_generalMacro="PUP_G_Tactical_Clear";
		author="Pup";
		identityTypes[]=
		{
			"G_USMC",
			20
		};
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
	};
	class PUP_G_Tactical_Black: G_Tactical_Black
	{
		_generalMacro="PUP_G_Tactical_Black";
		author="Pup";
		identityTypes[]=
		{
			"G_USMC",
			20
		};
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
	};
	class PUP_G_Shades_Black: G_Shades_Black
	{
		_generalMacro="PUP_G_Shades_Black";
		author="Pup";
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
	};
	class PUP_G_Shades_Blue: G_Shades_Blue
	{
		_generalMacro="PUP_G_Shades_Blue";
		author="Pup";
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
	};
	class PUP_G_Shades_Green: G_Shades_Green
	{
		_generalMacro="PUP_G_Shades_Green";
		author="Pup";
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
	};
	class PUP_G_Shades_Red: G_Shades_Red
	{
		_generalMacro="PUP_G_Shades_Red";
		author="Pup";
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
	};
    class PUP_UM_TAC_G: G_Combat_LxWS
    {
        author ="Pup";
        displayName = "Tactical Goggles (Clear)";
        picture = "\lxws\characters_f_lxws\headgear\pmc\data\ui\gear_x_combat_CA.paa";
        hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\TAC_G_C.paa"};
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		mass = 2;
		mode = 4;
    };
	class PUP_UM_TAC_G2: G_Combat_LxWS
    {
        author ="Pup";
        displayName = "Tactical Goggles (Tinted)";
        picture = "\lxws\characters_f_lxws\headgear\pmc\data\ui\gear_x_combat_CA.paa";
        hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\TAC_G.paa"};
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		mass = 2;
		mode = 4;
    };
    class PUP_G_Shemag_khk: None
	{
		author = "Pup";
		displayName = "Shemagh (Khaki)";
		model = "\UM_Facewear\Shemagh\PUP_G_Shemagh_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_khk_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\Shemag_khk_CO.paa"};
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		mass = 8;
	};
    class PUP_G_Shemag_blk: PUP_G_Shemag_khk
	{
		author = "Pup";
		displayName = "Shemagh (Black)";
		model = "\UM_Facewear\Shemagh\PUP_G_Shemagh_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_khk_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\G_Shemagh_blk_CO.paa"};
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		mass = 8;
	};
    class PUP_G_Shemag_red: PUP_G_Shemag_khk
	{
		author = "Pup";
		displayName = "Shemagh (Red)";
		model = "\UM_Facewear\Shemagh\PUP_G_Shemagh_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_red_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\Shemag_red_CO.paa"};
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		mass = 8;
	};
    class PUP_G_Shemag_tan: PUP_G_Shemag_khk
	{
		author = "Pup";
		displayName = "Shemagh (Tan)";
		model = "\UM_Facewear\Shemagh\PUP_G_Shemagh_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_tan_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\G_Shemagh_desert_CO.paa"};
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		mass = 8;
	};
    class PUP_G_Shemag_grn: PUP_G_Shemag_khk
	{
		author = "Pup";
		displayName = "Shemagh (Green)";
		model = "\UM_Facewear\Shemagh\PUP_G_Shemagh_F.p3d";
		picture = "\A3_Aegis\Characters_F_Aegis\Facewear\Data\UI\icon_G_Shemag_oli_CA.paa";
		hiddenSelections[] = {camo};
		hiddenSelectionsTextures[] = {"\UM_Facewear\data\textures\G_Shemagh_woodland_CO.paa"};
		identityTypes[]=
		{
			"G_USMC",
			10
		};
		mass = 8;
	};
};