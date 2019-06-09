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
		bool DebugMenuOverlay_status = Detect_DebugMenuOverlay_status();				// Controlla se il menu debug Š attivabile con il tasto F2

		stringstream text;
		setbackcolor(black);
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
				" º" <<white<< "  Setting  " <<aqua<<"³"<<white<< "                                Advanced Mods (1/2)                               "
				<<aqua<<"³"<<white<< "       Status       " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     1     ³  GLOBAL VARIABLES                                                                ³                    º\n"
				" º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     2     ³  DEBUG MODE                                                                      ³   (";
		if (Debug_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  By enabling this setting, the game will run in debug mode by default.           ³   (";
		if (!Debug_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     3     ³  DEBUG MENU OVERLAY                                                              ³   (";
		if (DebugMenuOverlay_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Press \"F2\" to toggle the in-game debug menu.                                    ³   (";
		if (!DebugMenuOverlay_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     4     ³  UNLIMITED ROOM BOUNDARIES                                                       ³   (";
		if (BB_rooms_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  The screen won't turn black while flying around the map (CPU intensive).        ³   (";
		if (!BB_rooms_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     5     ³  HIDE CAMERA CUTSCENE BLINDS                                                     ³   (";
		if (Hide_camera_blinds_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Removes top/bottom black bars during cutscenes.                                 ³   (";
		if (!Hide_camera_blinds_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     6     ³  DISABLE VERTEX COLORS                                                           ³   (";
		if (Disable_vertex_colors)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Vertex colors will not be rendered.                                             ³   (";
		if (!Disable_vertex_colors)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º           ³                                                                                  ³                    º\n"
				" º     7     ³  VERBOSE OUTPUT DEBUG STRING                                                     ³   (";
		if (OutputDebugString_status)
			cout << "ù) Enabled      º\n";
		else
			cout << " ) Enabled      º\n";
		cout << " º           ³  Increases the amount of OutputDebugString messages.                             ³   (";
		if (!OutputDebugString_status)
			cout << "ù) Disabled     º\n";
		else
			cout << " ) Disabled     º\n";
		cout << " º           ³                                                                                  ³                    º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º" <<white<< "                           " <<aqua<< "³" <<white<< "                (X) Switch to Standard Mods                "
				<<aqua<< "³" <<white<< "     (N)ext page ---->     " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º                                                         ³                                                         º\n"
				" º" <<green<< "                 (S)ave changes and exit                 " <<aqua<< "³" <<red<< "               (D)iscard changes and exit                " <<aqua<< "º\n"
				" º                                                         ³                                                         º\n"
				" ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÏÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹\n"
				" º" <<pink<< "              TRAOD EXE Multi-Patcher by Nakamichi680              " <<aqua<< "º" <<pink<< "    Version: " << VER << "   " <<aqua<< "º" <<pink<< "  Build date: " << BDATE << "  " <<aqua<< "º\n"
				" ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n"
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