#include "stdafx.h"


bool Sidestep_Detect()								// Ritorna vero se la modifica � attiva
{
	size_t Position1;
	string check1 = "########WalkMode FIX#######";
	if ((Position1 = EXEorig.find(check1)) != std::string::npos)
		return true;
	else
		return false;
}