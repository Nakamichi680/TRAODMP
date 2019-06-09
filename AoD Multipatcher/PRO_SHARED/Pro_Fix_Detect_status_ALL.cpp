#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"
#include "MISC/Misc_Functions.h"


void Pro_Fix_Detect_status_ALL(Pro_Fix_Status *Status)
{
	int ver = Detect_version_advanced();
	Status->Main_menu_demo_status = Main_menu_demo_Detect();					// Controlla se il video demo nel menu principale è attivo
	Status->HUD_mod_status = HUD_mod_Detect();									// Controlla se il classic HUD è attivo
	Status->Font_status = Font_Detect();										// Controlla se il font tramite file esterno è attivato
	Status->Sidestep_status = Sidestep_Detect();								// Controlla se la WalkMode mod è attivata
	Status->UW_effects_status = UW_effects_Detect();							// Controlla se gli effetti underwater PS2 sono attivati
	Status->fxLightningSlots_status = fxLightningSlots_Detect();				// Controlla se gli slot per gli effetti di luce sono aumentati
	Status->fxRainSlots_status = fxRainSlots_Detect();							// Controlla se gli slot per gli effetti di pioggia sono aumentati
	Status->fxGasCloudRotation_status = fxGasCloudRotation_Detect();			// Controlla se l'effetto di rotazione del gas è attivo
	Status->PickupsRotation_status = PickupsRotation_Detect();					// Controlla se la rotazione degli oggetti raccolti è attiva
	Status->FreeCameraTrigger_status = FreeCameraTrigger_Detect();				// Controlla se la FreeCamera è attivabile con CTRL+F2
	Status->CM_Version_status = CM_Version_Detect();							// Controlla se la Controls Mod è attiva (serve per la versione)
	Status->LookCameraXaxis_status = LookCameraXaxis_Detect();					// Controlla se è presente il fix per l'asse X della Look Camera
	Status->ZoomyCamXaxis_status = ZoomyCamXaxis_Detect();						// Controlla se è presente il fix per l'asse X della Zoomy Camera
	Status->StickDeadZone_status = StickDeadZone_Detect();						// Controlla se è attivata la dead zone per gli sticks del gamepad
	Status->PauseMenuExit_status = PauseMenuExit_Detect();						// Controlla se è attivata la mod per uscire subito dal menu pausa col gamepad
	Status->HeatHaze_effect_status = HeatHaze_effect_Detect();					// Controlla se è attivato il fix dell'effetto Heat Haze
	//Status->PesceAprile_status = PesceAprile_Detect();						// PESCE D'APRILE
	Status->CutsceneAR_status = CutsceneAR_Detect();
}