#include "stdafx.h"


bool Main_menu_demo_Detect()						// Ritorna vero se la modifica è attiva
{
	size_t Position1, Position2;
	string check1 = "#####Main menu demo patch#####";
	string check2;
	if (ver == 452)	{	string temp("\x8B\x15\xA0\xC0\x7B\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 449)	{	string temp("\x8B\x15\x60\xB0\x7B\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 442)	{	string temp("\x8B\x15\x40\x2D\x79\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 439)	{	string temp("\x8B\x15\0\x8A\x78\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 352)	{	string temp("\x8B\x15\x60\xA7\x7A\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 349)	{	string temp("\x8B\x15\x20\xA7\x7A\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 342)	{	string temp("\x8B\x15\0\x24\x78\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 339)	{	string temp("\x8B\x15\x80\x80\x77\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 52)	{	string temp("\xA1\x68\x3E\x87\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}
	if (ver == 49)	{	string temp("\xA1\xA8\x2F\x87\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}
	if (ver == 42)	{	string temp("\xA1\x28\x63\x85\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}
	if (ver == 39)	{	string temp("\xA1\x28\xF7\x83\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}

	if ((Position1 = EXEorig.find(check1)) != std::string::npos && (Position2 = EXEorig.find(check2)) != std::string::npos)
		return true;
	else
		return false;
}