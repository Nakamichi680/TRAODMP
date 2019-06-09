#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_ESC_SKIP_Cutscene_status()				// Restituisce vero se la modifica è attiva (la cutscene termina solo con ESC)
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4("\xA9\0\x08\0\x80\x75\x10\xA1", 8);
	string orig_traod_p3_52("\xF7\x05\x44\xA1\x92\0\0\x08\0\x80\x75\x10", 12);
	string orig_traod_p3_49("\xF7\x05\x04\xA1\x92\0\0\x08\0\x80\x75\x10", 12);
	string orig_traod_p3_42("\xF7\x05\x64\x1B\x90\0\0\x08\0\x80\x75\x10", 12);
	string orig_traod_p3_39("\xF7\x05\xE4\x77\x8F\0\0\x08\0\x80\x75\x10", 12);
	string orig_traod_52("\xF7\x05\x0C\x22\x6C\0\0\x08\0\x80\x75\x12", 12);
	string orig_traod_49("\xF7\x05\x4C\x13\x6C\0\0\x08\0\x80\x75\x12", 12);
	string orig_traod_42("\xF7\x05\xDC\x49\x6A\0\0\x08\0\x80\x75\x12", 12);
	string orig_traod_39("\xF7\x05\x0C\xE1\x68\0\0\x08\0\x80\x75\x12", 12);
	
	size_t Position;
	if ((Position = EXEorig.find(orig_traod_p4)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_52)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_49)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_42)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_39)) != std::string::npos ||	(Position = EXEorig.find(orig_traod_52)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_49)) != std::string::npos || (Position = EXEorig.find(orig_traod_42)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_39)) != std::string::npos)
		return false;
	return true;			// Se non trova alcuna stringa originale significa che il file è modificato
}


void Change_ESC_SKIP_Cutscene_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4("\xA9\0\x08\0\x80\x75\x10\xA1", 8);
	string orig_traod_p3_52("\xF7\x05\x44\xA1\x92\0\0\x08\0\x80\x75\x10", 12);
	string orig_traod_p3_49("\xF7\x05\x04\xA1\x92\0\0\x08\0\x80\x75\x10", 12);
	string orig_traod_p3_42("\xF7\x05\x64\x1B\x90\0\0\x08\0\x80\x75\x10", 12);
	string orig_traod_p3_39("\xF7\x05\xE4\x77\x8F\0\0\x08\0\x80\x75\x10", 12);
	string orig_traod_52("\xF7\x05\x0C\x22\x6C\0\0\x08\0\x80\x75\x12", 12);
	string orig_traod_49("\xF7\x05\x4C\x13\x6C\0\0\x08\0\x80\x75\x12", 12);
	string orig_traod_42("\xF7\x05\xDC\x49\x6A\0\0\x08\0\x80\x75\x12", 12);
	string orig_traod_39("\xF7\x05\x0C\xE1\x68\0\0\x08\0\x80\x75\x12", 12);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p4("\x3D\0\x08\x08\x80\x74\x10\xA1", 8);
	string mod_traod_p3_52("\x81\x3D\x44\xA1\x92\0\0\x08\x08\x80\x74\x10", 12);
	string mod_traod_p3_49("\x81\x3D\x04\xA1\x92\0\0\x08\x08\x80\x74\x10", 12);
	string mod_traod_p3_42("\x81\x3D\x64\x1B\x90\0\0\x08\x08\x80\x74\x10", 12);
	string mod_traod_p3_39("\x81\x3D\xE4\x77\x8F\0\0\x08\x08\x80\x74\x10", 12);
	string mod_traod_52("\x81\x3D\x0C\x22\x6C\0\0\x08\x08\x80\x74\x12", 12);
	string mod_traod_49("\x81\x3D\x4C\x13\x6C\0\0\x08\x08\x80\x74\x12", 12);
	string mod_traod_42("\x81\x3D\xDC\x49\x6A\0\0\x08\x08\x80\x74\x12", 12);
	string mod_traod_39("\x81\x3D\x0C\xE1\x68\0\0\x08\x08\x80\x74\x12", 12);

	size_t Position;
	bool CutsceneESC_status = Detect_ESC_SKIP_Cutscene_status();
	if (CutsceneESC_status)				// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(mod_traod_p4)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4, Position);

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
		if ((Position = EXEorig.find(orig_traod_p4)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4, Position);

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