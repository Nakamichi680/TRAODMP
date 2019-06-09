#include "stdafx.h"
#include "MISC/concol.h"
#include "MISC/Misc_Functions.h"


int Detect_AspectRatio_status()						// Restituisce: 0 = Disabled, 1 = Diary-only, 2 = Full
{
	string orig_SetupRects, orig_mathGetPerspMatrix_PS2;

	/////////////////////////////	STRINGHE ORIGINALI
	if (ver == 452)
	{
		string temp1("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x59\x2D\x98\xE3\x93\0\x0F\x2F\x2D\x9C\xE3\x93\0", 22);
		string temp2("\xF3\x0F\x10\x05\x80\xFC\x80\0\x0F\x2F\x05\xB8\x0B\x95\0\xF3\x0F\x10\x0D\xC4\xFC\x80", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 449)
	{
		string temp1("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x59\x2D\xA0\xD3\x93\0\x0F\x2F\x2D\xA4\xD3\x93\0", 22);
		string temp2("\xF3\x0F\x10\x05\x40\xEC\x80\0\x0F\x2F\x05\x38\x01\x95\0\xF3\x0F\x10\x0D\x84\xEC\x80", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 442)
	{
		string temp1("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x59\x2D\xA0\x43\x91\0\x0F\x2F\x2D\xA4\x43\x91\0", 22);
		string temp2("\xF3\x0F\x10\x05\x20\x69\x7E\0\x0F\x2F\x05\x78\x69\x92\0\xF3\x0F\x10\x0D\x64\x69\x7E", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 439)
	{
		string temp1("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x59\x2D\xA0\xA3\x90\0\x0F\x2F\x2D\xA4\xA3\x90\0", 22);
		string temp2("\xF3\x0F\x10\x05\xE0\xC5\x7D\0\x0F\x2F\x05\x58\xC2\x91\0\xF3\x0F\x10\x0D\x24\xC6\x7D", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 352)
	{
		string temp1("\xF3\x0F\x59\x2D\x80\xC3\x92\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x84\xC3\x92", 22);
		string temp2("\xF3\x0F\x10\x05\x40\xE3\x7F\0\xF3\x0F\x10\x0D\x84\xE3\x7F\0\xF3\x0F\x11\x44\x24\x18", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 349)
	{
		string temp1("\xF3\x0F\x59\x2D\x88\xC3\x92\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x8C\xC3\x92", 22);
		string temp2("\xF3\x0F\x10\x05\0\xE3\x7F\0\xF3\x0F\x10\x0D\x44\xE3\x7F\0\xF3\x0F\x11\x44\x24\x18", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 342)
	{
		string temp1("\xF3\x0F\x59\x2D\x88\x43\x90\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x8C\x43\x90", 22);
		string temp2("\xF3\x0F\x10\x05\xE0\x5F\x7D\0\xF3\x0F\x10\x0D\x24\x60\x7D\0\xF3\x0F\x11\x44\x24\x18", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 339)
	{
		string temp1("\xF3\x0F\x59\x2D\x88\xA3\x8F\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x8C\xA3\x8F", 22);
		string temp2("\xF3\x0F\x10\x05\x60\xBC\x7C\0\xF3\x0F\x10\x0D\xA4\xBC\x7C\0\xF3\x0F\x11\x44\x24\x18", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 52)
	{
		string temp1("\xDA\x74\x24\x14\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDE\xC9\xD8\x0D\xF4\x93\x62\0", 22);
		string temp2("\xD9\x05\x7C\x23\x8B\0\xD8\x1D\x44\xC1\x62\0\xA1\x7C\x23\x8B\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\x74\xC2\x86\0\xD8\x0D\x40\xC1\x62\0\xD9\x05\x7C\x23\x8B", 49);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 49)
	{
		string temp1("\xDA\x74\x24\x14\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDE\xC9\xD8\x0D\xF4\x83\x62\0", 22);
		string temp2("\xD9\x05\xBC\x14\x8B\0\xD8\x1D\x44\xB1\x62\0\xA1\xBC\x14\x8B\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\xB4\xB3\x86\0\xD8\x0D\x40\xB1\x62\0\xD9\x05\xBC\x14\x8B", 49);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 42)
	{
		string temp1("\xDA\x74\x24\x14\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDE\xC9\xD8\x0D\xF4\xF3\x61\0", 22);
		string temp2("\xD9\x05\x3C\x48\x89\0\xD8\x1D\xB4\x20\x62\0\xA1\x3C\x48\x89\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\x34\xE7\x84\0\xD8\x0D\xB0\x20\x62\0\xD9\x05\x3C\x48\x89", 49);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	if (ver == 39)
	{
		string temp1("\xDA\x74\x24\x14\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDE\xC9\xD8\x0D\xC4\xE3\x60\0", 22);
		string temp2("\xD9\x05\x3C\xDC\x87\0\xD8\x1D\xBC\x0E\x61\0\xA1\x3C\xDC\x87\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\x24\x7B\x83\0\xD8\x0D\xB8\x0E\x61\0\xD9\x05\x3C\xDC\x87", 49);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
	}
	
	size_t Position;
	if ((Position = EXEorig.find(orig_SetupRects)) != std::string::npos && (Position = EXEorig.find(orig_mathGetPerspMatrix_PS2)) != std::string::npos)
		return 0;		// Se trova entrambe le stringhe originali la mod  Disabled
	if ((Position = EXEorig.find(orig_SetupRects)) != std::string::npos && (Position = EXEorig.find(orig_mathGetPerspMatrix_PS2)) == std::string::npos)
		return 1;		// Se trova solo la stringa SetupRects mentre mathGetPerspMatrix_PS2  assente significa che  attiva la mod Diary-only
	if ((Position = EXEorig.find(orig_SetupRects)) == std::string::npos && (Position = EXEorig.find(orig_mathGetPerspMatrix_PS2)) == std::string::npos)
		return 2;		// Se non trova nessuna delle stringhe originali significa che la mod  in modalit… Full
}


void Change_AspectRatio_status()
{
	string orig_SetupRects, orig_mathGetPerspMatrix_PS2, mod_SetupRects, mod_mathGetPerspMatrix_PS2;
	
	/////////////////////////////	STRINGHE ORIGINALI E MODIFICATE
	if (ver == 452)
	{
		string temp1("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x59\x2D\x98\xE3\x93\0\x0F\x2F\x2D\x9C\xE3\x93\0", 22);
		string temp2("\xF3\x0F\x10\x05\x80\xFC\x80\0\x0F\x2F\x05\xB8\x0B\x95\0\xF3\x0F\x10\x0D\xC4\xFC\x80", 22);
		string temp3("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x10\x2D\x9C\xE3\x93\0\x0F\x2F\x2D\x9C\xE3\x93\0", 22);
		string temp4("\xF3\x0F\x10\x05\xC8\x0B\x95\0\x0F\x2F\x05\xB8\x0B\x95\0\xF3\x0F\x10\x0D\xC4\xFC\x80", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 449)
	{
		string temp1("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x59\x2D\xA0\xD3\x93\0\x0F\x2F\x2D\xA4\xD3\x93\0", 22);
		string temp2("\xF3\x0F\x10\x05\x40\xEC\x80\0\x0F\x2F\x05\x38\x01\x95\0\xF3\x0F\x10\x0D\x84\xEC\x80", 22);
		string temp3("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x10\x2D\xA4\xD3\x93\0\x0F\x2F\x2D\xA4\xD3\x93\0", 22);
		string temp4("\xF3\x0F\x10\x05\x48\x01\x95\0\x0F\x2F\x05\x38\x01\x95\0\xF3\x0F\x10\x0D\x84\xEC\x80", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 442)
	{
		string temp1("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x59\x2D\xA0\x43\x91\0\x0F\x2F\x2D\xA4\x43\x91\0", 22);
		string temp2("\xF3\x0F\x10\x05\x20\x69\x7E\0\x0F\x2F\x05\x78\x69\x92\0\xF3\x0F\x10\x0D\x64\x69\x7E", 22);
		string temp3("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x10\x2D\xA4\x43\x91\0\x0F\x2F\x2D\xA4\x43\x91\0", 22);
		string temp4("\xF3\x0F\x10\x05\x88\x69\x92\0\x0F\x2F\x05\x78\x69\x92\0\xF3\x0F\x10\x0D\x64\x69\x7E", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 439)
	{
		string temp1("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x59\x2D\xA0\xA3\x90\0\x0F\x2F\x2D\xA4\xA3\x90\0", 22);
		string temp2("\xF3\x0F\x10\x05\xE0\xC5\x7D\0\x0F\x2F\x05\x58\xC2\x91\0\xF3\x0F\x10\x0D\x24\xC6\x7D", 22);
		string temp3("\x0F\x28\xD9\xF3\x0F\x59\xEC\xF3\x0F\x10\x2D\xA4\xA3\x90\0\x0F\x2F\x2D\xA4\xA3\x90\0", 22);
		string temp4("\xF3\x0F\x10\x05\x68\xC2\x91\0\x0F\x2F\x05\x58\xC2\x91\0\xF3\x0F\x10\x0D\x24\xC6\x7D", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 352)
	{
		string temp1("\xF3\x0F\x59\x2D\x80\xC3\x92\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x84\xC3\x92", 22);
		string temp2("\xF3\x0F\x10\x05\x40\xE3\x7F\0\xF3\x0F\x10\x0D\x84\xE3\x7F\0\xF3\x0F\x11\x44\x24\x18", 22);
		string temp3("\xF3\x0F\x10\x2D\x84\xC3\x92\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x84\xC3\x92", 22);
		string temp4("\xF3\x0F\x10\x05\xB8\xE9\x93\0\xF3\x0F\x10\x0D\x84\xE3\x7F\0\xF3\x0F\x11\x44\x24\x18", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 349)
	{
		string temp1("\xF3\x0F\x59\x2D\x88\xC3\x92\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x8C\xC3\x92", 22);
		string temp2("\xF3\x0F\x10\x05\0\xE3\x7F\0\xF3\x0F\x10\x0D\x44\xE3\x7F\0\xF3\x0F\x11\x44\x24\x18", 22);
		string temp3("\xF3\x0F\x10\x2D\x8C\xC3\x92\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x8C\xC3\x92", 22);
		string temp4("\xF3\x0F\x10\x05\x78\xEF\x93\0\xF3\x0F\x10\x0D\x44\xE3\x7F\0\xF3\x0F\x11\x44\x24\x18", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 342)
	{
		string temp1("\xF3\x0F\x59\x2D\x88\x43\x90\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x8C\x43\x90", 22);
		string temp2("\xF3\x0F\x10\x05\xE0\x5F\x7D\0\xF3\x0F\x10\x0D\x24\x60\x7D\0\xF3\x0F\x11\x44\x24\x18", 22);
		string temp3("\xF3\x0F\x10\x2D\x8C\x43\x90\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x8C\x43\x90", 22);
		string temp4("\xF3\x0F\x10\x05\xB8\x67\x91\0\xF3\x0F\x10\x0D\x24\x60\x7D\0\xF3\x0F\x11\x44\x24\x18", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 339)
	{
		string temp1("\xF3\x0F\x59\x2D\x88\xA3\x8F\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x8C\xA3\x8F", 22);
		string temp2("\xF3\x0F\x10\x05\x60\xBC\x7C\0\xF3\x0F\x10\x0D\xA4\xBC\x7C\0\xF3\x0F\x11\x44\x24\x18", 22);
		string temp3("\xF3\x0F\x10\x2D\x8C\xA3\x8F\0\xF3\x0F\x10\xD9\xF3\x0F\x10\xC2\x0F\x2F\x2D\x8C\xA3\x8F", 22);
		string temp4("\xF3\x0F\x10\x05\x98\xC0\x90\0\xF3\x0F\x10\x0D\xA4\xBC\x7C\0\xF3\x0F\x11\x44\x24\x18", 22);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 52)
	{
		string temp1("\xDA\x74\x24\x14\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDE\xC9\xD8\x0D\xF4\x93\x62\0", 22);
		string temp2("\xD9\x05\x7C\x23\x8B\0\xD8\x1D\x44\xC1\x62\0\xA1\x7C\x23\x8B\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\x74\xC2\x86\0\xD8\x0D\x40\xC1\x62\0\xD9\x05\x7C\x23\x8B", 49);
		string temp3("\xDD\xD8\x90\x90\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDD\xD8\xD9\x05\xF0\x93\x62\0", 22);
		string temp4("\xD9\x05\x38\xC1\x62\0\xD8\x1D\x44\xC1\x62\0\xA1\x38\xC1\x62\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\x74\xC2\x86\0\xD8\x0D\x40\xC1\x62\0\xD9\x05\x38\xC1\x62", 49);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 49)
	{
		string temp1("\xDA\x74\x24\x14\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDE\xC9\xD8\x0D\xF4\x83\x62\0", 22);
		string temp2("\xD9\x05\xBC\x14\x8B\0\xD8\x1D\x44\xB1\x62\0\xA1\xBC\x14\x8B\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\xB4\xB3\x86\0\xD8\x0D\x40\xB1\x62\0\xD9\x05\xBC\x14\x8B", 49);
		string temp3("\xDD\xD8\x90\x90\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDD\xD8\xD9\x05\xF0\x83\x62\0", 22);
		string temp4("\xD9\x05\x38\xB1\x62\0\xD8\x1D\x44\xB1\x62\0\xA1\x38\xB1\x62\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\xB4\xB3\x86\0\xD8\x0D\x40\xB1\x62\0\xD9\x05\x38\xB1\x62", 49);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 42)
	{
		string temp1("\xDA\x74\x24\x14\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDE\xC9\xD8\x0D\xF4\xF3\x61\0", 22);
		string temp2("\xD9\x05\x3C\x48\x89\0\xD8\x1D\xB4\x20\x62\0\xA1\x3C\x48\x89\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\x34\xE7\x84\0\xD8\x0D\xB0\x20\x62\0\xD9\x05\x3C\x48\x89", 49);
		string temp3("\xDD\xD8\x90\x90\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDD\xD8\xD9\x05\xF0\xF3\x61\0", 22);
		string temp4("\xD9\x05\xA8\x20\x62\0\xD8\x1D\xB4\x20\x62\0\xA1\xA8\x20\x62\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\x34\xE7\x84\0\xD8\x0D\xB0\x20\x62\0\xD9\x05\xA8\x20\x62", 49);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	if (ver == 39)
	{
		string temp1("\xDA\x74\x24\x14\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDE\xC9\xD8\x0D\xC4\xE3\x60\0", 22);
		string temp2("\xD9\x05\x3C\xDC\x87\0\xD8\x1D\xBC\x0E\x61\0\xA1\x3C\xDC\x87\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\x24\x7B\x83\0\xD8\x0D\xB8\x0E\x61\0\xD9\x05\x3C\xDC\x87", 49);
		string temp3("\xDD\xD8\x90\x90\x89\x54\x24\x14\x2B\xC1\x89\x44\x24\x10\xDD\xD8\xD9\x05\xC0\xE3\x60\0", 22);
		string temp4("\xD9\x05\xB0\x0E\x61\0\xD8\x1D\xBC\x0E\x61\0\xA1\xB0\x0E\x61\0\x89\x44\x24\x0C\xDF\xE0\x25\0\x41\0\0\x75\x0E\xDD\xD8\xD9\x05\x24\x7B\x83\0\xD8\x0D\xB8\x0E\x61\0\xD9\x05\xB0\x0E\x61", 49);
		orig_SetupRects = temp1;
		orig_mathGetPerspMatrix_PS2 = temp2;
		mod_SetupRects = temp3;
		mod_mathGetPerspMatrix_PS2 = temp4;
	}
	
	size_t Position;
	bool exit = false;														// Serve ad uscire dal menu
    char Selection;															// Serve per lo switch-case, accoglie l'input dell'utente da "userinput"
	int AspectRatio_status = Detect_AspectRatio_status();					// 0 = Disabled, 1 = Diary-only, 2 = Full
    string userinput, temp;
    do
    {
        system("cls");
		cout << " ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n"
				" บ                                                                                                                   บ\n"
				" บ" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "บ\n"
				" บ" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<white<< "                                                  ASPECT RATIO FIX                                                 " <<aqua<< "บ\n"
				" วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n"
				" บ                                                                                                                   บ\n"
				" บ   Since it was originally designed with 4:3 aspect ratio in mind, AoD suffers from some graphical glitches on     บ\n"
				" บ   modern widescreen monitors. Those glitches include black borders in loading screens, badly scaled captions      บ\n"
				" บ   and images of Von Croy's notebook and HUD elements in the wrong position.                                       บ\n"
				" บ   This mod will address these bugs with two different approaches.                                                 บ\n"
				" บ                                                                                                                   บ\n"		
				" บ   Choose one of the following options:                                                                            บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         1 )  FULL                                                                                                 บ\n"
				" บ               This option will fix all the aspect ratio related bugs but with a drawback: HUD elements, menus,    บ\n"
				" บ               captions and images of Von Croy's notebook will be streched. The wider the screen, the worse        บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         2 )  NOTEBOOK                                                                                             บ\n"
				" บ               This option will address Von Croy's notebook only. Images and captions will be properly scaled      บ\n"
				" บ               and the notebook won't be stretched                                                                 บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         3 )  DISABLED                                                                                             บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<pink<< "   Current status: ";
		if (AspectRatio_status == 0)
			cout << "Disabled                                                                                        " <<aqua<< "บ\n";
		if (AspectRatio_status == 1)
			cout << "Notebook                                                                                        " <<aqua<< "บ\n";
		if (AspectRatio_status == 2)
			cout << "Full                                                                                            " <<aqua<< "บ\n";
		cout << " ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n"
				"\n Select an option and press Enter [" <<white<< "1-3" <<aqua<< "]: " <<white;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		if (userinput.length() > 1)
			Selection = '0';
		else
			Selection = userinput.at(0);
		switch (Selection)
		{
		case '1':		///////////////////////////////////////////////////////////////////		Full
			if ((Position = EXEorig.find(orig_SetupRects)) != std::string::npos)
				ChangeSTRINGValue(mod_SetupRects, Position);
			if ((Position = EXEorig.find(orig_mathGetPerspMatrix_PS2)) != std::string::npos)
				ChangeSTRINGValue(mod_mathGetPerspMatrix_PS2, Position);
			exit = true;
			break;
		case '2':		///////////////////////////////////////////////////////////////////		Diary-only
			if ((Position = EXEorig.find(mod_SetupRects)) != std::string::npos)
				ChangeSTRINGValue(orig_SetupRects, Position);
			if ((Position = EXEorig.find(orig_mathGetPerspMatrix_PS2)) != std::string::npos)
				ChangeSTRINGValue(mod_mathGetPerspMatrix_PS2, Position);
			exit = true;
			break;
		case '3':		///////////////////////////////////////////////////////////////////		Disabled
			if ((Position = EXEorig.find(mod_SetupRects)) != std::string::npos)
				ChangeSTRINGValue(orig_SetupRects, Position);
			if ((Position = EXEorig.find(mod_mathGetPerspMatrix_PS2)) != std::string::npos)
				ChangeSTRINGValue(orig_mathGetPerspMatrix_PS2, Position);
			exit = true;
		}
	} while (!exit);
}