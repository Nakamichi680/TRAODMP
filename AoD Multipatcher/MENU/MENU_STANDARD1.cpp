#include "stdafx.h"
#include "MISC/concol.h"
#include "STANDARD/Standard_FIX.h"
#include "MISC/Misc_Functions.h"


int MENU_STANDARD1(int &Version, string &Short_name)
{
	do
	{
		int KRed, KGreen, KBlue, KBrightness;
		int Subtitles_status = Detect_Subtitles_status();								// Controlla i sottotitoli
		int Farsee_status = Detect_Farsee_status(KRed, KGreen, KBlue, KBrightness);		// Controlla l'effetto farsee di Kurtis
		bool Lara_glasses_status = Detect_Lara_glasses_status();						// Controlla gli occhiali di Lara
		bool Dead_bodies_status = Detect_Dead_bodies_status();							// Controlla l'effetto scomparsa cadaveri
		bool Ger_blood_status = Detect_Ger_blood_status();								// Controlla la censura del sangue nella versione tedesca
		bool LockOutControl_status = Detect_LockOutControl_status();					// Controlla se i movimenti di Lara sono bloccati durante il tutorial
		bool LookCamera_delay_status = Detect_LookCamera_delay_status();				// Controlla se il lag della LookCamera � 0 oppure 1Eh
	
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
				" �" <<white<< "  Setting  " <<aqua<<"�"<<white<< "                                Standard Mods (1/5)                               "
				 <<aqua<<"�"<<white<< "       Status       " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     1     �  LARA SUNGLASSES                                                                 �   (";
		if (Lara_glasses_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Enables/disables Lara sunglasses.                                               �   (";
		if (!Lara_glasses_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �           �  SUBTITLES                                                                       �   (";
		if (Subtitles_status == 2)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �     2     �  Shows/hides in-game subtitles.                                                  �   (";
		if (Subtitles_status == 1)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �  Select this for more information.                                               �   (";
		if (Subtitles_status == 0)
			cout << "�) Disabled +   �\n";
		else
			cout << " ) Disabled +   �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �           �  KURTIS' FARSEE EFFECT FIX                                                       �   (";
		if (Farsee_status != 0)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �     3     �  Restores the original PS2 colour of the Kurtis' farsee effect.                  �   (";
		if (Farsee_status == 0)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �  Select this for more information.                                               �  ";
		switch (Farsee_status)
		{
		case (0):
			cout << "                  �\n";
			cout << " �           �                                                                                  �                    �\n";
			break;
		case (1):
			cout << "Preset = Light    �\n";
			cout << " �           �                                                                                  �                    �\n";
			break;
		case (2):
			cout << "Preset = Medium   �\n";
			cout << " �           �                                                                                  �                    �\n";
			break;
		case (3):
			cout << "Preset = Strong   �\n";
			cout << " �           �                                                                                  �                    �\n";
			break;
		case (4):
			cout << "Preset = Custom   �\n";
			cout << " �           �                                                                                  �  R=";
			cout << setw(3) << KRed << " G=" << setw(3) << KGreen << " B=" << setw(3) << KBlue << " �\n";
		}
		cout << " �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     4     �  PERSISTENT CORPSES                                                              �   (";
		if (Dead_bodies_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Dead enemies will no longer disappear after 5 seconds.                          �   (";
		if (!Dead_bodies_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     5     �  BLOOD - GERMAN VERSION                                                          �   (";
		if (Ger_blood_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Removes the blood censorship in the German version of the game.                 �   (";
		if (!Ger_blood_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     6     �  UNLOCK PLAYER POSITION                                                          �   (";
		if (!LockOutControl_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Enables Lara's movement during the tutorial sections and in-game cutscenes.     �   (";
		if (LockOutControl_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     7     �  LAG FREE LOOK CAMERA                                                            �   (";
		if (LookCamera_delay_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Increases responsiveness using the \"Look\" key.                                  �   (";
		if (!LookCamera_delay_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
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
				" �������������������������������������������������������������������������������������������������������������������ͼ\n";
		cout << "\n Select an option and press Enter [" <<white<< "1-7/N/X/S/D" <<aqua<< "]: " <<white;
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
			Change_Lara_glasses_status();
			break;
		case '2':
			Change_Subtitles_status();
			break;
		case '3':
			Change_Farsee_status(KRed, KGreen, KBlue, KBrightness);
			break;
		case '4':
			Change_Dead_bodies_status();
			break;
		case '5':
			Change_Ger_blood_status();
			break;
		case '6':
			Change_LockOutControl_status();
			break;
		case '7':
			Change_LookCamera_delay_status();
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