#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void Pro_Fix_Restore_enabled(Pro_Fix_Status Pro_Fix)
{
	if (Pro_Fix.Main_menu_demo_status)
		Main_menu_demo_Enable();
	if (Pro_Fix.HUD_mod_status)
		HUD_mod_Enable();
	if (Pro_Fix.Sidestep_status)
		Sidestep_Enable();
	if (Pro_Fix.Font_status)
		Font_Enable();
	if (Pro_Fix.UW_effects_status)
		UW_effects_Enable();
	if (Pro_Fix.fxLightningSlots_status)
		fxLightningSlots_Enable();
	if (Pro_Fix.fxRainSlots_status)
		fxRainSlots_Enable();
	if (Pro_Fix.fxGasCloudRotation_status)
		fxGasCloudRotation_Enable();
	if (Pro_Fix.PickupsRotation_status)
		PickupsRotation_Enable();
	if (Pro_Fix.FreeCameraTrigger_status)
		FreeCameraTrigger_Enable();
	if (Pro_Fix.CM_Version_status)
		CM_Version_Enable();
	if (Pro_Fix.LookCameraXaxis_status)
		LookCameraXaxis_Enable();
	if (Pro_Fix.ZoomyCamXaxis_status)
		ZoomyCamXaxis_Enable();
	if (Pro_Fix.StickDeadZone_status)
		StickDeadZone_Enable();
	if (Pro_Fix.PauseMenuExit_status)
		PauseMenuExit_Enable();
	if (Pro_Fix.HeatHaze_effect_status)
		HeatHaze_effect_Enable();
	//if (Pro_Fix.PesceAprile_status)
		//PesceAprile_Enable();
	if (Pro_Fix.CutsceneAR_status)
		CutsceneAR_Enable();
}