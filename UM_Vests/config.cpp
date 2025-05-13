class cfgPatches
{
class PUP_UM_V
{
	name = "Vests";
	author = "Pup";
	requiredVersion = 1.88;
	requiredAddons[] = {"A3_Characters_F"};
	units[] = 
	{
		"PUP_UM_V_vest",
		"PUP_UM_V2_vest",
		"PUP_UM_V3_vest",
		"PUP_UM_alt_vest"
	};	
	weapons[] = 
	{
		"PUP_UM_V_vest",
		"PUP_UM_V2_vest",
		"PUP_UM_V3_vest",
		"PUP_UM_alt_vest"
		
	};
    };    
};
class cfgWeapons
{
class V_PlateCarrier1_rgr;
class V_PlateCarrier2_rgr;
class V_PlateCarrier_Kerry;
class Aegis_V_PlateCarrier2_alt_rgr;
class PUP_UM_V_vest: V_PlateCarrier1_rgr
{
	author="Pup";
	scope=2;
	displayName="Carrier Lite (Coyote)";
	picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier1_cbr_CA.paa";
	hiddenSelectionsTextures[]=
	{
		"UM_Vests\data\textures\UM_V_vest.paa"
	};
};
class PUP_UM_V2_vest: V_PlateCarrier2_rgr
{
	author="Pup";
	scope=2;
	displayName="Carrier Rig (Coyote)";
	picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_cbr_CA.paa";
	hiddenSelectionsTextures[]=
	{
		"UM_Vests\data\textures\UM_V_vest.paa"
	};
};
class PUP_UM_V3_vest: V_PlateCarrier_Kerry
{
	author="Pup";
	scope=2;
	displayName="Carrier FAST (Coyote)";
	picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
	hiddenSelectionsTextures[]=
	{
		"UM_Vests\data\textures\UM_V_vest.paa"
	};
};
class PUP_UM_alt_vest: Aegis_V_PlateCarrier2_alt_rgr
{
	author="Pup";
	scope=2;
	displayName="Carrier Alt Rig (Coyote)";
	picture = "\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrier2_cbr_CA.paa";
	hiddenSelectionsTextures[]=
	{
		"UM_Vests\data\textures\UM_V_vest.paa"
	};
};
};