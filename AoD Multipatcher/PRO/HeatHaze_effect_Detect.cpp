#include "stdafx.h"


bool HeatHaze_effect_Detect()						// Ritorna vero se la modifica è attiva
{
	size_t Position1;
	string check1 = "######Heat_Haze_Effect FIX#######";
	if ((Position1 = EXEorig.find(check1)) != std::string::npos)
		return true;
	else
		return false;
}