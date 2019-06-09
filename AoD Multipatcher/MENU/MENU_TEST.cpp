#include "stdafx.h"
#include "MISC/concol.h"
#include "STANDARD/Standard_FIX.h"
#include "MISC/Misc_Functions.h"


int MENU_TEST(int &Version, string &Short_name)
{
	do
	{
		stringstream text;
		system("cls");
		cout << " �������������������������������������������������������������������������������������������������������������������ͻ\n"
				" �                                                                                                                   �\n"
				" �" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "�\n"
				" �" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "�\n"
				" �                                                                                                                   �\n"
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
				" �������������Ŀ ������������Ŀ ������������Ŀ                                                        �������������Ŀ�\n"
				" ��  " <<white<< "GRAPHICS" <<aqua<< "  � �  CONTROLS  � �    MISC    �                                                        � " <<white<< "Page 1 of 2" <<aqua<< " ��\n"
				" ��            ����������������������������������������������������������������������������������������������������Ĵ�\n"
				" ��                                                                                                                 ��\n"
				" �� " <<white<< "Setting" <<aqua<< "�                                   " <<white<< "Description" <<aqua<< "                                   �      " <<white<< "Status" <<aqua<< "        � ��\n"
				" �� ������������������������������������������������������������������������������������������������������������  � ��\n"
				" ��    1   �  CUBEMAP REFLECTIONS RESOLUTION                                                 �     " <<green<< "ENABLED" <<aqua<< "        � ��\n"
				" ��        �  Increases the cubemap reflections resolution.                                  �                    � ��\n"
				" �� ������������������������������������������������������������������������������������������������������������  � ��\n"
				" ��    2   �  DYNAMIC SHADOWS RESOLUTION                                                     �     " <<red<< "DISABLED" <<aqua<< "       � ��\n"
				" ��        �  Restores the missing demo video. Requires  TP_ROLL.MPG  inside DatavFMV folder � R=255 G=255 B=255  � ��\n"
				" �� ������������������������������������������������������������������������������������������������������������  � ��\n"
				" ��    3   �  FUR                                                                            �     " <<green<< "ENABLED" <<aqua<< "        � ��\n"
				" ��        �  Enables/disables fur shader (CPU intensive).                                   �                    � ��\n"
				" �� ������������������������������������������������������������������������������������������������������������  � ��\n"
				" ��    4   �  SPECULAR                                                                       �     " <<red<< "DISABLED" <<aqua<< "       � ��\n"
				" ��        �  Enables/disables specular shader.                                              �                    � ��\n"
				" �� ������������������������������������������������������������������������������������������������������������  � ��\n"
				" ��    5   �  DYNAMIC SHADOWS RESOLUTION                                                     �     " <<red<< "DISABLED" <<aqua<< "       � ��\n"
				" ��        �  Increases the dynamic shadows resolution.                                      �                    � ��\n"
				" �� ������������������������������������������������������������������������������������������������������������  � ��\n"
				" ��    6   �  FUR                                                                            �     " <<green<< "ENABLED" <<aqua<< "        � ��\n"
				" ��        �  Enables/disables fur shader (CPU intensive).                                   �                    � ��\n"
				" �� ������������������������������������������������������������������������������������������������������������  � ��\n"
				" ��    7   �  SPECULAR                                                                       �     " <<red<< "DISABLED" <<aqua<< "       � ��\n"
				" ��        �  Enables/disables specular shader.                                              �                    � ��\n"
				" �� ������������������������������������������������������������������������������������������������������������  � ��\n"
				" ��    8   �  FUR                                                                            �     " <<green<< "ENABLED" <<aqua<< "        � ��\n"
				" ��        �  Enables/disables fur shader (CPU intensive).                                   �                    � ��\n"
				" �� ������������������������������������������������������������������������������������������������������������  � ��\n"
				" ��    9   �  SPECULAR                                                                       �     " <<red<< "DISABLED" <<aqua<< "       � ��\n"
				" ��        �  Enables/disables specular shader.                                              �                    � ��\n"
				" ��                                                                                                                 ��\n"
				" �������������������������������������������������������������������������������������������������������������������ٺ\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �" <<white<< "                           " <<aqua<< "�" <<white<< "                (X) Switch to Advanced Mods                "
				<<aqua<< "�" <<white<< "     (N)ext page ---->     " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �                                                         �                                                         �\n"
				" �" <<green<< "                 (S)ave changes and exit                 " <<aqua<< "�" <<red<< "               (D)iscard changes and exit                " <<aqua<< "�\n"
				" �                                                         �                                                         �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<pink<< "              TRAOD EXE Multi-Patcher by Nakamichi680              " <<aqua<< "�" <<pink<< "    Version: " << VER << "   "
				<<aqua<< "�" <<pink<< "  Build date: " << BDATE << "  " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������ͼ\n"
				"\n Select an option and press Enter [" <<white<< "1-9 " <<   aqua<< "]: " <<white;
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
			break;
		case '2':
			break;
		case '3':
			break;
		case '4':
			break;
		case '5':
			break;
		case '6':
			break;
		case '7':
			break;
		case 'X':
			return 50;
		case 'N':
			return 2;
		case 'S':
			return 100;
		case 'D':
			return 101;
		}
	} while (true);
}