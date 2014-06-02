
//CFG Animation//
//			  //
/// Current Version BETA 01///

/// This is the config for Arma Anim, formerly HJ Anim, an open source Animation mod for Arma 3. 
/// I've been primarily creating weapon animations via Blender. However, you can add animations to this of any kind
 class CfgMovesBasic
 {

 	class ManActions /// This is the class that you define the *base class* for an animation.
	{
		GestureReload001 = ""; //BF Project Reality-ish M4
		GestureReload002 = ""; //AK
		GestureReload003 = ""; //SCAR
		//GestureReload004 = "";
		GestureReload005 = ""; //AR-15
		GestureReload006 = ""; //Famas
		GestureReload006B = ""; //Famas F1
		GestureReload007 = ""; //M249
		GestureReload008 = "";
		GestureReload009 = "";//MP5
		GestureM1014 = "";
		GestureInflatohand = "";
	};
	class Actions 
	{
		class NoActions : ManActions  /// This is the animation that plays when you are doing nothing
		{
			GestureReload001[] = {"Reload001", "gesture"};
			GestureReload002[] = {"Reload002", "gesture"};
			GestureReload003[] = {"Reload003", "gesture"};
			//GestureReload004[] = {"Reload004", "gesture"};
			GestureReload005[] = {"Reload005", "gesture"};
			GestureReload006[] = {"Reload006", "gesture"};
			GestureReload006B[] = {"Reload006_B", "gesture"};
			GestureReload007[] = {"Reload007", "gesture"};
			GestureReload008[] = {"Reload008", "gesture"};
			GestureReload009[] = {"Reload009", "gesture"};
			GestureReload010[] = {"Reload010", "gesture"};
			GestureM1014[] = {"M1014_Reload", "gesture"};
			GestureInflatohand[] = {"InflatoHand", "gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions : RifleBaseStandActions /// this is the animation that plays when you are prone
		{
			GestureReload001[] = {"Reload001_Prone", "Gesture"};
			GestureReload003[] = {"Reload003_Prone", "Gesture"};
			//GestureReload004[] = {"Reload004_Prone", "Gesture"};
			GestureReload005[] = {"Reload005_Prone", "Gesture"};
			GestureReload006[] = {"Reload006_Prone", "Gesture"};
			GestureReload006B[] = {"Reload006_B_Prone", "Gesture"};
			GestureReload007[] = {"Reload007_Prone", "Gesture"};
			GestureReload008[] = {"Reload008_Prone", "Gesture"};
			GestureReload009[] = {"Reload009_Prone", "Gesture"};
			GestureReload010[] = {"Reload010_prone", "gesture"};
			GestureM1014[] = {"M1014_Reload_Prone", "gesture"};

		};
		
		
		/// You can add more conditions such as crouching or running, however these two basically co
	};

};

///This is where you define ACTIONS. ACTIONS and GESTURES are two completely different things in Arma. An action is a animation that has a purpose.
///For example, running, jumping, placing C4, getting into a vehicle, are all ACTIONS. 
///The easy way to remember whether or not something is an action is that you can't do two actions at once. 
///You can't be jumping or going prone for example.
///Gestures are animations that can be played on top of actions. Reloading guns, tactical gestures, etc. 
///Gestures only move a certain portion of the mod.

/*class CfgMovesMaleSdr : CfgMovesBasic {
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class states {
		class AovrPercMstpSlowWrflDf;
		
		class SprintBaseDf;

		class HJ_Vault: AovrPercMstpSlowWrflDf
		{
			variantsAI[] = {};
			looped = 0;
			speed =	-1.25;
			actions = "RifleLowStandActions";
			file = "\hj_anim\anim\events\vault.rtm";
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.05,0,0.9,0,1,1};
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			relSpeedMin = 0.0;
			relSpeedMax = 0.996672;
			duty = 0.65;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			limitGunMovement = 0;
			headBobStrength = 0.512438;
			forceAim = 0;
			showWeaponAim = 1;

		};

	};
};
*/
 
 ///There are many animations here, the main ones are above.
class CfgGesturesMale
{
	
 	class States
 	{

	 	class GestureReloadBase;	
		class GestureReloadAA12 : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\AA12_reloadanim.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
			speed = 0.299;
			canPullTrigger = 0; canReload = 1;
 		};
		class gesturereloadaa12_prone : gesturereloadaa12
		{
		mask = "handsWeapon";
		};

		class GestureReloadFamas : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\Famas_reload.rtm";
			mask = "handsWeapon";
						leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};


			speed =  0.25;
			canPullTrigger = 0; canReload = 1;
 		};

		class Reload001 : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\BFPR_Reload.rtm";
			mask = "handsWeapon";
						leftHandIKCurve[] = {0.0, 1, 0.11, 1, 0.12, 0, 0.941, 0, 0.982, 1};

			disableWeapons = 0;
			enableOptics = 0;
			showWeaponAim = 1;
			speed =  0.2;
			canPullTrigger = 0; canReload = 1;
 		};	
		class Reload001_prone : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\BFPR_Reload_prone.rtm";
						mask = "handsWeapon";
						leftHandIKCurve[] = {0.0, 1, 0.11, 1, 0.12, 0, 0.941, 0, 0.982, 1};
			disableWeapons = 0;
			enableOptics = 0;
			showWeaponAim = 1;	

			speed =  0.2;
			canPullTrigger = 0; canReload = 1;
 		};	
		class Reload002 : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\Reload002.rtm";
			mask = "handsWeapon";
						leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};


			speed =  0.28;
			canPullTrigger = 0; canReload = 1;
 		};
	
		class Reload002_prone : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\Reload002_prone.rtm";
						mask = "handsWeapon";
						leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};


			speed =  0.28;
			canPullTrigger = 0; canReload = 1;
 		};	
		class M1014_Reload : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\m1014_Reload.rtm";
			mask = "handsWeapon";
						leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
		

			speed =  0.28;
			canPullTrigger = 0; canReload = 1;
 		};
	
		class M1014_Reload_prone : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\m1014_Reload_prone.rtm";
						mask = "handsWeapon";
						leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};


			speed =  0.28;
			canPullTrigger = 0; canReload = 1;
 		};	

		class Reload003  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\Reload003.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.1,1,.2,0,.95,0,.96,1 , 0.99, 1};
			rightHandIKCurve[] = {0.1, 1, , 0.99, 1};

			speed =  0.3;
			canPullTrigger = 0; canReload = 1;
			
 		};
		
		class Reload003_prone  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\Reload003_prone.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.1,1,.2,0,95,0,.96,1 , 0.99, 1};
			rightHandIKCurve[] = {0.1, 1, , 0.99, 1};


			speed =  0.35;
			canPullTrigger = 0; canReload = 1;
			
 		};
		//class Reload004  : GestureReloadBase
 		//{
 		//	file = "\HJ_Anim\anim\reloadactions\Reload004.rtm";
		//	mask = "handsWeapon";
		//	leftHandIKCurve[] = {0.01, 0,0.18,0, 0.19,0,.50,0,.65,0,.66,1, 0.83, 1, 0.99, 1};
		//	rightHandIKCurve[] = {0.01, 1,0.18,1, 0.19,1,.50,1,.68,1, 0.69, 0, 0.95, 0, 0.96, 1};
		//
        //
		//	speed =  0.28;
		//	canPullTrigger = 0; canReload = 1;
		//	
 		//};
		//class Reload004_prone  : GestureReloadBase
 		//{
 		//	file = "\HJ_Anim\anim\reloadactions\Reload004_prone.rtm";
		//	mask = "handsWeapon";
		//	leftHandIKCurve[] = {0.01, 1,0.18,1, 0.19,0,.50,0,.82,0, 0.83, 0, 0.99, 0};
		//	rightHandIKCurve[] = {0.01, 1,0.18,1, 0.19,0,.50,0,.68,0, 0.69, 1, 0.95, 1, 0.96, 0};
		//
        //
		//	speed =  0.28;
		//	canPullTrigger = 0; canReload = 1;
		//	
 		//};
		class Reload005  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\Reload005.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
		

			speed =  0.35;
			canPullTrigger = 0; canReload = 1;
			
 		};
		class Reload005_prone  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\Reload005_prone.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
		

			speed =  0.35;
			canPullTrigger = 0; canReload = 1;
			
 		};
		class Reload006  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\Reload006.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
		

			speed =  0.28;
			canPullTrigger = 0; canReload = 1;
			
 		};
		class Reload006_B  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\Reload006_B.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
		

			speed =  0.28;
			canPullTrigger = 0; canReload = 1;
			
 		};
		class Reload006_prone  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\Reload006_prone.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0.012, 1, 0.041, 0, 0.941, 0, 0.982, 1};
		

			speed =  0.18;
			canPullTrigger = 0; canReload = 1;
			
 		};
		class Reload007  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\reload007.rtm";
			mask = "handsWeapon";
			rightHandIKCurve[] = {0, 0, .9, 0, .23, 0, .24, 1,.99, 1};
			leftHandIKCurve[] = {0, 1,.12, 1,.2457, 0, 0.80, 0,.94,0,.95,1};
			speed =  0.15;
			
 		};
		class Reload007_prone  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\reload007_prone.rtm";
			mask = "handsWeapon";
			rightHandIKCurve[] = {0, 0, .9, 0, .23, 0, .24, 1,.99, 1};
			leftHandIKCurve[] = {0, 1,.12, 1,.2457, 0, 0.80, 0,.94,0,.95,1};
			speed =  0.15;
 		};
		//class Reload008  : GestureReloadBase
 		//{
 		//	file = "\HJ_Anim\anim\reloadactions\M320_reload.rtm";
		//	mask = "handsWeapon";
		//	rightHandIKCurve[] = {0, 0, .9, 0, .1847, 0, .26, 0,0.27, 1, 0.723, 1, 0.748, 1, 0.956, 1, 0.989, 1};
		//	leftHandIKCurve[] = {0, 1,.1846, 1,.27, 1, 0.28, 0, 0.3, 0, 0.4, 0, .5, 0, .6, 0, .7, 0};
		//	speed =  0.45;
		//	
 		//};
		//class Reload008_prone  : GestureReloadBase
 		//{
 		//	file = "\HJ_Anim\anim\reloadactions\M320_reload_prone.rtm";
		//	mask = "handsWeapon";
		//	rightHandIKCurve[] = {0, 0, .9, 0, .1847, 0, .26, 0,0.27, 1, 0.723, 1, 0.748, 1, 0.956, 1, 0.989, 1};
		//	leftHandIKCurve[] = {0, 1,.1846, 1,.27, 1, 0.28, 0, 0.3, 0, 0.4, 0, .5, 0, .6, 0, .7, 0};
		//	speed =  0.45;
 		//};
		class Reload009  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\reload009.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0, 0, 1, 0,};
			RIGHTHandIKCurve[] = {0, 1, 1, 1,};
			speed =  0.14;
			
 		};		
	
			class Reload009_prone  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\reload009_prone.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0, 0, 1, 0,};
			RIGHTHandIKCurve[] = {0, 1, 1, 1,};
			speed =  0.14;
			
 		};	
		class Reload010  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\PGM_reload.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0, 0, 1, 0,};
			RIGHTHandIKCurve[] = {0, 0, 1, 0,};
			speed =  0.30;
			
 		};		
	
		class Reload010_PRONE  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\reloadactions\PGM_reload_PRONE.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0, 1,.084, 0,.80,1, 1, 1,};
			RIGHTHandIKCurve[] = {0, 0, 1, 0,};
			speed =  0.14;
			
 		};

			class InflatoHand  : GestureReloadBase
 		{
 			file = "\HJ_Anim\anim\inflatohand.rtm";
			mask = "handsWeapon";
			leftHandIKCurve[] = {0, 0, 1, 0,};
			RIGHTHandIKCurve[] = {0, 0, 1, 0,};
			speed =  0.30;
			
 		};	
	
	
	
	};

	class BlendAnims {
		class MaskStart {
			weight = 0.85;
		};
		empty[] = {};
		handsWeapon1[] = {"head", 0, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 0, "Spine1", 0, "Spine2", 0, "Spine3", 0, "pelvis", "MaskStart"};
	};
	
	
	
 };


