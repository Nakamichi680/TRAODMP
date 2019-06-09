#include "stdafx.h"
#include "MISC/Misc_Functions.h"


int Detect_PAD_RemapButtons_status()				// Restituisce: 0 = Controlli originali, 1 = DirectInput 1, 2 = Xinput, 3 = DirectInput 2
{
	string orig("\x01\0\0\0\x18\0\0\0\x02\0\0\0\x01\0\0\0\x19\0\0\0\x02\x01\0\0\x01\0\0\0\x06\0\0\0\x04\0\0\0\x01\0\0\0\x08\0\0\0\x04\x01\0\0\x01\0\0\0\x09\0\0\0\x04\x02\0\0\x01\0\0\0\x07\0\0\0\x04\x03\0\0\0\0\0\0\x0B\0\0\0\x04\x04\0\0\0\0\0\0\x0E\0\0\0\x04\x05\0\0\0\0\0\0\x0A\0\0\0\x04\x06\0\0\0\0\0\0\x0D\0\0\0\x04\x07\0\0\0\0\0\0\x04\0\0\0\x04\x08\0\0\0\0\0\0\x0C\0\0\0\x04\x09\0\0\0\0\0\0\x0F\0\0\0\x04\x0A\0\0\0\0\0\0\x05\0\0\0\x04\x0B\0\0\0\0\0\0\0\0\0\0\x04\x0C\0\0\0\0\0\0\x03\0\0\0\x04\x0D\0\0\0\0\0\0\x01\0\0\0\x04\x0E\0\0\0\0\0\0\x02\0\0\0\x04\x0F\0\0", 216);
	string mod_DI1("\0\0\0\0\x18\0\0\0\x02\0\0\0\0\0\0\0\x19\0\0\0\x02\x01\0\0\0\0\0\0\x06\0\0\0\x04\x03\0\0\0\0\0\0\x08\0\0\0\x04\x02\0\0\0\0\0\0\x09\0\0\0\x04\x01\0\0\0\0\0\0\x07\0\0\0\x04\0\0\0\0\0\0\0\x0B\0\0\0\x04\x04\0\0\0\0\0\0\x0E\0\0\0\x04\x07\0\0\0\0\0\0\x0A\0\0\0\x04\x06\0\0\0\0\0\0\x0D\0\0\0\x04\x05\0\0\0\0\0\0\x04\0\0\0\x04\x08\0\0\0\0\0\0\x1A\0\0\0\x02\x02\0\0\0\0\0\0\x1B\0\0\0\x02\x05\0\0\0\0\0\0\x05\0\0\0\x04\x09\0\0\0\0\0\0\0\0\0\0\x04\x0A\0\0\0\0\0\0\x03\0\0\0\x04\x0D\0\0\0\0\0\0\x01\0\0\0\x04\x0B\0\0\0\0\0\0\x02\0\0\0\x04\x0F\0\0", 216);
	string mod_DI2("\0\0\0\0\x18\0\0\0\x02\0\0\0\0\0\0\0\x19\0\0\0\x02\x01\0\0\0\0\0\0\x06\0\0\0\x04\0\0\0\0\0\0\0\x08\0\0\0\x04\x01\0\0\0\0\0\0\x09\0\0\0\x04\x02\0\0\0\0\0\0\x07\0\0\0\x04\x03\0\0\0\0\0\0\x0B\0\0\0\x04\x04\0\0\0\0\0\0\x0E\0\0\0\x04\x07\0\0\0\0\0\0\x0A\0\0\0\x04\x06\0\0\0\0\0\0\x0D\0\0\0\x04\x05\0\0\0\0\0\0\x04\0\0\0\x04\x08\0\0\0\0\0\0\x1A\0\0\0\x02\x02\0\0\0\0\0\0\x1B\0\0\0\x02\x05\0\0\0\0\0\0\x05\0\0\0\x04\x09\0\0\0\0\0\0\0\0\0\0\x04\x0A\0\0\0\0\0\0\x03\0\0\0\x04\x0D\0\0\0\0\0\0\x01\0\0\0\x04\x0B\0\0\0\0\0\0\x02\0\0\0\x04\x0F\0\0", 216);
	string mod_XI("\0\0\0\0\x18\0\0\0\x02\0\0\0\0\0\0\0\x19\0\0\0\x02\x01\0\0\0\0\0\0\x06\0\0\0\x04\x03\0\0\0\0\0\0\x08\0\0\0\x04\x01\0\0\0\0\0\0\x09\0\0\0\x04\0\0\0\0\0\0\0\x07\0\0\0\x04\x02\0\0\0\0\0\0\x0B\0\0\0\x04\x08\0\0\0\0\0\0\x0E\0\0\0\x04\x05\0\0\0\0\0\0\x0A\0\0\0\x04\x04\0\0\0\0\0\0\x0D\0\0\0\x04\x09\0\0\0\0\0\0\x04\0\0\0\x04\x06\0\0\0\0\0\0\x1A\0\0\0\x02\x03\0\0\0\0\0\0\x1B\0\0\0\x02\x04\0\0\0\0\0\0\x05\0\0\0\x04\x07\0\0\0\0\0\0\0\0\0\0\x04\x0A\0\0\0\0\0\0\x03\0\0\0\x04\x0D\0\0\0\0\0\0\x01\0\0\0\x04\x0B\0\0\0\0\0\0\x02\0\0\0\x04\x0F\0\0", 216);

	size_t Position;
	if (Position = EXEorig.find(orig) != std::string::npos)			// Mapping dei tasti del controller originale
		return 0;
	if (Position = EXEorig.find(mod_DI1) != std::string::npos)		// Mapping custom per PAD DirectInput 1
		return 1;
	if (Position = EXEorig.find(mod_XI) != std::string::npos)		// Mapping custom per PAD Xinput (ad es. controller Xbox One/360)
		return 2;
	if (Position = EXEorig.find(mod_DI2) != std::string::npos)		// Mapping custom per PAD DirectInput 2
		return 3;
	return 0;			// Se non trova alcuna stringa allora fa finta che sia originale
}


void Change_PAD_RemapButtons_status(int ControlsType)		// Questa funzione rimappa i tasti del gamepad, 4 opzioni (Originale, DirectInput, Xinput)
{
	/////////////////////////////	STRINGA ORIGINALE (UGUALE IN TUTTI GLI EXE)
	string orig("\x01\0\0\0\x18\0\0\0\x02\0\0\0\x01\0\0\0\x19\0\0\0\x02\x01\0\0\x01\0\0\0\x06\0\0\0\x04\0\0\0\x01\0\0\0\x08\0\0\0\x04\x01\0\0\x01\0\0\0\x09\0\0\0\x04\x02\0\0\x01\0\0\0\x07\0\0\0\x04\x03\0\0\0\0\0\0\x0B\0\0\0\x04\x04\0\0\0\0\0\0\x0E\0\0\0\x04\x05\0\0\0\0\0\0\x0A\0\0\0\x04\x06\0\0\0\0\0\0\x0D\0\0\0\x04\x07\0\0\0\0\0\0\x04\0\0\0\x04\x08\0\0\0\0\0\0\x0C\0\0\0\x04\x09\0\0\0\0\0\0\x0F\0\0\0\x04\x0A\0\0\0\0\0\0\x05\0\0\0\x04\x0B\0\0\0\0\0\0\0\0\0\0\x04\x0C\0\0\0\0\0\0\x03\0\0\0\x04\x0D\0\0\0\0\0\0\x01\0\0\0\x04\x0E\0\0\0\0\0\0\x02\0\0\0\x04\x0F\0\0", 216);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_DI1("\0\0\0\0\x18\0\0\0\x02\0\0\0\0\0\0\0\x19\0\0\0\x02\x01\0\0\0\0\0\0\x06\0\0\0\x04\x03\0\0\0\0\0\0\x08\0\0\0\x04\x02\0\0\0\0\0\0\x09\0\0\0\x04\x01\0\0\0\0\0\0\x07\0\0\0\x04\0\0\0\0\0\0\0\x0B\0\0\0\x04\x04\0\0\0\0\0\0\x0E\0\0\0\x04\x07\0\0\0\0\0\0\x0A\0\0\0\x04\x06\0\0\0\0\0\0\x0D\0\0\0\x04\x05\0\0\0\0\0\0\x04\0\0\0\x04\x08\0\0\0\0\0\0\x1A\0\0\0\x02\x02\0\0\0\0\0\0\x1B\0\0\0\x02\x05\0\0\0\0\0\0\x05\0\0\0\x04\x09\0\0\0\0\0\0\0\0\0\0\x04\x0A\0\0\0\0\0\0\x03\0\0\0\x04\x0D\0\0\0\0\0\0\x01\0\0\0\x04\x0B\0\0\0\0\0\0\x02\0\0\0\x04\x0F\0\0", 216);
	string mod_DI2("\0\0\0\0\x18\0\0\0\x02\0\0\0\0\0\0\0\x19\0\0\0\x02\x01\0\0\0\0\0\0\x06\0\0\0\x04\0\0\0\0\0\0\0\x08\0\0\0\x04\x01\0\0\0\0\0\0\x09\0\0\0\x04\x02\0\0\0\0\0\0\x07\0\0\0\x04\x03\0\0\0\0\0\0\x0B\0\0\0\x04\x04\0\0\0\0\0\0\x0E\0\0\0\x04\x07\0\0\0\0\0\0\x0A\0\0\0\x04\x06\0\0\0\0\0\0\x0D\0\0\0\x04\x05\0\0\0\0\0\0\x04\0\0\0\x04\x08\0\0\0\0\0\0\x1A\0\0\0\x02\x02\0\0\0\0\0\0\x1B\0\0\0\x02\x05\0\0\0\0\0\0\x05\0\0\0\x04\x09\0\0\0\0\0\0\0\0\0\0\x04\x0A\0\0\0\0\0\0\x03\0\0\0\x04\x0D\0\0\0\0\0\0\x01\0\0\0\x04\x0B\0\0\0\0\0\0\x02\0\0\0\x04\x0F\0\0", 216);
	string mod_XI("\0\0\0\0\x18\0\0\0\x02\0\0\0\0\0\0\0\x19\0\0\0\x02\x01\0\0\0\0\0\0\x06\0\0\0\x04\x03\0\0\0\0\0\0\x08\0\0\0\x04\x01\0\0\0\0\0\0\x09\0\0\0\x04\0\0\0\0\0\0\0\x07\0\0\0\x04\x02\0\0\0\0\0\0\x0B\0\0\0\x04\x08\0\0\0\0\0\0\x0E\0\0\0\x04\x05\0\0\0\0\0\0\x0A\0\0\0\x04\x04\0\0\0\0\0\0\x0D\0\0\0\x04\x09\0\0\0\0\0\0\x04\0\0\0\x04\x06\0\0\0\0\0\0\x1A\0\0\0\x02\x03\0\0\0\0\0\0\x1B\0\0\0\x02\x04\0\0\0\0\0\0\x05\0\0\0\x04\x07\0\0\0\0\0\0\0\0\0\0\x04\x0A\0\0\0\0\0\0\x03\0\0\0\x04\x0D\0\0\0\0\0\0\x01\0\0\0\x04\x0B\0\0\0\0\0\0\x02\0\0\0\x04\x0F\0\0", 216);

	size_t Position;
	string newstring;

	switch(ControlsType)				// Questo switch/case seleziona la stringa che verrà applicata in base all'input dell'utente (ControlsType)
	{
	case 0:
		newstring = orig;
		break;
	case 1:
		newstring = mod_DI1;
		break;
	case 2:
		newstring = mod_XI;
		break;
	case 3:
		newstring = mod_DI2;
	}

	switch(Detect_PAD_RemapButtons_status())		// Questo switch/case serve a capire quale stringa da sovrascrivere vada cercata
	{
	case 0:
		if ((Position = EXEorig.find(orig)) != std::string::npos)
			ChangeSTRINGValue(newstring, Position);
		break;
	case 1:
		if ((Position = EXEorig.find(mod_DI1)) != std::string::npos)
			ChangeSTRINGValue(newstring, Position);
		break;
	case 2:
		if ((Position = EXEorig.find(mod_XI)) != std::string::npos)
			ChangeSTRINGValue(newstring, Position);
		break;
	case 3:
		if ((Position = EXEorig.find(mod_DI2)) != std::string::npos)
			ChangeSTRINGValue(newstring, Position);
	}
}