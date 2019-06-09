#include "stdafx.h"
#include "MISC/concol.h"
#include "PRO_SHARED/Pro_FIX.h"


void Change_HeatHaze_effect_MASTER_status(Pro_Fix_Status *Pro_Fix)
{
	bool exit = false;																	// Serve ad uscire dal menu
	char Selection;																		// Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
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
				" บ" <<white<< "                                                HEAT HAZE EFFECT FIX                                               " <<aqua<< "บ\n"
				" วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n"
				" บ                                                                                                                   บ\n"
				" บ   Restores the original PS2 heat haze effect. This effect is widely used throughout the game for wind, heat and   บ\n"
				" บ   Eckhardt's glove. The following is a brief list of some levels and cutscenes where it is most noticeable:       บ\n"
				" บ                                                                                                                   บ\n"
				" บ      - \"Eckhardt addresses the Cabal\" and \"Eckhardt kills Luddick in the Strahov Fortress\" cutscenes              บ\n"
				" บ      - The Hall of Seasons                                                                                        บ\n"
				" บ      - The Sanctuary of Flame                                                                                     บ\n"
				" บ      - The Breath of Hades                                                                                        บ\n"
				" บ      - The Strahov Fortress                                                                                       บ\n"
				" บ      - The Vault of Trophies                                                                                      บ\n"
				" บ      - The Lost Domain                                                                                            บ\n"
				" บ      - Eckhardt's Lab                                                                                             บ\n"
				" บ                                                                                                                   บ\n"
				" บ   IMPORTANT NOTICES:                                                                                              บ\n"
				" บ                                                                                                                   บ\n"
				" บ      - After applying the fix, copy \"HeatEMBM.tga\" provided with the EXE Multi-Patcher inside Data\\effects        บ\n"
				" บ        folder, overwriting the existing file. Otherwise the effect will not look as expected.                     บ\n"
				" บ      - Enable \"RT to screen size\" under graphic settings.                                                         บ\n"
				" บ      - This effect is extremely CPU and GPU intensive. If your computer is not powerful enough you may notice     บ\n"
				" บ        some slowdown in \"The Hall of Seasons\", \"The Sanctuary of Flame\" and \"The Lost Domain\".                    บ\n"
				" บ                                                                                                                   บ\n"
				" บ   Choose one of the following options:                                                                            บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         1 )  ENABLED                                                                                              บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         2 )  DISABLED                                                                                             บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<pink<< "   Current status: ";
		if (!Pro_Fix->HeatHaze_effect_status)
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
		case '1':		///////////////////////////////////////////////////////////////////		ENABLED
			if (!Pro_Fix->HeatHaze_effect_status)
				HeatHaze_effect_Enable();
			exit = true;
			break;
		case '2':		///////////////////////////////////////////////////////////////////		DISABLED
			if (Pro_Fix->HeatHaze_effect_status)
			{
				HeatHaze_effect_Disable();
				Pro_Fix_Deallocate_space();
				Pro_Fix->HeatHaze_effect_status = false;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			exit = true;
		}
	} while (!exit);
}