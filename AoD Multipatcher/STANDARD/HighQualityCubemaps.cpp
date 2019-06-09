#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_HighQualityCubemap_status()				// Restituisce vero se le cubemap sono migliorate, falso se sono quelle originali
{
	//////////////////		Draw_DrawEnvironmentCubeMaps		Stringhe originali
	string orig_traod_p4_52("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\x04\x57\xE8\x21\xBB\xFE\xFF\x83", 20);
	string orig_traod_p4_49("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\x04\x57\xE8\x21\xBB\xFE\xFF\x83", 20);
	string orig_traod_p4_42("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\x04\x57\xE8\x09\xC0\xFE\xFF\x83", 20);
	string orig_traod_p4_39("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\x04\x57\xE8\x09\xC0\xFE\xFF\x83", 20);
	string orig_traod_p3_52("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\x04\x57\xE8\x38\xBD\xFE\xFF\x83\xC4\x18\x68", 20);
	string orig_traod_p3_49("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\x04\x57\xE8\x38\xBD\xFE\xFF\x83\xC4\x18\x68", 20);
	string orig_traod_p3_42("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\x04\x57\xE8\x1C\xC2\xFE\xFF\x83\xC4\x18\x68", 20);
	string orig_traod_p3_39("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\x04\x57\xE8\x1C\xC2\xFE\xFF\x83\xC4\x18\x68", 20);
	string orig_traod_52("\x50\x51\x57\x56\x6A\x04\x52\xE8\x10\xDA\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);
	string orig_traod_49("\x50\x51\x57\x56\x6A\x04\x52\xE8\xC0\xD9\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);
	string orig_traod_42("\x50\x51\x57\x56\x6A\x04\x52\xE8\xD0\xDD\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);
	string orig_traod_39("\x50\x51\x57\x56\x6A\x04\x52\xE8\x20\xDE\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);

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


void Change_HighQualityCubemap_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4_52("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\x04\x57\xE8\x21\xBB\xFE\xFF\x83", 20);
	string orig_traod_p4_49("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\x04\x57\xE8\x21\xBB\xFE\xFF\x83", 20);
	string orig_traod_p4_42("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\x04\x57\xE8\x09\xC0\xFE\xFF\x83", 20);
	string orig_traod_p4_39("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\x04\x57\xE8\x09\xC0\xFE\xFF\x83", 20);
	string orig_traod_p3_52("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\x04\x57\xE8\x38\xBD\xFE\xFF\x83\xC4\x18\x68", 20);
	string orig_traod_p3_49("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\x04\x57\xE8\x38\xBD\xFE\xFF\x83\xC4\x18\x68", 20);
	string orig_traod_p3_42("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\x04\x57\xE8\x1C\xC2\xFE\xFF\x83\xC4\x18\x68", 20);
	string orig_traod_p3_39("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\x04\x57\xE8\x1C\xC2\xFE\xFF\x83\xC4\x18\x68", 20);
	string orig_traod_52("\x50\x51\x57\x56\x6A\x04\x52\xE8\x10\xDA\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);
	string orig_traod_49("\x50\x51\x57\x56\x6A\x04\x52\xE8\xC0\xD9\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);
	string orig_traod_42("\x50\x51\x57\x56\x6A\x04\x52\xE8\xD0\xDD\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);
	string orig_traod_39("\x50\x51\x57\x56\x6A\x04\x52\xE8\x20\xDE\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p4_52("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\0\x57\xE8\xA1\xBB\xFE\xFF\x83", 20);
	string mod_traod_p4_49("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\0\x57\xE8\xA1\xBB\xFE\xFF\x83", 20);
	string mod_traod_p4_42("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\0\x57\xE8\x89\xC0\xFE\xFF\x83", 20);
	string mod_traod_p4_39("\xD0\x8D\x95\x40\xFD\xFF\xFF\x50\x52\x51\x56\x6A\0\x57\xE8\x89\xC0\xFE\xFF\x83", 20);
	string mod_traod_p3_52("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\0\x57\xE8\xB8\xBD\xFE\xFF\x83\xC4\x18\x68", 20);
	string mod_traod_p3_49("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\0\x57\xE8\xB8\xBD\xFE\xFF\x83\xC4\x18\x68", 20);
	string mod_traod_p3_42("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\0\x57\xE8\x9C\xC2\xFE\xFF\x83\xC4\x18\x68", 20);
	string mod_traod_p3_39("\x08\x50\x8B\x7D\xD8\x52\x51\x56\x6A\0\x57\xE8\x9C\xC2\xFE\xFF\x83\xC4\x18\x68", 20);
	string mod_traod_52("\x50\x51\x57\x56\x6A\0\x52\xE8\xA0\xDA\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);
	string mod_traod_49("\x50\x51\x57\x56\x6A\0\x52\xE8\x50\xDA\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);
	string mod_traod_42("\x50\x51\x57\x56\x6A\0\x52\xE8\x60\xDE\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);
	string mod_traod_39("\x50\x51\x57\x56\x6A\0\x52\xE8\xB0\xDE\xFE\xFF\x83\xC4\x18\x8B\xCF\x68\0\xC0", 20);

	size_t Position;
	bool HighQualityCubemap_status = Detect_HighQualityCubemap_status();
	if (HighQualityCubemap_status)		// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
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