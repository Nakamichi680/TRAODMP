#include "stdafx.h"
#include "MISC/concol.h"
#include "MISC/Misc_Functions.h"


int Detect_Farsee_status(int &KRed, int &KGreen, int &KBlue, int &KBrightness)		// Ritorna 0=disabilitato, 1=light, 2=medium, 3=strong, 4=custom
{
	size_t Position;

    // QUESTE STRINGHE SERVONO A TROVARE IL PUNTO IMMEDIATAMENTE PRIMA I VALORI DA CONTROLLARE NELLA FUNZIONE "Render_Scene_PostProcess_SpecialCameras"
	string traod("\x8B\x4C\x24\x18\x8B\x54\x24\x14\x6A\0\x50\x8B\x44\x24\x18\x6A", 16);
	string traod_p3("\x83\xF8\x05\x0F\x84\xAD\0\0\0\x83\xF8\x06\x75\x31\x6A\0\xFF\x35", 18);	// Dopo questa parte saltare altri 5 bytes
	string traod_p4("\x83\xF8\x05\x0F\x84\xAF\0\0\0\x83\xF8\x06\x75\x31\x6A\0\xFF\x35", 18);	// Dopo questa parte saltare altri 5 bytes

	if ((Position = EXEorig.find(traod)) != std::string::npos)		// Per tutte le versioni di TRAOD
	{
		KBlue = *((unsigned char *)&EXEorig[Position+16]);
		KGreen = *((unsigned char *)&EXEorig[Position+18]);
		KRed = *((unsigned char *)&EXEorig[Position+20]);
		KBrightness = *((unsigned char *)&EXEorig[Position+22]);
    }
	if ((Position = EXEorig.find(traod_p3)) != std::string::npos)	// Per tutte le versioni di TRAOD_P3
	{
		KBlue = *((unsigned char *)&EXEorig[Position+23]);
		KGreen = *((unsigned char *)&EXEorig[Position+25]);
		KRed = *((unsigned char *)&EXEorig[Position+27]);
		KBrightness = *((unsigned char *)&EXEorig[Position+29]);
	}
	if ((Position = EXEorig.find(traod_p4)) != std::string::npos)	// Per tutte le versioni di TRAOD_P4
	{
		KBlue = *((unsigned char *)&EXEorig[Position+23]);
		KGreen = *((unsigned char *)&EXEorig[Position+25]);
		KRed = *((unsigned char *)&EXEorig[Position+27]);
		KBrightness = *((unsigned char *)&EXEorig[Position+29]);
	}

	if (KBlue==72 && KGreen==80 && KRed==96 && KBrightness==56)		// Disabilitato
		return 0;
	if (KBlue==53 && KGreen==75 && KRed==159 && KBrightness==112)	// Light
		return 1;
	if (KBlue==39 && KGreen==72 && KRed==192 && KBrightness==176)	// Medium
		return 2;
	if (KBlue==24 && KGreen==57 && KRed==239 && KBrightness==155)	// Strong
		return 3;
	return 4;														// Custom
}


void Change_Farsee_status(int &KRed, int &KGreen, int &KBlue, int &KBrightness)		// Funzione che modifica l'intensit… dell'effetto farsee di Kurtis
{
	size_t Position;
	bool exit = false;
	char Selection;																	// Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
	string userinput, temp;
	string traod("\x8B\x4C\x24\x18\x8B\x54\x24\x14\x6A\0\x50\x8B\x44\x24\x18\x6A", 16);
	string traod_p3("\x83\xF8\x05\x0F\x84\xAD\0\0\0\x83\xF8\x06\x75\x31\x6A\0\xFF\x35", 18);	// Dopo questa parte saltare altri 5 bytes
	string traod_p4("\x83\xF8\x05\x0F\x84\xAF\0\0\0\x83\xF8\x06\x75\x31\x6A\0\xFF\x35", 18);	// Dopo questa parte saltare altri 5 bytes

	int Farsee_status = Detect_Farsee_status(KRed, KGreen, KBlue, KBrightness);		// Serve per "Current status"

	do
	{
		system("cls");
		cout << " ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n"
				" บ                                                                                                                   บ\n"
				" บ" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "บ\n"
				" บ" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<white<< "                                             KURTIS' FARSEE EFFECT FIX                                             " <<aqua<< "บ\n"
				" วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n"
				" บ                                                                                                                   บ\n"
				" บ   Restores the broken Kurtis' farsee effect in \"The Sanitarium\" and \"Maximum Containment Area\" levels.            บ\n"
				" บ                                                                                                                   บ\n"
				" บ   Choose one of the following options:                                                                            บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         1 )  ENABLED - LIGHT                                                                                      บ\n"
				" บ               Adds a light tint of red to the image                                                               บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         2 )  ENABLED - MEDIUM                                                                                     บ\n"
				" บ               Original PS2 look (Recommended)                                                                     บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         3 )  ENABLED - STRONG                                                                                     บ\n"
				" บ               If the red tone of the medium preset is not strong enough                                           บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         4 )  ENABLED - CUSTOM                                                                                     บ\n"
				" บ               Select your own custom colour in a range of 0 to 255 RGB values                                     บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         5 )  DISABLED                                                                                             บ\n"
				" บ               Keeps the original PC look                                                                          บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<pink<< "   Current status: ";

		if (Farsee_status == 0)
			cout << "Disabled                                                                                        " <<aqua<< "บ\n";
		if (Farsee_status == 1)
			cout << "Enabled        Preset: Light                                                                    " <<aqua<< "บ\n";
		if (Farsee_status == 2)
			cout << "Enabled        Preset: Medium                                                                   " <<aqua<< "บ\n";
		if (Farsee_status == 3)
			cout << "Enabled        Preset: Strong                                                                   " <<aqua<< "บ\n";
		if (Farsee_status == 4)
		{
			cout << "Enabled        Preset: Custom            Red = ";
			cout << setw(8) << KRed << " Green = " << setw(8) << KGreen << " Blue = " << setw(8) << KBlue << "        " <<aqua<< "บ\n";
		}
		cout << " ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n"
				"\n Select an option and press Enter [" <<white<< "1-5" <<aqua<<"]: " <<white;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		if (userinput.length() > 1)
			Selection = '0';
		else
			Selection = userinput.at(0);
		switch (Selection)
		{
		case '1':		///////////////////////////////////////////////////////////////////     LIGHT
			KRed = 159;
			KGreen = 75;
			KBlue = 53;
			KBrightness = 112;
			exit = true;
			break;
		case '2':		///////////////////////////////////////////////////////////////////     MEDIUM
			KRed = 192;
			KGreen = 72;
			KBlue = 39;
			KBrightness = 176;
			exit = true;
			break;
		case '3':		///////////////////////////////////////////////////////////////////     STRONG
			KRed = 239;
			KGreen = 57;
			KBlue = 24;
			KBrightness = 155;
			exit = true;
			break;
		case '4':		///////////////////////////////////////////////////////////////////     CUSTOM
			Ask_Color_value("Red", &KRed);
			Ask_Color_value("Green", &KGreen);
			Ask_Color_value("Blue", &KBlue);
			KBrightness = 146;
			exit = true;
			break;
		case '5':		///////////////////////////////////////////////////////////////////     DISABLED
			KRed = 96;
			KGreen = 80;
			KBlue = 72;
			KBrightness = 56;
			exit = true;
		}
	} while (!exit);

	if ((Position = EXEorig.find(traod)) != std::string::npos)			// Scrive i nuovi valori per TRAOD
	{
		temp = EXEorig.substr(0, Position+16);
		temp += KBlue;			temp += "\x6A";
		temp += KGreen;			temp += "\x6A";
		temp += KRed;			temp += "\x6A";
		temp += KBrightness;
		temp += EXEorig.substr(Position+23, string::npos);
		EXEorig = temp;
		return;
	}
	if ((Position = EXEorig.find(traod_p3)) != std::string::npos)		// Scrive i nuovi valori per TRAOD_P3
	{
		temp = EXEorig.substr(0, Position+23);
		temp += KBlue;			temp += "\x6A";
		temp += KGreen;			temp += "\x6A";
		temp += KRed;			temp += "\x6A";
		temp += KBrightness;
		temp += EXEorig.substr(Position+30, string::npos);
		EXEorig = temp;
		return;
	}
	if ((Position = EXEorig.find(traod_p4)) != std::string::npos)		// Scrive i nuovi valori per TRAOD_P4
	{
		temp = EXEorig.substr(0, Position+23);
		temp += KBlue;			temp += "\x6A";
		temp += KGreen;			temp += "\x6A";
		temp += KRed;			temp += "\x6A";
		temp += KBrightness;
		temp += EXEorig.substr(Position+30, string::npos);
		EXEorig = temp;
		return;
	}
}