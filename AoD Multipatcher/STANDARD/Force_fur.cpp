#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Force_fur_status()						// Restituisce vero se fur è attivo, falso se è spento
{
	size_t offset;
    string temp;
	if (ver == 452)		offset = 426734;
	if (ver == 449)		offset = 426734;
	if (ver == 442)		offset = 421238;
	if (ver == 439)		offset = 416326;
	if (ver == 352)		offset = 419250;
	if (ver == 349)		offset = 419898;
	if (ver == 342)		offset = 415274;
	if (ver == 339)		offset = 409830;
	if (ver == 52)		offset = 352618;
	if (ver == 49)		offset = 353306;
	if (ver == 42)		offset = 349450;
	if (ver == 39)		offset = 345530;
	temp = EXEorig.substr(offset, 1);
	if (temp == "\x41")
		return true;
	return false;
}


void Change_Force_fur_status()
{
	size_t offset;
	if (ver == 452)		offset = 426734;
	if (ver == 449)		offset = 426734;
	if (ver == 442)		offset = 421238;
	if (ver == 439)		offset = 416326;
	if (ver == 352)		offset = 419250;
	if (ver == 349)		offset = 419898;
	if (ver == 342)		offset = 415274;
	if (ver == 339)		offset = 409830;
	if (ver == 52)		offset = 352618;
	if (ver == 49)		offset = 353306;
	if (ver == 42)		offset = 349450;
	if (ver == 39)		offset = 345530;
	
	string temp;
	bool Force_fur_status = Detect_Force_fur_status();
	if (Force_fur_status)
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