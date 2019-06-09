#include "stdafx.h"
#include "MISC/concol.h"
#include "STANDARD/Standard_FIX.h"
#include "ADVANCED/Advanced_FIX.h"
#include "PRO_SHARED/Pro_FIX.h"


int Detect_CONTROLS_MOD_MASTER_status(Pro_Fix_Status Pro_Fix)			// Restituisce: 0 = Disabled, 1 = DI 1, 2 = XI, 3 = DI 2
{
	/*	Questa funzione verifica che le seguenti mod siano attivate:
	1) PAD_RemapButtons_status = corregge l'assegnazione dei tasti del gamepad per sistemare i tasti del menu e abilitare lo stick destro
	2) ReadAnalogueState_status = piccola modifica che ripristina il movimento durante il nuoto (buggato dopo la modifica di GETPS2PAD)
	3) Mouse_GetValue_status = rimuove l'isteresi del mouse e alza il clamp da -127/+127 a -850/+850 (per aumentare la responsivit… alle accelerazioni brusche)
	4) GETPS2PAD_status = scollega il mouse dalla tastiera e lo combina allo stick destro del gamepad
	5) Pro_Fix.LookCameraXaxis_status = ripristina il movimento della Look Camera lungo l'asse X (buggato dopo la modifica di GETPS2PAD)
	6) Pro_Fix.ZoomyCamXaxis_status = ripristina il movimento della Zoomy Cam lungo l'asse X (buggato dopo la modifica di GETPS2PAD)
	7) Pro_Fix.StickDeadZone_status = aggiunge una dead zone del 10% agli stick destro e sinistro del gamepad
	8) Pro_Fix.PauseMenuExit_status = permette di uscire istantaneamente dal menu di pausa con il gamepad
	9) LadderCamRotation_status = disattiva la rotazione della LadderCam con mouse e gamepad ( buggata quindi meglio disattivarla)
	10) MenuButtons_status = controlla che i tasti indietro/su/gi— dei menu siano modificati
	11) NumpadExit_status = controlla se  attivata la mod che permette di uscire dal tastierino numerico con il tasto Salto del gamepad
	*/
	int PAD_RemapButtons_status = Detect_PAD_RemapButtons_status();

	if (PAD_RemapButtons_status != 0 && Pro_Fix.CM_Version_status)		// Controlla che la mod sia attiva e la tipologia di mapping dei tasti
		return PAD_RemapButtons_status;
	else
		return 0;
}


void Change_CONTROLS_MOD_MASTER_status(Pro_Fix_Status *Pro_Fix)
{
	bool exit = false;																		// Serve ad uscire dal menu
	char Selection;																			// Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
	int Controls_Mod_Master_status = Detect_CONTROLS_MOD_MASTER_status(*Pro_Fix);			// Serve per "Current status"
	string userinput;

    do
    {
		system("cls");
		cout << " ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n"
				" บ                                                                                                                   บ\n"
				" บ" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "บ\n"
				" บ" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<white<< "                                                   CONTROLS MOD                                                    " <<aqua<< "บ\n"
				" วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n"
				" บ                                                                                                                   บ\n"
				" บ   A collection of tweaks and improvements for game controls. Featuring:                                           บ\n"
				" บ                                                                                                                   บ\n"
			    " บ      - custom gamepad buttons mapping (read below for more details)                                               บ\n"
			    " บ      - 10% dead zone for left and right gamepad sticks to prevent unintentional movements                         บ\n"
				" บ      - mouse and keyboard separation: mouse movements will no longer affect character rotation                    บ\n"
			    " บ      - removed hysteresis and increased mouse sensitivity                                                         บ\n"
			    " บ      - remapped pause menu button from R3 to Start                                                                บ\n"
			    " บ      - remapped menu back button from Triangle to Circle                                                          บ\n"
				" บ      - added the option to quit the pause menu at any time (originally available in the inventory only)           บ\n"
				" บ      - added an exit key from the \"security keypad\" mode for the gamepad. To exit at any time press Jump          บ\n"
				" บ                                                                                                                   บ\n"
				" บ   Remember to select \"Default\" under game controller settings after enabling Controls Mod, otherwise the          บ\n"
				" บ   custom mapping won't have any effect. If you don't have a gamepad or you don't plan to use it, you can skip     บ\n"
				" บ   this last step and choose any of the 3 presets below.                                                           บ\n"	
				" บ                                                                                                                   บ\n"
				" บ   Choose one of the following options:                                                                            บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         1 )  DISABLED                                                                                             บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         2 )  ENABLED - DIRECTINPUT 1                                                                              บ\n"
				" บ               Working with: Logitech Cordless RumblePad 2                                                         บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         3 )  ENABLED - DIRECTINPUT 2                                                                              บ\n"
				" บ               Working with: Trust GXT 540 (D)                                                                     บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         4 )  ENABLED - XINPUT                                                                                     บ\n"
				" บ               Working with: Xbox One/360 controllers, Trust GXT 540 (X), ScpToolkit                               บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<pink<< "   Current status: ";
		if (Controls_Mod_Master_status == 0)
			cout << "Disabled                                                                                        " <<aqua<< "บ\n";
		if (Controls_Mod_Master_status == 1)
			cout << "Enabled - DirectInput 1                                                                         " <<aqua<< "บ\n";
		if (Controls_Mod_Master_status == 2)
			cout << "Enabled - XInput                                                                                " <<aqua<< "บ\n";
		if (Controls_Mod_Master_status == 3)
			cout << "Enabled - DirectInput 2                                                                         " <<aqua<< "บ\n";
		cout << " ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n"
				"\n Select an option and press Enter [" <<white<< "1-4" <<aqua<< "]: " <<white;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		if (userinput.length() > 1)
			Selection = '0';
		else
			Selection = userinput.at(0);
		switch (Selection)
		{
		case '1':		///////////////////////////////////////////////////////////////////		DISABLED
			// Se la Photo Mode  attiva  necessario spegnerla (non pu• essere usata con la Controls Mod disattivata)
			if (Detect_FreeCamera_status())
				Change_FreeCamera_status();
			if (Pro_Fix->FreeCameraTrigger_status)
			{
				FreeCameraTrigger_Disable();
				Pro_Fix->FreeCameraTrigger_status = false;
				Pro_Fix_Deallocate_space();
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			if (Controls_Mod_Master_status != 0)
			{
				// Disattivazione Controls Mod
				CONTROLS_MOD_Sasho_Restore();
				Change_PAD_RemapButtons_status(0);
				if (Detect_ReadAnalogueState_status())
					Change_ReadAnalogueState_status();
				if (Detect_Mouse_GetValue_status())
					Change_Mouse_GetValue_status();
				if (Detect_GETPS2PAD_status())
					Change_GETPS2PAD_status();
				if (!Detect_LadderCamRotation_status())
					Change_LadderCamRotation_status();
				if (Detect_MenuButtons_status())
					Change_MenuButtons_status();
				if (Detect_NumpadExit_status())
					Change_NumpadExit_status();
				LookCameraXaxis_Disable();
				ZoomyCamXaxis_Disable();
				StickDeadZone_Disable();
				PauseMenuExit_Disable();
				Pro_Fix->CM_Version_status = false;
				Pro_Fix->LookCameraXaxis_status = false;
				Pro_Fix->ZoomyCamXaxis_status = false;
				Pro_Fix->StickDeadZone_status = false;
				Pro_Fix->PauseMenuExit_status = false;
				Pro_Fix_Deallocate_space();
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			exit = true;
			break;
		case '2':		///////////////////////////////////////////////////////////////////		ENABLED - DIRECTINPUT 1
			if (Controls_Mod_Master_status == 0)
			{
				CONTROLS_MOD_Sasho_Apply_Fix();
				Change_PAD_RemapButtons_status(1);
				if (!Detect_ReadAnalogueState_status())
					Change_ReadAnalogueState_status();
				if (!Detect_Mouse_GetValue_status())
					Change_Mouse_GetValue_status();
				if (!Detect_GETPS2PAD_status())
					Change_GETPS2PAD_status();
				if (Detect_LadderCamRotation_status())
					Change_LadderCamRotation_status();
				if (!Detect_MenuButtons_status())
					Change_MenuButtons_status();
				if (!Detect_NumpadExit_status())
					Change_NumpadExit_status();
				LookCameraXaxis_Enable();
				ZoomyCamXaxis_Enable();
				StickDeadZone_Enable();
				PauseMenuExit_Enable();
				CM_Version_Enable();
			}
			else
				Change_PAD_RemapButtons_status(1);
			exit = true;
			break;
		case '3':		///////////////////////////////////////////////////////////////////		ENABLED - DIRECTINPUT 2
			if (Controls_Mod_Master_status == 0)
			{
				CONTROLS_MOD_Sasho_Apply_Fix();
				Change_PAD_RemapButtons_status(3);
				if (!Detect_ReadAnalogueState_status())
					Change_ReadAnalogueState_status();
				if (!Detect_Mouse_GetValue_status())
					Change_Mouse_GetValue_status();
				if (!Detect_GETPS2PAD_status())
					Change_GETPS2PAD_status();
				if (Detect_LadderCamRotation_status())
					Change_LadderCamRotation_status();
				if (!Detect_MenuButtons_status())
					Change_MenuButtons_status();
				if (!Detect_NumpadExit_status())
					Change_NumpadExit_status();
				LookCameraXaxis_Enable();
				ZoomyCamXaxis_Enable();
				StickDeadZone_Enable();
				PauseMenuExit_Enable();
				CM_Version_Enable();
			}
			else
				Change_PAD_RemapButtons_status(3);
			exit = true;
			break;
		case '4':		///////////////////////////////////////////////////////////////////     ENABLED - XINPUT
			if (Controls_Mod_Master_status == 0)
			{
				CONTROLS_MOD_Sasho_Apply_Fix();
				Change_PAD_RemapButtons_status(2);
				if (!Detect_ReadAnalogueState_status())
					Change_ReadAnalogueState_status();
				if (!Detect_Mouse_GetValue_status())
					Change_Mouse_GetValue_status();
				if (!Detect_GETPS2PAD_status())
					Change_GETPS2PAD_status();
				if (Detect_LadderCamRotation_status())
					Change_LadderCamRotation_status();
				if (!Detect_MenuButtons_status())
					Change_MenuButtons_status();
				if (!Detect_NumpadExit_status())
					Change_NumpadExit_status();
				LookCameraXaxis_Enable();
				ZoomyCamXaxis_Enable();
				StickDeadZone_Enable();
				PauseMenuExit_Enable();
				CM_Version_Enable();
			}
			else
				Change_PAD_RemapButtons_status(2);
			exit = true;
		}
	} while (!exit);
}