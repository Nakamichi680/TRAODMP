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
		cout << " �������������������������������������������������������������������������������������������������������������������ͻ\n"
				" �                                                                                                                   �\n"
				" �" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "�\n"
				" �" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "�\n"
				" �                                                                                                                   �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<white<< "                                                HEAT HAZE EFFECT FIX                                               " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �                                                                                                                   �\n"
				" �   Restores the original PS2 heat haze effect. This effect is widely used throughout the game for wind, heat and   �\n"
				" �   Eckhardt's glove. The following is a brief list of some levels and cutscenes where it is most noticeable:       �\n"
				" �                                                                                                                   �\n"
				" �      - \"Eckhardt addresses the Cabal\" and \"Eckhardt kills Luddick in the Strahov Fortress\" cutscenes              �\n"
				" �      - The Hall of Seasons                                                                                        �\n"
				" �      - The Sanctuary of Flame                                                                                     �\n"
				" �      - The Breath of Hades                                                                                        �\n"
				" �      - The Strahov Fortress                                                                                       �\n"
				" �      - The Vault of Trophies                                                                                      �\n"
				" �      - The Lost Domain                                                                                            �\n"
				" �      - Eckhardt's Lab                                                                                             �\n"
				" �                                                                                                                   �\n"
				" �   IMPORTANT NOTICES:                                                                                              �\n"
				" �                                                                                                                   �\n"
				" �      - After applying the fix, copy \"HeatEMBM.tga\" provided with the EXE Multi-Patcher inside Data\\effects        �\n"
				" �        folder, overwriting the existing file. Otherwise the effect will not look as expected.                     �\n"
				" �      - Enable \"RT to screen size\" under graphic settings.                                                         �\n"
				" �      - This effect is extremely CPU and GPU intensive. If your computer is not powerful enough you may notice     �\n"
				" �        some slowdown in \"The Hall of Seasons\", \"The Sanctuary of Flame\" and \"The Lost Domain\".                    �\n"
				" �                                                                                                                   �\n"
				" �   Choose one of the following options:                                                                            �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �         1 )  ENABLED                                                                                              �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �         2 )  DISABLED                                                                                             �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<pink<< "   Current status: ";
		if (!Pro_Fix->HeatHaze_effect_status)
			cout << "Disabled                                                                                        " <<aqua<< "�\n";
		else
			cout << "Enabled                                                                                         " <<aqua<< "�\n";
		cout << " �������������������������������������������������������������������������������������������������������������������ͼ\n"
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