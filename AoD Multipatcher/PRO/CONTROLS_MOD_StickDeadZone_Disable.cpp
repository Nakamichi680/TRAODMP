#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void StickDeadZone_Disable()
{
	string code1fix, temp;
	size_t Position1, Position2, Position3, Position4;
	if (ver == 452)
	{
		Position1 = 0x1D9B9;
		Position2 = 0x1D9DE;
		Position3 = 0x1DA03;
		Position4 = 0x1DA28;
		string temp1("\x81\xC1\x01\x80\xFF\xFF", 6);
		code1fix = temp1;
	}
	if (ver == 449)
	{
		Position1 = 0x1D9FD;
		Position2 = 0x1DA22;
		Position3 = 0x1DA47;
		Position4 = 0x1DA6C;
		string temp1("\x81\xC1\x01\x80\xFF\xFF", 6);
		code1fix = temp1;
	}
	if (ver == 442)
	{
		Position1 = 0x1D4B5;
		Position2 = 0x1D4DA;
		Position3 = 0x1D4FF;
		Position4 = 0x1D524;
		string temp1("\x81\xC1\x01\x80\xFF\xFF", 6);
		code1fix = temp1;
	}
	if (ver == 439)
	{
		Position1 = 0x1C375;
		Position2 = 0x1C39A;
		Position3 = 0x1C3BF;
		Position4 = 0x1C3E4;
		string temp1("\x81\xC1\x01\x80\xFF\xFF", 6);
		code1fix = temp1;
	}
	if (ver == 352)
	{
		Position1 = 0x1CE7A;
		Position2 = 0x1CE9F;
		Position3 = 0x1CEC4;
		Position4 = 0x1CEE9;
		string temp1("\x81\xC1\x01\x80\xFF\xFF", 6);
		code1fix = temp1;
	}
	if (ver == 349)
	{
		Position1 = 0x1CE6E;
		Position2 = 0x1CE93;
		Position3 = 0x1CEB8;
		Position4 = 0x1CEDD;
		string temp1("\x81\xC1\x01\x80\xFF\xFF", 6);
		code1fix = temp1;
	}
	if (ver == 342)
	{
		Position1 = 0x1CA5E;
		Position2 = 0x1CA83;
		Position3 = 0x1CAA8;
		Position4 = 0x1CACD;
		string temp1("\x81\xC1\x01\x80\xFF\xFF", 6);
		code1fix = temp1;
	}
	if (ver == 339)
	{
		Position1 = 0x1B932;
		Position2 = 0x1B957;
		Position3 = 0x1B97C;
		Position4 = 0x1B9A1;
		string temp1("\x81\xC1\x01\x80\xFF\xFF", 6);
		code1fix = temp1;
	}
	if (ver == 52)
	{
		Position1 = 0x17374;
		string temp1("\x05\x01\x80\xFF\xFF", 5);
		code1fix = temp1;
	}
	if (ver == 49)
	{
		Position1 = 0x17394;
		string temp1("\x05\x01\x80\xFF\xFF", 5);
		code1fix = temp1;
	}
	if (ver == 42)
	{
		Position1 = 0x17214;
		string temp1("\x05\x01\x80\xFF\xFF", 5);
		code1fix = temp1;
	}
	if (ver == 39)
	{
		Position1 = 0x16114;
		string temp1("\x05\x01\x80\xFF\xFF", 5);
		code1fix = temp1;
	}

	switch(ver)
	{
	case (452):
	case (449):
	case (442):
	case (439):
	case (352):
	case (349):
	case (342):
	case (339):
		ChangeSTRINGValue(code1fix, Position1);
		ChangeSTRINGValue(code1fix, Position2);
		ChangeSTRINGValue(code1fix, Position3);
		ChangeSTRINGValue(code1fix, Position4);
		break;
	case (52):
	case (49):
	case (42):
	case (39):
		ChangeSTRINGValue(code1fix, Position1);
	}
}