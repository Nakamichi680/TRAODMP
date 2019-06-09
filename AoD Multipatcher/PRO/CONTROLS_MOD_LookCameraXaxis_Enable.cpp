#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void LookCameraXaxis_Enable()
{
	string Title = "#####################LookCameraXaxisFIX mod####################";
	if (ver == 452)
	{
		string code1("\x0F\xBE\x42\x15\xF3\x0F\x2A\xD8\xF3\x0F\x58\x1D\x88\xCA\x71\0", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x13D620;
		assembly.FromVirtual = 0x53D620;
		assembly.ReturnVirtual = 0x53D628;
		assembly.Gvar_pos.push_back(12);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x71CA88);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 449)
	{
		string code1("\x0F\xBE\x42\x15\xF3\x0F\x2A\xD8\xF3\x0F\x58\x1D\x88\xCA\x71\0", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x13D818;
		assembly.FromVirtual = 0x53D818;
		assembly.ReturnVirtual = 0x53D820;
		assembly.Gvar_pos.push_back(12);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x71BA48);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 442)
	{
		string code1("\x0F\xBE\x42\x15\xF3\x0F\x2A\xD8\xF3\x0F\x58\x1D\x88\xCA\x71\0", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x13BC98;
		assembly.FromVirtual = 0x53BC98;
		assembly.ReturnVirtual = 0x53BCA0;
		assembly.Gvar_pos.push_back(12);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6F3788);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 439)
	{
		string code1("\x0F\xBE\x42\x15\xF3\x0F\x2A\xD8\xF3\x0F\x58\x1D\x88\xCA\x71\0", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x13A7AC;
		assembly.FromVirtual = 0x53A7AC;
		assembly.ReturnVirtual = 0x53A7B4;
		assembly.Gvar_pos.push_back(12);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6E9788);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 352)
	{
		string code1("\x0F\xBE\x4A\x17\xF3\x0F\x2A\xD8\xF3\x0F\x58\x1D\x88\xCA\x71\0", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x137D1C;
		assembly.FromVirtual = 0x537D1C;
		assembly.ReturnVirtual = 0x537D24;
		assembly.Gvar_pos.push_back(12);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x70BA48);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 349)
	{
		string code1("\x0F\xBE\x4A\x17\xF3\x0F\x2A\xD8\xF3\x0F\x58\x1D\x88\xCA\x71\0", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x137F14;
		assembly.FromVirtual = 0x537F14;
		assembly.ReturnVirtual = 0x537F1C;
		assembly.Gvar_pos.push_back(12);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x70BA08);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 342)
	{
		string code1("\x0F\xBE\x4A\x17\xF3\x0F\x2A\xD8\xF3\x0F\x58\x1D\x88\xCA\x71\0", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x1364C8;
		assembly.FromVirtual = 0x5364C8;
		assembly.ReturnVirtual = 0x5364D0;
		assembly.Gvar_pos.push_back(12);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6E3748);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 339)
	{
		string code1("\x0F\xBE\x4A\x17\xF3\x0F\x2A\xD8\xF3\x0F\x58\x1D\x88\xCA\x71\0", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x1350E8;
		assembly.FromVirtual = 0x5350E8;
		assembly.ReturnVirtual = 0x5350F0;
		assembly.Gvar_pos.push_back(12);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6D9708);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 52)
	{
		string code1("\x89\x54\x24\x18\xDB\x44\x24\x1C\xD8\x05\x90\x22\x6C\0", 14);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x10D6E9;
		assembly.FromVirtual = 0x50D6E9;
		assembly.ReturnVirtual = 0x50D6F1;
		assembly.Gvar_pos.push_back(10);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6C2290);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 49)
	{
		string code1("\x89\x54\x24\x18\xDB\x44\x24\x1C\xD8\x05\x90\x22\x6C\0", 14);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x10DA19;
		assembly.FromVirtual = 0x50DA19;
		assembly.ReturnVirtual = 0x50DA21;
		assembly.Gvar_pos.push_back(10);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6C13D0);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 42)
	{
		string code1("\x89\x54\x24\x18\xDB\x44\x24\x1C\xD8\x05\x90\x22\x6C\0", 14);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x10C4A9;
		assembly.FromVirtual = 0x50C4A9;
		assembly.ReturnVirtual = 0x50C4B1;
		assembly.Gvar_pos.push_back(10);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6A4A60);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 39)
	{
		string code1("\x89\x54\x24\x18\xDB\x44\x24\x1C\xD8\x05\x90\x22\x6C\0", 14);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_Camera_LookCamera)
		assembly.code = code1;
		assembly.From = 0x10B449;
		assembly.FromVirtual = 0x50B449;
		assembly.ReturnVirtual = 0x50B451;
		assembly.Gvar_pos.push_back(10);						// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x68E190);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
}