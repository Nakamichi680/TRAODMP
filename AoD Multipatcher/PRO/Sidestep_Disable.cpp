#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void Sidestep_Disable()
{
	string code1fix;
	size_t Position1;
	if (ver == 452)
	{
		Position1 = 0x1509FB;
		string temp1("\xF3\x0F\x11\x82\x24", 5);
		code1fix = temp1;
	}
	if (ver == 449)
	{
		Position1 = 0x150B27;
		string temp1("\xF3\x0F\x11\x82\x24", 5);
		code1fix = temp1;
	}
	if (ver == 442)
	{
		Position1 = 0x14EFA7;
		string temp1("\xF3\x0F\x11\x82\x24", 5);
		code1fix = temp1;
	}
	if (ver == 439)
	{
		Position1 = 0x14DABB;
		string temp1("\xF3\x0F\x11\x82\x24", 5);
		code1fix = temp1;
	}
	////////////////////////////////////////////////
	if (ver == 352)
	{
		Position1 = 0x14AC9B;
		string temp1("\xF3\x0F\x11\x82\x24", 5);
		code1fix = temp1;
	}
	if (ver == 349)
	{
		Position1 = 0x14ADCB;
		string temp1("\xF3\x0F\x11\x82\x24", 5);
		code1fix = temp1;
	}
	if (ver == 342)
	{
		Position1 = 0x14937F;
		string temp1("\xF3\x0F\x11\x82\x24", 5);
		code1fix = temp1;
	}
	if (ver == 339)
	{
		Position1 = 0x147F9F;
		string temp1("\xF3\x0F\x11\x82\x24", 5);
		code1fix = temp1;
	}
	////////////////////////////////////////////////
	if (ver == 52)
	{
		Position1 = 0x11EEAD;
		string temp1("\x25\0\x41\0\0", 5);
		code1fix = temp1;
	}
	if (ver == 49)
	{
		Position1 = 0x11F14D;
		string temp1("\x25\0\x41\0\0", 5);
		code1fix = temp1;
	}
	if (ver == 42)
	{
		Position1 = 0x11DBAD;
		string temp1("\x25\0\x41\0\0", 5);
		code1fix = temp1;
	}
	if (ver == 39)
	{
		Position1 = 0x11CFED;
		string temp1("\x25\0\x41\0\0", 5);
		code1fix = temp1;
	}
	ChangeSTRINGValue(code1fix, Position1);
}