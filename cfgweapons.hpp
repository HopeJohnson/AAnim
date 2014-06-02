
///These are all of the weapons that have animations turned on thus far.

class CfgWeapons 
{

class Rifle_Base_F;
class Rifle_Long_Base_F;
class RH_m4: Rifle_Base_F {
handAnim[] = {"OFP2_ManSkeleton","\hj_anim\anim\ar15\AR15_handanim.rtm"};

 reloadAction = "GestureReload001";
 };
class RH_ar10: Rifle_Base_F { reloadAction = "GestureReload001";};
class prpl_benelli: Rifle_Base_F { reloadAction = "GestureM1014"; };

class R3F_Famas_F1: Rifle_Base_F
	{
	reloadAction = "GestureReload006B";
	};
class R3F_Famas_surb: R3F_Famas_F1
	{
	reloadAction = "GestureReload006";
	};
class R3F_Famas_G2: R3F_Famas_F1
	{
	reloadAction = "GestureReload006";
	};
class R3F_Famas_felin: R3F_Famas_G2
	{
	reloadAction = "GestureReload006";
	};
	};

class CfgMagazines
{
	class CA_Magazine;
	class prpl_8Rnd_12Gauge_Pellets: CA_Magazine
	{
		reloadaction = "GestureM1014";
	};
	class prpl_8Rnd_12Gauge_Slug: CA_Magazine
	{
		reloadaction = "GestureM1014";
	};
	class prpl_6Rnd_12Gauge_Pellets: CA_Magazine
	{

		reloadaction = "GestureM1014";
	};
	class prpl_6Rnd_12Gauge_Slug: CA_Magazine
	{
		reloadaction = "GestureM1014";

	};
};