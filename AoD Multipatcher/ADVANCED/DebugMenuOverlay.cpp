#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_DebugMenuOverlay_status()				// Restituisce vero se il menu di debug è attivabile con F2, falso se è spento
{
	//////////////////		SYS_WINDOW::HandleWM_KEYDOWN		Stringhe originali
	string orig_traod_p4_52("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\x71\x6A\xFA\xFF", 28);
	string orig_traod_p4_49("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\x99\x66\xFA\xFF", 28);
	string orig_traod_p4_42("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\x85\x9E\x11\0", 28);
	string orig_traod_p4_39("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\xB5\x81\xFA\xFF", 28);
	string orig_traod_p3_52("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\x34\x7E\xFA\xFF", 28);
	string orig_traod_p3_49("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\xC8\x77\xFA\xFF", 28);
	string orig_traod_p3_42("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\xA4\x80\x11\0", 28);
	string orig_traod_p3_39("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\xEC\x92\xFA\xFF", 28);
	string orig_traod_52("\x8B\x4E\x1C\x3B\xCB\x0F\x84\xE8\xFE\xFF\xFF\x8B\x76\x14\x3B\xF3\x0F\x84\xDD\xFE\xFF\xFF\x8B\x46\x24\x50\xE8\x52\x9D\x0F\0", 31);
	string orig_traod_49("\x8B\x4E\x1C\x3B\xCB\x0F\x84\xE8\xFE\xFF\xFF\x8B\x76\x14\x3B\xF3\x0F\x84\xDD\xFE\xFF\xFF\x8B\x46\x24\x50\xE8\x02\x48\xFB\xFF", 31);
	string orig_traod_42("\x8B\x4E\x1C\x3B\xCB\x0F\x84\xE8\xFE\xFF\xFF\x8B\x76\x14\x3B\xF3\x0F\x84\xDD\xFE\xFF\xFF\x8B\x46\x24\x50\xE8\x52\x5C\xFB\xFF", 31);
	string orig_traod_39("\x8B\x4E\x1C\x3B\xCB\x0F\x84\xE8\xFE\xFF\xFF\x8B\x76\x14\x3B\xF3\x0F\x84\xDD\xFE\xFF\xFF\x8B\x46\x24\x50\xE8\x92\x5D\xFB\xFF", 31);

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


void Change_DebugMenuOverlay_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4_52("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\x71\x6A\xFA\xFF", 28);
	string orig_traod_p4_49("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\x99\x66\xFA\xFF", 28);
	string orig_traod_p4_42("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\x85\x9E\x11\0", 28);
	string orig_traod_p4_39("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\xB5\x81\xFA\xFF", 28);
	string orig_traod_p3_52("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\x34\x7E\xFA\xFF", 28);
	string orig_traod_p3_49("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\xC8\x77\xFA\xFF", 28);
	string orig_traod_p3_42("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\xA4\x80\x11\0", 28);
	string orig_traod_p3_39("\x8B\x53\x1C\x85\xD2\x0F\x84\x7C\0\0\0\x8B\x43\x14\x85\xC0\x74\x75\xFF\x70\x24\x8B\xCA\xE8\xEC\x92\xFA\xFF", 28);
	string orig_traod_52("\x8B\x4E\x1C\x3B\xCB\x0F\x84\xE8\xFE\xFF\xFF\x8B\x76\x14\x3B\xF3\x0F\x84\xDD\xFE\xFF\xFF\x8B\x46\x24\x50\xE8\x52\x9D\x0F\0", 31);
	string orig_traod_49("\x8B\x4E\x1C\x3B\xCB\x0F\x84\xE8\xFE\xFF\xFF\x8B\x76\x14\x3B\xF3\x0F\x84\xDD\xFE\xFF\xFF\x8B\x46\x24\x50\xE8\x02\x48\xFB\xFF", 31);
	string orig_traod_42("\x8B\x4E\x1C\x3B\xCB\x0F\x84\xE8\xFE\xFF\xFF\x8B\x76\x14\x3B\xF3\x0F\x84\xDD\xFE\xFF\xFF\x8B\x46\x24\x50\xE8\x52\x5C\xFB\xFF", 31);
	string orig_traod_39("\x8B\x4E\x1C\x3B\xCB\x0F\x84\xE8\xFE\xFF\xFF\x8B\x76\x14\x3B\xF3\x0F\x84\xDD\xFE\xFF\xFF\x8B\x46\x24\x50\xE8\x92\x5D\xFB\xFF", 31);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p4_52("\xA0\x64\x6A\x7B\0\x34\x01\xA2\x64\x6A\x7B\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 28);
	string mod_traod_p4_49("\xA0\x24\x5A\x7B\0\x34\x01\xA2\x24\x5A\x7B\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 28);
	string mod_traod_p4_42("\xA0\x04\xD7\x78\0\x34\x01\xA2\x04\xD7\x78\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 28);
	string mod_traod_p4_39("\xA0\xC4\x33\x78\0\x34\x01\xA2\xC4\x33\x78\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 28);
	string mod_traod_p3_52("\xA0\x24\x51\x7A\0\x34\x01\xA2\x24\x51\x7A\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 28);
	string mod_traod_p3_49("\xA0\xE4\x50\x7A\0\x34\x01\xA2\xE4\x50\x7A\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 28);
	string mod_traod_p3_42("\xA0\xC4\xCD\x77\0\x34\x01\xA2\xC4\xCD\x77\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 28);
	string mod_traod_p3_39("\xA0\x44\x2A\x77\0\x34\x01\xA2\x44\x2A\x77\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 28);
	string mod_traod_52("\xA0\xEC\xE1\x86\0\x34\x01\xA2\xEC\xE1\x86\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 31);
	string mod_traod_49("\xA0\x2C\xD3\x86\0\x34\x01\xA2\x2C\xD3\x86\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 31);
	string mod_traod_42("\xA0\xAC\x06\x85\0\x34\x01\xA2\xAC\x06\x85\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 31);
	string mod_traod_39("\xA0\x9C\x9A\x83\0\x34\x01\xA2\x9C\x9A\x83\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 31);

	size_t Position;
	string temp;
	bool DebugMenuOverlay_status = Detect_DebugMenuOverlay_status();
	if (DebugMenuOverlay_status)		// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
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