#pragma once
#include "stdafx.h"


class Pro_Fix_Status;


bool Detect_Dead_bodies_status();					// Restituisce vero se i corpi non scompaiono, falso se scompaiono (default del gioco)
int Detect_Farsee_status(int &KRed, int &KGreen, int &KBlue, int &KBrightness);	// Restituisce: 0 = Disabled, 1 = Light, 2 = Medium, 3 = Strong, 4 = Custom
bool Detect_Snow_status();							// Restituisce vero se la neve è attiva, falso se è spenta
int Detect_Subtitles_status();						// Restituisce: 0 = Disabled +, 1 = Disabled, 2 = Enabled
bool Detect_Lara_glasses_status();					// Restituisce vero se gli occhiali sono abilitati, falso se sono spenti
bool Detect_Ger_blood_status();						// Restituisce vero se il sangue è attivato, falso se è attiva la censura
int Detect_Res_cubemaps_status();					// Restituisce: 0 = Normal, 1 = 2x, 2 = 4x
int Detect_Res_shadows_status();					// Restituisce: 0 = Normal, 1 = 2x, 2 = 4x
int Detect_Res_waterreflections_status();			// Restituisce: 0 = Normal, 1 = 2x, 2 = 4x
bool Detect_Force_fur_status();						// Restituisce vero se fur è attivo, falso se è spento
bool Detect_Force_specular_status();				// Restituisce vero se specular è attivo, falso se è spento
int Detect_Snow_shakiness_status();					// Restituisce: 0 = Normal, 1 = Low
int Detect_Snow_velocity_status();					// Restituisce: 0 = Normal, 1 = Slow
bool Detect_LockOutControl_status();				// Restituisce vero se i movimenti sono bloccati (originale), falso se sono sbloccati (mod sasho)
bool Detect_LookCamera_delay_status();				// Restituisce vero se il lag nella LookCamera è 0, falso se è 1Eh (originale)
bool Detect_ESC_SKIP_Cutscene_status();				// Restituisce vero se la modifica è attiva (la cutscene termina solo con ESC)
bool Detect_ESC_SKIP_FMV_status();					// Restituisce vero se la modifica è attiva (l'FMV termina solo con ESC)
int Detect_AspectRatio_status();					// Restituisce: 0 = Disabled, 1 = Diary-only, 2 = Full
bool Detect_HighQualityCubemap_status();			// Restituisce vero se le cubemap sono migliorate, falso se sono quelle originali
bool Detect_LookCamera_InvertYaxis_status();		// Restituisce vero se l'asse Y della LookCamera è invertito, falso se è originale (premi giù, guarda giù)
// CONTROLS MOD
int Detect_CONTROLS_MOD_MASTER_status(Pro_Fix_Status Pro_Fix);		// FUNZIONE PRINCIPALE CONTROLS MOD. Restituisce: 0 = Disabled, 1 = DI 1, 2 = XI, 3 = DI 2
int Detect_PAD_RemapButtons_status();				// Restituisce: 0 = Controlli originali, 1 = DirectInput 1, 2 = Xinput, 3 = DirectInput 2
bool Detect_ReadAnalogueState_status();				// Restituisce vero se è modificato il movimento del nuoto con il mouse, falso se è originale
bool Detect_Mouse_GetValue_status();				// Restituisce vero se è modificato il mouse (no isteresi, range oltre -127/+127), falso se originale
bool Detect_GETPS2PAD_status();						// Restituisce vero se i controlli di mouse e gamepad sono modificati, falso se originali
bool Detect_LadderCamRotation_status();				// Restituisce vero se la rotazione della LadderCam è attiva (originale o Sasho), falso se è disattivata (Controls Mod attiva)
bool Detect_MenuButtons_status();					// Restituisce vero se i tasti indietro, su e giù dei menu sono modificati
bool Detect_NumpadExit_status();					// Restituisce vero se è possibile uscire dal tastierino col gamepad, falso se impossibile (originale)
// FINE CONTROLS MOD
bool Detect_Fog_status();							// Restituisce vero se il fix per la nebbia è attivo, falso se l'exe è originale
bool Detect_PortalNCP_status();						// Restituisce vero se il fix per il near clip plane dei portali è attivo, falso se l'exe è originale


void Change_Dead_bodies_status();
void Change_Farsee_status(int &KRed, int &KGreen, int &KBlue, int &KBrightness);	// Funzione che modifica l'intensità dell'effetto farsee di Kurtis
void Change_Snow_status();
void Change_Subtitles_status();						// Modifica i sottotitoli tra Enabled/Disabled/Disabled +
void Change_Lara_glasses_status();
void Change_Ger_blood_status();
void Change_Res_cubemaps_status();
void Change_Res_shadows_status();
void Change_Res_waterreflections_status();
void Change_Force_fur_status();
void Change_Force_specular_status();
void Change_Snow_shakiness_status();
void Change_Snow_velocity_status();
void Change_LockOutControl_status();
void Change_LookCamera_delay_status();
void Change_ESC_SKIP_Cutscene_status();
void Change_ESC_SKIP_FMV_status();
void Change_ESC_SKIP_MASTER_status();				// Modifica sia l'uscita dalle cutscene che dagli FMV
void Change_AspectRatio_status();
void Change_HighQualityCubemap_status();
void Change_LookCamera_InvertYaxis_status();
// CONTROLS MOD
void Change_CONTROLS_MOD_MASTER_status(Pro_Fix_Status *Pro_Fix);	// FUNZIONE PRINCIPALE CONTROLS MOD
void Change_PAD_RemapButtons_status(int ControlsType);		// Questa funzione rimappa i tasti del gamepad, 3 opzioni (Originale, DirectInput, Xinput)
void Change_ReadAnalogueState_status();						// Questa funzione disabilita l'asse Y del mouse nel nuoto (funzione _playerReadAnalogueState)
void Change_Mouse_GetValue_status();						// Rimuove l'isteresi del mouse e aumenta il range di valore di output oltre -127/+127
void Change_GETPS2PAD_status();								// Reindirizza correttamente i dati di input di mouse e gamepad
void CONTROLS_MOD_Sasho_Apply_Fix();						// Reimposta alcune istruzioni originali modificate da Sasho
void CONTROLS_MOD_Sasho_Restore();							// Riapplica le modifiche fatte da Sasho
void Change_LadderCamRotation_status();						// Rimuove la rotazione della LadderCam attiva di default negli exe originali e di Sasho
void Change_MenuButtons_status();							// Cambia i tasti indietro e su/giù nei menu
void Change_NumpadExit_status();							// Permette di uscire dal tastierino numerico con il gamepad (normalmente impossibile)
// FINE CONTROLS MOD
void Change_HeatHaze_effect_MASTER_status(Pro_Fix_Status *Pro_Fix);
void Change_PS_Filters_MASTER_status(Pro_Fix_Status *Pro_Fix);
void Change_Fog_status();
void Change_PortalNCP_status();