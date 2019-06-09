#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_OutputDebugString_status()				// Restituisce vero se la modifica è attiva (il gioco scrive tutte le stringhe di debug)
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_dbgLog_traod_p3_p4("\x83\xF8\x01\x74\x08\x81\xC4\0\x04\0\0\x5F\xC3\x8D\x84\x24\x14\x04", 18);
	string orig_dbgLog_traod("\x8B\x44\x24\x04\x81\xEC\0\x04\0\0\x83\xF8\x01\x75\x3F\x8B\x8C\x24\x0C\x04", 20);
	string orig_a_dbgLog_traod_p3_p4("\x45\x08\x84\xC0\x74\x56\x8D\x45\x10\x89\x45\xFC\x83\xC4\xF4\xC7\x04\x24", 18);
	string orig_a_dbgLog_traod("\x74\x3F\x8D\x4D\x10\x89\x4D\xFC\x8B\x55\xFC\x52\x8B\x45\x0C\x50\x68", 17);
	size_t Position;
	if ((Position = EXEorig.find(orig_dbgLog_traod_p3_p4)) != std::string::npos || (Position = EXEorig.find(orig_dbgLog_traod)) != std::string::npos ||
		(Position = EXEorig.find(orig_a_dbgLog_traod_p3_p4)) != std::string::npos || (Position = EXEorig.find(orig_a_dbgLog_traod)) != std::string::npos)
		return false;
	return true;			// Se non trova alcuna stringa originale significa che il file è modificato
}


void Change_OutputDebugString_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_dbgLog_traod_p3_p4("\x83\xF8\x01\x74\x08\x81\xC4\0\x04\0\0\x5F\xC3\x8D\x84\x24\x14\x04", 18);
	string orig_dbgLog_traod("\x8B\x44\x24\x04\x81\xEC\0\x04\0\0\x83\xF8\x01\x75\x3F\x8B\x8C\x24\x0C\x04", 20);
	string orig_a_dbgLog_traod_p3_p4("\x45\x08\x84\xC0\x74\x56\x8D\x45\x10\x89\x45\xFC\x83\xC4\xF4\xC7\x04\x24", 18);
	string orig_a_dbgLog_traod("\x74\x3F\x8D\x4D\x10\x89\x4D\xFC\x8B\x55\xFC\x52\x8B\x45\x0C\x50\x68", 17);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_dbgLog_traod_p3_p4("\x83\xF8\x01\xEB\x08\x81\xC4\0\x04\0\0\x5F\xC3\x8D\x84\x24\x14\x04", 18);
	string mod_dbgLog_traod("\x8B\x44\x24\x04\x81\xEC\0\x04\0\0\x83\xF8\x01\x90\x90\x8B\x8C\x24\x0C\x04", 20);
	string mod_a_dbgLog_traod_p3_p4("\x45\x08\x84\xC0\x90\x90\x8D\x45\x10\x89\x45\xFC\x83\xC4\xF4\xC7\x04\x24", 18);
	string mod_a_dbgLog_traod("\x90\x90\x8D\x4D\x10\x89\x4D\xFC\x8B\x55\xFC\x52\x8B\x45\x0C\x50\x68", 17);

	size_t Position;
	bool OutputDebugString_status = Detect_OutputDebugString_status();
	if (OutputDebugString_status)				// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
	{
		// TRAOD_P4/P3 dbgLog
		if ((Position = EXEorig.find(mod_dbgLog_traod_p3_p4)) != std::string::npos)
			ChangeSTRINGValue(orig_dbgLog_traod_p3_p4, Position);

		// TRAOD dbgLog
		if ((Position = EXEorig.find(mod_dbgLog_traod)) != std::string::npos)
			ChangeSTRINGValue(orig_dbgLog_traod, Position);

		// TRAOD_P4/P3 a_dbgLog
		if ((Position = EXEorig.find(mod_a_dbgLog_traod_p3_p4)) != std::string::npos)
			ChangeSTRINGValue(orig_a_dbgLog_traod_p3_p4, Position);

		// TRAOD a_dbgLog
		if ((Position = EXEorig.find(mod_a_dbgLog_traod)) != std::string::npos)
			ChangeSTRINGValue(orig_a_dbgLog_traod, Position);
	}
	else										// Altrimenti, se il file è originale si applicano le stringhe modificate
	{
		// TRAOD_P4/P3 dbgLog
		if ((Position = EXEorig.find(orig_dbgLog_traod_p3_p4)) != std::string::npos)
			ChangeSTRINGValue(mod_dbgLog_traod_p3_p4, Position);

		// TRAOD dbgLog
		if ((Position = EXEorig.find(orig_dbgLog_traod)) != std::string::npos)
			ChangeSTRINGValue(mod_dbgLog_traod, Position);

		// TRAOD_P4/P3 a_dbgLog
		if ((Position = EXEorig.find(orig_a_dbgLog_traod_p3_p4)) != std::string::npos)
			ChangeSTRINGValue(mod_a_dbgLog_traod_p3_p4, Position);

		// TRAOD a_dbgLog
		if ((Position = EXEorig.find(orig_a_dbgLog_traod)) != std::string::npos)
			ChangeSTRINGValue(mod_a_dbgLog_traod, Position);
	}
}