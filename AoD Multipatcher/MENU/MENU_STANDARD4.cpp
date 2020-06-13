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
		if (Controls_Mod_Master_status != 0)	// Controllo versione Controls Mod. La mod non � accessibile se il file � corrotto o modificato con un diverso Multipatcher
		{
			float CONTROLSMODVERSION_float = stof(CONTROLSMODVERSION);
			string CM_version1 = EXEorig.substr(EXEorig.find("########Controls Mod Master Ver:") + 32, 3);
			string CM_version2 = EXEorig.substr(EXEorig.find("########Controls Mod Master Ver:") + 54, 4);
			float CM_version1float, CM_version2float;
			CM_version1float = stof(CM_version1);
			memcpy(&CM_version2float, &CM_version2, 4);
			if (CM_version1float != CM_version2float)		// Se la versione testuale non combacia con quella in float significa che il file � manomesso
				Controls_Mod_ERROR_VERSION = 2;
			else
				if (CM_version1 != CONTROLSMODVERSION || CM_version2float != CONTROLSMODVERSION_float)		// Se l'EXE contiene una Controls Mod di versione diversa
					Controls_Mod_ERROR_VERSION = 1;
		}

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
				" �" <<white<< "  Setting  " <<aqua<<"�"<<white<< "                                Standard Mods (4/5)                               "
				<<aqua<<"�"<<white<< "       Status       " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     1     �  HIGH QUALITY CUBEMAP REFLECTIONS                                                �   (";
		if (HQCubemaps_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Enables scenery objects, bump mapping and texture filtering in reflections.     �   (";
		if (!HQCubemaps_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �           �  WATER REFLECTIONS RESOLUTION                                                    �   (";
		if (Res_waterreflections_status == 0)
			cout << "�) Normal       �\n";
		else
			cout << " ) Normal       �\n";
		cout << " �     2     �  Increases the water reflections resolution.                                     �   (";
		if (Res_waterreflections_status == 1)
			cout << "�) 2x           �\n";
		else
			cout << " ) 2x           �\n";
		cout << " �           �  Select this for more information.                                               �   (";
		if (Res_waterreflections_status == 2)
			cout << "�) 4x           �\n";
		else
			cout << " ) 4x           �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     3     �  ROTATING GAS CLOUDS EFFECT FIX                                                  �   (";
		if (Pro_Fix.fxGasCloudRotation_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Restores the missing PS2 rotating gas clouds effect.                            �   (";
		if (!Pro_Fix.fxGasCloudRotation_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     4     �  ROTATING PICKUP ITEM ICONS                                                      �   (";
		if (Pro_Fix.PickupsRotation_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  The in-game icon of collectable items will rotate.                              �   (";
		if (!Pro_Fix.PickupsRotation_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     5     �  INVERT LOOK CAMERA Y-AXIS                                                       �   (";
		if (LookCamera_InvertYaxis_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Press down to look up and vice versa.                                           �   (";
		if (!LookCamera_InvertYaxis_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n";	
		switch(Controls_Mod_ERROR_VERSION)
		{
		case (0):
			cout << " �           �  CONTROLS MOD                                                                    �   (";
			if (Controls_Mod_Master_status != 0)
				cout << "�) Enabled      �\n";
			else
				cout << " ) Enabled      �\n";
			cout << " �     6     �  Redefines controls and improves the overall game experience.                    �   (";
			if (Controls_Mod_Master_status == 0)
				cout << "�) Disabled     �\n";
			else
				cout << " ) Disabled     �\n";
			cout << " �           �  Select this for more information.                                               �  ";
			break;
		case (1):
			cout << " �           �  CONTROLS MOD   " <<red<< "- NOT AVAILABLE. ERROR: VERSION MISMATCH -" <<aqua<< "                       �   (";
			if (Controls_Mod_Master_status != 0)
				cout << "�) Enabled      �\n";
			else
				cout << " ) Enabled      �\n";
			cout << " �     6     �  " <<red<< "This mod has been enabled with a different EXE Multi-Patcher version." <<aqua<< "           �   (";
			if (Controls_Mod_Master_status == 0)
				cout << "�) Disabled     �\n";
			else
				cout << " ) Disabled     �\n";
			cout << " �           �  " <<red<< "Please use the same version to disable it or use an unmodded game executable." <<aqua<< "   �  ";
			break;
		case (2):
			cout << " �           �  CONTROLS MOD   " <<red<< "- NOT AVAILABLE. ERROR: FILE CORRUPTED -" <<aqua<< "                         �   (";
			if (Controls_Mod_Master_status != 0)
				cout << "�) Enabled      �\n";
			else
				cout << " ) Enabled      �\n";
			cout << " �     6     �  " <<red<< "An unrecoverable error occurred while analyzing the executable." <<aqua<< "                 �   (";
			if (Controls_Mod_Master_status == 0)
				cout << "�) Disabled     �\n";
			else
				cout << " ) Disabled     �\n";
			cout << " �           �  " <<red<< "Please use an unmodded game executable and try again." <<aqua<< "                           �  ";
		}
		switch (Controls_Mod_Master_status)
		{
		case (0):
			cout << "                  �\n";
			break;
		case (1):
			cout << " Preset = DI-1    �\n";
			break;
		case (2):
			cout << " Preset = XI      �\n";
			break;
		case (3):
			cout << " Preset = DI-2    �\n";
			break;
		default:
			cout << " Preset = UNK     �\n";
		}
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     7     �  HEAT HAZE EFFECT FIX                                                            �   (";
		if (Pro_Fix.HeatHaze_effect_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Select this for more information.                                               �   (";
		if (!Pro_Fix.HeatHaze_effect_status)
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
				" �������������������������������������������������������������������������������������������������������������������ͼ\n";
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