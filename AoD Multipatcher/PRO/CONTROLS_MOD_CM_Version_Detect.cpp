#include "stdafx.h"


bool CM_Version_Detect()							// Ritorna vero se la controls mod è attiva
{
	size_t Position1;
	string check1 = "########Controls Mod Master Ver:";
	if ((Position1 = EXEorig.find(check1)) != std::string::npos)
		return true;
	else
		return false;
}