#include "stdafx.h"
#include "MISC/concol.h"
#include "MISC/Misc_Functions.h"
#include "PRO_SHARED/Pro_FIX.h"


int Detect_Rain_status()							// Restituisce: 0 = Normal, 1 = High Density, 2 = Color mod, 3 = High Density + Color mod, 4 = Pixel Shader
{
	int ver = Detect_version_advanced();
	bool modColor = false;

	// LETTURA COLORE PIOGGIA
	size_t offset;
	stringstream temp2;
	unsigned int BGRA;
	if (ver == 452)		offset = 0x832D1;
	if (ver == 449)		offset = 0x836F5;
	if (ver == 442)		offset = 0x81A01;
	if (ver == 439)		offset = 0x80549;
	if (ver == 352)		offset = 0x7FDA9;
	if (ver == 349)		offset = 0x80431;
	if (ver == 342)		offset = 0x7EA7D;
	if (ver == 339)		offset = 0x7D3A5;
	if (ver == 52)		offset = 0x6BA24;
	if (ver == 49)		offset = 0x6C064;
	if (ver == 42)		offset = 0x6AAF4;
	if (ver == 39)		offset = 0x69874;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&BGRA, &temp, 4);
	if (BGRA == 0x482018FF)
		modColor = true;



	/*size_t Position;
    // QUESTE STRINGHE SONO PER LA VERSIONE NORMALE
	string orig_traod_p3_p4 = "\xC0\x75\x0A\x8B\x45\xBC\xD1\xE8\x89\x45\xBC\xEB\x14\x8B";
	string orig_traod = "\xEB\x02\xD1\xEE\x8B\x83\x88\x16";
    // QUESTE STRINGHE SONO PER IL 2x
	string mod2x_traod_p3_p4 = "\xC0\x75\x0A\x8B\x45\xBC\x90\x90\x89\x45\xBC\xEB\x14\x8B";
	string mod2x_traod = "\xEB\x02\x90\x90\x8B\x83\x88\x16";
    // QUESTE STRINGHE SONO PER IL 4x
    string mod4x_traod_p3_p4 = "\xC0\x75\x0A\x8B\x45\xBC\xD1\xE0\x89\x45\xBC\xEB\x14\x8B";
	string mod4x_traod = "\xEB\x02\xD1\xE6\x8B\x83\x88\x16";

    if ((Position = EXEorig.find(orig_traod_p3_p4)) != std::string::npos || (Position = EXEorig.find(orig_traod)) != std::string::npos)
        return 0;
    if ((Position = EXEorig.find(mod2x_traod_p3_p4)) != std::string::npos || (Position = EXEorig.find(mod2x_traod)) != std::string::npos)
        return 1;
    if ((Position = EXEorig.find(mod4x_traod_p3_p4)) != std::string::npos || (Position = EXEorig.find(mod4x_traod)) != std::string::npos)
        return 2;
    return -1;*/
}


void Change_Rain_status()
{
	//size_t Position;
	Pro_Fix_Status Pro_Fix;
    bool exit = false;													// Serve ad uscire dal menu
    //char Selection;														// Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
    int Rain_status = Detect_Rain_status();								// Serve per "Current status"
    Pro_Fix_Detect_status_ALL(&Pro_Fix);
	string userinput, temp;

  /*  // QUESTE STRINGHE SONO PER LA VERSIONE NORMALE
	string orig_traod_p3_p4 = "\xC0\x75\x0A\x8B\x45\xBC\xD1\xE8\x89\x45\xBC\xEB\x14\x8B";
	string orig_traod = "\xEB\x02\xD1\xEE\x8B\x83\x88\x16";
    // QUESTE STRINGHE SONO PER IL 2x
	string mod2x_traod_p3_p4 = "\xC0\x75\x0A\x8B\x45\xBC\x90\x90\x89\x45\xBC\xEB\x14\x8B";
	string mod2x_traod = "\xEB\x02\x90\x90\x8B\x83\x88\x16";
    // QUESTE STRINGHE SONO PER IL 4x
    string mod4x_traod_p3_p4 = "\xC0\x75\x0A\x8B\x45\xBC\xD1\xE0\x89\x45\xBC\xEB\x14\x8B";
	string mod4x_traod = "\xEB\x02\xD1\xE6\x8B\x83\x88\x16";

    do
    {
        system("cls");
		cout << " ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n";
		cout << " บ                                                                                                                   บ\n";
		cout << " บ" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "บ\n";
        cout << " บ" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "บ\n";
        cout << " บ                                                                                                                   บ\n";
		cout << " ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n";
		cout << " บ" <<white<< "                                          CUBEMAP REFLECTIONS RESOLUTION                                           " <<aqua<< "บ\n";
		cout << " วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n";
		cout << " บ                                                                                                                   บ\n";
		cout << " บ   Increases the cubemap reflections resolution. Make sure that \"Character Quality\" under \"Cubemap reflections\"    บ\n";
		cout << " บ   in game settings is set to \"High\".                                                                              บ\n";
		cout << " บ                                                                                                                   บ\n";
		cout << " บ   Choose one of the following options:                                                                            บ\n";
        cout << " บ                                                                                                                   บ\n";
        cout << " บ                                                                                                                   บ\n";
        cout << " บ         1 )  NORMAL                                                                                               บ\n";
        cout << " บ               Default game setting. Cubemap resolution will be half the horizontal screen resolution              บ\n";
		cout << " บ               Example: screen resolution = 1920x1080 ----> cubemap resolution = 960x960                           บ\n";
        cout << " บ                                                                                                                   บ\n";
        cout << " บ                                                                                                                   บ\n";
		cout << " บ         2 )  2x                                                                                                   บ\n";
        cout << " บ               The side of the cubemap will be twice the normal value and VRAM consumption will increase by a      บ\n";
        cout << " บ               factor of 4. A good compromise between visual quality and performances                              บ\n";
		cout << " บ                                                                                                                   บ\n";
		cout << " บ                                                                                                                   บ\n";
		cout << " บ         3 )  4x                                                                                                   บ\n";
        cout << " บ               The side of the cubemap will be 4 times the normal value and VRAM consumption will be 16 times      บ\n";
		cout << " บ               greater. Reflections will be extremely sharp but an enthusiast GPU with at least 2 GB of memory     บ\n";
		cout << " บ               is required                                                                                         บ\n";
        cout << " บ                                                                                                                   บ\n";
		cout << " บ                                                                                                                   บ\n";
        cout << " บ                                                                                                                   บ\n";
		cout << " ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n";
		cout << " บ" <<pink<< "   Current status: ";
        if (Res_cubemaps_status == 0)
            cout << "Normal                                                                                          " <<aqua<< "บ\n";
        if (Res_cubemaps_status == 1)
            cout << "2x                                                                                              " <<aqua<< "บ\n";
        if (Res_cubemaps_status == 2)
            cout << "4x                                                                                              " <<aqua<< "บ\n";
		cout << " ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n";
        cout << "\n Select an option and press Enter [" <<white<< "1-3" <<aqua<< "]: " <<white;
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
                {
                    temp = EXEorig.substr(0, Position);
                    temp += orig_traod_p3_p4;
                    temp += EXEorig.substr(Position+14, string::npos);
                    EXEorig = temp;
                }
				if ((Position = EXEorig.find(mod2x_traod)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += orig_traod;
                    temp += EXEorig.substr(Position+8, string::npos);
                    EXEorig = temp;
                }
				if ((Position = EXEorig.find(mod4x_traod_p3_p4)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += orig_traod_p3_p4;
                    temp += EXEorig.substr(Position+14, string::npos);
                    EXEorig = temp;
                }
				if ((Position = EXEorig.find(mod4x_traod)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += orig_traod;
                    temp += EXEorig.substr(Position+8, string::npos);
                    EXEorig = temp;
                }
                exit = true;
                break;
            case '2':		///////////////////////////////////////////////////////////////////     2x
                if ((Position = EXEorig.find(orig_traod_p3_p4)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += mod2x_traod_p3_p4;
                    temp += EXEorig.substr(Position+14, string::npos);
                    EXEorig = temp;
                }
				if ((Position = EXEorig.find(orig_traod)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += mod2x_traod;
                    temp += EXEorig.substr(Position+8, string::npos);
                    EXEorig = temp;
                }
				if ((Position = EXEorig.find(mod4x_traod_p3_p4)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += mod2x_traod_p3_p4;
                    temp += EXEorig.substr(Position+14, string::npos);
                    EXEorig = temp;
                }
				if ((Position = EXEorig.find(mod4x_traod)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += mod2x_traod;
                    temp += EXEorig.substr(Position+8, string::npos);
                    EXEorig = temp;
                }
                exit = true;
                break;
            case '3':		///////////////////////////////////////////////////////////////////     4x
                if ((Position = EXEorig.find(orig_traod_p3_p4)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += mod4x_traod_p3_p4;
                    temp += EXEorig.substr(Position+14, string::npos);
                    EXEorig = temp;
                }
				if ((Position = EXEorig.find(orig_traod)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += mod4x_traod;
                    temp += EXEorig.substr(Position+8, string::npos);
                    EXEorig = temp;
                }
				if ((Position = EXEorig.find(mod2x_traod_p3_p4)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += mod4x_traod_p3_p4;
                    temp += EXEorig.substr(Position+14, string::npos);
                    EXEorig = temp;
                }
				if ((Position = EXEorig.find(mod2x_traod)) != std::string::npos)
                {
                    temp = EXEorig.substr(0, Position);
                    temp += mod4x_traod;
                    temp += EXEorig.substr(Position+8, string::npos);
                    EXEorig = temp;
                }
                exit = true;
                break;
        }
    } while (!exit);*/
}