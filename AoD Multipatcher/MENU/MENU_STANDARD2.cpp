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
		bool Force_fur_status = Detect_Force_fur_status();								// Controlla se lo shader fur � attivo
		bool Force_specular_status = Detect_Force_specular_status();					// Controlla se lo shader specular � attivo
		int Snow_shakiness_status = Detect_Snow_shakiness_status();						// Controlla la quantit� di vibrazione della neve
		int Snow_velocity_status = Detect_Snow_velocity_status();						// Controlla la velocit� della neve

		stringstream text;
		system("cls");
		cout << " �������������������������������������������������������������������������������������������������������������������ͻ\n"
				" �                                                                                                                   �\n"
				" �" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "�\n"
				" �" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "�\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �" <<white<< "  For any questions, feel free to contact me on: http://www.aspidetr.com/forum or http://www.tombraiderforums.com  " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<pink;
		text << "Selected file: " << Short_name;
		Center_string(text.str(), 52);
		cout <<aqua<<"�"<<pink;
		text.str("");
		text << "File size: " << EXEorig.size() << " Bytes";
		Center_string(text.str(), 28);
		cout <<aqua<<"�"<<pink;
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
		cout <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<white<< "  Setting  " <<aqua<<"�"<<white<< "                                Standard Mods (2/5)                               "
				<<aqua<<"�"<<white<< "       Status       " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     1     �  SNOW                                                                            �   (";
		if (Snow_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Restores the missing snow effect in \"The Monstrum Crimescene\" level.            �   (";
		if (!Snow_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     2     �  SNOWFLAKES TREMBLING INTENSITY                                                  �   (";
		if (Snow_shakiness_status == 0)
			cout << "�) Normal       �\n";
		else
			cout << " ) Normal       �\n";
		cout << " �           �  To see the differences make sure that snow is enabled.                          �   (";
		if (Snow_shakiness_status == 1)
			cout << "�) Low          �\n";
		else
			cout << " ) Low          �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     3     �  SNOWFLAKES FALL SPEED                                                           �   (";
		if (Snow_velocity_status == 0)
			cout << "�) Normal       �\n";
		else
			cout << " ) Normal       �\n";
		cout << " �           �  To see the differences make sure that snow is enabled.                          �   (";
		if (Snow_velocity_status == 1)
			cout << "�) Slow         �\n";
		else
			cout << " ) Slow         �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �           �  CUBEMAP REFLECTIONS RESOLUTION                                                  �   (";
		if (Res_cubemaps_status == 0)
			cout << "�) Normal       �\n";
		else
			cout << " ) Normal       �\n";
		cout << " �     4     �  Increases the cubemap reflections resolution.                                   �   (";
		if (Res_cubemaps_status == 1)
			cout << "�) 2x           �\n";
		else
			cout << " ) 2x           �\n";
		cout << " �           �  Select this for more information.                                               �   (";
		if (Res_cubemaps_status == 2)
			cout << "�) 4x           �\n";
		else
			cout << " ) 4x           �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �           �  DYNAMIC SHADOWS RESOLUTION                                                      �   (";
		if (Res_shadows_status == 0)
			cout << "�) Normal       �\n";
		else
			cout << " ) Normal       �\n";
		cout << " �     5     �  Increases the dynamic shadows resolution.                                       �   (";
		if (Res_shadows_status == 1)
			cout << "�) 2x           �\n";
		else
			cout << " ) 2x           �\n";
		cout << " �           �  Select this for more information.                                               �   (";
		if (Res_shadows_status == 2)
			cout << "�) 4x           �\n";
		else
			cout << " ) 4x           �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     6     �  FUR                                                                             �   (";
		if (Force_fur_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Enables/disables fur shader (CPU intensive).                                    �   (";
		if (!Force_fur_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     7     �  SPECULAR                                                                        �   (";
		if (Force_specular_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Enables/disables specular shader.                                               �   (";
		if (!Force_specular_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �" <<white<< "   <---- (P)revious page   " <<aqua<< "�" <<white<< "                (X) Switch to Advanced Mods                "
				<<aqua<< "�" <<white<< "     (N)ext page ---->     " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �                                                         �                                                         �\n"
				" �" <<green<< "                 (S)ave changes and exit                 " <<aqua<< "�" <<red<< "               (D)iscard changes and exit                " <<aqua<< "�\n"
				" �                                                         �                                                         �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<pink<< "              TRAOD EXE Multi-Patcher by Nakamichi680              " <<aqua<< "�" <<pink<< "    Version: " << VER << "   " <<aqua<< "�" <<pink<< "  Build date: " << BDATE << "  " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������ͼ\n"
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