#include "stdafx.h"
#include "MISC/concol.h"
#include "STANDARD/Standard_FIX.h"
#include "MISC/Misc_Functions.h"


int MENU_STANDARD2(int &Version, string &Short_name)
{
	do
	{
		bool Snow_status = Detect_Snow_status();										// Controlla se la neve funziona		
		int Res_cubemaps_status = Detect_Res_cubemaps_status();							// Controlla la risoluzione delle cubemaps reflections
		int Res_shadows_status = Detect_Res_shadows_status();							// Controlla la risoluzione delle ombre dinamiche
		bool Force_fur_status = Detect_Force_fur_status();								// Controlla se lo shader fur Š attivo
		bool Force_specular_status = Detect_Force_specular_status();					// Controlla se lo shader specular Š attivo
		int Snow_shakiness_status = Detect_Snow_shakiness_status();						// Controlla la quantit… di vibrazione della neve
		int Snow_velocity_status = Detect_Snow_velocity_status();						// Controlla la velocit… della neve

		stringstream text;
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
				" º" <<white<< "  Setting  " <<aqua<<"³"<<white<< "                                Standard Mods (2/5)                               "
				<<aqua<<"³"<<white<< "       Status       " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     1     ³  SNOW                                                                            ³   (";
		if (Snow_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Restores the missing snow effect in \"The Monstrum Crimescene\" level.            ³   (";
		if (!Snow_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     2     ³  SNOWFLAKES TREMBLING INTENSITY                                                  ³   (";
		if (Snow_shakiness_status == 0)
			cout << "ù) Normal       º\n";
		else
			cout << " ) Normal       º\n";
		cout << " º           ³  To see the differences make sure that snow is enabled.                          ³   (";
		if (Snow_shakiness_status == 1)
			cout << "ù) Low          º\n";
		else
			cout << " ) Low          º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     3     ³  SNOWFLAKES FALL SPEED                                                           ³   (";
		if (Snow_velocity_status == 0)
			cout << "ù) Normal       º\n";
		else
			cout << " ) Normal       º\n";
		cout << " º           ³  To see the differences make sure that snow is enabled.                          ³   (";
		if (Snow_velocity_status == 1)
			cout << "ù) Slow         º\n";
		else
			cout << " ) Slow         º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º           ³  CUBEMAP REFLECTIONS RESOLUTION                                                  ³   (";
		if (Res_cubemaps_status == 0)
			cout << "ù) Normal       º\n";
		else
			cout << " ) Normal       º\n";
		cout << " º     4     ³  Increases the cubemap reflections resolution.                                   ³   (";
		if (Res_cubemaps_status == 1)
			cout << "ù) 2x           º\n";
		else
			cout << " ) 2x           º\n";
		cout << " º           ³  Select this for more information.                                               ³   (";
		if (Res_cubemaps_status == 2)
			cout << "ù) 4x           º\n";
		else
			cout << " ) 4x           º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º           ³  DYNAMIC SHADOWS RESOLUTION                                                      ³   (";
		if (Res_shadows_status == 0)
			cout << "ù) Normal       º\n";
		else
			cout << " ) Normal       º\n";
		cout << " º     5     ³  Increases the dynamic shadows resolution.                                       ³   (";
		if (Res_shadows_status == 1)
			cout << "ù) 2x           º\n";
		else
			cout << " ) 2x           º\n";
		cout << " º           ³  Select this for more information.                                               ³   (";
		if (Res_shadows_status == 2)
			cout << "ù) 4x           º\n";
		else
			cout << " ) 4x           º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     6     ³  FUR                                                                             ³   (";
		if (Force_fur_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Enables/disables fur shader (CPU intensive).                                    ³   (";
		if (!Force_fur_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     7     ³  SPECULAR                                                                        ³   (";
		if (Force_specular_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Enables/disables specular shader.                                               ³   (";
		if (!Force_specular_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º" <<white<< "   <---- (P)revious page   " <<aqua<< "³" <<white<< "                (X) Switch to Advanced Mods                "
				<<aqua<< "³" <<white<< "     (N)ext page ---->     " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º                                                         ³                                                         º\n"
				" º" <<green<< "                 (S)ave changes and exit                 " <<aqua<< "³" <<red<< "               (D)iscard changes and exit                " <<aqua<< "º\n"
				" º                                                         ³                                                         º\n"
				" ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÏÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹\n"
				" º" <<pink<< "              TRAOD EXE Multi-Patcher by Nakamichi680              " <<aqua<< "º" <<pink<< "    Version: " << VER << "   " <<aqua<< "º" <<pink<< "  Build date: " << BDATE << "  " <<aqua<< "º\n"
				" ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n"
				"\n Select an option and press Enter [" <<white<< "1-7/P/N/X/S/D" <<aqua<< "]: " <<white;
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
			Change_Snow_status();
			break;
		case '2':
			Change_Snow_shakiness_status();
			break;
		case '3':
			Change_Snow_velocity_status();
			break;
		case '4':
			Change_Res_cubemaps_status();
			break;
		case '5':
			Change_Res_shadows_status();
			break;
		case '6':
			Change_Force_fur_status();
			break;
		case '7':
			Change_Force_specular_status();
			break;
		case 'X':
			return 50;
		case 'P':
			return 1;
		case 'N':
			return 3;
		case 'S':
			return 100;
		case 'D':
			return 101;
		}
	} while (true);
}