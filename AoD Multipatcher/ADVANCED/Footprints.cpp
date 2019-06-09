#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Footprints_status()						// Restituisce vero se il fix sperimentale delle orme è attivo, falso se è spento
{
	//////////////////		_fxHandleFootStep			Stringhe originali
	string orig_traod_p3_p4("\x85\xED\x0F\x84\x6D\x01\0\0\xC7\x84\x24\x20\x01\0\0\0\0\0\0\x8D\x84\x24\x20\x01\0\0\xC7\x84\x24\x24\x01\0\0\0\0\0\0\xC7\x84", 39);
	string orig_traod_p4("\x83\xFD\x01\x74\x77\x83\xFD\x02\x74\x66\x83\xFD\x03\x74\x55\xBA\x80\0\0\0\xB8\0\x04\0\0\x83\xFD\x04\x0F\x44\xC2\xBD\x80\0\0\0\xD9\x5C\x24\x04", 40);
	string orig_traod_p3("\x83\xFD\x01\x74\x77\x83\xFD\x02\x74\x66\x83\xFD\x03\x74\x55\xBA\x80\0\0\0\xB8\0\x04\0\0\x83\xFD\x04\xBD\x80\0\0\0\x0F\x44\xC2\x8D\x94\x24\xF0\0\0\0\x89\x14\x24\xD9\x5C\x24\x04", 50);
	string orig_traod_1("\x85\xFF\x0F\x84\x88\x01\0\0\x8D\x44\x24\x40\xC7\x44\x24\x40\0\0\0\0\x50\xC7\x44\x24\x48\0\0\0\0\xC7\x44\x24\x4C\0\0\0\0\xC7\x44\x24\x50\0\0\x80\x3F", 45);
	string orig_traod_2("\x83\xFF\x01\x75\x07\xB9\0\x02\0\0\xEB\x29\x83\xFF\x02\x75\x07\xB9\0\x01\0\0\xEB\x1D\x83\xFF\x03\x75\x09\xB9\x40\0\0\0\x8B\xD1\xEB\x14\x83\xFF\x04\xB9\x80\0\0\0\x74\x05\xB9\0\x04\0\0\xBA\x80\0\0\0\x8B\x74\x24\x08\x56", 63);

	size_t Position;
	if ((Position = EXEorig.find(orig_traod_p3_p4)) != std::string::npos || (Position = EXEorig.find(orig_traod_p4)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_1)) != std::string::npos ||	(Position = EXEorig.find(orig_traod_2)) != std::string::npos)
		return false;
	return true;			// Se non trova alcuna stringa originale significa che il file è modificato
}


void Change_Footprints_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p3_p4("\x85\xED\x0F\x84\x6D\x01\0\0\xC7\x84\x24\x20\x01\0\0\0\0\0\0\x8D\x84\x24\x20\x01\0\0\xC7\x84\x24\x24\x01\0\0\0\0\0\0\xC7\x84", 39);
	string orig_traod_p4("\x83\xFD\x01\x74\x77\x83\xFD\x02\x74\x66\x83\xFD\x03\x74\x55\xBA\x80\0\0\0\xB8\0\x04\0\0\x83\xFD\x04\x0F\x44\xC2\xBD\x80\0\0\0\xD9\x5C\x24\x04", 40);
	string orig_traod_p3("\x83\xFD\x01\x74\x77\x83\xFD\x02\x74\x66\x83\xFD\x03\x74\x55\xBA\x80\0\0\0\xB8\0\x04\0\0\x83\xFD\x04\xBD\x80\0\0\0\x0F\x44\xC2\x8D\x94\x24\xF0\0\0\0\x89\x14\x24\xD9\x5C\x24\x04", 50);
	string orig_traod_1("\x85\xFF\x0F\x84\x88\x01\0\0\x8D\x44\x24\x40\xC7\x44\x24\x40\0\0\0\0\x50\xC7\x44\x24\x48\0\0\0\0\xC7\x44\x24\x4C\0\0\0\0\xC7\x44\x24\x50\0\0\x80\x3F", 45);
	string orig_traod_2("\x83\xFF\x01\x75\x07\xB9\0\x02\0\0\xEB\x29\x83\xFF\x02\x75\x07\xB9\0\x01\0\0\xEB\x1D\x83\xFF\x03\x75\x09\xB9\x40\0\0\0\x8B\xD1\xEB\x14\x83\xFF\x04\xB9\x80\0\0\0\x74\x05\xB9\0\x04\0\0\xBA\x80\0\0\0\x8B\x74\x24\x08\x56", 63);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p3_p4("\x90\x90\x90\x90\x90\x90\x90\x90\xC7\x84\x24\x20\x01\0\0\0\0\0\0\x8D\x84\x24\x20\x01\0\0\xC7\x84\x24\x24\x01\0\0\0\0\0\0\xC7\x84", 39);
	string mod_traod_p4("\xB8\xC0\x03\0\0\xBD\xC0\0\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\xD9\x5C\x24\x04", 40);
	string mod_traod_p3("\xB8\xC0\x03\0\0\xBD\xC0\0\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x8D\x94\x24\xF0\0\0\0\x89\x14\x24\xD9\x5C\x24\x04", 50);
	string mod_traod_1("\x90\x90\x90\x90\x90\x90\x90\x90\x8D\x44\x24\x40\xC7\x44\x24\x40\0\0\0\0\x50\xC7\x44\x24\x48\0\0\0\0\xC7\x44\x24\x4C\0\0\0\0\xC7\x44\x24\x50\0\0\x80\x3F", 45);
	string mod_traod_2("\xB9\xC0\x03\0\0\xBA\xC0\0\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x8B\x74\x24\x08\x56", 63);

	size_t Position;
	bool Footprints_status = Detect_Footprints_status();
	if (Footprints_status)		// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(mod_traod_p4)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(mod_traod_p3)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3, Position);

		// PORZIONE COMUNE A TRAOD_P3 E TRAOD_P4
		if ((Position = EXEorig.find(mod_traod_p3_p4)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3_p4, Position);

		// TRAOD
		if ((Position = EXEorig.find(mod_traod_1)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_1, Position);
		if ((Position = EXEorig.find(mod_traod_2)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_2, Position);
	}
	else				// Altrimenti, se il file è originale si applicano le stringhe modificate
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(orig_traod_p4)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(orig_traod_p3)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3, Position);

		// PORZIONE COMUNE A TRAOD_P3 E TRAOD_P4
		if ((Position = EXEorig.find(orig_traod_p3_p4)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3_p4, Position);

		// TRAOD
		if ((Position = EXEorig.find(orig_traod_1)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_1, Position);
		if ((Position = EXEorig.find(orig_traod_2)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_2, Position);
	}
}