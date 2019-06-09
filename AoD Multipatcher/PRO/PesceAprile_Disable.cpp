#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void PesceAprile_Disable()
{
	string code1fix;
	size_t Position1;
	if (ver == 452)
	{
		Position1 = 0xAD14E;
		string temp1("\xE8\xC5\x4A\xFE\xFF", 5);
		code1fix = temp1;
	}
	ChangeSTRINGValue(code1fix, Position1);
}