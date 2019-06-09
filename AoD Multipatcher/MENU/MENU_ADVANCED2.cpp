#include "stdafx.h"
#include "MISC/concol.h"
#include "STANDARD/Standard_FIX.h"
#include "ADVANCED/Advanced_FIX.h"
#include "PRO_SHARED/Pro_FIX.h"
#include "MISC/Misc_Functions.h"


int MENU_ADVANCED2(int &Version, string &Short_name)
{
	do
	{
		Pro_Fix_Status Pro_Fix;
		int ver = Detect_version_advanced();
		Pro_Fix_Detect_status_ALL(&Pro_Fix);
		bool FixedCameras_status = Detect_FixedCameras_status();							// Controlla se le telecamere fisse sono disattivate
		bool SwimCameraCollisions_status = Detect_SwimCameraCollisions_status();			// Controlla se le collisioni della swim camera sono ignorate
		bool PhotoMode_Master_status = Detect_PHOTOMODE_MASTER_status(Pro_Fix);				// Controlla se la PhotoMode Š attiva
		bool Footprints_status = Detect_Footprints_status();								// Controlla se la mod per le orme Š attiva

		stringstream text;
		setbackcolor(black);
		system("cls");
		cout << " ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n"
				" º                                                                                                                   º\n"
				" º" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "º\n"
				" º" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "º\n"
				" º                                                                                                                   º\n"
				" º                                                                                                                   º\n"
				" º" <<white<< "  For any questions, feel free to contact me on: http://www.aspidetr.com/forum or http://www.tombraiderforums.com  " <<aqua<< "º\n"
				" ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹\n"
				" º" <<pink;
		text << "Selected file: " << Short_name;
		Center_string(text.str(), 52);
		cout <<aqua<<"º"<<pink;
		text.str("");
		text << "File size: " << EXEorig.size() << " Bytes";
		Center_string(text.str(), 28);
		cout <<aqua<<"º"<<pink;
		text.str("");
		if (Version == -1)
		{
			text << "Game build: Unknown";
			Center_string(text.str(), 33);
		}
		else
		{
			bool Sasho;
			Detect_Sasho(Version, Sasho);
			if (!Sasho)
			{
				text << "Game build: " << Version;
				Center_string(text.str(), 33);
			}
			else
			{
				text << "Game build: " << Version << " (by Sasho648)";
				Center_string(text.str(), 33);
			}
		}
		cout <<aqua<< "º\n"
				" ÌÍÍÍÍÍÍÍÍÍÍÍÑÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÑÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹\n"
				" º" <<white<< "  Setting  " <<aqua<<"³"<<white<< "                                Advanced Mods (2/2)                               "
				<<aqua<<"³"<<white<< "       Status       " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     1     ³  DISABLE FIXED CAMERAS                                                           ³   (";
		if (FixedCameras_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Fixed cameras will no longer work.                                              ³   (";
		if (!FixedCameras_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     2     ³  DISABLE SWIM/FLY CAMERA COLLISIONS                                              ³   (";
		if (SwimCameraCollisions_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Camera won't collide with the environment while swimming and flying.            ³   (";
		if (!SwimCameraCollisions_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     3     ³  PHOTO MODE (TRAOD_P3/P4 ONLY)                                                   ³   (";
		if (PhotoMode_Master_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Select this for more information.                                               ³   (";
		if (!PhotoMode_Master_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     4     ³  ALWAYS ON FOOTPRINTS MOD                                                        ³   (";
		if (Footprints_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Lara will leave footprints everywhere. Experimental.                            ³   (";
		if (!Footprints_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º" <<white<< "   <---- (P)revious page   " <<aqua<< "³" <<white<< "                (X) Switch to Standard Mods                "
				<<aqua<< "³" <<white<< "                           " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º                                                         ³                                                         º\n"
				" º" <<green<< "                 (S)ave changes and exit                 " <<aqua<< "³" <<red<< "               (D)iscard changes and exit                " <<aqua<< "º\n"
				" º                                                         ³                                                         º\n"
				" ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÏÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹\n"
				" º" <<pink<< "              TRAOD EXE Multi-Patcher by Nakamichi680              " <<aqua<< "º" <<pink<< "    Version: " << VER << "   " <<aqua<< "º" <<pink<< "  Build date: " << BDATE << "  " <<aqua<< "º\n"
				" ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n"
				"\n Select an option and press Enter [" <<white<< "1-4/P/X/S/D" <<aqua<< "]: " <<white;
		char Selection;
		string userinput;
		userinput.clear();
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		if (userinput.length() > 1)
			Selection = '0';
		else
			Selection = toupper(userinput.at(0));
		switch (Selection)
		{
		case '1':
			Change_FixedCameras_status();
			break;
		case '2':
			Change_SwimCameraCollisions_status();
			break;
		case '3':
			Change_PHOTOMODE_MASTER_status(&Pro_Fix);
			break;
		case '4':
			Change_Footprints_status();
			break;
		case 'P':
			return 50;
		case 'X':
			setbackcolor(dark_blue);
			return 1;
		case 'S':
			setbackcolor(dark_blue);
			return 100;
		case 'D':
			setbackcolor(dark_blue);
			return 101;
		}
	} while (true);
}