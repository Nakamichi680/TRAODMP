#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Snow_status()							// Restituisce vero se la neve è attiva, falso se è spenta
{
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////		STRINGHE FIXATE CON LA NEVE FUNZIONANTE		///////////////////////////////////////////////////////
	// fxProcessSnow_PC		TRAOD_P4, TRAOD_P3, TRAOD
	string fix_fxPS_p452("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x48\x5B\x90", 12);
	string fix_fxPS_p449("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x08\x4B\x90", 12);
	string fix_fxPS_p442("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\xE8\xC7\x8D", 12);
	string fix_fxPS_p439("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\xA8\x24\x8D", 12);

	string fix_fxPS_p352("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x0C\x42\x8F", 12);
	string fix_fxPS_p349("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\xCC\x41\x8F", 12);
	string fix_fxPS_p342("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\xAC\xBE\x8C", 12);
	string fix_fxPS_p339("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x2C\x1B\x8C", 12);

	string fix_fxPS_52("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\x7C\x28\x8C", 12);
	string fix_fxPS_49("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\xBC\x19\x8C", 12);
	string fix_fxPS_42("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\x3C\x4D\x8A", 12);
	string fix_fxPS_39("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\x3C\xE1\x88", 12);

	// fxDrawSnow			TRAOD_P4, TRAOD_P3, TRAOD
	string fix_fxDS_p452("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x48\x5B\x90", 12);
	string fix_fxDS_p449("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x08\x4B\x90", 12);
	string fix_fxDS_p442("\x56\x55\x81\xEC\xB4\0\0\0\xA0\xE8\xC7\x8D", 12);
	string fix_fxDS_p439("\x56\x55\x81\xEC\xB4\0\0\0\xA0\xA8\x24\x8D", 12);

	string fix_fxDS_p352("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x0C\x42\x8F", 12);
	string fix_fxDS_p349("\x56\x55\x81\xEC\xB4\0\0\0\xA0\xCC\x41\x8F", 12);
	string fix_fxDS_p342("\x56\x55\x81\xEC\xB4\0\0\0\xA0\xAC\xBE\x8C", 12);
	string fix_fxDS_p339("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x2C\x1B\x8C", 12);

	string fix_fxDS_52("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\x7C\x28\x8C", 12);
	string fix_fxDS_49("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\xBC\x19\x8C", 12);
	string fix_fxDS_42("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\x3C\x4D\x8A", 12);
	string fix_fxDS_39("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\x3C\xE1\x88", 12);
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	size_t Position;
	if (((Position = EXEorig.find(fix_fxPS_p452)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_p452)) != std::string::npos) ||
		((Position = EXEorig.find(fix_fxPS_p449)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_p449)) != std::string::npos) ||
	    ((Position = EXEorig.find(fix_fxPS_p442)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_p442)) != std::string::npos) ||
		((Position = EXEorig.find(fix_fxPS_p439)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_p439)) != std::string::npos) ||
		((Position = EXEorig.find(fix_fxPS_p352)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_p352)) != std::string::npos) ||
		((Position = EXEorig.find(fix_fxPS_p349)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_p349)) != std::string::npos) ||
		((Position = EXEorig.find(fix_fxPS_p342)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_p342)) != std::string::npos) ||
		((Position = EXEorig.find(fix_fxPS_p339)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_p339)) != std::string::npos) ||
		((Position = EXEorig.find(fix_fxPS_52)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_52)) != std::string::npos) ||
		((Position = EXEorig.find(fix_fxPS_49)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_49)) != std::string::npos) ||
		((Position = EXEorig.find(fix_fxPS_42)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_42)) != std::string::npos) ||
		((Position = EXEorig.find(fix_fxPS_39)) != std::string::npos && (Position = EXEorig.find(fix_fxDS_39)) != std::string::npos))
		return true;
	return false;
}


void Change_Snow_status()
{
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////		STRINGHE BUGGATE ORIGINALI CON LA NEVE SPENTA		///////////////////////////////////////////////////
	// fxProcessSnow_PC		TRAOD_P4, TRAOD_P3, TRAOD
	string fxPS_p452("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x48\x96\x76", 12);
	string fxPS_p449("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x08\x86\x76", 12);
	string fxPS_p442("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x48\x03\x74", 12);
	string fxPS_p439("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x48\x63\x73", 12);

	string fxPS_p352("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x08\x83\x75", 12);
	string fxPS_p349("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\xC8\x82\x75", 12);
	string fxPS_p342("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x08\0\x73", 12);
	string fxPS_p339("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\xC8\x5F\x72", 12);

	string fxPS_52("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\x66\xEE\x71", 12);
	string fxPS_49("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\xA6\xDF\x71", 12);
	string fxPS_42("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\xA6\x13\x70", 12);
	string fxPS_39("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\xD6\xAA\x6E", 12);

	// fxDrawSnow			TRAOD_P4, TRAOD_P3, TRAOD
	string fxDS_p452("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x48\x96\x76", 12);
	string fxDS_p449("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x08\x86\x76", 12);
	string fxDS_p442("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x48\x03\x74", 12);
	string fxDS_p439("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x48\x63\x73", 12);

	string fxDS_p352("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x08\x83\x75", 12);
	string fxDS_p349("\x56\x55\x81\xEC\xB4\0\0\0\xA0\xC8\x82\x75", 12);
	string fxDS_p342("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x08\0\x73", 12);
	string fxDS_p339("\x56\x55\x81\xEC\xB4\0\0\0\xA0\xC8\x5F\x72", 12);

	string fxDS_52("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\x66\xEE\x71", 12);
	string fxDS_49("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\xA6\xDF\x71", 12);
	string fxDS_42("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\xA6\x13\x70", 12);
	string fxDS_39("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\xD6\xAA\x6E", 12);
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////		STRINGHE FIXATE CON LA NEVE FUNZIONANTE		///////////////////////////////////////////////////////
	// fxProcessSnow_PC		TRAOD_P4, TRAOD_P3, TRAOD
	string fix_fxPS_p452("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x48\x5B\x90", 12);
	string fix_fxPS_p449("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x08\x4B\x90", 12);
	string fix_fxPS_p442("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\xE8\xC7\x8D", 12);
	string fix_fxPS_p439("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\xA8\x24\x8D", 12);

	string fix_fxPS_p352("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x0C\x42\x8F", 12);
	string fix_fxPS_p349("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\xCC\x41\x8F", 12);
	string fix_fxPS_p342("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\xAC\xBE\x8C", 12);
	string fix_fxPS_p339("\x8B\xDC\x83\xE4\xF0\x83\xEC\x20\xA0\x2C\x1B\x8C", 12);

	string fix_fxPS_52("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\x7C\x28\x8C", 12);
	string fix_fxPS_49("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\xBC\x19\x8C", 12);
	string fix_fxPS_42("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\x3C\x4D\x8A", 12);
	string fix_fxPS_39("\x8B\xEC\x83\xE4\xF0\x83\xEC\x1C\xA0\x3C\xE1\x88", 12);

	// fxDrawSnow			TRAOD_P4, TRAOD_P3, TRAOD
	string fix_fxDS_p452("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x48\x5B\x90", 12);
	string fix_fxDS_p449("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x08\x4B\x90", 12);
	string fix_fxDS_p442("\x56\x55\x81\xEC\xB4\0\0\0\xA0\xE8\xC7\x8D", 12);
	string fix_fxDS_p439("\x56\x55\x81\xEC\xB4\0\0\0\xA0\xA8\x24\x8D", 12);

	string fix_fxDS_p352("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x0C\x42\x8F", 12);
	string fix_fxDS_p349("\x56\x55\x81\xEC\xB4\0\0\0\xA0\xCC\x41\x8F", 12);
	string fix_fxDS_p342("\x56\x55\x81\xEC\xB4\0\0\0\xA0\xAC\xBE\x8C", 12);
	string fix_fxDS_p339("\x56\x55\x81\xEC\xB4\0\0\0\xA0\x2C\x1B\x8C", 12);

	string fix_fxDS_52("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\x7C\x28\x8C", 12);
	string fix_fxDS_49("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\xBC\x19\x8C", 12);
	string fix_fxDS_42("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\x3C\x4D\x8A", 12);
	string fix_fxDS_39("\x8B\xEC\x83\xE4\xF0\x83\xEC\x78\xA0\x3C\xE1\x88", 12);
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	size_t Position;
	bool Snow_status = Detect_Snow_status();
	if (Snow_status)	// Se la neve funziona, bisogna cercare le stringhe fixate (fix) e sostituirle con le originali buggate
	{
		/////////////////////		fxProcessSnow_PC
		if ((Position = EXEorig.find(fix_fxPS_p452)) != std::string::npos)
			ChangeSTRINGValue(fxPS_p452, Position);
		if ((Position = EXEorig.find(fix_fxPS_p449)) != std::string::npos)
			ChangeSTRINGValue(fxPS_p449, Position);
		if ((Position = EXEorig.find(fix_fxPS_p442)) != std::string::npos)
			ChangeSTRINGValue(fxPS_p442, Position);
		if ((Position = EXEorig.find(fix_fxPS_p439)) != std::string::npos)
			ChangeSTRINGValue(fxPS_p439, Position);
		if ((Position = EXEorig.find(fix_fxPS_p352)) != std::string::npos)
			ChangeSTRINGValue(fxPS_p352, Position);
		if ((Position = EXEorig.find(fix_fxPS_p349)) != std::string::npos)
			ChangeSTRINGValue(fxPS_p349, Position);
		if ((Position = EXEorig.find(fix_fxPS_p342)) != std::string::npos)
			ChangeSTRINGValue(fxPS_p342, Position);
		if ((Position = EXEorig.find(fix_fxPS_p339)) != std::string::npos)
			ChangeSTRINGValue(fxPS_p339, Position);
		if ((Position = EXEorig.find(fix_fxPS_52)) != std::string::npos)
			ChangeSTRINGValue(fxPS_52, Position);
		if ((Position = EXEorig.find(fix_fxPS_49)) != std::string::npos)
			ChangeSTRINGValue(fxPS_49, Position);
		if ((Position = EXEorig.find(fix_fxPS_42)) != std::string::npos)
			ChangeSTRINGValue(fxPS_42, Position);
		if ((Position = EXEorig.find(fix_fxPS_39)) != std::string::npos)
			ChangeSTRINGValue(fxPS_39, Position);

		/////////////////////		fxDrawSnow
		if ((Position = EXEorig.find(fix_fxDS_p452)) != std::string::npos)
			ChangeSTRINGValue(fxDS_p452, Position);
		if ((Position = EXEorig.find(fix_fxDS_p449)) != std::string::npos)
			ChangeSTRINGValue(fxDS_p449, Position);
		if ((Position = EXEorig.find(fix_fxDS_p442)) != std::string::npos)
			ChangeSTRINGValue(fxDS_p442, Position);
		if ((Position = EXEorig.find(fix_fxDS_p439)) != std::string::npos)
			ChangeSTRINGValue(fxDS_p439, Position);
		if ((Position = EXEorig.find(fix_fxDS_p352)) != std::string::npos)
			ChangeSTRINGValue(fxDS_p352, Position);
		if ((Position = EXEorig.find(fix_fxDS_p349)) != std::string::npos)
			ChangeSTRINGValue(fxDS_p349, Position);
		if ((Position = EXEorig.find(fix_fxDS_p342)) != std::string::npos)
			ChangeSTRINGValue(fxDS_p342, Position);
		if ((Position = EXEorig.find(fix_fxDS_p339)) != std::string::npos)
			ChangeSTRINGValue(fxDS_p339, Position);
		if ((Position = EXEorig.find(fix_fxDS_52)) != std::string::npos)
			ChangeSTRINGValue(fxDS_52, Position);
		if ((Position = EXEorig.find(fix_fxDS_49)) != std::string::npos)
			ChangeSTRINGValue(fxDS_49, Position);
		if ((Position = EXEorig.find(fix_fxDS_42)) != std::string::npos)
			ChangeSTRINGValue(fxDS_42, Position);
		if ((Position = EXEorig.find(fix_fxDS_39)) != std::string::npos)
			ChangeSTRINGValue(fxDS_39, Position);
	}
	else			// Se la neve non è attiva bisogna cercare le stringhe originali buggate e sostituirle con quelle funzionanti (fix)
	{
		/////////////////////		fxProcessSnow_PC
		if ((Position = EXEorig.find(fxPS_p452)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_p452, Position);
		if ((Position = EXEorig.find(fxPS_p449)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_p449, Position);
		if ((Position = EXEorig.find(fxPS_p442)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_p442, Position);
		if ((Position = EXEorig.find(fxPS_p439)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_p439, Position);
		if ((Position = EXEorig.find(fxPS_p352)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_p352, Position);
		if ((Position = EXEorig.find(fxPS_p349)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_p349, Position);
		if ((Position = EXEorig.find(fxPS_p342)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_p342, Position);
		if ((Position = EXEorig.find(fxPS_p339)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_p339, Position);
		if ((Position = EXEorig.find(fxPS_52)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_52, Position);
		if ((Position = EXEorig.find(fxPS_49)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_49, Position);
		if ((Position = EXEorig.find(fxPS_42)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_42, Position);
		if ((Position = EXEorig.find(fxPS_39)) != std::string::npos)
			ChangeSTRINGValue(fix_fxPS_39, Position);

		/////////////////////		fxDrawSnow
		if ((Position = EXEorig.find(fxDS_p452)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_p452, Position);
		if ((Position = EXEorig.find(fxDS_p449)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_p449, Position);
		if ((Position = EXEorig.find(fxDS_p442)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_p442, Position);
		if ((Position = EXEorig.find(fxDS_p439)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_p439, Position);
		if ((Position = EXEorig.find(fxDS_p352)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_p352, Position);
		if ((Position = EXEorig.find(fxDS_p349)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_p349, Position);
		if ((Position = EXEorig.find(fxDS_p342)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_p342, Position);
		if ((Position = EXEorig.find(fxDS_p339)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_p339, Position);
		if ((Position = EXEorig.find(fxDS_52)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_52, Position);
		if ((Position = EXEorig.find(fxDS_49)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_49, Position);
		if ((Position = EXEorig.find(fxDS_42)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_42, Position);
		if ((Position = EXEorig.find(fxDS_39)) != std::string::npos)
			ChangeSTRINGValue(fix_fxDS_39, Position);
	}	
}