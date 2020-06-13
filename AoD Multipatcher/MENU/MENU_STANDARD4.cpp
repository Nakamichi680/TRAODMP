#include "stdafx.h"
#include "MISC/concol.h"
#include "STANDARD/Standard_FIX.h"
#include "PRO_SHARED/Pro_FIX.h"
#include "MISC/Misc_Functions.h"


int MENU_STANDARD4(int &Version, string &Short_name)
{
	do
	{
		Pro_Fix_Status Pro_Fix;
		Pro_Fix_Detect_status_ALL(&Pro_Fix);
		bool HQCubemaps_status = Detect_HighQualityCubemap_status();
		int Res_waterreflections_status = Detect_Res_waterreflections_status();
		bool LookCamera_InvertYaxis_status = Detect_LookCamera_InvertYaxis_status();
		int Controls_Mod_Master_status = Detect_CONTROLS_MOD_MASTER_status(Pro_Fix);
		int Controls_Mod_ERROR_VERSION = 0;		// O = tutto ok, 1 = versione diversa, 2 = file corrotto (la versione testuale non combacia con quella float)
		if (Controls_Mod_Master_status != 0)	// Controllo versione Controls Mod. La mod non Š accessibile se il file Š corrotto o modificato con un diverso Multipatcher
		{
			float CONTROLSMODVERSION_float = stof(CONTROLSMODVERSION);
			string CM_version1 = EXEorig.substr(EXEorig.find("########Controls Mod Master Ver:") + 32, 3);
			string CM_version2 = EXEorig.substr(EXEorig.find("########Controls Mod Master Ver:") + 54, 4);
			float CM_version1float, CM_version2float;
			CM_version1float = stof(CM_version1);
			memcpy(&CM_version2float, &CM_version2, 4);
			if (CM_version1float != CM_version2float)		// Se la versione testuale non combacia con quella in float significa che il file Š manomesso
				Controls_Mod_ERROR_VERSION = 2;
			else
				if (CM_version1 != CONTROLSMODVERSION || CM_version2float != CONTROLSMODVERSION_float)		// Se l'EXE contiene una Controls Mod di versione diversa
					Controls_Mod_ERROR_VERSION = 1;
		}

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
				" º" <<white<< "  Setting  " <<aqua<<"³"<<white<< "                                Standard Mods (4/5)                               "
				<<aqua<<"³"<<white<< "       Status       " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     1     ³  HIGH QUALITY CUBEMAP REFLECTIONS                                                ³   (";
		if (HQCubemaps_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Enables scenery objects, bump mapping and texture filtering in reflections.     ³   (";
		if (!HQCubemaps_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º           ³  WATER REFLECTIONS RESOLUTION                                                    ³   (";
		if (Res_waterreflections_status == 0)
			cout << "ù) Normal       º\n";
		else
			cout << " ) Normal       º\n";
		cout << " º     2     ³  Increases the water reflections resolution.                                     ³   (";
		if (Res_waterreflections_status == 1)
			cout << "ù) 2x           º\n";
		else
			cout << " ) 2x           º\n";
		cout << " º           ³  Select this for more information.                                               ³   (";
		if (Res_waterreflections_status == 2)
			cout << "ù) 4x           º\n";
		else
			cout << " ) 4x           º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     3     ³  ROTATING GAS CLOUDS EFFECT FIX                                                  ³   (";
		if (Pro_Fix.fxGasCloudRotation_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Restores the missing PS2 rotating gas clouds effect.                            ³   (";
		if (!Pro_Fix.fxGasCloudRotation_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     4     ³  ROTATING PICKUP ITEM ICONS                                                      ³   (";
		if (Pro_Fix.PickupsRotation_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  The in-game icon of collectable items will rotate.                              ³   (";
		if (!Pro_Fix.PickupsRotation_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     5     ³  INVERT LOOK CAMERA Y-AXIS                                                       ³   (";
		if (LookCamera_InvertYaxis_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Press down to look up and vice versa.                                           ³   (";
		if (!LookCamera_InvertYaxis_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n";	
		switch(Controls_Mod_ERROR_VERSION)
		{
		case (0):
			cout << " º           ³  CONTROLS MOD                                                                    ³   (";
			if (Controls_Mod_Master_status != 0)
				cout << "ù) Enabled      º\n";
			else
				cout << " ) Enabled      º\n";
			cout << " º     6     ³  Redefines controls and improves the overall game experience.                    ³   (";
			if (Controls_Mod_Master_status == 0)
				cout << "ù) Disabled     º\n";
			else
				cout << " ) Disabled     º\n";
			cout << " º           ³  Select this for more information.                                               ³  ";
			break;
		case (1):
			cout << " º           ³  CONTROLS MOD   " <<red<< "- NOT AVAILABLE. ERROR: VERSION MISMATCH -" <<aqua<< "                       ³   (";
			if (Controls_Mod_Master_status != 0)
				cout << "ù) Enabled      º\n";
			else
				cout << " ) Enabled      º\n";
			cout << " º     6     ³  " <<red<< "This mod has been enabled with a different EXE Multi-Patcher version." <<aqua<< "           ³   (";
			if (Controls_Mod_Master_status == 0)
				cout << "ù) Disabled     º\n";
			else
				cout << " ) Disabled     º\n";
			cout << " º           ³  " <<red<< "Please use the same version to disable it or use an unmodded game executable." <<aqua<< "   ³  ";
			break;
		case (2):
			cout << " º           ³  CONTROLS MOD   " <<red<< "- NOT AVAILABLE. ERROR: FILE CORRUPTED -" <<aqua<< "                         ³   (";
			if (Controls_Mod_Master_status != 0)
				cout << "ù) Enabled      º\n";
			else
				cout << " ) Enabled      º\n";
			cout << " º     6     ³  " <<red<< "An unrecoverable error occurred while analyzing the executable." <<aqua<< "                 ³   (";
			if (Controls_Mod_Master_status == 0)
				cout << "ù) Disabled     º\n";
			else
				cout << " ) Disabled     º\n";
			cout << " º           ³  " <<red<< "Please use an unmodded game executable and try again." <<aqua<< "                           ³  ";
		}
		switch (Controls_Mod_Master_status)
		{
		case (0):
			cout << "                  º\n";
			break;
		case (1):
			cout << " Preset = DI-1    º\n";
			break;
		case (2):
			cout << " Preset = XI      º\n";
			break;
		case (3):
			cout << " Preset = DI-2    º\n";
			break;
		default:
			cout << " Preset = UNK     º\n";
		}
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     7     ³  HEAT HAZE EFFECT FIX                                                            ³   (";
		if (Pro_Fix.HeatHaze_effect_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Select this for more information.                                               ³   (";
		if (!Pro_Fix.HeatHaze_effect_status)
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
				" ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n";
		cout << "\n Select an option and press Enter [" <<white<< "1-7/P/N/X/S/D" <<aqua<< "]: " <<white;
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
			Change_HighQualityCubemap_status();
			break;
		case '2':
			Change_Res_waterreflections_status();
			break;
		case '3':
			if (Pro_Fix.fxGasCloudRotation_status)
			{
				fxGasCloudRotation_Disable();
				Pro_Fix_Deallocate_space();
				Pro_Fix.fxGasCloudRotation_status = false;
				Pro_Fix_Restore_enabled(Pro_Fix);
			}
			else
				fxGasCloudRotation_Enable();
			break;
		case '4':
			if (Pro_Fix.PickupsRotation_status)
			{
				PickupsRotation_Disable();
				Pro_Fix_Deallocate_space();
				Pro_Fix.PickupsRotation_status = false;
				Pro_Fix_Restore_enabled(Pro_Fix);
			}
			else
				PickupsRotation_Enable();
			break;
		case '5':
			Change_LookCamera_InvertYaxis_status();
			break;
		case '6':
			if (Controls_Mod_ERROR_VERSION == 0)
				Change_CONTROLS_MOD_MASTER_status(&Pro_Fix);
			break;
		case '7':
			Change_HeatHaze_effect_MASTER_status(&Pro_Fix);
			break;
		case 'X':
			return 50;
		case 'P':
			return 3;
		case 'N':
			return 5;
		case 'S':
			return 100;
		case 'D':
			return 101;
		}
	} while (true);
}