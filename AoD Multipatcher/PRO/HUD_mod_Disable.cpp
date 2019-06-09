#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void HUD_mod_Disable()
{
	string code1fix, code2fix, code3fix, code4fix, code5fix;
	size_t Position1, Position2, Position3, Position4, Position5;
	if (ver == 452)
	{
		Position1 = 0x14DA20;
		Position2 = 0x14DA76;
		Position3 = 0x117005;
		Position4 = 0x17F57E;
		Position5 = 0x17C0D5;
		string temp1("\x59\x85\xC0\x75\x0C", 5);
		string temp2("\x59\x85\xC0\x75\x1E", 5);
		string temp3("\x68\x7F\x7F\x7F\x3F", 5);
		string temp4("\xE8\xF1\x26\xEB\xFF", 5);
		string temp5("\xE8\x9A\x5B\xEB\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	if (ver == 449)
	{
		Position1 = 0x14DB44;
		Position2 = 0x14DB9A;
		Position3 = 0x117269;
		Position4 = 0x17EF36;
		Position5 = 0x17BA8D;
		string temp1("\x59\x85\xC0\x75\x0C", 5);
		string temp2("\x59\x85\xC0\x75\x1E", 5);
		string temp3("\x68\x7F\x7F\x7F\x3F", 5);
		string temp4("\xE8\x89\x58\xED\xFF", 5);
		string temp5("\xE8\x32\x8D\xED\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	if (ver == 442)
	{
		Position1 = 0x14BFC4;
		Position2 = 0x14C01A;
		Position3 = 0x1156AD;
		Position4 = 0x17D132;
		Position5 = 0x179C8D;
		string temp1("\x59\x85\xC0\x75\x0C", 5);
		string temp2("\x59\x85\xC0\x75\x1E", 5);
		string temp3("\x68\x7F\x7F\x7F\x3F", 5);
		string temp4("\xE8\xF9\x0E\x01\0", 5);
		string temp5("\xE8\x9E\x43\x01\0", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	if (ver == 439)
	{
		Position1 = 0x14AAD8;
		Position2 = 0x14AB2E;
		Position3 = 0x1141A9;
		Position4 = 0x17BC46;
		Position5 = 0x1787A1;
		string temp1("\x59\x85\xC0\x75\x0C", 5);
		string temp2("\x59\x85\xC0\x75\x1E", 5);
		string temp3("\x68\x7F\x7F\x7F\x3F", 5);
		string temp4("\xE8\xB5\x85\xF5\xFF", 5);
		string temp5("\xE8\x5A\xBA\xF5\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	////////////////////////////////////////////////
	if (ver == 352)
	{
		Position1 = 0x147CC1;
		Position2 = 0x147D17;
		Position3 = 0x111E35;
		Position4 = 0x1791C4;
		Position5 = 0x175DB9;
		string temp1("\x59\x85\xC0\x75\x0C", 5);
		string temp2("\x59\x85\xC0\x75\x1E", 5);
		string temp3("\xBA\x10\0\0\0", 5);
		string temp4("\xE8\x07\x91\xF5\xFF", 5);
		string temp5("\xE8\x12\xC5\xF5\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	if (ver == 349)
	{
		Position1 = 0x147DE9;
		Position2 = 0x147E3F;
		Position3 = 0x1120A5;
		Position4 = 0x178BB0;
		Position5 = 0x1757A5;
		string temp1("\x59\x85\xC0\x75\x0C", 5);
		string temp2("\x59\x85\xC0\x75\x1E", 5);
		string temp3("\xBA\x10\0\0\0", 5);
		string temp4("\xE8\xD7\xA0\xFA\xFF", 5);
		string temp5("\xE8\xE2\xD4\xFA\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	if (ver == 342)
	{
		Position1 = 0x14639D;
		Position2 = 0x1463F3;
		Position3 = 0x110611;
		Position4 = 0x176EE4;
		Position5 = 0x173ADD;
		string temp1("\x59\x85\xC0\x75\x0C", 5);
		string temp2("\x59\x85\xC0\x75\x1E", 5);
		string temp3("\xBA\x10\0\0\0", 5);
		string temp4("\xE8\x2B\x6A\xFD\xFF", 5);
		string temp5("\xE8\x32\x9E\xFD\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	if (ver == 339)
	{
		Position1 = 0x144FBD;
		Position2 = 0x145013;
		Position3 = 0x10F245;
		Position4 = 0x175AFC;
		Position5 = 0x1726F5;
		string temp1("\x59\x85\xC0\x75\x0C", 5);
		string temp2("\x59\x85\xC0\x75\x1E", 5);
		string temp3("\xBA\x10\0\0\0", 5);
		string temp4("\xE8\xFF\x27\xF1\xFF", 5);
		string temp5("\xE8\x06\x5C\xF1\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	if (ver == 52)
	{
		Position1 = 0x11A8D0;
		Position2 = 0x11A94C;
		Position3 = 0xE9001;
		Position4 = 0x14B060;
		Position5 = 0x148045;
		string temp1("\x83\xC4\x04\x85\xC0", 5);
		string temp2("\x83\xC4\x04\x85\xC0", 5);
		string temp3("\x68\x7F\x7F\x7F\x3F", 5);
		string temp4("\xE8\x6B\xE1\xEB\xFF", 5);
		string temp5("\xE8\x86\x11\xEC\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	if (ver == 49)
	{
		Position1 = 0x11ABCC;
		Position2 = 0x11AB50;
		Position3 = 0xE9351;
		Position4 = 0x14ABB0;
		Position5 = 0x147B95;
		string temp1("\x83\xC4\x04\x85\xC0", 5);
		string temp2("\x83\xC4\x04\x85\xC0", 5);
		string temp3("\x68\x7F\x7F\x7F\x3F", 5);
		string temp4("\xE8\xAB\xEB\xFB\xFF", 5);
		string temp5("\xE8\xC6\x1B\xFC\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	if (ver == 42)
	{
		Position1 = 0x11962C;
		Position2 = 0x1195B0;
		Position3 = 0xE7DB1;
		Position4 = 0x1493A0;
		Position5 = 0x146385;
		string temp1("\x83\xC4\x04\x85\xC0", 5);
		string temp2("\x83\xC4\x04\x85\xC0", 5);
		string temp3("\x68\x7F\x7F\x7F\x3F", 5);
		string temp4("\xE8\x4B\xFB\xF1\xFF", 5);
		string temp5("\xE8\x66\x2B\xF2\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	if (ver == 39)
	{
		Position1 = 0x118A6C;
		Position2 = 0x1189F0;
		Position3 = 0xE6C11;
		Position4 = 0x148F20;
		Position5 = 0x145F05;
		string temp1("\x83\xC4\x04\x85\xC0", 5);
		string temp2("\x83\xC4\x04\x85\xC0", 5);
		string temp3("\x68\x7F\x7F\x7F\x3F", 5);
		string temp4("\xE8\x1B\x78\xFC\xFF", 5);
		string temp5("\xE8\x36\xA8\xFC\xFF", 5);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
	}
	ChangeSTRINGValue(code1fix, Position1);
	ChangeSTRINGValue(code2fix, Position2);
	ChangeSTRINGValue(code3fix, Position3);
	ChangeSTRINGValue(code4fix, Position4);
	ChangeSTRINGValue(code5fix, Position5);
}