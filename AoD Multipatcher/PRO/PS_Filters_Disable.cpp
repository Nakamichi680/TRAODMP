#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void PS_Filters_Disable()
{
	string code1fix;
	size_t Position1;
	if (ver == 452)
	{
		Position1 = 0x351300;
		string temp1("\x78\xCB\x58\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 449)
	{
		Position1 = 0x351300;
		string temp1("\x78\xCB\x58\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 442)
	{
		Position1 = 0x329300;
		string temp1("\x08\x3B\x56\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 439)
	{
		Position1 = 0x31D300;
		string temp1("\x58\x7A\x55\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 352)
	{
		Position1 = 0x340300;
		string temp1("\x78\xAB\x57\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 349)
	{
		Position1 = 0x340300;
		string temp1("\x78\xAB\x57\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 342)
	{
		Position1 = 0x319300;
		string temp1("\x08\x3B\x55\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 339)
	{
		Position1 = 0x30D300;
		string temp1("\x58\x7A\x54\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 52)
	{
		Position1 = 0x2C4300;
		string temp1("\x78\x1B\x50\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 49)
	{
		Position1 = 0x2C3300;
		string temp1("\x78\x0B\x50\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 42)
	{
		Position1 = 0x2A9300;
		string temp1("\x08\x7B\x4E\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	if (ver == 39)
	{
		Position1 = 0x290300;
		string temp1("\x58\xDA\x4C\0\xB2\x0C\0\0", 8);
		code1fix = temp1;
	}
	ChangeSTRINGValue(code1fix, Position1);
}