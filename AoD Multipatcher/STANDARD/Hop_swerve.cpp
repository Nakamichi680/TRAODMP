#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Hop_swerve_status()						// Restituisce vero se il fix per il saltello storto è attivo, falso se l'exe è originale
{
	//////////////////		_playControl		Stringhe originali
	string orig_traod_p4("\x29\x74\x03\x0F\x28\xE3\xF3\x0F\x11\x64\x24\x58\xF6\xC2\x04\x75\x0A\xF3\x0F", 19);
	
	string orig_traod_p3_52("\xF3\x0F\x10\xC8\xF7\x05\x60\x8A\x7E\0\x04\0\0\0\xF3\x0F\x11\x4C\x24\x58\x75\x0A\xF3\x0F", 24);
	string orig_traod_p3_49("\xF3\x0F\x10\xC8\xF7\x05\x20\x8A\x7E\0\x04\0\0\0\xF3\x0F\x11\x4C\x24\x58\x75\x0A\xF3\x0F", 24);
	string orig_traod_p3_42("\xF3\x0F\x10\xC8\xF7\x05\0\x07\x7C\0\x04\0\0\0\xF3\x0F\x11\x4C\x24\x58\x75\x0A\xF3\x0F", 24);
	string orig_traod_p3_39("\xF3\x0F\x10\xC8\xF7\x05\x80\x63\x7B\0\x04\0\0\0\xF3\x0F\x11\x4C\x24\x58\x75\x0A\xF3\x0F", 24);

	string orig_traod_52("\xC7\x44\x24\x0C\0\0\x20\x41\xF6\x05\x60\x21\x8B\0\x04\x74\x1F\x8B\x57\x48\x8B\x0D\x74\x21", 24);
	string orig_traod_49("\xC7\x44\x24\x0C\0\0\x20\x41\xF6\x05\xA0\x12\x8B\0\x04\x74\x1F\x8B\x57\x48\x8B\x0D\xB4\x12", 24);
	string orig_traod_42("\xC7\x44\x24\x0C\0\0\x20\x41\xF6\x05\x20\x46\x89\0\x04\x74\x1F\x8B\x57\x48\x8B\x0D\x34\x46", 24);
	string orig_traod_39("\xC7\x44\x24\x0C\0\0\x20\x41\xF6\x05\x20\xDA\x87\0\x04\x74\x1F\x8B\x57\x48\x8B\x0D\x34\xDA", 24);

	size_t Position;
	if ((Position = EXEorig.find(orig_traod_p4)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_52)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_49)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_42)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_39)) != std::string::npos || (Position = EXEorig.find(orig_traod_52)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_49)) != std::string::npos || (Position = EXEorig.find(orig_traod_42)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_39)) != std::string::npos)
		return false;
	return true;			// Se non trova alcuna stringa originale significa che il file è modificato
}


void Change_Hop_swerve_status()
{
	//////////////////		_playControl		Stringhe originali
	string orig_traod_p4("\x29\x74\x03\x0F\x28\xE3\xF3\x0F\x11\x64\x24\x58\xF6\xC2\x04\x75\x0A\xF3\x0F", 19);

	string orig_traod_p3_52("\xF3\x0F\x10\xC8\xF7\x05\x60\x8A\x7E\0\x04\0\0\0\xF3\x0F\x11\x4C\x24\x58\x75\x0A\xF3\x0F", 24);
	string orig_traod_p3_49("\xF3\x0F\x10\xC8\xF7\x05\x20\x8A\x7E\0\x04\0\0\0\xF3\x0F\x11\x4C\x24\x58\x75\x0A\xF3\x0F", 24);
	string orig_traod_p3_42("\xF3\x0F\x10\xC8\xF7\x05\0\x07\x7C\0\x04\0\0\0\xF3\x0F\x11\x4C\x24\x58\x75\x0A\xF3\x0F", 24);
	string orig_traod_p3_39("\xF3\x0F\x10\xC8\xF7\x05\x80\x63\x7B\0\x04\0\0\0\xF3\x0F\x11\x4C\x24\x58\x75\x0A\xF3\x0F", 24);

	string orig_traod_52("\xC7\x44\x24\x0C\0\0\x20\x41\xF6\x05\x60\x21\x8B\0\x04\x74\x1F\x8B\x57\x48\x8B\x0D\x74\x21", 24);
	string orig_traod_49("\xC7\x44\x24\x0C\0\0\x20\x41\xF6\x05\xA0\x12\x8B\0\x04\x74\x1F\x8B\x57\x48\x8B\x0D\xB4\x12", 24);
	string orig_traod_42("\xC7\x44\x24\x0C\0\0\x20\x41\xF6\x05\x20\x46\x89\0\x04\x74\x1F\x8B\x57\x48\x8B\x0D\x34\x46", 24);
	string orig_traod_39("\xC7\x44\x24\x0C\0\0\x20\x41\xF6\x05\x20\xDA\x87\0\x04\x74\x1F\x8B\x57\x48\x8B\x0D\x34\xDA", 24);


	//////////////////		_playControl		Stringhe modificate
	string mod_traod_p4("\x29\x74\x03\x0F\x28\xE3\xF3\x0F\x11\x64\x24\x58\x80\xFA\x0C\x74\x0A\xF3\x0F", 19);

	string mod_traod_p3_52("\xF3\x0F\x10\xC8\x81\x3D\x60\x8A\x7E\0\x0C\0\0\0\xF3\x0F\x11\x4C\x24\x58\x74\x0A\xF3\x0F", 24);
	string mod_traod_p3_49("\xF3\x0F\x10\xC8\x81\x3D\x20\x8A\x7E\0\x0C\0\0\0\xF3\x0F\x11\x4C\x24\x58\x74\x0A\xF3\x0F", 24);
	string mod_traod_p3_42("\xF3\x0F\x10\xC8\x81\x3D\0\x07\x7C\0\x0C\0\0\0\xF3\x0F\x11\x4C\x24\x58\x74\x0A\xF3\x0F", 24);
	string mod_traod_p3_39("\xF3\x0F\x10\xC8\x81\x3D\x80\x63\x7B\0\x0C\0\0\0\xF3\x0F\x11\x4C\x24\x58\x74\x0A\xF3\x0F", 24);

	string mod_traod_52("\xC7\x44\x24\x0C\0\0\x20\x41\x80\x3D\x60\x21\x8B\0\x0C\x75\x1F\x8B\x57\x48\x8B\x0D\x74\x21", 24);
	string mod_traod_49("\xC7\x44\x24\x0C\0\0\x20\x41\x80\x3D\xA0\x12\x8B\0\x0C\x75\x1F\x8B\x57\x48\x8B\x0D\xB4\x12", 24);
	string mod_traod_42("\xC7\x44\x24\x0C\0\0\x20\x41\x80\x3D\x20\x46\x89\0\x0C\x75\x1F\x8B\x57\x48\x8B\x0D\x34\x46", 24);
	string mod_traod_39("\xC7\x44\x24\x0C\0\0\x20\x41\x80\x3D\x20\xDA\x87\0\x0C\x75\x1F\x8B\x57\x48\x8B\x0D\x34\xDA", 24);
	
	size_t Position;
	bool Hop_swerve_status = Detect_Hop_swerve_status();
	if (Hop_swerve_status)				// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
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