#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_SwimCameraCollisions_status()			// Restituisce vero se le collisioni della swim camera sono ignorate, falso se il codice è originale
{
	//////////////////		_Camera_OnInit		Stringhe originali
	string orig_traod_p4("\x83\xC4\x10\x85\xC0\x0F\x84\x35\x01\0\0\x0F\x28\x4E\x10\x8B\x0D", 17);
	string orig_traod_p3("\xC1\xFD\xFF\x83\xC4\x10\x85\xC0\x0F\x84\x35\x01\0\0\x8B\x0D", 16);
	string orig_traod_52("\x83\xC4\x1C\x85\xC0\x0F\x84\xA4\0\0\0\xA1\xDC\x08\x6A\0\x8D", 17);
	string orig_traod_49("\x83\xC4\x1C\x85\xC0\x0F\x84\xA4\0\0\0\xA1\x2C\xFC\x69\0\x8D", 17);
	string orig_traod_42("\x83\xC4\x1C\x85\xC0\x0F\x84\xA4\0\0\0\xA1\x1C\xEF\x67\0\x8D", 17);
	string orig_traod_39("\x83\xC4\x1C\x85\xC0\x0F\x84\x07\x01\0\0\xA1\x9C\xCA\x66\0\x8D", 17);

	size_t Position;
	if ((Position = EXEorig.find(orig_traod_p4)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_39)) != std::string::npos)
		return false;
	return true;			// Se non trova alcuna stringa originale significa che il file è modificato
}


void Change_SwimCameraCollisions_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4("\x83\xC4\x10\x85\xC0\x0F\x84\x35\x01\0\0\x0F\x28\x4E\x10\x8B\x0D", 17);
	string orig_traod_p3("\xC1\xFD\xFF\x83\xC4\x10\x85\xC0\x0F\x84\x35\x01\0\0\x8B\x0D", 16);
	string orig_traod_52("\x83\xC4\x1C\x85\xC0\x0F\x84\xA4\0\0\0\xA1\xDC\x08\x6A\0\x8D", 17);
	string orig_traod_49("\x83\xC4\x1C\x85\xC0\x0F\x84\xA4\0\0\0\xA1\x2C\xFC\x69\0\x8D", 17);
	string orig_traod_42("\x83\xC4\x1C\x85\xC0\x0F\x84\xA4\0\0\0\xA1\x1C\xEF\x67\0\x8D", 17);
	string orig_traod_39("\x83\xC4\x1C\x85\xC0\x0F\x84\x07\x01\0\0\xA1\x9C\xCA\x66\0\x8D", 17);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p4("\x83\xC4\x10\x85\xC0\xE9\x36\x01\0\0\x90\x0F\x28\x4E\x10\x8B\x0D", 17);
	string mod_traod_p3("\xC1\xFD\xFF\x83\xC4\x10\x85\xC0\xE9\x36\x01\0\0\x90\x8B\x0D", 16);
	string mod_traod_52("\x83\xC4\x1C\x85\xC0\xE9\xA5\0\0\0\x90\xA1\xDC\x08\x6A\0\x8D", 17);
	string mod_traod_49("\x83\xC4\x1C\x85\xC0\xE9\xA5\0\0\0\x90\xA1\x2C\xFC\x69\0\x8D", 17);
	string mod_traod_42("\x83\xC4\x1C\x85\xC0\xE9\xA5\0\0\0\x90\xA1\x1C\xEF\x67\0\x8D", 17);
	string mod_traod_39("\x83\xC4\x1C\x85\xC0\xE9\x08\x01\0\0\x90\xA1\x9C\xCA\x66\0\x8D", 17);

	size_t Position;
	bool SwimCameraCollisions_status = Detect_SwimCameraCollisions_status();
	if (SwimCameraCollisions_status)			// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(mod_traod_p4)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(mod_traod_p3)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3, Position);

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
		if ((Position = EXEorig.find(orig_traod_p3)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3, Position);

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