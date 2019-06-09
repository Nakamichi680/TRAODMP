#include "stdafx.h"
#include "MISC/concol.h"
#include "STANDARD/Standard_FIX.h"
#include "ADVANCED/Advanced_FIX.h"
#include "PRO_SHARED/Pro_FIX.h"


bool Detect_PHOTOMODE_MASTER_status(Pro_Fix_Status Pro_Fix)				// Restituisce vero se la photomode  attiva
{
	/*	Questa funzione verifica che le seguenti mod siano attivate:
	1) FreeCamera_status = verifica che la stringa modificata (pi— altri tre floats) della FreeCamera  attiva
	2) Pro_Fix.FreeCameraTrigger_status = verifica che il trigger CTRL+F2 della FreeCamera  attivo. Senza di questo non sarebbe possibile attivare la PhotoMode
	*/
	bool FreeCamera_status = Detect_FreeCamera_status();
	if (FreeCamera_status && Pro_Fix.FreeCameraTrigger_status)
		return true;
	else
		return false;
}


void Change_PHOTOMODE_MASTER_status(Pro_Fix_Status *Pro_Fix)
{
	if (ver == 52 || ver == 49 || ver == 42 || ver == 39)			// Se l'EXE  TRAOD esce subito. La mod  disponibile solo per TRAOD_P3 e TRAOD_P4
		return;

	bool exit = false;																		// Serve ad uscire dal menu
	char Selection;																			// Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
	int PhotoMode_Master_status = Detect_PHOTOMODE_MASTER_status(*Pro_Fix	);				// Serve per "Current status"
	int Controls_Mod_Master_status = Detect_CONTROLS_MOD_MASTER_status(*Pro_Fix);			// Se uguale a 0  necessario attivare anche questa mod
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
				" บ" <<white<< "                                                    PHOTO MODE                                                     " <<aqua<< "บ\n"
				" วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n"
				" บ                                                                                                                   บ\n"
				" บ   Photo mode allows you to freely navigate around the game world during both gameplay and cutscenes.              บ\n"
				" บ   Works best when combined with the \"Unlimited Room Boundaries\" advanced mod.                                     บ\n"
				" บ                                                                                                                   บ\n"
				" บ   How to use:                                                                                                     บ\n"
				" บ                                                                                                                   บ\n"
				" บ                          Game Controls                                  Photo Mode Controls                       บ\n"
				" บ             ฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤ           ฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤ             บ\n"
				" บ                                                                                                                   บ\n"
				" บ                Movement keys / Left analog stick                           Strafe / Dolly                         บ\n"
				" บ               Mouse movement / Right analog stick                            Pan / Tilt                           บ\n"
				" บ                               Walk                                             Sprint                             บ\n"
				" บ                              Weapon                                         Pedestal Up                           บ\n"
				" บ                          Sprint / Look                                     Pedestal Down                          บ\n"
				" บ                             Stealth                                          Reset Roll                           บ\n"
				" บ                               Duck                                             Roll +                             บ\n"
				" บ                       Roll / Switch target                                     Roll -                             บ\n"
				" บ                               Jump                                             FOV +                              บ\n"
				" บ                              Action                                            FOV -                              บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                    CTRL + F2 = Photo Mode on/off toggle button                                    บ\n"
				" บ                                                                                                                   บ\n"
				" บ   Choose one of the following options:                                                                            บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         1 )  ENABLED                                                                                              บ\n"
				" บ               Photo Mode requires Controls Mod to work properly. If you haven't activated it yet, you will        บ\n"
				" บ               be automatically redirected to it                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         2 )  DISABLED                                                                                             บ\n"
				" บ               Disabling Photo Mode won't affect Controls Mod status                                               บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<pink<< "   Current status: ";
		if (!PhotoMode_Master_status)
			cout << "Disabled                                                                                        " <<aqua<< "บ\n";
		else
			cout << "Enabled                                                                                         " <<aqua<< "บ\n";
		cout << " ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n"
				"\n Select an option and press Enter [" <<white<< "1-2" <<aqua<< "]: " <<white;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		if (userinput.length() > 1)
			Selection = '0';
		else
			Selection = userinput.at(0);
		switch (Selection)
		{
		case '1':		///////////////////////////////////////////////////////////////////     ENABLED
			if (!PhotoMode_Master_status)
			{
				Change_FreeCamera_status();
				FreeCameraTrigger_Enable();
				Pro_Fix->FreeCameraTrigger_status = true;
				if (Controls_Mod_Master_status == 0)
				{
					setbackcolor(dark_blue);
					Change_CONTROLS_MOD_MASTER_status(Pro_Fix);
					setbackcolor(black);
				}
			}
			exit = true;
			break;
		case '2':		///////////////////////////////////////////////////////////////////		DISABLED
			if (PhotoMode_Master_status)
			{
				Change_FreeCamera_status();
				FreeCameraTrigger_Disable();
				Pro_Fix_Deallocate_space();
				Pro_Fix->FreeCameraTrigger_status = false;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			exit = true;
        }
    } while (!exit);
}