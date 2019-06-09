#include "stdafx.h"
#include "MISC/Misc_Functions.h"
#include "PRO_SHARED/Pro_FIX.h"


void Font_Enable()
{
	string Title = "#######################External Font Mod#######################";
	string code1("\x2E\x5C\x44\x61\x74\x61\x5C\x45\x66\x66\x65\x63\x74\x73\x5C\x46\x6F\x6E\x74\x2E\x74\x67\x61\0", 24);
	// Allocazione spazio per codice assembly
	Pro_Fix_Class exe = Pro_Fix_Allocate_space(code1.size(), Title);
	// Conversione offset codice assembly in stringa
	string offset = "fill";
	memcpy(&offset, &exe.Virtual_offset, 4);
	// Scrittura blocco 1 (".\Data\Effects\Font.tga")
	ChangeSTRINGValue(code1, exe.EXE_offset);

	size_t Position;
	string part1, part2;
	if (ver == 452)
	{
		Position = 0x9953;
		string temp1("\x68", 1);
		string temp2("\x8B\x45\x9C\x8D\x88\x04\x32\0\0\x50\xE8\x69\x48\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 32);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 449)
	{
		Position = 0x9953;
		string temp1("\x68", 1);
		string temp2("\x8B\x45\x9C\x8D\x88\x04\x32\0\0\x50\xE8\x59\x48\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 32);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 442)
	{
		Position = 0x9547;
		string temp1("\x68", 1);
		string temp2("\x8B\x45\x9C\x8D\x88\x04\x32\0\0\x50\xE8\x1D\x48\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 32);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 439)
	{
		Position = 0x953F;
		string temp1("\x68", 1);
		string temp2("\x8B\x45\x9C\x8D\x88\x04\x32\0\0\x50\xE8\xF5\x47\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 32);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 352)
	{
		Position = 0x9687;
		string temp1("\x8B\x45\x9C\x8D\x88\x04\x32\0\0\x68", 10);
		string temp2("\x50\xE8\x89\x48\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 23);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 349)
	{
		Position = 0x9637;
		string temp1("\x8B\x45\x9C\x8D\x88\x04\x32\0\0\x68", 10);
		string temp2("\x50\xE8\x99\x48\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 23);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 342)
	{
		Position = 0x932B;
		string temp1("\x8B\x45\x9C\x8D\x88\x04\x32\0\0\x68", 10);
		string temp2("\x50\xE8\x29\x48\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 23);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 339)
	{
		Position = 0x931F;
		string temp1("\x8B\x45\x9C\x8D\x88\x04\x32\0\0\x68", 10);
		string temp2("\x50\xE8\x19\x48\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 23);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 52)
	{
		Position = 0x5255;
		string temp1("\x68", 1);
		string temp2("\x56\x8D\x8E\x04\x32\0\0\xE8\x9A\x64\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 25);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 49)
	{
		Position = 0x5255;
		string temp1("\x68", 1);
		string temp2("\x56\x8D\x8E\x04\x32\0\0\xE8\x7A\x64\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 25);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 42)
	{
		Position = 0x51B2;
		string temp1("\x68", 1);
		string temp2("\x56\x8D\x8E\x04\x32\0\0\xE8\xBD\x63\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 25);
		part1 = temp1;
		part2 = temp2;
	}
	if (ver == 39)
	{
		Position = 0x51B2;
		string temp1("\x68", 1);
		string temp2("\x56\x8D\x8E\x04\x32\0\0\xE8\xCD\x63\0\0\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90", 25);
		part1 = temp1;
		part2 = temp2;
	}
	string temp = EXEorig.substr(0, Position);
	temp += part1;
	temp += offset;
	temp += part2;
	temp += EXEorig.substr(Position + part1.size() + part2.size() + 4, string::npos);
	EXEorig = temp;
}