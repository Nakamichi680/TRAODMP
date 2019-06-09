#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void PauseMenuExit_Disable()
{
	string code1fix;
	size_t Position1;
	if (ver == 452)
	{
		Position1 = 0x18614A;
		string temp1("\x84\xC0\x0F\x84\x5E\xFF\xFF\xFF", 8);
		code1fix = temp1;
	}
	if (ver == 449)
	{
		Position1 = 0x1859A2;
		string temp1("\x84\xC0\x0F\x84\x5E\xFF\xFF\xFF", 8);
		code1fix = temp1;
	}
	if (ver == 442)
	{
		Position1 = 0x183B9E;
		string temp1("\x84\xC0\x0F\x84\x5E\xFF\xFF\xFF", 8);
		code1fix = temp1;
	}
	if (ver == 439)
	{
		Position1 = 0x1826B2;
		string temp1("\x84\xC0\x0F\x84\x5E\xFF\xFF\xFF", 8);
		code1fix = temp1;
	}
	if (ver == 352)
	{
		Position1 = 0x17FD06;
		string temp1("\x84\xC0\x0F\x84\x5E\xFF\xFF\xFF", 8);
		code1fix = temp1;
	}
	if (ver == 349)
	{
		Position1 = 0x17F58A;
		string temp1("\x84\xC0\x0F\x84\x5E\xFF\xFF\xFF", 8);
		code1fix = temp1;
	}
	if (ver == 342)
	{
		Position1 = 0x17D8BE;
		string temp1("\x84\xC0\x0F\x84\x5E\xFF\xFF\xFF", 8);
		code1fix = temp1;
	}
	if (ver == 339)
	{
		Position1 = 0x17C4D6;
		string temp1("\x84\xC0\x0F\x84\x5E\xFF\xFF\xFF", 8);
		code1fix = temp1;
	}
	if (ver == 52)
	{
		Position1 = 0x1516A3;
		string temp1("\x38\x1D\xBB\x29\x87\0\x0F\x84", 8);
		code1fix = temp1;
	}
	if (ver == 49)
	{
		Position1 = 0x151093;
		string temp1("\x38\x1D\xFB\x1A\x87\0\x0F\x84", 8);
		code1fix = temp1;
	}
	if (ver == 42)
	{
		Position1 = 0x14F893;
		string temp1("\x38\x1D\x7F\x4E\x85\0\x0F\x84", 8);
		code1fix = temp1;
	}
	if (ver == 39)
	{
		Position1 = 0x14F413;
		string temp1("\x38\x1D\x6B\xE2\x83\0\x0F\x84", 8);
		code1fix = temp1;
	}
	ChangeSTRINGValue(code1fix, Position1);
}