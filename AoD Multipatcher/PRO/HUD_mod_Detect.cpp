#include "stdafx.h"


bool HUD_mod_Detect()								// Ritorna vero se la modifica � attiva
{
	size_t Position1;
	string check1 = "#####HUD health bar mod######";
	if ((Position1 = EXEorig.find(check1)) != std::string::npos)
		return true;
	else
		return false;
}