#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void PickupsRotation_Disable()
{
	string code1fix;
	size_t Position1;
	if (ver == 452)
	{
		Position1 = 0x9310F;
		string temp1("\x83\xC4\x0C\x8B\x44\x24\x4C", 7);
		code1fix = temp1;
	}
	if (ver == 449)
	{
		Position1 = 0x93527;
		string temp1("\x83\xC4\x0C\x8B\x44\x24\x4C", 7);
		code1fix = temp1;
	}
	if (ver == 442)
	{
		Position1 = 0x91863;
		string temp1("\x83\xC4\x0C\x8B\x44\x24\x4C", 7);
		code1fix = temp1;
	}
	if (ver == 439)
	{
		Position1 = 0x9036B;
		string temp1("\x83\xC4\x0C\x8B\x44\x24\x4C", 7);
		code1fix = temp1;
	}
	if (ver == 352)
	{
		Position1 = 0x8FAE7;
		string temp1("\x83\xC4\x0C\x8B\x44\x24\x4C", 7);
		code1fix = temp1;
	}
	if (ver == 349)
	{
		Position1 = 0x9016F;
		string temp1("\x83\xC4\x0C\x8B\x44\x24\x4C", 7);
		code1fix = temp1;
	}
	if (ver == 342)
	{
		Position1 = 0x8E7EF;
		string temp1("\x83\xC4\x0C\x8B\x44\x24\x4C", 7);
		code1fix = temp1;
	}
	if (ver == 339)
	{
		Position1 = 0x8D0DB;
		string temp1("\x83\xC4\x0C\x8B\x44\x24\x4C", 7);
		code1fix = temp1;
	}
	if (ver == 52)
	{
		Position1 = 0x782F2;
		string temp1("\x8B\x44\x24\x4C\x50", 5);
		code1fix = temp1;
	}
	if (ver == 49)
	{
		Position1 = 0x78962;
		string temp1("\x8B\x44\x24\x4C\x50", 5);
		code1fix = temp1;
	}
	if (ver == 42)
	{
		Position1 = 0x773C2;
		string temp1("\x8B\x44\x24\x4C\x50", 5);
		code1fix = temp1;
	}
	if (ver == 39)
	{
		Position1 = 0x760D2;
		string temp1("\x8B\x44\x24\x4C\x50", 5);
		code1fix = temp1;
	}
	ChangeSTRINGValue(code1fix, Position1);
}