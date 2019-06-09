#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Force_specular_status()					// Restituisce vero se specular è attivo, falso se è spento
{
	size_t offset;
    string temp;
	if (ver == 452)		offset = 426752;
	if (ver == 449)		offset = 426752;
	if (ver == 442)		offset = 421256;
	if (ver == 439)		offset = 416344;
	if (ver == 352)		offset = 419268;
	if (ver == 349)		offset = 419916;
	if (ver == 342)		offset = 415292;
	if (ver == 339)		offset = 409848;
	if (ver == 52)		offset = 352636;
	if (ver == 49)		offset = 353324;
	if (ver == 42)		offset = 349468;
	if (ver == 39)		offset = 345548;
	temp = EXEorig.substr(offset, 1);
	if (temp == "\x41")
		return true;
	return false;
}


void Change_Force_specular_status()
{
	size_t offset;
	if (ver == 452)		offset = 426752;
	if (ver == 449)		offset = 426752;
	if (ver == 442)		offset = 421256;
	if (ver == 439)		offset = 416344;
	if (ver == 352)		offset = 419268;
	if (ver == 349)		offset = 419916;
	if (ver == 342)		offset = 415292;
	if (ver == 339)		offset = 409848;
	if (ver == 52)		offset = 352636;
	if (ver == 49)		offset = 353324;
	if (ver == 42)		offset = 349468;
	if (ver == 39)		offset = 345548;
	
	string temp;
	bool Force_specular_status = Detect_Force_specular_status();
	if (Force_specular_status)
	{
		temp = EXEorig.substr(0, offset);
		temp += "\x51";
		temp += EXEorig.substr(offset+1, string::npos);
		EXEorig = temp;
	}
	else
	{
		temp = EXEorig.substr(0, offset);
		temp += "\x41";
		temp += EXEorig.substr(offset+1, string::npos);
		EXEorig = temp;
	}
}