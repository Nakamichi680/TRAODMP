#include "stdafx.h"
#include "MISC/concol.h"
#include "STANDARD/Standard_FIX.h"


void Change_ESC_SKIP_MASTER_status()				// Modifica sia l'uscita dalle cutscene che dagli FMV
{
	bool exit = false;														// Serve ad uscire dal menu
	char Selection;															// Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
	bool CutsceneESC_status = Detect_ESC_SKIP_Cutscene_status();			// Controlla se le cutscene si interrompono con il solo tasto ESC
	bool FMVESC_status = Detect_ESC_SKIP_FMV_status();						// Controlla se gli FMV si interrompono con il solo tasto ESC
	string userinput, temp;
	do
	{
		system("cls");
		cout << " �������������������������������������������������������������������������������������������������������������������ͻ\n"
				" �                                                                                                                   �\n"
				" �" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "�\n"
				" �" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "�\n"
				" �                                                                                                                   �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<white<< "                                              CUTSCENE/FMV SKIP BUTTON                                             " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �                                                                                                                   �\n"
				" �   All keyboard/gamepad inputs except for the \"ESC\" button will be ignored during cutscenes and/or FMVs, thus      �\n"
				" �   making it possible, for example, to take screenshots or to start video recording.                               �\n"
				" �                                                                                                                   �\n"
				" �   Choose one of the following options:                                                                            �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �         1 )  CUTSCENE-ONLY                                                                                        �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �         2 )  FMV-ONLY                                                                                             �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �         3 )  CUTSCENE + FMV                                                                                       �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �         4 )  DISABLED                                                                                             �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<pink<< "   Current status: ";
		if (!CutsceneESC_status && !FMVESC_status)
			cout << "Disabled                                                                                        " <<aqua<< "�\n";
		if (CutsceneESC_status && !FMVESC_status)
			cout << "Enabled        Preset: Cutscene-only                                                            " <<aqua<< "�\n";
		if (!CutsceneESC_status && FMVESC_status)
			cout << "Enabled        Preset: FMV-only                                                                 " <<aqua<< "�\n";
		if (CutsceneESC_status && FMVESC_status)
			cout << "Enabled        Preset: Cutscene + FMV                                                           " <<aqua<< "�\n";
		cout << " �������������������������������������������������������������������������������������������������������������������ͼ\n"
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
		case '1':		///////////////////////////////////////////////////////////////////		CUTSCENE-ONLY
			if (!CutsceneESC_status)
				Change_ESC_SKIP_Cutscene_status();
			if (FMVESC_status)
				Change_ESC_SKIP_FMV_status();
			exit = true;
			break;
		case '2':		///////////////////////////////////////////////////////////////////		FMV-ONLY
			if (!FMVESC_status)
				Change_ESC_SKIP_FMV_status();
			if (CutsceneESC_status)
				Change_ESC_SKIP_Cutscene_status();
			exit = true;
			break;
		case '3':		///////////////////////////////////////////////////////////////////		CUTSCENE + FMV
			if (!CutsceneESC_status)
				Change_ESC_SKIP_Cutscene_status();
			if (!FMVESC_status)
				Change_ESC_SKIP_FMV_status();
			exit = true;
			break;
		case '4':		///////////////////////////////////////////////////////////////////		DISABLED
			if (CutsceneESC_status)
				Change_ESC_SKIP_Cutscene_status();
			if (FMVESC_status)
				Change_ESC_SKIP_FMV_status();
			exit = true;
		}
	} while (!exit);
}