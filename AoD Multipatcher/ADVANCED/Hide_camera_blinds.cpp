#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Hide_camera_blinds_status()				// Restituisce vero se la modifica è attivata, falso se il codice è originale
{
	size_t Position;
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4_52("\xE9\xF9\x1A\xEA\xFF\xC3\x8B\x44\x24\x04\xC6\x05\x38\x6F\x76", 15);
	string orig_traod_p4_49("\xE9\x61\x22\xEA\xFF\xC3\x8B\x44\x24\x04\xC6\x05\xF8\x5E\x76", 15);
	string orig_traod_p4_42("\xE9\x19\x3B\xEA\xFF\xC3\x8B\x44\x24\x04\xC6\x05\x38\xDC\x73", 15);
	string orig_traod_p4_39("\xE9\xC5\x3E\xEA\xFF\xC3\x8B\x44\x24\x04\xC6\x05\x38\x3C\x73", 15);
	string orig_traod_p3_52("\xE9\xDA\x72\xEA\xFF\xC3\x90\x8B\x44\x24\x04\xC6\x05\xF8\x5D", 15);
	string orig_traod_p3_49("\xE9\xBE\x79\xEA\xFF\xC3\x90\x8B\x44\x24\x04\xC6\x05\xB8\x5D", 15);
	string orig_traod_p3_42("\xE9\x76\x92\xEA\xFF\xC3\x90\x8B\x44\x24\x04\xC6\x05\xF8\xDA", 15);
	string orig_traod_p3_39("\xE9\x32\x95\xEA\xFF\xC3\x90\x8B\x44\x24\x04\xC6\x05\xB8\x3A", 15);
	string orig_traod_52("\xAC\xD0\x86\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\xE9\x0A\x01\xED\xFF\xC3\x90\x90", 25);
	string orig_traod_49("\xEC\xC1\x86\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\xE9\xCA\x06\xED\xFF\xC3\x90\x90", 25);
	string orig_traod_42("\x6C\xF5\x84\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\xE9\x5A\x1D\xED\xFF\xC3\x90\x90", 25);
	string orig_traod_39("\x5C\x89\x83\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\xE9\xDA\x10\xED\xFF\xC3\x90\x90", 25);

	if ((Position = EXEorig.find(orig_traod_p4_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_p4_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p4_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_p4_39)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_39)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_39)) != std::string::npos)
		return false;
	return true;			// Se non trova alcuna stringa originale significa che il file è modificato
}


void Change_Hide_camera_blinds_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4_52("\xE9\xF9\x1A\xEA\xFF\xC3\x8B\x44\x24\x04\xC6\x05\x38\x6F\x76", 15);
	string orig_traod_p4_49("\xE9\x61\x22\xEA\xFF\xC3\x8B\x44\x24\x04\xC6\x05\xF8\x5E\x76", 15);
	string orig_traod_p4_42("\xE9\x19\x3B\xEA\xFF\xC3\x8B\x44\x24\x04\xC6\x05\x38\xDC\x73", 15);
	string orig_traod_p4_39("\xE9\xC5\x3E\xEA\xFF\xC3\x8B\x44\x24\x04\xC6\x05\x38\x3C\x73", 15);
	string orig_traod_p3_52("\xE9\xDA\x72\xEA\xFF\xC3\x90\x8B\x44\x24\x04\xC6\x05\xF8\x5D", 15);
	string orig_traod_p3_49("\xE9\xBE\x79\xEA\xFF\xC3\x90\x8B\x44\x24\x04\xC6\x05\xB8\x5D", 15);
	string orig_traod_p3_42("\xE9\x76\x92\xEA\xFF\xC3\x90\x8B\x44\x24\x04\xC6\x05\xF8\xDA", 15);
	string orig_traod_p3_39("\xE9\x32\x95\xEA\xFF\xC3\x90\x8B\x44\x24\x04\xC6\x05\xB8\x3A", 15);
	string orig_traod_52("\xAC\xD0\x86\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\xE9\x0A\x01\xED\xFF\xC3\x90\x90", 25);
	string orig_traod_49("\xEC\xC1\x86\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\xE9\xCA\x06\xED\xFF\xC3\x90\x90", 25);
	string orig_traod_42("\x6C\xF5\x84\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\xE9\x5A\x1D\xED\xFF\xC3\x90\x90", 25);
	string orig_traod_39("\x5C\x89\x83\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\xE9\xDA\x10\xED\xFF\xC3\x90\x90", 25);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p4_52("\x90\x90\x90\x90\x90\xC3\x8B\x44\x24\x04\xC6\x05\x38\x6F\x76", 15);
	string mod_traod_p4_49("\x90\x90\x90\x90\x90\xC3\x8B\x44\x24\x04\xC6\x05\xF8\x5E\x76", 15);
	string mod_traod_p4_42("\x90\x90\x90\x90\x90\xC3\x8B\x44\x24\x04\xC6\x05\x38\xDC\x73", 15);
	string mod_traod_p4_39("\x90\x90\x90\x90\x90\xC3\x8B\x44\x24\x04\xC6\x05\x38\x3C\x73", 15);
	string mod_traod_p3_52("\x90\x90\x90\x90\x90\xC3\x90\x8B\x44\x24\x04\xC6\x05\xF8\x5D", 15);
	string mod_traod_p3_49("\x90\x90\x90\x90\x90\xC3\x90\x8B\x44\x24\x04\xC6\x05\xB8\x5D", 15);
	string mod_traod_p3_42("\x90\x90\x90\x90\x90\xC3\x90\x8B\x44\x24\x04\xC6\x05\xF8\xDA", 15);
	string mod_traod_p3_39("\x90\x90\x90\x90\x90\xC3\x90\x8B\x44\x24\x04\xC6\x05\xB8\x3A", 15);
	string mod_traod_52("\xAC\xD0\x86\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\x90\x90\x90\x90\x90\xC3\x90\x90", 25);
	string mod_traod_49("\xEC\xC1\x86\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\x90\x90\x90\x90\x90\xC3\x90\x90", 25);
	string mod_traod_42("\x6C\xF5\x84\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\x90\x90\x90\x90\x90\xC3\x90\x90", 25);
	string mod_traod_39("\x5C\x89\x83\0\x83\xC4\x04\x83\xF8\x02\x74\x05\x83\xF8\x03\x75\x05\x90\x90\x90\x90\x90\xC3\x90\x90", 25);

	size_t Position;
	bool Hide_camera_blinds_status = Detect_Hide_camera_blinds_status();
	if (Hide_camera_blinds_status)		// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(mod_traod_p4_52)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4_52, Position);
		if ((Position = EXEorig.find(mod_traod_p4_49)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4_49, Position);
		if ((Position = EXEorig.find(mod_traod_p4_42)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4_42, Position);
		if ((Position = EXEorig.find(mod_traod_p4_39)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4_39, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(mod_traod_p3_52)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3_52, Position);
		if ((Position = EXEorig.find(mod_traod_p3_49)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3_49, Position);
		if ((Position = EXEorig.find(mod_traod_p3_42)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3_42, Position);
		if ((Position = EXEorig.find(mod_traod_p3_39)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3_39, Position);

		// TRAOD
		if ((Position = EXEorig.find(mod_traod_52)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_52, Position);
		if ((Position = EXEorig.find(mod_traod_49)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_49, Position);
		if ((Position = EXEorig.find(mod_traod_42)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_42, Position);
		if ((Position = EXEorig.find(mod_traod_39)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_39, Position);
	}
	else				// Altrimenti, se il file è originale si applicano le stringhe modificate
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(orig_traod_p4_52)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4_52, Position);
		if ((Position = EXEorig.find(orig_traod_p4_49)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4_49, Position);
		if ((Position = EXEorig.find(orig_traod_p4_42)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4_42, Position);
		if ((Position = EXEorig.find(orig_traod_p4_39)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4_39, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(orig_traod_p3_52)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3_52, Position);
		if ((Position = EXEorig.find(orig_traod_p3_49)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3_49, Position);
		if ((Position = EXEorig.find(orig_traod_p3_42)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3_42, Position);
		if ((Position = EXEorig.find(orig_traod_p3_39)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3_39, Position);

		// TRAOD
		if ((Position = EXEorig.find(orig_traod_52)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_52, Position);
		if ((Position = EXEorig.find(orig_traod_49)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_49, Position);
		if ((Position = EXEorig.find(orig_traod_42)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_42, Position);
		if ((Position = EXEorig.find(orig_traod_39)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_39, Position);
	}
}