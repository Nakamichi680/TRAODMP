#include "stdafx.h"
#include "MISC/concol.h"
#include "ADVANCED/Advanced_FIX.h"
#include "MISC/Misc_Functions.h"


int MENU_ADVANCED1(int &Version, string &Short_name)
{
	do
	{
		bool Debug_status = Detect_Debug_status();										// Controlla il debug mode
		bool BB_rooms_status = Detect_BB_rooms_status();								// Controlla lo status dei bounding boxes delle stanze
		bool Hide_camera_blinds_status = Detect_Hide_camera_blinds_status();			// Controlla se i blinds delle cutscene sono disattivati o no
		bool Disable_vertex_colors = Detect_Disable_vertex_colors_status();				// Controlla se i vertex colors sono attivi o no
		bool OutputDebugString_status = Detect_OutputDebugString_status();				// Controlla se il gioco scrive tutti i messaggi di debug o solo alcuni
		bool DebugMenuOverlay_status = Detect_DebugMenuOverlay_status();				// Controlla se il menu debug � attivabile con il tasto F2

		stringstream text;
		setbackcolor(black);
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
				" �" <<white<< "  Setting  " <<aqua<<"�"<<white<< "                                Advanced Mods (1/2)                               "
				<<aqua<<"�"<<white<< "       Status       " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     1     �  GLOBAL VARIABLES                                                                �                    �\n"
				" �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     2     �  DEBUG MODE                                                                      �   (";
		if (Debug_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  By enabling this setting, the game will run in debug mode by default.           �   (";
		if (!Debug_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     3     �  DEBUG MENU OVERLAY                                                              �   (";
		if (DebugMenuOverlay_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Press \"F2\" to toggle the in-game debug menu.                                    �   (";
		if (!DebugMenuOverlay_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     4     �  UNLIMITED ROOM BOUNDARIES                                                       �   (";
		if (BB_rooms_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  The screen won't turn black while flying around the map (CPU intensive).        �   (";
		if (!BB_rooms_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     5     �  HIDE CAMERA CUTSCENE BLINDS                                                     �   (";
		if (Hide_camera_blinds_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Removes top/bottom black bars during cutscenes.                                 �   (";
		if (!Hide_camera_blinds_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     6     �  DISABLE VERTEX COLORS                                                           �   (";
		if (Disable_vertex_colors)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Vertex colors will not be rendered.                                             �   (";
		if (!Disable_vertex_colors)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �           �                                                                                  �                    �\n"
				" �     7     �  VERBOSE OUTPUT DEBUG STRING                                                     �   (";
		if (OutputDebugString_status)
			cout << "�) Enabled      �\n";
		else
			cout << " ) Enabled      �\n";
		cout << " �           �  Increases the amount of OutputDebugString messages.                             �   (";
		if (!OutputDebugString_status)
			cout << "�) Disabled     �\n";
		else
			cout << " ) Disabled     �\n";
		cout << " �           �                                                                                  �                    �\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �" <<white<< "                           " <<aqua<< "�" <<white<< "                (X) Switch to Standard Mods                "
				<<aqua<< "�" <<white<< "     (N)ext page ---->     " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �                                                         �                                                         �\n"
				" �" <<green<< "                 (S)ave changes and exit                 " <<aqua<< "�" <<red<< "               (D)iscard changes and exit                " <<aqua<< "�\n"
				" �                                                         �                                                         �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<pink<< "              TRAOD EXE Multi-Patcher by Nakamichi680              " <<aqua<< "�" <<pink<< "    Version: " << VER << "   " <<aqua<< "�" <<pink<< "  Build date: " << BDATE << "  " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������ͼ\n"
				"\n Select an option and press Enter [" <<white<< "1-7/N/X/S/D" <<aqua<< "]: " <<white;
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
			return 70;
		case '2':
			Change_Debug_status();
			break;
		case '3':
			Change_DebugMenuOverlay_status();
			break;
		case '4':
			Change_BB_rooms_status();
			break;
		case '5':
			Change_Hide_camera_blinds_status();
			break;
		case '6':
			Change_Disable_vertex_colors_status();
			break;
		case '7':
			Change_OutputDebugString_status();
			break;
		case 'N':
			return 51;
		case 'X':
			setbackcolor(dark_blue);
			return 1;
		case 'S':
			setbackcolor(dark_blue);
			return 100;
		case 'D':
			setbackcolor(dark_blue);
			return 101;
		}
	} while (true);
}