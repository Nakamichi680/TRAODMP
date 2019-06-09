#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Dead_bodies_status()					// Restituisce vero se i corpi non scompaiono, falso se scompaiono (default del gioco)
{
	size_t Position;

	// Stringhe originali con valori -480 e -300. Le stringhe partono 16 bytes prima dei due valori
	string Bodies_timeout_traod("\0\0\x07\x43\0\0\x34\xC2\0\0\0\xC4\x08\x57\xC3\x4D\0\0\xF0\xC3\0\0\x96\xC3", 24);
	string Bodies_timeout_traod_p3_p4("\0\0\0\0\0\0\x80\x44\0\0\x80\xC4\x08\x57\xC3\x4D\0\0\xF0\xC3\0\0\x96\xC3", 24);

	if ((Position = EXEorig.find(Bodies_timeout_traod)) != std::string::npos || (Position = EXEorig.find(Bodies_timeout_traod_p3_p4)) != std::string::npos)
		return false;
	return true;
}


void Change_Dead_bodies_status()
{
	size_t Position;
	
	//////////////// STRINGHE ORIGINALI PER TRAOD E TRAOD_P3/P4
	string Bodies_timeout_traod("\0\0\x07\x43\0\0\x34\xC2\0\0\0\xC4\x08\x57\xC3\x4D\0\0\xF0\xC3\0\0\x96\xC3", 24);
	string Bodies_timeout_traod_p3_p4("\0\0\0\0\0\0\x80\x44\0\0\x80\xC4\x08\x57\xC3\x4D\0\0\xF0\xC3\0\0\x96\xC3", 24);

	//////////////// STRINGHE MODIFICATE PER TRAOD E TRAOD_P3/P4
	string Bodies_year_traod("\0\0\x07\x43\0\0\x34\xC2\0\0\0\xC4\x08\x57\xC3\x4D\0\0\xF0\xC3\x24\x90\xE1\xCE", 24);
	string Bodies_year_traod_p3_p4("\0\0\0\0\0\0\x80\x44\0\0\x80\xC4\x08\x57\xC3\x4D\0\0\xF0\xC3\x24\x90\xE1\xCE", 24);		

	if ((Position = EXEorig.find(Bodies_timeout_traod)) != std::string::npos)		// TRAOD: se trova la stringa originale applica quella modificata 1 anno
	{
		ChangeSTRINGValue(Bodies_year_traod, Position);
		return;
	}
	if ((Position = EXEorig.find(Bodies_timeout_traod_p3_p4)) != std::string::npos)	// TRAOD_P3/P4: se trova la stringa originale applica quella modificata 1 anno
	{
		ChangeSTRINGValue(Bodies_year_traod_p3_p4, Position);
		return;
	}
	if ((Position = EXEorig.find(Bodies_year_traod)) != std::string::npos)			// TRAOD: se trova la stringa modificata 1 anno applica quella originale
	{
		ChangeSTRINGValue(Bodies_timeout_traod, Position);
		return;
	}
	if ((Position = EXEorig.find(Bodies_year_traod_p3_p4)) != std::string::npos)	// TRAOD_P3/P4: se trova la stringa modificata 1 anno applica quella originale
	{
		ChangeSTRINGValue(Bodies_timeout_traod_p3_p4, Position);
		return;
	}
}