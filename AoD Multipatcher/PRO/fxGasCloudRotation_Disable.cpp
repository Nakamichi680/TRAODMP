#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void fxGasCloudRotation_Disable()
{
	string code1fix;
	size_t Position1;
	if (ver == 452)
	{
		Position1 = 0x84B1C;
		string temp1("\x83\xC0\x60\x89\x02", 5);
		code1fix = temp1;
	}
	if (ver == 449)
	{
		Position1 = 0x84F40;
		string temp1("\x83\xC0\x60\x89\x02", 5);
		code1fix = temp1;
	}
	if (ver == 442)
	{
		Position1 = 0x8324C;
		string temp1("\x83\xC0\x60\x89\x02", 5);
		code1fix = temp1;
	}
	if (ver == 439)
	{
		Position1 = 0x81D94;
		string temp1("\x83\xC0\x60\x89\x02", 5);
		code1fix = temp1;
	}
	if (ver == 352)
	{
		Position1 = 0x815FF;
		string temp1("\x83\xC0\x60\x89\x02", 5);
		code1fix = temp1;
	}
	if (ver == 349)
	{
		Position1 = 0x81C87;
		string temp1("\x83\xC0\x60\x89\x02", 5);
		code1fix = temp1;
	}
	if (ver == 342)
	{
		Position1 = 0x802D3;
		string temp1("\x83\xC0\x60\x89\x02", 5);
		code1fix = temp1;
	}
	if (ver == 339)
	{
		Position1 = 0x7EBFB;
		string temp1("\x83\xC0\x60\x89\x02", 5);
		code1fix = temp1;
	}
	if (ver == 52)
	{
		Position1 = 0x6D28A;
		string temp1("\x83\xC7\x18\x89\x3A", 5);
		code1fix = temp1;
	}
	if (ver == 49)
	{
		Position1 = 0x6D8CA;
		string temp1("\x83\xC7\x18\x89\x3A", 5);
		code1fix = temp1;
	}
	if (ver == 42)
	{
		Position1 = 0x6C35A;
		string temp1("\x83\xC7\x18\x89\x3A", 5);
		code1fix = temp1;
	}
	if (ver == 39)
	{
		Position1 = 0x6B0DA;
		string temp1("\x83\xC7\x18\x89\x3A", 5);
		code1fix = temp1;
	}
	ChangeSTRINGValue(code1fix, Position1);
}