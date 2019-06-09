#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void ZoomyCamXaxis_Disable()
{
	string code1fix;
	size_t Position1;
	if (ver == 452)
	{
		Position1 = 0x115F8A;
		string temp1("\xF3\x0F\x2A\xCA\xF3\x0F\x59\xC8", 8);
		code1fix = temp1;
	}
	if (ver == 449)
	{
		Position1 = 0x1161DE;
		string temp1("\xF3\x0F\x2A\xCA\xF3\x0F\x59\xC8", 8);
		code1fix = temp1;
	}
	if (ver == 442)
	{
		Position1 = 0x11462E;
		string temp1("\xF3\x0F\x2A\xCA\xF3\x0F\x59\xC8", 8);
		code1fix = temp1;
	}
	if (ver == 439)
	{
		Position1 = 0x113136;
		string temp1("\xF3\x0F\x2A\xCA\xF3\x0F\x59\xC8", 8);
		code1fix = temp1;
	}
	if (ver == 352)
	{
		Position1 = 0x110E51;
		string temp1("\xF3\x0F\x2A\xCA\xF3\x0F\x59\xC8", 8);
		code1fix = temp1;
	}
	if (ver == 349)
	{
		Position1 = 0x1110B1;
		string temp1("\xF3\x0F\x2A\xCA\xF3\x0F\x59\xC8", 8);
		code1fix = temp1;
	}
	if (ver == 342)
	{
		Position1 = 0x10F619;
		string temp1("\xF3\x0F\x2A\xCA\xF3\x0F\x59\xC8", 8);
		code1fix = temp1;
	}
	if (ver == 339)
	{
		Position1 = 0x10E239;
		string temp1("\xF3\x0F\x2A\xCA\xF3\x0F\x59\xC8", 8);
		code1fix = temp1;
	}
	if (ver == 52)
	{
		Position1 = 0xE81FA;
		string temp1("\xD8\x0D\xB0\xC4\x62\0\xD8\xC9", 8);
		code1fix = temp1;
	}
	if (ver == 49)
	{
		Position1 = 0xE855A;
		string temp1("\xD8\x0D\xB0\xB4\x62\0\xD8\xC9", 8);
		code1fix = temp1;
	}
	if (ver == 42)
	{
		Position1 = 0xE6FEA;
		string temp1("\xD8\x0D\x20\x24\x62\0\xD8\xC9", 8);
		code1fix = temp1;
	}
	if (ver == 39)
	{
		Position1 = 0xE5E4A;
		string temp1("\xD8\x0D\x28\x12\x61\0\xD8\xC9", 8);
		code1fix = temp1;
	}
	ChangeSTRINGValue(code1fix, Position1);
}