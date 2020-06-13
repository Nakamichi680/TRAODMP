#include "stdafx.h"
#include "MISC/concol.h"
#include "STANDARD/Standard_FIX.h"
#include "PRO_SHARED/Pro_FIX.h"
#include "MISC/Misc_Functions.h"


int MENU_STANDARD3(int &Version, string &Short_name)
{
	do
	{
		Pro_Fix_Status Pro_Fix;
		Pro_Fix_Detect_status_ALL(&Pro_Fix);
		bool ESC_SKIP_Cutscene_status = Detect_ESC_SKIP_Cutscene_status();			// Controlla se le cutscene si interrompono con il solo tasto ESC
		bool ESC_SKIP_FMV_status = Detect_ESC_SKIP_FMV_status();					// Controlla se gli FMV si interrompono con il solo tasto ESC
		int AspectRatio_status = Detect_AspectRatio_status();						// 0 = Disabled, 1 = Diary-only, 2 = Full

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
				" �" <<white<< "  Setting  " <<aqua<<"�"<<white<< "                                Standard Mods (3/5)                               "
				<<aqua<<"�"<<white<< "       Status       " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     1     �  MAIN MENU DEMO VIDEO                                                            �   (";
		if (Pro_Fix.Main_menu_demo_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Restores the missing demo video. Requires \"TP_ROLL.MPG\" inside Data\\FMV folder. �   (";
		if (!Pro_Fix.Main_menu_demo_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     2     �  CLASSIC HEALTH/BREATH/GRIP BAR                                                  �   (";
		if (Pro_Fix.HUD_mod_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Health/breath/grip bar will behave like the TR1-TR5 ones.                       �   (";
		if (!Pro_Fix.HUD_mod_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �           �  CUTSCENE/FMV SKIP BUTTON                                                        �   (";
		if (ESC_SKIP_Cutscene_status || ESC_SKIP_FMV_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �     3     �  Press \"ESC\" to skip cutscenes/FMVs. All other buttons will have no effect.      �   (";
		if (!ESC_SKIP_Cutscene_status && !ESC_SKIP_FMV_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		if (ESC_SKIP_Cutscene_status && !ESC_SKIP_FMV_status)
			cout << " �           �  Select this for more information.                                               � Preset = CS-only   �\n";
		if (!ESC_SKIP_Cutscene_status && ESC_SKIP_FMV_status)
			cout << " �           �  Select this for more information.                                               � Preset = FMV-only  �\n";
		if (ESC_SKIP_Cutscene_status && ESC_SKIP_FMV_status)
			cout << " �           �  Select this for more information.                                               � Preset = CS + FMV  �\n";
		if (!ESC_SKIP_Cutscene_status && !ESC_SKIP_FMV_status)
			cout << " �           �  Select this for more information.                                               �                    �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �           �  ASPECT RATIO FIX                                                                �   (";
		if (AspectRatio_status == 2)
			cout << "�) Full         �\n";
		else
			cout << " ) Full         �\n";
		cout << " �     4     �  Fix for loading screens, HUD, menus and Von Croy's notebook.                    �   (";
		if (AspectRatio_status == 1)
			cout << "�) Notebook     �\n";
		else
			cout << " ) Notebook     �\n";
		cout << " �           �  Select this for more information.                                               �   (";
		if (AspectRatio_status == 0)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     5     �  EXTERNAL FONT SUPPORT                                                           �   (";
		if (Pro_Fix.Font_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Overrides built-in game font. Requires \"FONT.TGA\" inside Data\\effects folder.   �   (";
		if (!Pro_Fix.Font_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     6     �  LAG FREE WALK MODE                                                              �   (";
		if (Pro_Fix.Sidestep_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Removes the delay when trying to perform a side step/step back.                 �   (";
		if (!Pro_Fix.Sidestep_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     7     �  UNDERWATER EFFECTS FIX                                                          �   (";
		if (Pro_Fix.UW_effects_status && Pro_Fix.fxLightningSlots_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Restores missing underwater effects in \"The Vault of Trophies\" level.           �   (";
		if (!Pro_Fix.UW_effects_status && !Pro_Fix.fxLightningSlots_status)
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
			if (Pro_Fix.Main_menu_demo_status)
			{
				Main_menu_demo_Disable();
				Pro_Fix_Deallocate_space();
				Pro_Fix.Main_menu_demo_status = false;
				Pro_Fix_Restore_enabled(Pro_Fix);
			}
			else
				Main_menu_demo_Enable();
			break;
		case '2':
			if (Pro_Fix.HUD_mod_status)
			{
				HUD_mod_Disable();
				Pro_Fix_Deallocate_space();
				Pro_Fix.HUD_mod_status = false;
				Pro_Fix_Restore_enabled(Pro_Fix);
			}
			else
				HUD_mod_Enable();
			break;
		case '3':
			Change_ESC_SKIP_MASTER_status();
			break;
		case '4':
			Change_AspectRatio_status();
			break;
		case '5':
			if (Pro_Fix.Font_status)
			{
				Font_Disable();
				Pro_Fix_Deallocate_space();
				Pro_Fix.Font_status = false;
				Pro_Fix_Restore_enabled(Pro_Fix);
			}
			else
				Font_Enable();
			break;
		case '6':
			if (Pro_Fix.Sidestep_status)
			{
				Sidestep_Disable();
				Pro_Fix_Deallocate_space();
				Pro_Fix.Sidestep_status = false;
				Pro_Fix_Restore_enabled(Pro_Fix);
			}
			else
				Sidestep_Enable();
			break;
		case '7':
			if (Pro_Fix.UW_effects_status && Pro_Fix.fxLightningSlots_status)
			{
				UW_effects_Disable();
				fxLightningSlots_Disable();
				Pro_Fix_Deallocate_space();
				Pro_Fix.UW_effects_status = false;
				Pro_Fix.fxLightningSlots_status = false;
				Pro_Fix_Restore_enabled(Pro_Fix);
			}
			else
			{
				UW_effects_Enable();
				fxLightningSlots_Enable();
			}
			break;
		case 'X':
			return 50;
		case 'P':
			return 2;
		case 'N':
			return 4;
		case 'S':
			return 100;
		case 'D':
			return 101;
		}
	} while (true);
}