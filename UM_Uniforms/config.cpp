class CfgPatches
{
	class PUP_Uniforms_USMC
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
			"PUP_U_CombatUniform_F",
			"PUP_U_CombatUniform_vest_F",
			"PUP_U_CombatUniform_tshirt_F",
			"PUP_U_CombatUniform_D_F",
			"PUP_U_CombatUniform_D_vest_F",
			"PUP_U_CombatUniform_D_tshirt_F"
		};
		weapons[]=
		{
			"PUP_U_CombatUniform_F",
			"PUP_U_CombatUniform_vest_F",
			"PUP_U_CombatUniform_tshirt_F",
			"PUP_U_CombatUniform_D_F",
			"PUP_U_CombatUniform_D_vest_F",
			"PUP_U_CombatUniform_D_tshirt_F",
		    "PUP_UM_U_Coveralls_F"
		};
	};
};

class CfgVehicles
{
	class B_Soldier_F;
	class I_E_Uniform_01_F;
	class B_Soldier_SL_F;
	class B_T_Soldier_AR_F;
	class B_Soldier_Survival_F;
	class I_E_Uniform_01_coveralls_F;
	class PUP_UM_U_Coveralls_F: I_E_Uniform_01_coveralls_F //<- CfgVehicles classname
	{
		author="Pup";
		displayName= "Heli Crew Coveralls [USMC]";
		side=1;
		scope=1;
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Coveralls_01_F.p3d";		///Model of the uniform (helpful)
		modelSides[]={0,1,2,3,4,5,6,7};										///What sides can wear it.
		uniformClass="PUP_UM_U_Coveralls_F";					///Classname from Cfgweapons.
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"UM_Uniforms\data\textures\UM_coveralls_co.paa"
		};
	};
	class I_PUP_UM_Field_W_Uniform: I_E_Uniform_01_F
	{
		author="Pup";
		scope=1;
		picture="\UM_Uniforms\data\UI\icon_U_I_E_Uniform_01_wdl_F_ca.paa";
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		modelSides[]={0,1,2,3,4,5,6,7};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\Field_Uniform_W_co.paa",
			"\UM_Uniforms\data\textures\Field_Uniform_1_W_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform_01_01.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_02.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_gloves.rvmat"
		};
	};
	class I_PUP_UM_Field_W_Uniform_rs: I_E_Uniform_01_F
	{
		author="Pup";
		scope=1;
		picture="\UM_Uniforms\data\UI\icon_U_I_E_Uniform_01_wdl_shortsleeve_F_ca.paa";
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		modelSides[]={0,1,2,3,4,5,6,7};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\Field_Uniform_W_co.paa",
			"\UM_Uniforms\data\textures\Field_Uniform_1_W_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform_01_01.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_02.rvmat"
		};
	};
	class I_PUP_UM_Field_D_Uniform: I_E_Uniform_01_F
	{
		author="Pup";
		scope=1;
		picture="\UM_Uniforms\data\UI\icon_U_I_E_Uniform_01_des_F_ca.paa";
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_F.p3d";
		modelSides[]={0,1,2,3,4,5,6,7};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\Field_Uniform_D_co.paa",
			"\UM_Uniforms\data\textures\Field_Uniform_1_D_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform_01_01.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_02.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_gloves.rvmat"
		};
	};
	class I_PUP_UM_Field_D_Uniform_rs: I_E_Uniform_01_F
	{
		author="Pup";
		scope=1;
		picture="\UM_Uniforms\data\UI\icon_U_I_E_Uniform_01_des_shortsleeve_F_ca.paa";
		model="\a3\Characters_F_Enoch\Uniforms\I_E_Soldier_01_ShortSleeve_F.p3d";
		modelSides[]={0,1,2,3,4,5,6,7};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\Field_Uniform_D_co.paa",
			"\UM_Uniforms\data\textures\Field_Uniform_1_D_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform_01_01.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_02.rvmat"
		};
	};
    class PUP_U_CombatUniform_F: B_Soldier_F //<- CfgVehicles classname
	{
		author="Pup";
		displayName="Combat Fatigues [USMC] (MARPAT-W)";
		scope=1;
		modelSides[]={0,1,2,3,4,5,6,7};										///What sides can wear it.
		uniformClass="PUP_U_CombatUniform_F";					///Classname from Cfgweapons.
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
	};
	class PUP_U_CombatUniform_vest_F: B_Soldier_SL_F //<- CfgVehicles classname
	{
		author="Pup";
		displayName="Combat Fatigues [USMC] (Rolled up, MARPAT-W)";
		scope=1;
		modelSides[]={0,1,2,3,4,5,6,7};										///What sides can wear it.
		uniformClass="PUP_U_CombatUniform_vest_F";					///Classname from Cfgweapons.
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
	};
	class PUP_U_CombatUniform_tshirt_F: B_T_Soldier_AR_F 
	{
		author="Pup";
		displayName="Combat Fatigues [USMC] (Tee, MARPAT-W)";
		scope=1;
		modelSides[]={0,1,2,3,4,5,6,7};										
		uniformClass="PUP_U_CombatUniform_tshirt_F";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            "insignia"
        };
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_co.paa",
			"\A3\characters_f\common\Data\basicbody_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
    };
	class PUP_U_CombatScuba_F: B_Soldier_Survival_F
    {
        author="Pup";
        scope=1;
		displayName="Scuba Fatigues [USMC] (MARPAT-W)";
        modelSides[]={0,1,2,3,4,5,6,7};
        uniformClass="PUP_U_CombatScuba_F";
        hiddenUnderwaterSelections[]=
        {
            "hide"
        };
        shownUnderwaterSelections[]=
        {
            "unhide",
            "unhide2"
        };
        hiddenUnderwaterSelectionsTextures[]=
        {
            "\A3\characters_f\common\data\diver_equip_nato_co.paa",
            "\A3\characters_f\common\data\diver_equip_nato_co.paa",
            "\A3\characters_f\data\visors_ca.paa"
        };
        hiddenSelections[]=
        {
            "Camo",
            "Camo1",
            "Camo3",
            "Insignia"
        };
        hiddenSelectionsTextures[]=
        {
            "\UM_Uniforms\data\textures\clothing1_MARPAT_co.paa",
            "\A3\characters_f\common\data\diver_suit_nato_co.paa",
            "A3\characters_f\common\Data\basicbody_black_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {   
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat",
            "\A3\characters_f\common\data\diver_suit.rvmat",
            "A3\characters_f\common\Data\basicbody.rvmat"
        };
    };
	class PUP_U_CombatScuba_D_F: B_Soldier_Survival_F
    {
        author="Pup";
        scope=1;
		displayName="Scuba Fatigues [USMC] (MARPAT-D)";
        modelSides[]={0,1,2,3,4,5,6,7};
        uniformClass="PUP_U_CombatScuba_D_F";
        hiddenUnderwaterSelections[]=
        {
            "hide"
        };
        shownUnderwaterSelections[]=
        {
            "unhide",
            "unhide2"
        };
        hiddenUnderwaterSelectionsTextures[]=
        {
            "\A3\characters_f\common\data\diver_equip_nato_co.paa",
            "\A3\characters_f\common\data\diver_equip_nato_co.paa",
            "\A3\characters_f\data\visors_ca.paa"
        };
        hiddenSelections[]=
        {
            "Camo",
            "Camo1",
            "Camo3",
            "Insignia"
        };
        hiddenSelectionsTextures[]=
        {
            "\UM_Uniforms\data\textures\clothing1_MARPAT_D_co.paa",
            "\A3\characters_f\common\data\diver_suit_nato_co.paa",
            "A3\characters_f\common\Data\basicbody_black_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {   
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat",
            "\A3\characters_f\common\data\diver_suit.rvmat",
            "A3\characters_f\common\Data\basicbody.rvmat"
        };
    };
	class PUP_U_CombatUniform_D_F: B_Soldier_F //<- CfgVehicles classname
	{
		author="Pup";
		displayName="Combat Fatigues [USMC] (MARPAT-D)";
		scope=1;
		modelSides[]={0,1,2,3,4,5,6,7};										///What sides can wear it.
		uniformClass="PUP_U_CombatUniform_D_F";					///Classname from Cfgweapons.
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_D_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
	};
	class PUP_U_CombatUniform_D_vest_F: B_Soldier_SL_F //<- CfgVehicles classname
	{
		author="Pup";
		displayName="Combat Fatigues [USMC] (Rolled up, MARPAT-D)";
		scope=1;
		modelSides[]={0,1,2,3,4,5,6,7};										///What sides can wear it.
		uniformClass="PUP_U_CombatUniform_D_vest_F";					///Classname from Cfgweapons.
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_D_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
	};
	class PUP_U_CombatUniform_D_tshirt_F: B_T_Soldier_AR_F 
	{
		author="Pup";
		displayName="Combat Fatigues [USMC] (Tee, MARPAT-D)";
		scope=1;
		modelSides[]={0,1,2,3,4,5,6,7};										
		uniformClass="PUP_U_CombatUniform_D_tshirt_F";
		hiddenSelections[]=
        {
            "camo",
            "camo2",
            "insignia"
        };
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_D_co.paa",
			"A3\characters_f\common\Data\basicbody_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
    };
};
class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	///this is the inventory item/name of the item.
	class PUP_UM_Field_W_Uniform: Uniform_Base
	{
		author="Pup";
		scope=2;
		displayName="Field Uniform [USMC] (MARPAT-W)";
		picture="\UM_Uniforms\data\UI\icon_U_I_E_Uniform_01_wdl_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\Field_Uniform_W_co.paa",
			"\UM_Uniforms\data\textures\Field_Uniform_1_W_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform_01_01.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_02.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_gloves.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="I_PUP_UM_Field_W_Uniform";
			mass=40;
			containerClass="Supply40";
			uniformModel="-";
		};
	};
	class PUP_UM_Field_W_Uniform_rs: Uniform_Base
	{
		author="Pup";
		scope=2;
		displayName="Field Uniform [USMC] (Rolled, MARPAT-W)";
		picture="\UM_Uniforms\data\UI\icon_U_I_E_Uniform_01_wdl_shortsleeve_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\Field_Uniform_W_co.paa",
			"\UM_Uniforms\data\textures\Field_Uniform_1_W_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform_01_01.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_02.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="I_PUP_UM_Field_W_Uniform_rs";
			mass=40;
			containerClass="Supply40";
			uniformModel="-";
		};
	};
	class PUP_UM_Field_D_Uniform: Uniform_Base
	{
		author="Pup";
		scope=2;
		displayName="Field Uniform [USMC] (MARPAT-D)";
		picture="\UM_Uniforms\data\UI\icon_U_I_E_Uniform_01_des_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\Field_Uniform_D_co.paa",
			"\UM_Uniforms\data\textures\Field_Uniform_1_D_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\I_E_Soldier_01_gloves_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform_01_01.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_02.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_gloves.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="I_PUP_UM_Field_D_Uniform";
			mass=40;
			containerClass="Supply40";
			uniformModel="-";
		};
	};
	class PUP_UM_Field_D_Uniform_rs: Uniform_Base
	{
		author="Pup";
		scope=2;
		displayName="Field Uniform [USMC] (Rolled, MARPAT-D)";
		picture="\UM_Uniforms\data\UI\icon_U_I_E_Uniform_01_des_shortsleeve_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\Field_Uniform_D_co.paa",
			"\UM_Uniforms\data\textures\Field_Uniform_1_D_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform_01_01.rvmat",
			"\UM_Uniforms\data\textures\U_CombatUniform_01_02.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformClass="I_PUP_UM_Field_D_Uniform_rs";
			mass=40;
			containerClass="Supply40";
			uniformModel="-";
		};
	};
	class PUP_U_CombatUniform_F: Uniform_Base //<- CfgWeapons classname
	{
		author="Pup";
		scope=2;
		displayName="Combat Fatigues [USMC] (MARPAT-W)";	///Displayname
		picture="\UM_Uniforms\data\UI\icon_u_b_combatuniform_wdl_ca.paa";	///UI icon
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";		///ground model.
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PUP_U_CombatUniform_F";	///Classname from CfgVehicles.
			containerClass="Supply40";							///Cargo volume
			mass=60;											///Weight
		};
	};
	class PUP_U_CombatUniform_vest_F: Uniform_Base //<- CfgWeapons classname
	{
		author="Pup";
		scope=2;
		displayName="Combat Fatigues [USMC] (Rolled Up, MARPAT-W)";	///Displayname
		picture="\UM_Uniforms\data\UI\icon_u_b_combatuniform_wdl_vest_ca.paa";	///UI icon
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";		///ground model.
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PUP_U_CombatUniform_vest_F";	///Classname from CfgVehicles.
			containerClass="Supply40";							///Cargo volume
			mass=60;											///Weight
		};
	};
	class PUP_U_CombatUniform_tshirt_F: Uniform_Base //<- CfgWeapons classname
	{
		author="Pup";
		scope=2;
		displayName="Combat Fatigues [USMC] (Tee, MARPAT-W)";	///Displayname
		picture="\UM_Uniforms\data\UI\icon_u_b_combatuniform_wdl_tshirt_ca.paa";	///UI icon
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";		///ground model.
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_co.paa",
			"A3\characters_f\common\Data\basicbody_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PUP_U_CombatUniform_tshirt_F";	///Classname from CfgVehicles.
			containerClass="Supply40";							///Cargo volume
			mass=60;											///Weight
		};
	};
	class PUP_U_CombatScuba_F: Uniform_Base //<- CfgWeapons classname
	{
		author="Pup";
		scope=2;
		displayName="Scuba Fatigues [USMC] (MARPAT-W)";	///Displayname
		picture="\UM_Uniforms\data\UI\icon_u_b_combatuniform_wdl_tshirt_ca.paa";	///UI icon
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";		///ground model.
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_co.paa",
			"A3\characters_f\common\Data\basicbody_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="PUP_U_CombatScuba_F";	///Classname from CfgVehicles.
			containerClass="Supply40";							///Cargo volume
			mass=60;											///Weight
		};
	};
	class PUP_U_CombatScuba_D_F: Uniform_Base //<- CfgWeapons classname
	{
		author="Pup";
		scope=2;
		displayName="Scuba Fatigues [USMC] (MARPAT-D)";	///Displayname
		picture="\UM_Uniforms\data\UI\icon_u_b_combatuniform_des_tshirt_ca.paa";	///UI icon
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";		///ground model.
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_D_co.paa",
			"A3\characters_f\common\Data\basicbody_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformType = "Neopren";
			uniformClass="PUP_U_CombatScuba_D_F";	///Classname from CfgVehicles.
			containerClass="Supply40";							///Cargo volume
			mass=60;											///Weight
		};
	};
	class PUP_U_CombatUniform_D_F: Uniform_Base //<- CfgWeapons classname
	{
		author="Pup";
		scope=2;
		displayName="Combat Fatigues [USMC] (MARPAT-D)";	///Displayname
		picture="\UM_Uniforms\data\UI\icon_u_b_combatuniform_des_ca.paa";	///UI icon
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";		///ground model.
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_D_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PUP_U_CombatUniform_D_F";	///Classname from CfgVehicles.
			containerClass="Supply40";							///Cargo volume
			mass=60;											///Weight
		};
	};
	class PUP_U_CombatUniform_D_vest_F: Uniform_Base //<- CfgWeapons classname
	{
		author="Pup";
		scope=2;
		displayName="Combat Fatigues [USMC] (Rolled Up, MARPAT-D)";	///Displayname
		picture="\UM_Uniforms\data\UI\icon_u_b_combatuniform_des_vest_ca.paa";	///UI icon
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";		///ground model.
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_D_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PUP_U_CombatUniform_D_vest_F";	///Classname from CfgVehicles.
			containerClass="Supply40";							///Cargo volume
			mass=60;											///Weight
		};
	};
	class PUP_U_CombatUniform_D_tshirt_F: Uniform_Base //<- CfgWeapons classname
	{
		author="Pup";
		scope=2;
		displayName="Combat Fatigues [USMC] (Tee, MARPAT-D)";	///Displayname
		picture="\UM_Uniforms\data\UI\icon_u_b_combatuniform_des_tshirt_ca.paa";	///UI icon
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";		///ground model.
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UM_Uniforms\data\textures\clothing1_MARPAT_D_co.paa",
			"A3\characters_f\common\Data\basicbody_black_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\UM_Uniforms\data\textures\U_CombatUniform.rvmat"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PUP_U_CombatUniform_D_tshirt_F";	///Classname from CfgVehicles.
			containerClass="Supply40";							///Cargo volume
			mass=60;											///Weight
		};
	};
	class PUP_UM_U_Coveralls_F: Uniform_Base //<- CfgWeapons classname
	{
		author="Pup";
		scope=2;
		displayName= "Heli Crew Coveralls [USMC]";							///Displayname
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_PilotCoveralls_ca.paa";	///UI icon
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";		///ground model.
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"UM_Uniforms\data\textures\UM_coveralls_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PUP_UM_U_Coveralls_F";	///Classname from CfgVehicles.
			containerClass="Supply40";							///Cargo volume
			mass=60;											///Weight
		};
	};
};