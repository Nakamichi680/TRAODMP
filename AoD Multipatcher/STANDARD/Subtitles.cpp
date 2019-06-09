#include "stdafx.h"
#include "MISC/concol.h"
#include "MISC/Misc_Functions.h"


int Detect_Subtitles_status()						// Restituisce: 0 = Disabled +, 1 = Disabled, 2 = Enabled
{
	size_t Position;
	// QUESTE STRINGHE SONO PER IL DISABLED +
	string dis_traod_39("\x68\x40\xCF\x66\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_42("\x68\xC0\xF3\x67\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_49("\x68\xD0\0\x6A\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_52("\x68\x48\x0E\x6A\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P3_39("\x68\x10\x16\x6A\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P3_42("\x68\x30\xB6\x6A\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P3_49("\x68\x50\x38\x6D\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P3_52("\x68\x70\x38\x6D\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P4_39("\x68\x10\x97\x6A\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P4_42("\x68\x30\x37\x6B\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P4_49("\x68\x50\xB9\x6D\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P4_52("\x68\x70\xC9\x6D\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	// QUESTA STRINGA E' PER L'ENABLED
	string SubtEnabled("\x01\0\0\0\x50\xBE\x52\x31\x78\xBE\x52\x31", 12);
	// QUESTA STRINGA E' PER IL DISABLED
	string SubtDisabled("\0\0\0\0\x50\xBE\x52\x31\x78\xBE\x52\x31", 12);

	if ((Position = EXEorig.find(dis_traod_39)) != std::string::npos || (Position = EXEorig.find(dis_traod_42)) != std::string::npos ||
		(Position = EXEorig.find(dis_traod_49)) != std::string::npos || (Position = EXEorig.find(dis_traod_52)) != std::string::npos ||
		(Position = EXEorig.find(dis_traod_P3_39)) != std::string::npos || (Position = EXEorig.find(dis_traod_P3_42)) != std::string::npos ||
		(Position = EXEorig.find(dis_traod_P3_49)) != std::string::npos || (Position = EXEorig.find(dis_traod_P3_52)) != std::string::npos ||
		(Position = EXEorig.find(dis_traod_P4_39)) != std::string::npos || (Position = EXEorig.find(dis_traod_P4_42)) != std::string::npos ||
		(Position = EXEorig.find(dis_traod_P4_49)) != std::string::npos || (Position = EXEorig.find(dis_traod_P4_52)) != std::string::npos)
		return 0;
	if ((Position = EXEorig.find(SubtDisabled)) != std::string::npos)
		return 1;
	if ((Position = EXEorig.find(SubtEnabled)) != std::string::npos)
		return 2;
	return -1;
}


void Change_Subtitles_status()						// Modifica i sottotitoli tra Enabled/Disabled/Disabled +
{
	size_t Position;
	bool exit = false;                                          // Serve ad uscire dal menu
	char Selection;                                             // Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
	int Subtitles_status = Detect_Subtitles_status();			// Serve per "Current status"
	string userinput;

    string traod_39("\x68\x40\xCF\x66\0\xE8\x12\x47\xFF\xFF\x83\xC4\x08", 13);
    string traod_42("\x68\xC0\xF3\x67\0\xE8\x82\x47\xFF\xFF\x83\xC4\x08", 13);
    string traod_49("\x68\xD0\0\x6A\0\xE8\xC2\x47\xFF\xFF\x83\xC4\x08", 13);
    string traod_52("\x68\x48\x0E\x6A\0\xE8\x92\x47\xFF\xFF\x83\xC4\x08", 13);
    string traod_P3_39("\x68\x10\x16\x6A\0\xE8\xA2\x3F\xFF\xFF\x83\xC4\x08", 13);
    string traod_P3_42("\x68\x30\xB6\x6A\0\xE8\xA2\x3F\xFF\xFF\x83\xC4\x08", 13);
    string traod_P3_49("\x68\x50\x38\x6D\0\xE8\xCA\x3F\xFF\xFF\x83\xC4\x08", 13);
    string traod_P3_52("\x68\x70\x38\x6D\0\xE8\x9A\x3F\xFF\xFF\x83\xC4\x08", 13);
    string traod_P4_39("\x68\x10\x97\x6A\0\xE8\xB4\x3C\xFF\xFF\x83\xC4\x08", 13);
    string traod_P4_42("\x68\x30\x37\x6B\0\xE8\xB4\x3C\xFF\xFF\x83\xC4\x08", 13);
    string traod_P4_49("\x68\x50\xB9\x6D\0\xE8\xDC\x3C\xFF\xFF\x83\xC4\x08", 13);
    string traod_P4_52("\x68\x70\xC9\x6D\0\xE8\xB8\x3C\xFF\xFF\x83\xC4\x08", 13);

	// QUESTE STRINGHE SONO PER IL DISABLED +
	string dis_traod_39("\x68\x40\xCF\x66\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_42("\x68\xC0\xF3\x67\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_49("\x68\xD0\0\x6A\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_52("\x68\x48\x0E\x6A\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P3_39("\x68\x10\x16\x6A\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P3_42("\x68\x30\xB6\x6A\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P3_49("\x68\x50\x38\x6D\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P3_52("\x68\x70\x38\x6D\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P4_39("\x68\x10\x97\x6A\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P4_42("\x68\x30\x37\x6B\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P4_49("\x68\x50\xB9\x6D\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	string dis_traod_P4_52("\x68\x70\xC9\x6D\0\x90\x90\x90\x90\x90\x83\xC4\x08", 13);
	// QUESTA STRINGA E' PER L'ENABLED
	string SubtEnabled("\x01\0\0\0\x50\xBE\x52\x31\x78\xBE\x52\x31", 12);
	// QUESTA STRINGA E' PER IL DISABLED
	string SubtDisabled("\0\0\0\0\x50\xBE\x52\x31\x78\xBE\x52\x31", 12);

	do
	{
		system("cls");
		cout << " ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n"
				" บ                                                                                                                   บ\n"
				" บ" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "บ\n"
				" บ" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<white<< "                                                     SUBTITLES                                                     " <<aqua<< "บ\n"
				" วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n"
				" บ                                                                                                                   บ\n"
				" บ   Choose one of the following options:                                                                            บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         1 )  ENABLED                                                                                              บ\n"
				" บ               Show subtitles. This is the default game setting.                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         2 )  DISABLED                                                                                             บ\n"
				" บ               Same behaviour of \"Subtitle: Off\" in debug menu. This option will hide:                             บ\n"
				" บ                - Cutscenes subtitles                                                                              บ\n"
				" บ                - Dialogues subtitles (except when a choice is required during interactive dialogues)              บ\n"
				" บ                - Lara's thoughts and exclamations                                                                 บ\n"
				" บ                - Lara's power-ups notifications                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         3 )  DISABLED +                                                                                           บ\n"
				" บ               Same as \"DISABLED\" but it also removes tutorial subtitles in the first level                        บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<pink<< "   Current status: ";
		if (Subtitles_status == 0)
			cout << "Disabled +                                                                                      " <<aqua<< "บ\n";
		if (Subtitles_status == 1)
			cout << "Disabled                                                                                        " <<aqua<< "บ\n";
		if (Subtitles_status == 2)
			cout << "Enabled                                                                                         " <<aqua<< "บ\n";
		cout << " ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n"
				"\n Select an option and press Enter [" <<white<< "1-3" <<aqua<< "]: " <<white;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		if (userinput.length() > 1)
			Selection = '0';
		else
			Selection = userinput.at(0);
		switch (Selection)
		{
		case '1':		///////////////////////////////////////////////////////////////////		ENABLED
			if ((Position = EXEorig.find(dis_traod_39)) != std::string::npos)
				ChangeSTRINGValue(traod_39, Position);
			if ((Position = EXEorig.find(dis_traod_42)) != std::string::npos)
				ChangeSTRINGValue(traod_42, Position);
			if ((Position = EXEorig.find(dis_traod_49)) != std::string::npos)
				ChangeSTRINGValue(traod_49, Position);
			if ((Position = EXEorig.find(dis_traod_52)) != std::string::npos)
				ChangeSTRINGValue(traod_52, Position);
			if ((Position = EXEorig.find(dis_traod_P3_39)) != std::string::npos)
				ChangeSTRINGValue(traod_P3_39, Position);
			if ((Position = EXEorig.find(dis_traod_P3_42)) != std::string::npos)
				ChangeSTRINGValue(traod_P3_42, Position);
			if ((Position = EXEorig.find(dis_traod_P3_49)) != std::string::npos)
				ChangeSTRINGValue(traod_P3_49, Position);
			if ((Position = EXEorig.find(dis_traod_P3_52)) != std::string::npos)
				ChangeSTRINGValue(traod_P3_52, Position);
			if ((Position = EXEorig.find(dis_traod_P4_39)) != std::string::npos)
				ChangeSTRINGValue(traod_P4_39, Position);
			if ((Position = EXEorig.find(dis_traod_P4_42)) != std::string::npos)
				ChangeSTRINGValue(traod_P4_42, Position);
			if ((Position = EXEorig.find(dis_traod_P4_49)) != std::string::npos)
				ChangeSTRINGValue(traod_P4_49, Position);
			if ((Position = EXEorig.find(dis_traod_P4_52)) != std::string::npos)
				ChangeSTRINGValue(traod_P4_52, Position);
			if ((Position = EXEorig.find(SubtDisabled)) != std::string::npos)
				ChangeSTRINGValue(SubtEnabled, Position);
			exit = true;
			break;
		case '2':		///////////////////////////////////////////////////////////////////		DISABLED
			if ((Position = EXEorig.find(dis_traod_39)) != std::string::npos)
				ChangeSTRINGValue(traod_39, Position);
			if ((Position = EXEorig.find(dis_traod_42)) != std::string::npos)
				ChangeSTRINGValue(traod_42, Position);
			if ((Position = EXEorig.find(dis_traod_49)) != std::string::npos)
				ChangeSTRINGValue(traod_49, Position);
			if ((Position = EXEorig.find(dis_traod_52)) != std::string::npos)
				ChangeSTRINGValue(traod_52, Position);
			if ((Position = EXEorig.find(dis_traod_P3_39)) != std::string::npos)
				ChangeSTRINGValue(traod_P3_39, Position);
			if ((Position = EXEorig.find(dis_traod_P3_42)) != std::string::npos)
				ChangeSTRINGValue(traod_P3_42, Position);
			if ((Position = EXEorig.find(dis_traod_P3_49)) != std::string::npos)
				ChangeSTRINGValue(traod_P3_49, Position);
			if ((Position = EXEorig.find(dis_traod_P3_52)) != std::string::npos)
				ChangeSTRINGValue(traod_P3_52, Position);
			if ((Position = EXEorig.find(dis_traod_P4_39)) != std::string::npos)
				ChangeSTRINGValue(traod_P4_39, Position);
			if ((Position = EXEorig.find(dis_traod_P4_42)) != std::string::npos)
				ChangeSTRINGValue(traod_P4_42, Position);
			if ((Position = EXEorig.find(dis_traod_P4_49)) != std::string::npos)
				ChangeSTRINGValue(traod_P4_49, Position);
			if ((Position = EXEorig.find(dis_traod_P4_52)) != std::string::npos)
				ChangeSTRINGValue(traod_P4_52, Position);
			if ((Position = EXEorig.find(SubtEnabled)) != std::string::npos)
				ChangeSTRINGValue(SubtDisabled, Position);
			exit = true;
			break;
		case '3':		///////////////////////////////////////////////////////////////////		DISABLED +
			if ((Position = EXEorig.find(traod_39)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_39, Position);
			if ((Position = EXEorig.find(traod_42)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_42, Position);
			if ((Position = EXEorig.find(traod_49)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_49, Position);
			if ((Position = EXEorig.find(traod_52)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_52, Position);
			if ((Position = EXEorig.find(traod_P3_39)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_P3_39, Position);
			if ((Position = EXEorig.find(traod_P3_42)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_P3_42, Position);
			if ((Position = EXEorig.find(traod_P3_49)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_P3_49, Position);
			if ((Position = EXEorig.find(traod_P3_52)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_P3_52, Position);
			if ((Position = EXEorig.find(traod_P4_39)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_P4_39, Position);
			if ((Position = EXEorig.find(traod_P4_42)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_P4_42, Position);
			if ((Position = EXEorig.find(traod_P4_49)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_P4_49, Position);
			if ((Position = EXEorig.find(traod_P4_52)) != std::string::npos)
				ChangeSTRINGValue(dis_traod_P4_52, Position);
			if ((Position = EXEorig.find(SubtEnabled)) != std::string::npos)
				ChangeSTRINGValue(SubtDisabled, Position);
			exit = true;
		}
	} while (!exit);
}