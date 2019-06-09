#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_FixedCameras_status()					// Restituisce vero se le telecamere fisse sono disattivate, falso se il codice è originale
{
	//////////////////		_Camera_OnInit		Stringhe originali
	string orig_traod_p4_52("\x50\xE8\x7C\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xE4\xFA\x80\0\x89\x90\xEC\xFA", 26);
	string orig_traod_p4_49("\x50\xE8\x7C\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xA4\xEA\x80\0\x89\x90\xAC\xEA", 26);
	string orig_traod_p4_42("\x50\xE8\x7C\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x84\x67\x7E\0\x89\x90\x8C\x67", 26);
	string orig_traod_p4_39("\x50\xE8\x7C\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x44\xC4\x7D\0\x89\x90\x4C\xC4", 26);
	string orig_traod_p3_52("\x50\xE8\x84\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xA4\xE1\x7F\0\x89\x90\xAC\xE1", 26);
	string orig_traod_p3_49("\x50\xE8\x84\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x64\xE1\x7F\0\x89\x90\x6C\xE1", 26);
	string orig_traod_p3_42("\x50\xE8\x84\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x44\x5E\x7D\0\x89\x90\x4C\x5E", 26);
	string orig_traod_p3_39("\x50\xE8\x84\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xC4\xBA\x7C\0\x89\x90\xCC\xBA", 26);
	string orig_traod_52("\x51\xE8\x1B\x01\0\0\x83\xC4\x34\xB8\x84\x23\x8B\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\x14\x25", 26);
	string orig_traod_49("\x51\xE8\x2B\x01\0\0\x83\xC4\x34\xB8\xC4\x14\x8B\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\x54\x16", 26);
	string orig_traod_42("\x51\xE8\x1B\x01\0\0\x83\xC4\x34\xB8\x44\x48\x89\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\xD4\x49", 26);
	string orig_traod_39("\x51\xE8\x1B\x01\0\0\x83\xC4\x34\xB8\x44\xDC\x87\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\xD4\xDD", 26);

	size_t Position;
	if ((Position = EXEorig.find(orig_traod_p4_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_p4_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p4_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_p4_39)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_39)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_39)) != std::string::npos)
		return false;
	return true;			// Se non trova alcuna stringa originale significa che il file è modificato
}


void Change_FixedCameras_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4_52("\x50\xE8\x7C\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xE4\xFA\x80\0\x89\x90\xEC\xFA", 26);
	string orig_traod_p4_49("\x50\xE8\x7C\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xA4\xEA\x80\0\x89\x90\xAC\xEA", 26);
	string orig_traod_p4_42("\x50\xE8\x7C\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x84\x67\x7E\0\x89\x90\x8C\x67", 26);
	string orig_traod_p4_39("\x50\xE8\x7C\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x44\xC4\x7D\0\x89\x90\x4C\xC4", 26);
	string orig_traod_p3_52("\x50\xE8\x84\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xA4\xE1\x7F\0\x89\x90\xAC\xE1", 26);
	string orig_traod_p3_49("\x50\xE8\x84\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x64\xE1\x7F\0\x89\x90\x6C\xE1", 26);
	string orig_traod_p3_42("\x50\xE8\x84\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x44\x5E\x7D\0\x89\x90\x4C\x5E", 26);
	string orig_traod_p3_39("\x50\xE8\x84\x29\0\0\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xC4\xBA\x7C\0\x89\x90\xCC\xBA", 26);
	string orig_traod_52("\x51\xE8\x1B\x01\0\0\x83\xC4\x34\xB8\x84\x23\x8B\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\x14\x25", 26);
	string orig_traod_49("\x51\xE8\x2B\x01\0\0\x83\xC4\x34\xB8\xC4\x14\x8B\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\x54\x16", 26);
	string orig_traod_42("\x51\xE8\x1B\x01\0\0\x83\xC4\x34\xB8\x44\x48\x89\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\xD4\x49", 26);
	string orig_traod_39("\x51\xE8\x1B\x01\0\0\x83\xC4\x34\xB8\x44\xDC\x87\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\xD4\xDD", 26);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p4_52("\x50\x90\x90\x90\x90\x90\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xE4\xFA\x80\0\x89\x90\xEC\xFA", 26);
	string mod_traod_p4_49("\x50\x90\x90\x90\x90\x90\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xA4\xEA\x80\0\x89\x90\xAC\xEA", 26);
	string mod_traod_p4_42("\x50\x90\x90\x90\x90\x90\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x84\x67\x7E\0\x89\x90\x8C\x67", 26);
	string mod_traod_p4_39("\x50\x90\x90\x90\x90\x90\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x44\xC4\x7D\0\x89\x90\x4C\xC4", 26);
	string mod_traod_p3_52("\x50\x90\x90\x90\x90\x90\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xA4\xE1\x7F\0\x89\x90\xAC\xE1", 26);
	string mod_traod_p3_49("\x50\x90\x90\x90\x90\x90\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x64\xE1\x7F\0\x89\x90\x6C\xE1", 26);
	string mod_traod_p3_42("\x50\x90\x90\x90\x90\x90\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\x44\x5E\x7D\0\x89\x90\x4C\x5E", 26);
	string mod_traod_p3_39("\x50\x90\x90\x90\x90\x90\x83\xC4\x10\x33\xC0\xBA\xFF\xFF\xFF\xFF\x89\x90\xC4\xBA\x7C\0\x89\x90\xCC\xBA", 26);
	string mod_traod_52("\x51\x90\x90\x90\x90\x90\x83\xC4\x34\xB8\x84\x23\x8B\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\x14\x25", 26);
	string mod_traod_49("\x51\x90\x90\x90\x90\x90\x83\xC4\x34\xB8\xC4\x14\x8B\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\x54\x16", 26);
	string mod_traod_42("\x51\x90\x90\x90\x90\x90\x83\xC4\x34\xB8\x44\x48\x89\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\xD4\x49", 26);
	string mod_traod_39("\x51\x90\x90\x90\x90\x90\x83\xC4\x34\xB8\x44\xDC\x87\0\xC7\0\xFF\xFF\xFF\xFF\x83\xC0\x08\x3D\xD4\xDD", 26);

	size_t Position;
	bool FixedCameras_status = Detect_FixedCameras_status();
	if (FixedCameras_status)			// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
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