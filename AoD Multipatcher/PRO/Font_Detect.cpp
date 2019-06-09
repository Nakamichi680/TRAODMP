#include "stdafx.h"


bool Font_Detect()									// Ritorna vero se la modifica è attiva
{
	size_t Position1;
	string check1 = "########External Font Mod#######";
	if ((Position1 = EXEorig.find(check1)) != std::string::npos)
		return true;
	else
		return false;
}