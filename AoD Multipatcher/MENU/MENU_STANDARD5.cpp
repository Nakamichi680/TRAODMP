#include "stdafx.h"
#include "MISC/concol.h"
#include "STANDARD/Standard_FIX.h"
#include "PRO_SHARED/Pro_FIX.h"
#include "MISC/Misc_Functions.h"


int MENU_STANDARD5(int &Version, string &Short_name)
{
	do
	{
		Pro_Fix_Status Pro_Fix;

		Pro_Fix_Detect_status_ALL(&Pro_Fix);
		bool FOG_status = Detect_Fog_status();										// Controlla se il fix per la nebbia � attivo

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
				" �" <<white<< "  Setting  " <<aqua<<"�"<<white<< "                                Standard Mods (5/5)                               "
				<<aqua<<"�"<<white<< "       Status       " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �           �  FILTERS                                                                         �   (";
		if (Pro_Fix.PS_Filters_status != PS_FILTER::NONE)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �     1     �  Customize game appearance by applying some cool filters.                        �   (";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::NONE)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::SEPIA)
			cout << " �           �  Select this for more information.                                               � Preset = Sepia     �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::EMBOSS)
			cout << " �           �  Select this for more information.                                               � Preset = Emboss    �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::SHARPENING)
			cout << " �           �  Select this for more information.                                               � Preset = Sharpening�\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::DISTORT)
			cout << " �           �  Select this for more information.                                               � Preset = Distort   �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::NEGATIVE)
			cout << " �           �  Select this for more information.                                               � Preset = Negative  �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::GRAYSCALE)
			cout << " �           �  Select this for more information.                                               � Preset = Grayscale �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::BW)
			cout << " �           �  Select this for more information.                                               � Preset = B&W       �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::BWINVERSE)
			cout << " �           �  Select this for more information.                                               � Preset = B&W Inv   �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::RED)
			cout << " �           �  Select this for more information.                                               � Preset = Red       �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::GREEN)
			cout << " �           �  Select this for more information.                                               � Preset = Green     �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::BLUE)
			cout << " �           �  Select this for more information.                                               � Preset = Blue      �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::NIGHTVISION)
			cout << " �           �  Select this for more information.                                               � Preset = NightVisi �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::POSTERIZE)
			cout << " �           �  Select this for more information.                                               � Preset = Posterize �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::MOSAIC)
			cout << " �           �  Select this for more information.                                               � Preset = Mosaic    �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::DRAWING)
			cout << " �           �  Select this for more information.                                               � Preset = Drawing   �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::NEON)
			cout << " �           �  Select this for more information.                                               � Preset = Neon      �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::ANAGLYPH)
			cout << " �           �  Select this for more information.                                               � Preset = Anaglyph  �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::VIGNETTE)
			cout << " �           �  Select this for more information.                                               � Preset = Vignette  �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::DOF)
			cout << " �           �  Select this for more information.                                               � Preset = DOF       �\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::NONE)
			cout << " �           �  Select this for more information.                                               �                    �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     2     �  FOG SAVEGAME BUG FIX                                                            �   (";
		if (FOG_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Fix for missing fog when reloading a savegame. Applies only to new savegames.   �   (";
		if (!FOG_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     3     �  PORTAL NEAR CLIP PLANE FIX                                                      �   (";
		if (Pro_Fix.fxGasCloudRotation_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Fix for random disappearing geometry. Strongly recommended.                     �   (";
		if (!Pro_Fix.fxGasCloudRotation_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �" <<white<< "   <---- (P)revious page   " <<aqua<< "�" <<white<< "                (X) Switch to Advanced Mods                "
				<<aqua<< "�" <<white<< "                           " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �                                                         �                                                         �\n"
				" �" <<green<< "                 (S)ave changes and exit                 " <<aqua<< "�" <<red<< "               (D)iscard changes and exit                " <<aqua<< "�\n"
				" �                                                         �                                                         �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<pink<< "              TRAOD EXE Multi-Patcher by Nakamichi680              " <<aqua<< "�" <<pink<< "    Version: " << VER << "   " <<aqua<< "�" <<pink<< "  Build date: " << BDATE << "  " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������ͼ\n"
				"\n Select an option and press Enter [" <<white<< "1-3/P/X/S/D" <<aqua<< "]: " <<white;
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
			Change_PS_Filters_MASTER_status(&Pro_Fix);
			break;
		case 'X':
			return 50;
		case 'P':
			return 4;
		case 'S':
			return 100;
		case 'D':
			return 101;
		}
	} while (true);
}