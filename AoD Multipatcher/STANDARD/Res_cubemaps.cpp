#include "stdafx.h"
#include "MISC/concol.h"
#include "MISC/Misc_Functions.h"


int Detect_Res_cubemaps_status()					// Restituisce: 0 = Normal, 1 = 2x, 2 = 4x
{
	size_t Position;
    // QUESTE STRINGHE SONO PER LA VERSIONE NORMALE
	string orig_traod_p3_p4("\xC0\x75\x0A\x8B\x45\xBC\xD1\xE8\x89\x45\xBC\xEB\x14\x8B", 14);
	string orig_traod("\xEB\x02\xD1\xEE\x8B\x83\x88\x16", 8);
    // QUESTE STRINGHE SONO PER IL 2x
	string mod2x_traod_p3_p4("\xC0\x75\x0A\x8B\x45\xBC\x90\x90\x89\x45\xBC\xEB\x14\x8B", 14);
	string mod2x_traod("\xEB\x02\x90\x90\x8B\x83\x88\x16", 8);
    // QUESTE STRINGHE SONO PER IL 4x
    string mod4x_traod_p3_p4("\xC0\x75\x0A\x8B\x45\xBC\xD1\xE0\x89\x45\xBC\xEB\x14\x8B", 14);
	string mod4x_traod("\xEB\x02\xD1\xE6\x8B\x83\x88\x16", 8);

    if ((Position = EXEorig.find(orig_traod_p3_p4)) != std::string::npos || (Position = EXEorig.find(orig_traod)) != std::string::npos)
        return 0;
    if ((Position = EXEorig.find(mod2x_traod_p3_p4)) != std::string::npos || (Position = EXEorig.find(mod2x_traod)) != std::string::npos)
        return 1;
    if ((Position = EXEorig.find(mod4x_traod_p3_p4)) != std::string::npos || (Position = EXEorig.find(mod4x_traod)) != std::string::npos)
        return 2;
    return -1;
}


void Change_Res_cubemaps_status()
{
	size_t Position;
	bool exit = false;													// Serve ad uscire dal menu
	char Selection;														// Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
	int Res_cubemaps_status = Detect_Res_cubemaps_status();				// Serve per "Current status"
	string userinput;

	// QUESTE STRINGHE SONO PER LA VERSIONE NORMALE
	string orig_traod_p3_p4("\xC0\x75\x0A\x8B\x45\xBC\xD1\xE8\x89\x45\xBC\xEB\x14\x8B", 14);
	string orig_traod("\xEB\x02\xD1\xEE\x8B\x83\x88\x16", 8);
    // QUESTE STRINGHE SONO PER IL 2x
	string mod2x_traod_p3_p4("\xC0\x75\x0A\x8B\x45\xBC\x90\x90\x89\x45\xBC\xEB\x14\x8B", 14);
	string mod2x_traod("\xEB\x02\x90\x90\x8B\x83\x88\x16", 8);
    // QUESTE STRINGHE SONO PER IL 4x
    string mod4x_traod_p3_p4("\xC0\x75\x0A\x8B\x45\xBC\xD1\xE0\x89\x45\xBC\xEB\x14\x8B", 14);
	string mod4x_traod("\xEB\x02\xD1\xE6\x8B\x83\x88\x16", 8);

    do
    {
        system("cls");
		cout << " �������������������������������������������������������������������������������������������������������������������ͻ\n"
				" �                                                                                                                   �\n"
				" �" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "�\n"
				" �" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "�\n"
				" �                                                                                                                   �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<white<< "                                          CUBEMAP REFLECTIONS RESOLUTION                                           " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �                                                                                                                   �\n"
				" �   Increases the cubemap reflections resolution. Make sure that \"Character Quality\" under \"Cubemap reflections\"    �\n"
				" �   in game settings is set to \"High\".                                                                              �\n"
				" �                                                                                                                   �\n"
				" �   Choose one of the following options:                                                                            �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �         1 )  NORMAL                                                                                               �\n"
				" �               Default game setting. Cubemap resolution will be half the horizontal screen resolution              �\n"
				" �               Example: screen resolution = 1920x1080 ----> cubemap resolution = 960x960                           �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �         2 )  2x                                                                                                   �\n"
				" �               The side of the cubemap will be twice the normal value and VRAM consumption will increase by a      �\n"
				" �               factor of 4. A good compromise between visual quality and performances                              �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �         3 )  4x                                                                                                   �\n"
				" �               The side of the cubemap will be 4 times the normal value and VRAM consumption will be 16 times      �\n"
				" �               greater. Reflections will be extremely sharp but an enthusiast GPU with at least 2 GB of memory     �\n"
				" �               is required                                                                                         �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<pink<< "   Current status: ";
		if (Res_cubemaps_status == 0)
			cout << "Normal                                                                                          " <<aqua<< "�\n";
		if (Res_cubemaps_status == 1)
			cout << "2x                                                                                              " <<aqua<< "�\n";
		if (Res_cubemaps_status == 2)
			cout << "4x                                                                                              " <<aqua<< "�\n";
		cout << " �������������������������������������������������������������������������������������������������������������������ͼ\n"
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
			if ((Position = EXEorig.find(mod2x_traod_p3_p4)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_p3_p4, Position);
			if ((Position = EXEorig.find(mod2x_traod)) != std::string::npos)
				ChangeSTRINGValue(orig_traod, Position);
			if ((Position = EXEorig.find(mod4x_traod_p3_p4)) != std::string::npos)
				ChangeSTRINGValue(orig_traod_p3_p4, Position);
			if ((Position = EXEorig.find(mod4x_traod)) != std::string::npos)
				ChangeSTRINGValue(orig_traod, Position);
			exit = true;
			break;
		case '2':		///////////////////////////////////////////////////////////////////     2x
			if ((Position = EXEorig.find(orig_traod_p3_p4)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_p3_p4, Position);
			if ((Position = EXEorig.find(orig_traod)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod, Position);
			if ((Position = EXEorig.find(mod4x_traod_p3_p4)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod_p3_p4, Position);
			if ((Position = EXEorig.find(mod4x_traod)) != std::string::npos)
				ChangeSTRINGValue(mod2x_traod, Position);
			exit = true;
			break;
		case '3':		///////////////////////////////////////////////////////////////////     4x
			if ((Position = EXEorig.find(orig_traod_p3_p4)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_p3_p4, Position);
			if ((Position = EXEorig.find(orig_traod)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod, Position);
			if ((Position = EXEorig.find(mod2x_traod_p3_p4)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod_p3_p4, Position);
			if ((Position = EXEorig.find(mod2x_traod)) != std::string::npos)
				ChangeSTRINGValue(mod4x_traod, Position);
			exit = true;
		}
	} while (!exit);
}