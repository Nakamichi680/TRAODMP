#include "stdafx.h"


bool fxRainSlots_Detect()							// Ritorna vero se la modifica � attiva
{
	size_t Position1;
	string check1 = "######fxInitRain_mod######";
	if ((Position1 = EXEorig.find(check1)) != std::string::npos)
		return true;
	else
		return false;
}