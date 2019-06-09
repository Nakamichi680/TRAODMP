#include "stdafx.h"
#include "MISC/concol.h"
#include "MISC/Misc_Functions.h"


int Detect_Res_waterreflections_status()			// Restituisce: 0 = Normal, 1 = 2x, 2 = 4x
{
	size_t Position;
    // QUESTE STRINGHE SONO PER LA VERSIONE NORMALE
	string orig_traod_p4_4952("\x8B\xF8\xD1\xEF\x89\xB9\x2C\x16\0\0\x8B\xFE\xD1\xEF", 14);
	string orig_traod_p4_3942("\x8B\xF0\xD1\xEE\x89\x75\xD4\x89\xB1\x2C\x16\0\0\x8B\x75\xB8\x8B\xFE\xD1\xEF", 20);
	string orig_traod_p3_4952("\xD1\xEF\x89\x91\x28\x16\0\0\x89\xB9\x2C\x16\0\0\x8B\xFE\xD1\xEF", 18);
	string orig_traod_p3_3942("\xD1\xEF\x89\xB1\x28\x16\0\0\x89\x7D\xDC\x89\xB9\x2C\x16\0\0\x8B\x7D\xB8\x8B\xC7\xD1\xE8", 24);
	string orig_traod_4952("\xD1\xEA\xD1\xE9\x3B\xC7\x89\xBB\x28\x16\0\0\x89\x93\x2C\x16\0\0\x89", 19);
	string orig_traod_3942("\xD1\xE9\xD1\xEA\x85\xC0\x89\x8B\x2C\x16\0\0\x89\x93\x30\x16\0\0\xC7\x83", 20);
    // QUESTE STRINGHE SONO PER IL 2x
	string mod2x_traod_p4_4952("\x8B\xF8\x90\x90\x89\xB9\x2C\x16\0\0\x8B\xFE\x90\x90", 14);
	string mod2x_traod_p4_3942("\x8B\xF0\x90\x90\x89\x75\xD4\x89\xB1\x2C\x16\0\0\x8B\x75\xB8\x8B\xFE\x90\x90", 20);
	string mod2x_traod_p3_4952("\x90\x90\x89\x91\x28\x16\0\0\x89\xB9\x2C\x16\0\0\x8B\xFE\x90\x90", 18);
	string mod2x_traod_p3_3942("\x90\x90\x89\xB1\x28\x16\0\0\x89\x7D\xDC\x89\xB9\x2C\x16\0\0\x8B\x7D\xB8\x8B\xC7\x90\x90", 24);
	string mod2x_traod_4952("\x90\x90\x90\x90\x3B\xC7\x89\xBB\x28\x16\0\0\x89\x93\x2C\x16\0\0\x89", 19);
	string mod2x_traod_3942("\x90\x90\x90\x90\x85\xC0\x89\x8B\x2C\x16\0\0\x89\x93\x30\x16\0\0\xC7\x83", 20);
    // QUESTE STRINGHE SONO PER IL 4x
	string mod4x_traod_p4_4952("\x8B\xF8\xD1\xE7\x89\xB9\x2C\x16\0\0\x8B\xFE\xD1\xE7", 14);
	string mod4x_traod_p4_3942("\x8B\xF0\xD1\xE6\x89\x75\xD4\x89\xB1\x2C\x16\0\0\x8B\x75\xB8\x8B\xFE\xD1\xE7", 20);
	string mod4x_traod_p3_4952("\xD1\xE7\x89\x91\x28\x16\0\0\x89\xB9\x2C\x16\0\0\x8B\xFE\xD1\xE7", 18);
	string mod4x_traod_p3_3942("\xD1\xE7\x89\xB1\x28\x16\0\0\x89\x7D\xDC\x89\xB9\x2C\x16\0\0\x8B\x7D\xB8\x8B\xC7\xD1\xE0", 24);
	string mod4x_traod_4952("\xD1\xE2\xD1\xE1\x3B\xC7\x89\xBB\x28\x16\0\0\x89\x93\x2C\x16\0\0\x89", 19);
	string mod4x_traod_3942("\xD1\xE1\xD1\xE2\x85\xC0\x89\x8B\x2C\x16\0\0\x89\x93\x30\x16\0\0\xC7\x83", 20);

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


void Change_Res_waterreflections_status()
{
	size_t Position;
	bool exit = false;																// Serve ad uscire dal menu
	char Selection;																	// Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
	int Res_waterreflections_status = Detect_Res_waterreflections_status();			// Serve per "Current status"
	string userinput;

    // QUESTE STRINGHE SONO PER LA VERSIONE NORMALE
	string orig_traod_p4_4952("\x8B\xF8\xD1\xEF\x89\xB9\x2C\x16\0\0\x8B\xFE\xD1\xEF", 14);
	string orig_traod_p4_3942("\x8B\xF0\xD1\xEE\x89\x75\xD4\x89\xB1\x2C\x16\0\0\x8B\x75\xB8\x8B\xFE\xD1\xEF", 20);
	string orig_traod_p3_4952("\xD1\xEF\x89\x91\x28\x16\0\0\x89\xB9\x2C\x16\0\0\x8B\xFE\xD1\xEF", 18);
	string orig_traod_p3_3942("\xD1\xEF\x89\xB1\x28\x16\0\0\x89\x7D\xDC\x89\xB9\x2C\x16\0\0\x8B\x7D\xB8\x8B\xC7\xD1\xE8", 24);
	string orig_traod_4952("\xD1\xEA\xD1\xE9\x3B\xC7\x89\xBB\x28\x16\0\0\x89\x93\x2C\x16\0\0\x89", 19);
	string orig_traod_3942("\xD1\xE9\xD1\xEA\x85\xC0\x89\x8B\x2C\x16\0\0\x89\x93\x30\x16\0\0\xC7\x83", 20);
    // QUESTE STRINGHE SONO PER IL 2x
	string mod2x_traod_p4_4952("\x8B\xF8\x90\x90\x89\xB9\x2C\x16\0\0\x8B\xFE\x90\x90", 14);
	string mod2x_traod_p4_3942("\x8B\xF0\x90\x90\x89\x75\xD4\x89\xB1\x2C\x16\0\0\x8B\x75\xB8\x8B\xFE\x90\x90", 20);
	string mod2x_traod_p3_4952("\x90\x90\x89\x91\x28\x16\0\0\x89\xB9\x2C\x16\0\0\x8B\xFE\x90\x90", 18);
	string mod2x_traod_p3_3942("\x90\x90\x89\xB1\x28\x16\0\0\x89\x7D\xDC\x89\xB9\x2C\x16\0\0\x8B\x7D\xB8\x8B\xC7\x90\x90", 24);
	string mod2x_traod_4952("\x90\x90\x90\x90\x3B\xC7\x89\xBB\x28\x16\0\0\x89\x93\x2C\x16\0\0\x89", 19);
	string mod2x_traod_3942("\x90\x90\x90\x90\x85\xC0\x89\x8B\x2C\x16\0\0\x89\x93\x30\x16\0\0\xC7\x83", 20);
    // QUESTE STRINGHE SONO PER IL 4x
	string mod4x_traod_p4_4952("\x8B\xF8\xD1\xE7\x89\xB9\x2C\x16\0\0\x8B\xFE\xD1\xE7", 14);
	string mod4x_traod_p4_3942("\x8B\xF0\xD1\xE6\x89\x75\xD4\x89\xB1\x2C\x16\0\0\x8B\x75\xB8\x8B\xFE\xD1\xE7", 20);
	string mod4x_traod_p3_4952("\xD1\xE7\x89\x91\x28\x16\0\0\x89\xB9\x2C\x16\0\0\x8B\xFE\xD1\xE7", 18);
	string mod4x_traod_p3_3942("\xD1\xE7\x89\xB1\x28\x16\0\0\x89\x7D\xDC\x89\xB9\x2C\x16\0\0\x8B\x7D\xB8\x8B\xC7\xD1\xE0", 24);
	string mod4x_traod_4952("\xD1\xE2\xD1\xE1\x3B\xC7\x89\xBB\x28\x16\0\0\x89\x93\x2C\x16\0\0\x89", 19);
	string mod4x_traod_3942("\xD1\xE1\xD1\xE2\x85\xC0\x89\x8B\x2C\x16\0\0\x89\x93\x30\x16\0\0\xC7\x83", 20);

    do
    {
        system("cls");
		cout << " ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n"
				" บ                                                                                                                   บ\n"
				" บ" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "บ\n"
        		" บ" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "บ\n"
       			" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<white<< "                                           WATER REFLECTIONS RESOLUTION                                            " <<aqua<< "บ\n"
				" วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n"
				" บ                                                                                                                   บ\n"
				" บ   Increases the water reflections resolution.                                                                     บ\n"
				" บ                                                                                                                   บ\n"
				" บ   Choose one of the following options:                                                                            บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         1 )  NORMAL                                                                                               บ\n"
				" บ               Default game setting. Water reflections resolution will be half the screen resolution               บ\n"
				" บ               Example: screen resolution = 1920x1080 ----> water reflections resolution = 960x540                 บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         2 )  2x                                                                                                   บ\n"
				" บ               The side of the water reflection map will be twice the normal value and VRAM consumption will       บ\n"
				" บ               increase by a factor of 4. A good compromise between visual quality and performances                บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         3 )  4x                                                                                                   บ\n"
				" บ               The side of the water reflection map will be 4 times the normal value and VRAM consumption          บ\n"
				" บ               will be 16 times greater. Water reflections will be extremely sharp but there might be issues       บ\n"
				" บ               on old computers                                                                                    บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<pink<< "   Current status: ";
		if (Res_waterreflections_status == 0)
			cout << "Normal                                                                                          " <<aqua<< "บ\n";
		if (Res_waterreflections_status == 1)
			cout << "2x                                                                                              " <<aqua<< "บ\n";
		if (Res_waterreflections_status == 2)
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
			break;
		}
	} while (!exit);
}