#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void UW_effects_Disable()
{
	string code1fix, code2fix, code3fix, code4fix, code5fix, code6fix, code7fix, code8fix, code9fix, code10fix;
	size_t Position1, Position2, Position3, Position4, Position5, Position6, Position7, Position8, Position9, Position10;
	if (ver == 452)
	{
		Position1 = 0xAD247;
		Position2 = 0xAD288;
		Position3 = 0xAD10C;
		Position4 = 0xAD139;
		Position5 = 0xAD36E;
		Position6 = 0xAD443;
		Position7 = 0xB7311;
		Position8 = 0xB7C65;
		Position9 = 0xBD1A4;
		Position10 = 0xB25E9;
		string temp1("\xE8\xC4\x9E\0\0", 5);
		string temp2("\xE8\x83\x9E\0\0", 5);
		string temp3("\xE8\xFF\x9F\0\0", 5);
		string temp4("\xE8\xD2\x9F\0\0", 5);
		string temp5("\xE8\x9D\x9D\0\0", 5);
		string temp6("\xE8\xC8\x9C\0\0", 5);
		string temp7("\xE8\x8E\xF2\xFF\xFF", 5);
		string temp8("\xE8\x3A\xE9\xFF\xFF", 5);
		string temp9("\xE8\xD3\x94\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 449)
	{
		Position1 = 0xAD4CB;
		Position2 = 0xAD50C;
		Position3 = 0xAD390;
		Position4 = 0xAD3BD;
		Position5 = 0xAD5F2;
		Position6 = 0xAD6C7;
		Position7 = 0xB7595;
		Position8 = 0xB7EE9;
		Position9 = 0xBD428;
		Position10 = 0xB286D;
		string temp1("\xE8\xC4\x9E\0\0", 5);
		string temp2("\xE8\x83\x9E\0\0", 5);
		string temp3("\xE8\xFF\x9F\0\0", 5);
		string temp4("\xE8\xD2\x9F\0\0", 5);
		string temp5("\xE8\x9D\x9D\0\0", 5);
		string temp6("\xE8\xC8\x9C\0\0", 5);
		string temp7("\xE8\x8E\xF2\xFF\xFF", 5);
		string temp8("\xE8\x3A\xE9\xFF\xFF", 5);
		string temp9("\xE8\xD3\x94\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 442)
	{
		Position1 = 0xAB9F7;
		Position2 = 0xABA38;
		Position3 = 0xAB8BC;
		Position4 = 0xAB8E9;
		Position5 = 0xABB1E;
		Position6 = 0xABBF3;
		Position7 = 0xB5AC1;
		Position8 = 0xB6415;
		Position9 = 0xBB954;
		Position10 = 0xB0D99;
		string temp1("\xE8\xC4\x9E\0\0", 5);
		string temp2("\xE8\x83\x9E\0\0", 5);
		string temp3("\xE8\xFF\x9F\0\0", 5);
		string temp4("\xE8\xD2\x9F\0\0", 5);
		string temp5("\xE8\x9D\x9D\0\0", 5);
		string temp6("\xE8\xC8\x9C\0\0", 5);
		string temp7("\xE8\x8E\xF2\xFF\xFF", 5);
		string temp8("\xE8\x3A\xE9\xFF\xFF", 5);
		string temp9("\xE8\xD3\x94\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 439)
	{
		Position1 = 0xAA1CF;
		Position2 = 0xAA210;
		Position3 = 0xAA094;
		Position4 = 0xAA0C1;
		Position5 = 0xAA2F6;
		Position6 = 0xAA3CB;
		Position7 = 0xB451D;
		Position8 = 0xB4E71;
		Position9 = 0xBA3B0;
		Position10 = 0xAF5F3;
		string temp1("\xE8\x48\xA1\0\0", 5);
		string temp2("\xE8\x07\xA1\0\0", 5);
		string temp3("\xE8\x83\xA2\0\0", 5);
		string temp4("\xE8\x56\xA2\0\0", 5);
		string temp5("\xE8\x21\xA0\0\0", 5);
		string temp6("\xE8\x4C\x9F\0\0", 5);
		string temp7("\xE8\x8E\xF2\xFF\xFF", 5);
		string temp8("\xE8\x3A\xE9\xFF\xFF", 5);
		string temp9("\xE8\xD3\x94\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 352)
	{
		Position1 = 0xA8988;
		Position2 = 0xA89C9;
		Position3 = 0xA884D;
		Position4 = 0xA887A;
		Position5 = 0xA8AAE;
		Position6 = 0xA8B84;
		Position7 = 0xB2959;
		Position8 = 0xB32AD;
		Position9 = 0xB8788;
		Position10 = 0xADCD8;
		string temp1("\xE8\xCF\x9D\0\0", 5);
		string temp2("\xE8\x8E\x9D\0\0", 5);
		string temp3("\xE8\x0A\x9F\0\0", 5);
		string temp4("\xE8\xDD\x9E\0\0", 5);
		string temp5("\xE8\xA9\x9C\0\0", 5);
		string temp6("\xE8\xD3\x9B\0\0", 5);
		string temp7("\xE8\xA6\xF2\xFF\xFF", 5);
		string temp8("\xE8\x52\xE9\xFF\xFF", 5);
		string temp9("\xE8\x4F\x95\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 349)
	{
		Position1 = 0xA8C18;
		Position2 = 0xA8C59;
		Position3 = 0xA8ADD;
		Position4 = 0xA8B0A;
		Position5 = 0xA8D3E;
		Position6 = 0xA8E14;
		Position7 = 0xB2BE9;
		Position8 = 0xB353D;
		Position9 = 0xB8A18;
		Position10 = 0xADF68;
		string temp1("\xE8\xCF\x9D\0\0", 5);
		string temp2("\xE8\x8E\x9D\0\0", 5);
		string temp3("\xE8\x0A\x9F\0\0", 5);
		string temp4("\xE8\xDD\x9E\0\0", 5);
		string temp5("\xE8\xA9\x9C\0\0", 5);
		string temp6("\xE8\xD3\x9B\0\0", 5);
		string temp7("\xE8\xA6\xF2\xFF\xFF", 5);
		string temp8("\xE8\x52\xE9\xFF\xFF", 5);
		string temp9("\xE8\x4F\x95\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 342)
	{
		Position1 = 0xA7284;
		Position2 = 0xA72C5;
		Position3 = 0xA7149;
		Position4 = 0xA7176;
		Position5 = 0xA73AA;
		Position6 = 0xA7480;
		Position7 = 0xB1255;
		Position8 = 0xB1BA9;
		Position9 = 0xB7084;
		Position10 = 0xAC5D4;
		string temp1("\xE8\xCF\x9D\0\0", 5);
		string temp2("\xE8\x8E\x9D\0\0", 5);
		string temp3("\xE8\x0A\x9F\0\0", 5);
		string temp4("\xE8\xDD\x9E\0\0", 5);
		string temp5("\xE8\xA9\x9C\0\0", 5);
		string temp6("\xE8\xD3\x9B\0\0", 5);
		string temp7("\xE8\xA6\xF2\xFF\xFF", 5);
		string temp8("\xE8\x52\xE9\xFF\xFF", 5);
		string temp9("\xE8\x4F\x95\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 339)
	{
		Position1 = 0xA5A78;
		Position2 = 0xA5AB9;
		Position3 = 0xA593D;
		Position4 = 0xA596A;
		Position5 = 0xA5B9E;
		Position6 = 0xA5C74;
		Position7 = 0xAFCD9;
		Position8 = 0xB062D;
		Position9 = 0xB5B08;
		Position10 = 0xAAE57;
		string temp1("\xE8\x5F\xA0\0\0", 5);
		string temp2("\xE8\x1E\xA0\0\0", 5);
		string temp3("\xE8\x9A\xA1\0\0", 5);
		string temp4("\xE8\x6D\xA1\0\0", 5);
		string temp5("\xE8\x39\x9F\0\0", 5);
		string temp6("\xE8\x63\x9E\0\0", 5);
		string temp7("\xE8\xA6\xF2\xFF\xFF", 5);
		string temp8("\xE8\x52\xE9\xFF\xFF", 5);
		string temp9("\xE8\x4F\x95\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 52)
	{
		Position1 = 0x8FD0E;
		Position2 = 0x8FD4C;
		Position3 = 0x8FEA7;
		Position4 = 0x8FED8;
		Position5 = 0x8FC14;
		Position6 = 0x8FB68;
		Position7 = 0x951C3;
		Position8 = 0x95A13;
		Position9 = 0xA3E60;
		Position10 = 0x8C0A4;
		string temp1("\xE8\x7D\x52\0\0", 5);
		string temp2("\xE8\x3F\x52\0\0", 5);
		string temp3("\xE8\xE4\x50\0\0", 5);
		string temp4("\xE8\xB3\x50\0\0", 5);
		string temp5("\xE8\x77\x53\0\0", 5);
		string temp6("\xE8\x23\x54\0\0", 5);
		string temp7("\xE8\xC8\xF1\xFF\xFF", 5);
		string temp8("\xE8\x78\xE9\xFF\xFF", 5);
		string temp9("\xE8\x2B\x06\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 49)
	{
		Position1 = 0x9004E;
		Position2 = 0x9008C;
		Position3 = 0x901E7;
		Position4 = 0x90218;
		Position5 = 0x8FF54;
		Position6 = 0x8FEA8;
		Position7 = 0x95503;
		Position8 = 0x95D53;
		Position9 = 0xA41A0;
		Position10 = 0x8C3E4;
		string temp1("\xE8\x7D\x52\0\0", 5);
		string temp2("\xE8\x3F\x52\0\0", 5);
		string temp3("\xE8\xE4\x50\0\0", 5);
		string temp4("\xE8\xB3\x50\0\0", 5);
		string temp5("\xE8\x77\x53\0\0", 5);
		string temp6("\xE8\x23\x54\0\0", 5);
		string temp7("\xE8\xC8\xF1\xFF\xFF", 5);
		string temp8("\xE8\x78\xE9\xFF\xFF", 5);
		string temp9("\xE8\x2B\x06\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 42)
	{
		Position1 = 0x8EC1E;
		Position2 = 0x8EC5C;
		Position3 = 0x8EDB7;
		Position4 = 0x8EDE8;
		Position5 = 0x8EB24;
		Position6 = 0x8EA78;
		Position7 = 0x94103;
		Position8 = 0x94953;
		Position9 = 0xA2DA0;
		Position10 = 0x8AFB4;
		string temp1("\xE8\xAD\x52\0\0", 5);
		string temp2("\xE8\x6F\x52\0\0", 5);
		string temp3("\xE8\x14\x51\0\0", 5);
		string temp4("\xE8\xE3\x50\0\0", 5);
		string temp5("\xE8\xA7\x53\0\0", 5);
		string temp6("\xE8\x53\x54\0\0", 5);
		string temp7("\xE8\xC8\xF1\xFF\xFF", 5);
		string temp8("\xE8\x78\xE9\xFF\xFF", 5);
		string temp9("\xE8\x2B\x06\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	if (ver == 39)
	{
		Position1 = 0x8D8F4;
		Position2 = 0x8D932;
		Position3 = 0x8DAEA;
		Position4 = 0x8DB1E;
		Position5 = 0x8D7AA;
		Position6 = 0x8D7AA;
		Position7 = 0x932C3;
		Position8 = 0x93B13;
		Position9 = 0xA1DA4;
		Position10 = 0x89929;
		string temp1("\xE8\x97\x57\0\0", 5);
		string temp2("\xE8\x59\x57\0\0", 5);
		string temp3("\xE8\xA1\x55\0\0", 5);
		string temp4("\xE8\x6D\x55\0\0", 5);
		string temp5("\xE8\xE1\x58\0\0", 5);
		string temp6("\xE8\xE1\x58\0\0", 5);			// Ripetuto due volte perchè è lo stesso blocco di dati
		string temp7("\xE8\xC8\xF1\xFF\xFF", 5);
		string temp8("\xE8\x78\xE9\xFF\xFF", 5);
		string temp9("\xE8\xE7\x07\xFF\xFF", 5);
		string temp10("\xA8\x07", 2);
		code1fix = temp1;
		code2fix = temp2;
		code3fix = temp3;
		code4fix = temp4;
		code5fix = temp5;
		code6fix = temp6;
		code7fix = temp7;
		code8fix = temp8;
		code9fix = temp9;
		code10fix = temp10;
	}
	ChangeSTRINGValue(code1fix, Position1);
	ChangeSTRINGValue(code2fix, Position2);
	ChangeSTRINGValue(code3fix, Position3);
	ChangeSTRINGValue(code4fix, Position4);
	ChangeSTRINGValue(code5fix, Position5);
	ChangeSTRINGValue(code6fix, Position6);
	ChangeSTRINGValue(code7fix, Position7);
	ChangeSTRINGValue(code8fix, Position8);
	ChangeSTRINGValue(code9fix, Position9);
	ChangeSTRINGValue(code10fix, Position10);
}