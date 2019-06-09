#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Lara_glasses_status()					// Restituisce vero se gli occhiali sono abilitati, falso se sono spenti
{
	size_t Position;
	string laraglasses = "LARA_GLASSES";
	if ((Position = EXEorig.find(laraglasses)) != std::string::npos)
		return false;
	else
		return true;
}


void Change_Lara_glasses_status()
{
	size_t Position;
	string temp;
	string laraglasses = "LARA_GLASSES";
	string traod_p3_p4 = "LARA_SILENCER_MAGVEGA_HOLSTER";       traod_p3_p4.push_back('\0');
	traod_p3_p4.push_back('\0');        traod_p3_p4.push_back('\0');        traod_p3_p4 += "LARA_SIGHT_MAGVEGA_HOLSTER";
	string traod = "LARA_RESPIRATOR";       traod.push_back('\0');      traod += "LARA_DIVINGMASK";
	traod.push_back('\0');      traod += "LARA_REBREATHER";     traod.push_back('\0');

	// Per disabilitare gli occhiali è necessario ripristinare "LARA_GLASSES". Per permettere il ripristino anche di exe non modificati con questo programma non
	// si va a cercare "KARA_GLASSES" ma la stringa immediatamente prima. Nei file TRAOD_P4 e P3 (tutte le versioni, anche le Sasho) la stringa che precede è
	// salvata in "traod_p3_p4", mentre nel file liscio TRAOD la stringa è diversa ed è salvata in "traod"

	if ((Position = EXEorig.find(laraglasses)) != std::string::npos)	// Se gli occhiali sono disabilitati si modifica LARA_GLASSES in KARA_GLASSES
		ChangeSTRINGValue("K", Position);				// Sostituisce L di Lara con K
	else																// Se gli occhiali sono abilitati
		if ((Position = EXEorig.find(traod_p3_p4)) != std::string::npos)		// Cerca la stringa "LARA_SILENCER_MAGVEGA_HOLSTER   LARA_SIGHT_MAGVEGA_HOLSTER"
			ChangeSTRINGValue("LARA_GLASSES", Position+60);
		else
			if ((Position = EXEorig.find(traod)) != std::string::npos)			// Cerca la stringa "LARA_RESPIRATOR LARA_DIVINGMASK LARA_REBREATHER "
				ChangeSTRINGValue("LARA_GLASSES", Position+48);
	}