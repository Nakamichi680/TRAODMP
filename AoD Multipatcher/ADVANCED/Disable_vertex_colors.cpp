#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Disable_vertex_colors_status()			// Restituisce vero se la modifica � attivata, falso se il codice � originale
{
	size_t Position;
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4("\xF3\x0F\x59\xE8\xF3\x0F\x11\x6C\x32\x14\x0F\xB6\x5C\x28\x25\xC1\xE3\x10\x0F\xB6\x7C\x28\x26\x81\xCB\0\0\0\xFF\xC1\xE7\x08\x0B\xDF\x0F\xB6\x7C\x28\x27\x0B\xDF\x89\x5C\x32\x18", 45);
	string orig_traod_p3("\xF3\x0F\x59\xE8\xF3\x0F\x11\x6C\x32\x14\x0F\xB6\x5C\x28\x25\xC1\xE3\x10\x81\xCB\0\0\0\xFF\x0F\xB6\x7C\x28\x26\xC1\xE7\x08\x0B\xDF\x0F\xB6\x7C\x28\x27\x0B\xDF\x89\x5C\x32\x18", 45);
	string orig_traod("\xD9\x5A\x0C\x33\xC0\x33\xDB\x8A\x41\x25\x8A\x59\x26\x0D\0\xFF\xFF\xFF\xC1\xE0\x08\x0B\xC3\x33\xDB\x8A\x59\x27\xC1\xE0\x08\x0B\xC3\x89\x42\x10", 36);

	if ((Position = EXEorig.find(orig_traod_p4)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3)) != std::string::npos || (Position = EXEorig.find(orig_traod)) != std::string::npos)
		return false;
	return true;			// Se non trova alcuna stringa originale significa che il file � modificato
}


void Change_Disable_vertex_colors_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4("\xF3\x0F\x59\xE8\xF3\x0F\x11\x6C\x32\x14\x0F\xB6\x5C\x28\x25\xC1\xE3\x10\x0F\xB6\x7C\x28\x26\x81\xCB\0\0\0\xFF\xC1\xE7\x08\x0B\xDF\x0F\xB6\x7C\x28\x27\x0B\xDF\x89\x5C\x32\x18", 45);
	string orig_traod_p3("\xF3\x0F\x59\xE8\xF3\x0F\x11\x6C\x32\x14\x0F\xB6\x5C\x28\x25\xC1\xE3\x10\x81\xCB\0\0\0\xFF\x0F\xB6\x7C\x28\x26\xC1\xE7\x08\x0B\xDF\x0F\xB6\x7C\x28\x27\x0B\xDF\x89\x5C\x32\x18", 45);
	string orig_traod("\xD9\x5A\x0C\x33\xC0\x33\xDB\x8A\x41\x25\x8A\x59\x26\x0D\0\xFF\xFF\xFF\xC1\xE0\x08\x0B\xC3\x33\xDB\x8A\x59\x27\xC1\xE0\x08\x0B\xC3\x89\x42\x10", 36);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p4("\xF3\x0F\x59\xE8\xF3\x0F\x11\x6C\x32\x14\x31\xDB\x81\xC3\x80\x80\x80\xFF\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x89\x5C\x32\x18", 45);
	string mod_traod_p3("\x90\xF3\x0F\x59\xE8\xF3\x0F\x11\x6C\x32\x14\x31\xDB\x81\xC3\x80\x80\x80\xFF\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x89\x5C\x32\x18", 45);
	string mod_traod("\xD9\x5A\x0C\x33\xC0\x33\xDB\x05\x80\x80\x80\xFF\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x89\x42\x10", 36);

	size_t Position;
	bool Disable_vertex_colors_status = Detect_Disable_vertex_colors_status();
	if (Disable_vertex_colors_status)	// Se il file � modificato, bisogna cercare le stringhe mod e sostituirle con le originali
	{
		if ((Position = EXEorig.find(mod_traod_p4)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4, Position);
		if ((Position = EXEorig.find(mod_traod_p3)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3, Position);
		if ((Position = EXEorig.find(mod_traod)) != std::string::npos)
			ChangeSTRINGValue(orig_traod, Position);
	}
	else					// Se il file � originale bisogna applicare le stringhe modificate, controllando prima la versione 52/49/42/39
	{
		if ((Position = EXEorig.find(orig_traod_p4)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4, Position);
		if ((Position = EXEorig.find(orig_traod_p3)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3, Position);
		if ((Position = EXEorig.find(orig_traod)) != std::string::npos)
			ChangeSTRINGValue(mod_traod, Position);
	}    
}