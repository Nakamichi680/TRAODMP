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
		cout << " 浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様�\n"
				" �                                                                                                                   �\n"
				" �" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "�\n"
				" �" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "�\n"
				" �                                                                                                                   �\n"
				" 麺様様様様様様様様様様様様様様様様様様様様様様様様様曜様様様様様様様様様様様様様様僕様様様様様様様様様様様様様様様様�\n"
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
				" 麺様様様様様様様様様様様様様様様様様様様様様様様様様擁様様様様様様様様様様様様様様瞥様様様様様様様様様様様様様様様様�\n"
				" 菜陳陳陳陳陳陳� 敖陳陳陳陳陳朕 敖陳陳陳陳陳朕                                                        敖陳陳陳陳陳陳榛\n"
				" 些  " <<white<< "GRAPHICS" <<aqua<< "  � �  CONTROLS  � �    MISC    �                                                        � " <<white<< "Page 1 of 2" <<aqua<< " 該\n"
				" 些            青陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳珍陳陳陳陳陳陳調�\n"
				" 些                                                                                                                 該\n"
				" 些 " <<white<< "Setting" <<aqua<< "�                                   " <<white<< "Description" <<aqua<< "                                   �      " <<white<< "Status" <<aqua<< "        � 該\n"
				" 些 陳陳陳津陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳津陳陳陳陳陳陳陳陳陳  � 該\n"
				" 些    1   �  CUBEMAP REFLECTIONS RESOLUTION                                                 �     " <<green<< "ENABLED" <<aqua<< "        � 該\n"
				" 些        �  Increases the cubemap reflections resolution.                                  �                    � 該\n"
				" 些 陳陳陳津陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳津陳陳陳陳陳陳陳陳陳  � 該\n"
				" 些    2   �  DYNAMIC SHADOWS RESOLUTION                                                     �     " <<red<< "DISABLED" <<aqua<< "       � 該\n"
				" 些        �  Restores the missing demo video. Requires  TP_ROLL.MPG  inside DatavFMV folder � R=255 G=255 B=255  � 該\n"
				" 些 陳陳陳津陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳津陳陳陳陳陳陳陳陳陳  � 該\n"
				" 些    3   �  FUR                                                                            �     " <<green<< "ENABLED" <<aqua<< "        � 該\n"
				" 些        �  Enables/disables fur shader (CPU intensive).                                   �                    � 該\n"
				" 些 陳陳陳津陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳津陳陳陳陳陳陳陳陳陳  � 該\n"
				" 些    4   �  SPECULAR                                                                       �     " <<red<< "DISABLED" <<aqua<< "       � 該\n"
				" 些        �  Enables/disables specular shader.                                              �                    � 該\n"
				" 些 陳陳陳津陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳津陳陳陳陳陳陳陳陳陳  � 該\n"
				" 些    5   �  DYNAMIC SHADOWS RESOLUTION                                                     �     " <<red<< "DISABLED" <<aqua<< "       � 該\n"
				" 些        �  Increases the dynamic shadows resolution.                                      �                    � 該\n"
				" 些 陳陳陳津陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳津陳陳陳陳陳陳陳陳陳  � 該\n"
				" 些    6   �  FUR                                                                            �     " <<green<< "ENABLED" <<aqua<< "        � 該\n"
				" 些        �  Enables/disables fur shader (CPU intensive).                                   �                    � 該\n"
				" 些 陳陳陳津陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳津陳陳陳陳陳陳陳陳陳  � 該\n"
				" 些    7   �  SPECULAR                                                                       �     " <<red<< "DISABLED" <<aqua<< "       � 該\n"
				" 些        �  Enables/disables specular shader.                                              �                    � 該\n"
				" 些 陳陳陳津陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳津陳陳陳陳陳陳陳陳陳  � 該\n"
				" 些    8   �  FUR                                                                            �     " <<green<< "ENABLED" <<aqua<< "        � 該\n"
				" 些        �  Enables/disables fur shader (CPU intensive).                                   �                    � 該\n"
				" 些 陳陳陳津陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳津陳陳陳陳陳陳陳陳陳  � 該\n"
				" 些    9   �  SPECULAR                                                                       �     " <<red<< "DISABLED" <<aqua<< "       � 該\n"
				" 些        �  Enables/disables specular shader.                                              �                    � 該\n"
				" 些                                                                                                                 該\n"
				" 裟陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳潰�\n"
				" 把陳陳陳陳陳陳陳陳陳陳陳陳陳堕陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳陳堕陳陳陳陳陳陳陳陳陳陳陳陳陳�\n"
				" �" <<white<< "                           " <<aqua<< "�" <<white<< "                (X) Switch to Advanced Mods                "
				<<aqua<< "�" <<white<< "     (N)ext page ---->     " <<aqua<< "�\n"
				" 把陳陳陳陳陳陳陳陳陳陳陳陳陳祖陳陳陳陳陳陳陳陳陳陳陳陳陳陳堕陳陳陳陳陳陳陳陳陳陳陳陳陳陳祖陳陳陳陳陳陳陳陳陳陳陳陳陳�\n"
				" �                                                         �                                                         �\n"
				" �" <<green<< "                 (S)ave changes and exit                 " <<aqua<< "�" <<red<< "               (D)iscard changes and exit                " <<aqua<< "�\n"
				" �                                                         �                                                         �\n"
				" 麺様様様様様様様様様様様様様様様様様様様様様様様様様様様様詫様様様様僕様様様様様様様様様曜様様様様様様様様様様様様様�\n"
				" �" <<pink<< "              TRAOD EXE Multi-Patcher by Nakamichi680              " <<aqua<< "�" <<pink<< "    Version: " << VER << "   "
				<<aqua<< "�" <<pink<< "  Build date: " << BDATE << "  " <<aqua<< "�\n"
				" 藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様瞥様様様様様様様様様擁様様様様様様様様様様様様様�\n"
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