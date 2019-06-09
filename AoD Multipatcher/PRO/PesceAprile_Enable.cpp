#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void PesceAprile_Enable()
{
	string Title = "####################PS2 remastered effects#####################";
	if (ver == 452)
	{
		string code1("\x68\x4E\x3F\x9C\0\xE8\xDC\xCA\xAA\xFF\x41\x50\x52\x49\x4C\x20\x46\x4F\x4F\x4C\x21\x21\x21\x21\x21\x21\0", 27);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, lo scherzo si attiva quando si triggera l'effetto 7Eh)
		assembly.code = code1;
		assembly.From = 0xAD14E;
		assembly.FromVirtual = 0x4AD14E;
		assembly.ReturnVirtual = 0x4AD153;
		assembly.Gvar_pos.push_back(1);
		assembly.GvarVirtual_pos.push_back(exe.Virtual_offset + 10);
		assembly.ToRelocate_pos.push_back(6);
		assembly.AbsVirtual_pos.push_back(0x470A1C);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
}