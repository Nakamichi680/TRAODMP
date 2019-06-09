#include "stdafx.h"
#include "MISC/Misc_Functions.h"
#include "PRO_SHARED/Pro_FIX.h"


void CM_Version_Enable()
{
	string Title = "##################Controls Mod Master Ver:";
	Title += CONTROLSMODVERSION;
	Title += "##################";
	float ver_float = stof(CONTROLSMODVERSION);
	string code1 = "fill";
	memcpy(&code1, &ver_float, 4);
	// Allocazione spazio per codice assembly
	Pro_Fix_Class exe = Pro_Fix_Allocate_space(code1.size(), Title);
	// Scrittura blocco 1
	ChangeSTRINGValue(code1, exe.EXE_offset);
}