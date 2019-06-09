#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void FreeCameraTrigger_Disable()
{
	string code1fix;
	size_t Position1;
	if (ver == 452)
	{
		Position1 = 0x75A6D;
		string temp1("\xC7\x05\0\0\0\0\0\0\0\0", 10);
		code1fix = temp1;
	}
	if (ver == 449)
	{
		Position1 = 0x75E89;
		string temp1("\xC7\x05\0\0\0\0\0\0\0\0", 10);
		code1fix = temp1;
	}
	if (ver == 442)
	{
		Position1 = 0x741A1;
		string temp1("\xC7\x05\0\0\0\0\0\0\0\0", 10);
		code1fix = temp1;
	}
	if (ver == 439)
	{
		Position1 = 0x72CE5;
		string temp1("\xC7\x05\0\0\0\0\0\0\0\0", 10);
		code1fix = temp1;
	}
	if (ver == 352)
	{
		Position1 = 0x73B76;
		string temp1("\xC7\x05\0\0\0\0\0\0\0\0", 10);
		code1fix = temp1;
	}
	if (ver == 349)
	{
		Position1 = 0x741D6;
		string temp1("\xC7\x05\0\0\0\0\0\0\0\0", 10);
		code1fix = temp1;
	}
	if (ver == 342)
	{
		Position1 = 0x7284A;
		string temp1("\xC7\x05\0\0\0\0\0\0\0\0", 10);
		code1fix = temp1;
	}
	if (ver == 339)
	{
		Position1 = 0x71176;
		string temp1("\xC7\x05\0\0\0\0\0\0\0\0", 10);
		code1fix = temp1;
	}
	if (ver == 52)
	{
		return;
		Position1 = 0x61D99;
		string temp1("\x89\x1D\0\0\0\0", 6);
		code1fix = temp1;
	}
	if (ver == 49)
	{
		return;
		Position1 = 0x623D9;
		string temp1("\x89\x1D\0\0\0\0", 6);
		code1fix = temp1;
	}
	if (ver == 42)
	{
		return;
		Position1 = 0x60E09;
		string temp1("\x89\x1D\0\0\0\0", 6);
		code1fix = temp1;
	}
	if (ver == 39)
	{
		return;
		Position1 = 0x5FBD9;
		string temp1("\x89\x1D\0\0\0\0", 6);
		code1fix = temp1;
	}
	ChangeSTRINGValue(code1fix, Position1);
}