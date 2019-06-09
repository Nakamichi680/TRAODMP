#include "stdafx.h"
#include "MISC/concol.h"
#include "MISC/Misc_Functions.h"


int Detect_Res_shadows_status()						// Restituisce: 0 = Normal, 1 = 2x, 2 = 4x
{
	size_t Position;
    // QUESTE STRINGHE SONO PER LA VERSIONE NORMALE
	string orig_traod_p4_4952("\xD1\xE8\x50\xE8\x4A\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\xD1\xEA", 18);
	string orig_traod_p4_3942("\xD1\xE8\x50\xE8\xD7\xD7\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\xD1\xEA", 18);
	string orig_traod_p3_4952("\xD1\xE8\x50\xE8\xD1\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\xD1\xEA", 18);
	string orig_traod_p3_3942("\xD1\xE8\x50\xE8\x5F\xD8\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\xD1\xEA", 18);
	string orig_traod_4952("\xD1\xE8\x50\xE8\xF5\xD8\xFF\xFF\x8B\x8C\x24\x8C\0\0\0\x8B\xF0\xD1\xE9", 19);
	string orig_traod_3942("\xD1\xEA\x52\xE8\xA3\xC2\xFF\xFF\x8B\xF0\x8B\x84\x24\x8C\0\0\0\xD1\xE8", 19);
    // QUESTE STRINGHE SONO PER IL 2x
	string mod2x_traod_p4_4952("\x90\x90\x50\xE8\x4A\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\x90\x90", 18);
	string mod2x_traod_p4_3942("\x90\x90\x50\xE8\xD7\xD7\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\x90\x90", 18);
	string mod2x_traod_p3_4952("\x90\x90\x50\xE8\xD1\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\x90\x90", 18);
	string mod2x_traod_p3_3942("\x90\x90\x50\xE8\x5F\xD8\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\x90\x90", 18);
	string mod2x_traod_4952("\x90\x90\x50\xE8\xF5\xD8\xFF\xFF\x8B\x8C\x24\x8C\0\0\0\x8B\xF0\x90\x90", 19);
	string mod2x_traod_3942("\x90\x90\x52\xE8\xA3\xC2\xFF\xFF\x8B\xF0\x8B\x84\x24\x8C\0\0\0\x90\x90", 19);
    // QUESTE STRINGHE SONO PER IL 4x
	string mod4x_traod_p4_4952("\xD1\xE0\x50\xE8\x4A\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\xD1\xE2", 18);
	string mod4x_traod_p4_3942("\xD1\xE0\x50\xE8\xD7\xD7\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\xD1\xE2", 18);
	string mod4x_traod_p3_4952("\xD1\xE0\x50\xE8\xD1\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\xD1\xE2", 18);
	string mod4x_traod_p3_3942("\xD1\xE0\x50\xE8\x5F\xD8\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\xD1\xE2", 18);
	string mod4x_traod_4952("\xD1\xE0\x50\xE8\xF5\xD8\xFF\xFF\x8B\x8C\x24\x8C\0\0\0\x8B\xF0\xD1\xE1", 19);
	string mod4x_traod_3942("\xD1\xE2\x52\xE8\xA3\xC2\xFF\xFF\x8B\xF0\x8B\x84\x24\x8C\0\0\0\xD1\xE0", 19);

    if ((Position = EXEorig.find(orig_traod_p4_4952)) != std::string::npos || (Position = EXEorig.find(orig_traod_p4_3942)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_4952)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_3942)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_4952)) != std::string::npos || (Position = EXEorig.find(orig_traod_3942)) != std::string::npos)
        return 0;
    if ((Position = EXEorig.find(mod2x_traod_p4_4952)) != std::string::npos || (Position = EXEorig.find(mod2x_traod_p4_3942)) != std::string::npos ||
		(Position = EXEorig.find(mod2x_traod_p3_4952)) != std::string::npos || (Position = EXEorig.find(mod2x_traod_p3_3942)) != std::string::npos ||
		(Position = EXEorig.find(mod2x_traod_4952)) != std::string::npos || (Position = EXEorig.find(mod2x_traod_3942)) != std::string::npos)
        return 1;
    if ((Position = EXEorig.find(mod4x_traod_p4_4952)) != std::string::npos || (Position = EXEorig.find(mod4x_traod_p4_3942)) != std::string::npos ||
		(Position = EXEorig.find(mod4x_traod_p3_4952)) != std::string::npos || (Position = EXEorig.find(mod4x_traod_p3_3942)) != std::string::npos ||
		(Position = EXEorig.find(mod4x_traod_4952)) != std::string::npos || (Position = EXEorig.find(mod4x_traod_3942)) != std::string::npos)
        return 2;
    return -1;
}


void Change_Res_shadows_status()
{
	size_t Position;
	bool exit = false;													// Serve ad uscire dal menu
	char Selection;														// Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
	int Res_shadows_status = Detect_Res_shadows_status();				// Serve per "Current status"
	string userinput;

	// QUESTE STRINGHE SONO PER LA VERSIONE NORMALE
	string orig_traod_p4_4952("\xD1\xE8\x50\xE8\x4A\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\xD1\xEA", 18);
	string orig_traod_p4_3942("\xD1\xE8\x50\xE8\xD7\xD7\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\xD1\xEA", 18);
	string orig_traod_p3_4952("\xD1\xE8\x50\xE8\xD1\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\xD1\xEA", 18);
	string orig_traod_p3_3942("\xD1\xE8\x50\xE8\x5F\xD8\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\xD1\xEA", 18);
	string orig_traod_4952("\xD1\xE8\x50\xE8\xF5\xD8\xFF\xFF\x8B\x8C\x24\x8C\0\0\0\x8B\xF0\xD1\xE9", 19);
	string orig_traod_3942("\xD1\xEA\x52\xE8\xA3\xC2\xFF\xFF\x8B\xF0\x8B\x84\x24\x8C\0\0\0\xD1\xE8", 19);
    // QUESTE STRINGHE SONO PER IL 2x
	string mod2x_traod_p4_4952("\x90\x90\x50\xE8\x4A\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\x90\x90", 18);
	string mod2x_traod_p4_3942("\x90\x90\x50\xE8\xD7\xD7\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\x90\x90", 18);
	string mod2x_traod_p3_4952("\x90\x90\x50\xE8\xD1\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\x90\x90", 18);
	string mod2x_traod_p3_3942("\x90\x90\x50\xE8\x5F\xD8\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\x90\x90", 18);
	string mod2x_traod_4952("\x90\x90\x50\xE8\xF5\xD8\xFF\xFF\x8B\x8C\x24\x8C\0\0\0\x8B\xF0\x90\x90", 19);
	string mod2x_traod_3942("\x90\x90\x52\xE8\xA3\xC2\xFF\xFF\x8B\xF0\x8B\x84\x24\x8C\0\0\0\x90\x90", 19);
    // QUESTE STRINGHE SONO PER IL 4x
	string mod4x_traod_p4_4952("\xD1\xE0\x50\xE8\x4A\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\xD1\xE2", 18);
	string mod4x_traod_p4_3942("\xD1\xE0\x50\xE8\xD7\xD7\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\xD1\xE2", 18);
	string mod4x_traod_p3_4952("\xD1\xE0\x50\xE8\xD1\xD6\xFF\xFF\x8B\xF0\x8B\x95\x74\xFF\xFF\xFF\xD1\xE2", 18);
	string mod4x_traod_p3_3942("\xD1\xE0\x50\xE8\x5F\xD8\xFF\xFF\x8B\xF0\x8B\x95\x68\xFF\xFF\xFF\xD1\xE2", 18);
	string mod4x_traod_4952("\xD1\xE0\x50\xE8\xF5\xD8\xFF\xFF\x8B\x8C\x24\x8C\0\0\0\x8B\xF0\xD1\xE1", 19);
	string mod4x_traod_3942("\xD1\xE2\x52\xE8\xA3\xC2\xFF\xFF\x8B\xF0\x8B\x84\x24\x8C\0\0\0\xD1\xE0", 19);

    do
    {
        system("cls");
		cout << " ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n"
				" บ                                                                                                                   บ\n"
				" บ" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "บ\n"
				" บ" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<white<< "                                             DYNAMIC SHADOWS RESOLUTION                                            " <<aqua<< "บ\n"
				" วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n"
				" บ                                                                                                                   บ\n"
				" บ   Increases the resolution of real-time shadows. For best results, select \"nVidia Shadows\" in game settings       บ\n"
				" บ   and untick \"Pixel Shader 2.0 Shadows\".                                                                          บ\n"
				" บ                                                                                                                   บ\n"
				" บ   Choose one of the following options:                                                                            บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         1 )  NORMAL                                                                                               บ\n"
				" บ               Default game setting. Shadowmap resolution will be half the vertical screen resolution              บ\n"
				" บ               Example: screen resolution = 1920x1080 ----> shadowmap resolution = 540x540                         บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         2 )  2x                                                                                                   บ\n"
				" บ               The side of the shadow map will be twice the normal value and RAM consumption will increase         บ\n"
				" บ               by a factor of 4. A good compromise between visual quality and performances                         บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         3 )  4x                                                                                                   บ\n"
				" บ               The side of the shadow map will be 4 times the normal value and RAM consumption will be 16          บ\n"
				" บ               times greater. Shadows will be extremely sharp but there might be issues on old computers           บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<pink<< "   Current status: ";
		if (Res_shadows_status == 0)
			cout << "Normal                                                                                          " <<aqua<< "บ\n";
		if (Res_shadows_status == 1)
			cout << "2x                                                                                              " <<aqua<< "บ\n";
		if (Res_shadows_status == 2)
			cout << "4x                                                                                              " <<aqua<< "บ\n";
		cout << " ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n"
				"\n Select an option and press Enter [" <<white<< "1-3" <<aqua<< "]: " <<white;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		if (userinput.length() > 1)
			Selection = '0';
		else
			Selection = userinput.at(0);
		switch (Selection)
		{
		case '1':		///////////////////////////////////////////////////////////////////     NORMAL
			if ((Position = EXEorig.find(mod2x_traod_p4_4952)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_p4_4952, Position);
			if ((Position = EXEorig.find(mod2x_traod_p4_3942)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_p4_3942, Position);
			if ((Position = EXEorig.find(mod2x_traod_p3_4952)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_p3_4952, Position);
			if ((Position = EXEorig.find(mod2x_traod_p3_3942)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_p3_3942, Position);
			if ((Position = EXEorig.find(mod2x_traod_4952)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_4952, Position);
			if ((Position = EXEorig.find(mod2x_traod_3942)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_3942, Position);
			if ((Position = EXEorig.find(mod4x_traod_p4_4952)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_p4_4952, Position);
			if ((Position = EXEorig.find(mod4x_traod_p4_3942)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_p4_3942, Position);
			if ((Position = EXEorig.find(mod4x_traod_p3_4952)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_p3_4952, Position);
			if ((Position = EXEorig.find(mod4x_traod_p3_3942)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_p3_3942, Position);
			if ((Position = EXEorig.find(mod4x_traod_4952)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_4952, Position);
			if ((Position = EXEorig.find(mod4x_traod_3942)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_3942, Position);
			exit = true;
			break;
		case '2':		///////////////////////////////////////////////////////////////////     2x
			if ((Position = EXEorig.find(orig_traod_p4_4952)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_p4_4952, Position);
			if ((Position = EXEorig.find(orig_traod_p4_3942)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_p4_3942, Position);
			if ((Position = EXEorig.find(orig_traod_p3_4952)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_p3_4952, Position);
			if ((Position = EXEorig.find(orig_traod_p3_3942)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_p3_3942, Position);
			if ((Position = EXEorig.find(orig_traod_4952)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_4952, Position);
			if ((Position = EXEorig.find(orig_traod_3942)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_3942, Position);
			if ((Position = EXEorig.find(mod4x_traod_p4_4952)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_p4_4952, Position);
			if ((Position = EXEorig.find(mod4x_traod_p4_3942)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_p4_3942, Position);
			if ((Position = EXEorig.find(mod4x_traod_p3_4952)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_p3_4952, Position);
			if ((Position = EXEorig.find(mod4x_traod_p3_3942)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_p3_3942, Position);
			if ((Position = EXEorig.find(mod4x_traod_4952)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_4952, Position);
			if ((Position = EXEorig.find(mod4x_traod_3942)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_3942, Position);
			exit = true;
			break;
		case '3':		///////////////////////////////////////////////////////////////////     4x
			if ((Position = EXEorig.find(orig_traod_p4_4952)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_p4_4952, Position);
			if ((Position = EXEorig.find(orig_traod_p4_3942)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_p4_3942, Position);
			if ((Position = EXEorig.find(orig_traod_p3_4952)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_p3_4952, Position);
			if ((Position = EXEorig.find(orig_traod_p3_3942)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_p3_3942, Position);
			if ((Position = EXEorig.find(orig_traod_4952)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_4952, Position);
			if ((Position = EXEorig.find(orig_traod_3942)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_3942, Position);
			if ((Position = EXEorig.find(mod2x_traod_p4_4952)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_p4_4952, Position);
			if ((Position = EXEorig.find(mod2x_traod_p4_3942)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_p4_3942, Position);
			if ((Position = EXEorig.find(mod2x_traod_p3_4952)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_p3_4952, Position);
			if ((Position = EXEorig.find(mod2x_traod_p3_3942)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_p3_3942, Position);
			if ((Position = EXEorig.find(mod2x_traod_4952)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_4952, Position);
			if ((Position = EXEorig.find(mod2x_traod_3942)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_3942, Position);
			exit = true;
		}
	} while (!exit);
}