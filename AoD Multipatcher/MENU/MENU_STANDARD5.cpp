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
		bool FOG_status = Detect_Fog_status();										// Controlla se il fix per la nebbia Š attivo

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
				" º" <<white<< "  Setting  " <<aqua<<"³"<<white<< "                                Standard Mods (5/5)                               "
				<<aqua<<"³"<<white<< "       Status       " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º           ³  FILTERS                                                                         ³   (";
		if (Pro_Fix.PS_Filters_status != PS_FILTER::NONE)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º     1     ³  Customize game appearance by applying some cool filters.                        ³   (";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::NONE)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::SEPIA)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Sepia     º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::EMBOSS)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Emboss    º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::SHARPENING)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Sharpeningº\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::DISTORT)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Distort   º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::NEGATIVE)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Negative  º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::GRAYSCALE)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Grayscale º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::BW)
			cout << " º           ³  Select this for more information.                                               ³ Preset = B&W       º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::BWINVERSE)
			cout << " º           ³  Select this for more information.                                               ³ Preset = B&W Inv   º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::RED)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Red       º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::GREEN)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Green     º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::BLUE)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Blue      º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::NIGHTVISION)
			cout << " º           ³  Select this for more information.                                               ³ Preset = NightVisi º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::POSTERIZE)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Posterize º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::MOSAIC)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Mosaic    º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::DRAWING)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Drawing   º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::NEON)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Neon      º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::ANAGLYPH)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Anaglyph  º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::VIGNETTE)
			cout << " º           ³  Select this for more information.                                               ³ Preset = Vignette  º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::DOF)
			cout << " º           ³  Select this for more information.                                               ³ Preset = DOF       º\n";
		if (Pro_Fix.PS_Filters_status == PS_FILTER::NONE)
			cout << " º           ³  Select this for more information.                                               ³                    º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     2     ³  FOG SAVEGAME BUG FIX                                                            ³   (";
		if (FOG_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Fix for missing fog when reloading a savegame. Applies only to new savegames.   ³   (";
		if (!FOG_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     3     ³  PORTAL NEAR CLIP PLANE FIX                                                      ³   (";
		if (Pro_Fix.fxGasCloudRotation_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Fix for random disappearing geometry. Strongly recommended.                     ³   (";
		if (!Pro_Fix.fxGasCloudRotation_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º" <<white<< "   <---- (P)revious page   " <<aqua<< "³" <<white<< "                (X) Switch to Advanced Mods                "
				<<aqua<< "³" <<white<< "                           " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º                                                         ³                                                         º\n"
				" º" <<green<< "                 (S)ave changes and exit                 " <<aqua<< "³" <<red<< "               (D)iscard changes and exit                " <<aqua<< "º\n"
				" º                                                         ³                                                         º\n"
				" ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÏÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹\n"
				" º" <<pink<< "              TRAOD EXE Multi-Patcher by Nakamichi680              " <<aqua<< "º" <<pink<< "    Version: " << VER << "   " <<aqua<< "º" <<pink<< "  Build date: " << BDATE << "  " <<aqua<< "º\n"
				" ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n"
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