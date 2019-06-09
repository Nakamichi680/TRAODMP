#include "stdafx.h"


bool LookCameraXaxis_Detect()						// Ritorna vero se la modifica è attiva
{
	size_t Position1;
	string check1 = "#####LookCameraXaxisFIX mod######";
	if ((Position1 = EXEorig.find(check1)) != std::string::npos)
		return true;
	else
		return false;
}