#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void Main_menu_demo_Disable()
{
	string code1fix, code2fix;
	size_t Position1, Position2;
	if (ver == 452)
	{
		Position1 = 0x184969;
		Position2 = 0x1842C5;
		string temp1("\x0F\xB7\x15\xA0\xC0\x7B\0\x8D\x4A\x01", 10);
		string temp2("\x0F\xB6\x05\0\x6B\x7B\0\x33\xFF\x83", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 449)
	{
		Position1 = 0x1841C1;
		Position2 = 0x183B1D;
		string temp1("\x0F\xB7\x15\x60\xB0\x7B\0\x8D\x4A\x01", 10);
		string temp2("\x0F\xB6\x05\xBC\x5A\x7B\0\x33\xFF\x83", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 442)
	{
		Position1 = 0x1823BD;
		Position2 = 0x181D19;
		string temp1("\x0F\xB7\x15\x40\x2D\x79\0\x8D\x4A\x01", 10);
		string temp2("\x0F\xB6\x05\x9C\xD7\x78\0\x33\xFF\x83", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 439)
	{
		Position1 = 0x180ED1;
		Position2 = 0x18082D;
		string temp1("\x0F\xB7\x15\0\x8A\x78\0\x8D\x4A\x01", 10);
		string temp2("\x0F\xB6\x05\x5C\x34\x78\0\x33\xFF\x83", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 352)
	{
		Position1 = 0x17E535;
		Position2 = 0x17DE95;
		string temp1("\x0F\xB7\x15\x60\xA7\x7A\0\x8D\x4A\x01", 10);
		string temp2("\x33\xDB\x0F\xB6\x05\xC0\x51\x7A\0\x83", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 349)
	{
		Position1 = 0x17DDB9;
		Position2 = 0x17D719;
		string temp1("\x0F\xB7\x15\x20\xA7\x7A\0\x8D\x4A\x01", 10);
		string temp2("\x33\xDB\x0F\xB6\x05\x7C\x51\x7A\0\x83", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 342)
	{
		Position1 = 0x17C0ED;
		Position2 = 0x17BA4D;
		string temp1("\x0F\xB7\x15\0\x24\x78\0\x8D\x4A\x01", 10);
		string temp2("\x33\xDB\x0F\xB6\x05\x5C\xCE\x77\0\x83", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 339)
	{
		Position1 = 0x17AD05;
		Position2 = 0x17A665;
		string temp1("\x0F\xB7\x15\x80\x80\x77\0\x8D\x4A\x01", 10);
		string temp2("\x33\xDB\x0F\xB6\x05\xDC\x2A\x77\0\x83", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 52)
	{
		Position1 = 0x14FF68;
		Position2 = 0x14FFE3;
		string temp1("\xA0\xD0\xE2\x86\0\x3A\xC3\x75\x21\x66", 10);
		string temp2("\xA0\xE5\xE2\x86\0\x33\xF6\x83\xF8\x07", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 49)
	{
		Position1 = 0x14F958;
		Position2 = 0x14F9D3;
		string temp1("\xA0\x10\xD4\x86\0\x3A\xC3\x75\x21\x66", 10);
		string temp2("\xA0\x25\xD4\x86\0\x33\xF6\x83\xF8\x07", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 42)
	{
		Position1 = 0x14E158;
		Position2 = 0x14E1D3;
		string temp1("\xA0\x90\x07\x85\0\x3A\xC3\x75\x21\x66", 10);
		string temp2("\xA0\xA5\x07\x85\0\x33\xF6\x83\xF8\x07", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	if (ver == 39)
	{
		Position1 = 0x14DCD8;
		Position2 = 0x14DD53;
		string temp1("\xA0\x80\x9B\x83\0\x3A\xC3\x75\x21\x66", 10);
		string temp2("\xA0\x95\x9B\x83\0\x33\xF6\x83\xF8\x07", 10);
		code1fix = temp1;
		code2fix = temp2;
	}
	ChangeSTRINGValue(code1fix, Position1);
	ChangeSTRINGValue(code2fix, Position2);
}