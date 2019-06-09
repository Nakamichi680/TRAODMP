#pragma once
#include "stdafx.h"


class Pro_Fix_Class {
public:
	size_t EXE_offset;					// Offset all'interno della stringa EXEorig in cui inizia lo slot per l'assembly da iniettare (x90x90x90x90...)
	unsigned int Virtual_offset;		// Offset nella RAM dell'inizio delle istruzioni in assembly (per configurare i jumps)
};


class Pro_Fix_String {
public:
	string code;
	int From;
	int FromVirtual;
	int ReturnVirtual;
	vector <int> ToRelocate_pos;
	vector <int> AbsVirtual_pos;
	unsigned int nData = 0;
	vector <int> Data_default_value;
	vector <int> DataVirtual_pos;
	vector <int> Gvar_pos;
	vector <int> GvarVirtual_pos;
	vector <int> Data_pos;
	vector <int> Data_ID;
	void Add_data(int pos, int ID)
	{
		Data_pos.push_back(pos);
		Data_ID.push_back(ID);
	}
	void Add_relocate(int pos, int Virtual_pos)
	{
		ToRelocate_pos.push_back(pos);
		AbsVirtual_pos.push_back(Virtual_pos);
	}
	void Add_Gvar(int pos, int Virtual_pos)
	{
		Gvar_pos.push_back(pos);
		GvarVirtual_pos.push_back(Virtual_pos);
	}
	void Reset()
	{
		Data_pos.clear();
		Data_ID.clear();
		ToRelocate_pos.clear();
		AbsVirtual_pos.clear();
		Gvar_pos.clear();
		GvarVirtual_pos.clear();
	}
};


class Pro_Fix_Status {
public:
	bool Main_menu_demo_status = false;
	bool HeatHaze_effect_status = false;
	bool HUD_mod_status = false;
	bool Sidestep_status = false;
	bool Font_status = false;
	bool UW_effects_status = false;
	bool fxLightningSlots_status = false;
	bool fxRainSlots_status = false;
	bool PesceAprile_status = false;
	bool CutsceneAR_status = false;
	bool fxGasCloudRotation_status = false;
	bool PickupsRotation_status = false;
	bool FreeCameraTrigger_status = false;
	bool CM_Version_status = false;				// Controls mod
	bool LookCameraXaxis_status = false;		// Controls mod
	bool ZoomyCamXaxis_status = false;			// Controls mod
	bool StickDeadZone_status = false;			// Controls mod
	bool PauseMenuExit_status = false;			// Controls mod
};


Pro_Fix_Class Pro_Fix_Allocate_space(unsigned int nBytes, string Title);
void Pro_Fix_Deallocate_space();
void Pro_Fix_Detect_status_ALL(Pro_Fix_Status *Status);
void Pro_Fix_Restore_enabled(Pro_Fix_Status Pro_Fix);
Pro_Fix_Class Pro_Fix_Write_data(Pro_Fix_Class Position_info, Pro_Fix_String &assembly);
Pro_Fix_Class Pro_Fix_Write_code(Pro_Fix_Class Position_info, Pro_Fix_String assembly);
void Pro_Fix_Test_Allocate();

bool Main_menu_demo_Detect();				// Ritorna vero se la modifica è attiva
void Main_menu_demo_Enable();				// Abilita il video demo nel menu principale
void Main_menu_demo_Disable();

bool HUD_mod_Detect();						// Ritorna vero se la modifica è attiva
void HUD_mod_Enable();						// Abilita la gestione della barra della vita, ossigeno, presa in modo simile a TR1-5
void HUD_mod_Disable();

bool Sidestep_Detect();					// Ritorna vero se la modifica è attiva
void Sidestep_Enable();					// Rimuove il lag presente nel passetto laterale e indietro
void Sidestep_Disable();

bool Font_Detect();							// Ritorna vero se la modifica è attiva
void Font_Enable();							// Abilita il supporto ad un font esterno
void Font_Disable();

bool UW_effects_Detect();					// Ritorna vero se la modifica è attiva
void UW_effects_Enable();					// Ripristina alcuni effetti sott'acqua nella Cripta dei Trofei
void UW_effects_Disable();

bool fxLightningSlots_Detect();				// Ritorna vero se la modifica è attiva
void fxLightningSlots_Enable();				// Aumenta gli slot per gli effetti di fulmini
void fxLightningSlots_Disable();

bool fxGasCloudRotation_Detect();			// Ritorna vero se la modifica è attiva
void fxGasCloudRotation_Enable();			// Ripristina l'effetto di rotazione del gas
void fxGasCloudRotation_Disable();

bool PickupsRotation_Detect();				// Ritorna vero se la modifica è attiva
void PickupsRotation_Enable();				// Aggiunge l'animazione di rotazione degli oggetti raccolti
void PickupsRotation_Disable();

bool FreeCameraTrigger_Detect();			// Ritorna vero se la modifica è attiva
void FreeCameraTrigger_Enable();			// Rende possibile attivare la Photo Mode (Camera_Free) con la pressione di CTRL+F2
void FreeCameraTrigger_Disable();

// CONTROLS MOD
bool CM_Version_Detect();					// Ritorna vero se la modifica è attiva
void CM_Version_Enable();					// Salva la versione del Multi-Patcher con la quale è stata creata la Controls Mod

bool LookCameraXaxis_Detect();				// Ritorna vero se la modifica è attiva
void LookCameraXaxis_Enable();				// Aggiunge il supporto all'asse X del mouse per la Look Camera (che viene perso dopo la mod di GETPS2PAD)
void LookCameraXaxis_Disable();

bool ZoomyCamXaxis_Detect();				// Ritorna vero se la modifica è attiva
void ZoomyCamXaxis_Enable();				// Aggiunge il supporto all'asse X del mouse per la Zoomy Camera (che viene perso dopo la mod di GETPS2PAD)
void ZoomyCamXaxis_Disable();

bool StickDeadZone_Detect();				// Ritorna vero se la modifica è attiva
void StickDeadZone_Enable();				// Aggiunge una zona morta del 10% agli analogici del gamepad
void StickDeadZone_Disable();

bool PauseMenuExit_Detect();				// Ritorna vero se la modifica è attiva
void PauseMenuExit_Enable();				// Aggiunge la possibilità di uscire istantaneamente dal menu di pausa con il gamepad
void PauseMenuExit_Disable();
// FINE CONTROLS MOD

bool HeatHaze_effect_Detect();				// Ritorna vero se la modifica è attiva
void HeatHaze_effect_Enable();				// Ripristina l'effetto Heat Haze
void HeatHaze_effect_Disable();

// INCOMPLETI
bool PesceAprile_Detect();					// Ritorna vero se la modifica è attiva
void PesceAprile_Enable();
void PesceAprile_Disable();

bool CutsceneAR_Detect();					// Ritorna vero se la modifica è attiva
void CutsceneAR_Enable();
void CutsceneAR_Disable();

bool fxRainSlots_Detect();					// Ritorna vero se la modifica è attiva
void fxRainSlots_Enable();
void fxRainSlots_Disable();