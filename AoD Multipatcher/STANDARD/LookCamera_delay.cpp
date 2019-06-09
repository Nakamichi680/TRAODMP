#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_LookCamera_delay_status()				// Restituisce vero se il lag nella LookCamera è 0, falso se è 1Eh (originale)
{
	//////////////////		_Camera_EnterExitLookHandler		Stringhe originali
	string orig_traod_p4_52("\x89\x15\x38\x53\x7B\0\x83\xFA\x1E\x7F\x0E\xA1\x60\xE3\x6D", 15);
	string orig_traod_p4_49("\x89\x15\xF8\x42\x7B\0\x83\xFA\x1E\x7F\x0E\xA1\x20\xD3\x6D", 15);
	string orig_traod_p4_42("\x89\x15\xD8\xBF\x78\0\x83\xFA\x1E\x7F\x0E\xA1\xE0\x50\x6B", 15);
	string orig_traod_p4_39("\x89\x15\x98\x1C\x78\0\x83\xFA\x1E\x7F\x0E\xA1\xC0\xB0\x6A", 15);

	string orig_traod_p3_52("\x8B\x15\xF8\x39\x7A\0\x42\x83\xFA\x1E\x89\x15\xF8\x39\x7A", 15);
	string orig_traod_p3_49("\x8B\x15\xB8\x39\x7A\0\x42\x83\xFA\x1E\x89\x15\xB8\x39\x7A", 15);
	string orig_traod_p3_42("\x8B\x15\x98\xB6\x77\0\x42\x83\xFA\x1E\x89\x15\x98\xB6\x77", 15);
	string orig_traod_p3_39("\x8B\x15\x18\x13\x77\0\x42\x83\xFA\x1E\x89\x15\x18\x13\x77", 15);

	string orig_traod_52("\xA1\x08\xC3\x86\0\x40\x83\xF8\x1E\xA3\x08\xC3\x86", 13);
	string orig_traod_49("\xA1\x48\xB4\x86\0\x40\x83\xF8\x1E\xA3\x48\xB4\x86", 13);
	string orig_traod_42("\xA1\xC8\xE7\x84\0\x40\x83\xF8\x1E\xA3\xC8\xE7\x84", 13);
	string orig_traod_39("\xA1\xB8\x7B\x83\0\x40\x83\xF8\x1E\xA3\xB8\x7B\x83", 13);

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


void Change_LookCamera_delay_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4_52("\x89\x15\x38\x53\x7B\0\x83\xFA\x1E\x7F\x0E\xA1\x60\xE3\x6D", 15);
	string orig_traod_p4_49("\x89\x15\xF8\x42\x7B\0\x83\xFA\x1E\x7F\x0E\xA1\x20\xD3\x6D", 15);
	string orig_traod_p4_42("\x89\x15\xD8\xBF\x78\0\x83\xFA\x1E\x7F\x0E\xA1\xE0\x50\x6B", 15);
	string orig_traod_p4_39("\x89\x15\x98\x1C\x78\0\x83\xFA\x1E\x7F\x0E\xA1\xC0\xB0\x6A", 15);

	string orig_traod_p3_52("\x8B\x15\xF8\x39\x7A\0\x42\x83\xFA\x1E\x89\x15\xF8\x39\x7A", 15);
	string orig_traod_p3_49("\x8B\x15\xB8\x39\x7A\0\x42\x83\xFA\x1E\x89\x15\xB8\x39\x7A", 15);
	string orig_traod_p3_42("\x8B\x15\x98\xB6\x77\0\x42\x83\xFA\x1E\x89\x15\x98\xB6\x77", 15);
	string orig_traod_p3_39("\x8B\x15\x18\x13\x77\0\x42\x83\xFA\x1E\x89\x15\x18\x13\x77", 15);

	string orig_traod_52("\xA1\x08\xC3\x86\0\x40\x83\xF8\x1E\xA3\x08\xC3\x86", 13);
	string orig_traod_49("\xA1\x48\xB4\x86\0\x40\x83\xF8\x1E\xA3\x48\xB4\x86", 13);
	string orig_traod_42("\xA1\xC8\xE7\x84\0\x40\x83\xF8\x1E\xA3\xC8\xE7\x84", 13);
	string orig_traod_39("\xA1\xB8\x7B\x83\0\x40\x83\xF8\x1E\xA3\xB8\x7B\x83", 13);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p4_52("\x89\x15\x38\x53\x7B\0\x83\xFA\0\x7F\x0E\xA1\x60\xE3\x6D", 15);
	string mod_traod_p4_49("\x89\x15\xF8\x42\x7B\0\x83\xFA\0\x7F\x0E\xA1\x20\xD3\x6D", 15);
	string mod_traod_p4_42("\x89\x15\xD8\xBF\x78\0\x83\xFA\0\x7F\x0E\xA1\xE0\x50\x6B", 15);
	string mod_traod_p4_39("\x89\x15\x98\x1C\x78\0\x83\xFA\0\x7F\x0E\xA1\xC0\xB0\x6A", 15);

	string mod_traod_p3_52("\x8B\x15\xF8\x39\x7A\0\x42\x83\xFA\0\x89\x15\xF8\x39\x7A", 15);
	string mod_traod_p3_49("\x8B\x15\xB8\x39\x7A\0\x42\x83\xFA\0\x89\x15\xB8\x39\x7A", 15);
	string mod_traod_p3_42("\x8B\x15\x98\xB6\x77\0\x42\x83\xFA\0\x89\x15\x98\xB6\x77", 15);
	string mod_traod_p3_39("\x8B\x15\x18\x13\x77\0\x42\x83\xFA\0\x89\x15\x18\x13\x77", 15);

	string mod_traod_52("\xA1\x08\xC3\x86\0\x40\x83\xF8\0\xA3\x08\xC3\x86", 13);
	string mod_traod_49("\xA1\x48\xB4\x86\0\x40\x83\xF8\0\xA3\x48\xB4\x86", 13);
	string mod_traod_42("\xA1\xC8\xE7\x84\0\x40\x83\xF8\0\xA3\xC8\xE7\x84", 13);
	string mod_traod_39("\xA1\xB8\x7B\x83\0\x40\x83\xF8\0\xA3\xB8\x7B\x83", 13);

	size_t Position;
	bool LookCamera_delay_status = Detect_LookCamera_delay_status();
	if (LookCamera_delay_status)		// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
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