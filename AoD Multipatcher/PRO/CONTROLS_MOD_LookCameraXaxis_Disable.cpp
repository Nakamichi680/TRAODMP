#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void LookCameraXaxis_Disable()
{
	string code1fix;
	size_t Position1;
	if (ver == 452)
	{
		Position1 = 0x13D620;
		string temp1("\x0F\xBE\x42\x15\xF3\x0F\x2A\xD8", 8);
		code1fix = temp1;
	}
	if (ver == 449)
	{
		Position1 = 0x13D818;
		string temp1("\x0F\xBE\x42\x15\xF3\x0F\x2A\xD8", 8);
		code1fix = temp1;
	}
	if (ver == 442)
	{
		Position1 = 0x13BC98;
		string temp1("\x0F\xBE\x42\x15\xF3\x0F\x2A\xD8", 8);
		code1fix = temp1;
	}
	if (ver == 439)
	{
		Position1 = 0x13A7AC;
		string temp1("\x0F\xBE\x42\x15\xF3\x0F\x2A\xD8", 8);
		code1fix = temp1;
	}
	if (ver == 352)
	{
		Position1 = 0x137D1C;
		string temp1("\x0F\xBE\x4A\x17\xF3\x0F\x2A\xD8", 8);
		code1fix = temp1;
	}
	if (ver == 349)
	{
		Position1 = 0x137F14;
		string temp1("\x0F\xBE\x4A\x17\xF3\x0F\x2A\xD8", 8);
		code1fix = temp1;
	}
	if (ver == 342)
	{
		Position1 = 0x1364C8;
		string temp1("\x0F\xBE\x4A\x17\xF3\x0F\x2A\xD8", 8);
		code1fix = temp1;
	}
	if (ver == 339)
	{
		Position1 = 0x1350E8;
		string temp1("\x0F\xBE\x4A\x17\xF3\x0F\x2A\xD8", 8);
		code1fix = temp1;
	}
	if (ver == 52)
	{
		Position1 = 0x10D6E9;
		string temp1("\x89\x54\x24\x18\xDB\x44\x24\x1C", 8);
		code1fix = temp1;
	}
	if (ver == 49)
	{
		Position1 = 0x10DA19;
		string temp1("\x89\x54\x24\x18\xDB\x44\x24\x1C", 8);
		code1fix = temp1;
	}
	if (ver == 42)
	{
		Position1 = 0x10C4A9;
		string temp1("\x89\x54\x24\x18\xDB\x44\x24\x1C", 8);
		code1fix = temp1;
	}
	if (ver == 39)
	{
		Position1 = 0x10B449;
		string temp1("\x89\x54\x24\x18\xDB\x44\x24\x1C", 8);
		code1fix = temp1;
	}
	ChangeSTRINGValue(code1fix, Position1);
}