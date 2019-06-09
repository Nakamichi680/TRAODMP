#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void ZoomyCamXaxis_Enable()
{
	string Title = "######################ZoomyCamXaxisFIX mod#####################";
	if (ver == 452)
	{
		string code1("\xF3\x0F\x2A\xCA\xF3\x0F\x58\x0D\x88\xCA\x71\0\xF3\x0F\x59\xC8", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0x115F8A;
		assembly.FromVirtual = 0x515F8A;
		assembly.ReturnVirtual = 0x515F92;
		assembly.Gvar_pos.push_back(8);							// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x71CA88);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 449)
	{
		string code1("\xF3\x0F\x2A\xCA\xF3\x0F\x58\x0D\x88\xCA\x71\0\xF3\x0F\x59\xC8", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0x1161DE;
		assembly.FromVirtual = 0x5161DE;
		assembly.ReturnVirtual = 0x5161E6;
		assembly.Gvar_pos.push_back(8);							// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x71BA48);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 442)
	{
		string code1("\xF3\x0F\x2A\xCA\xF3\x0F\x58\x0D\x88\xCA\x71\0\xF3\x0F\x59\xC8", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0x11462E;
		assembly.FromVirtual = 0x51462E;
		assembly.ReturnVirtual = 0x514636;
		assembly.Gvar_pos.push_back(8);							// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6F3788);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 439)
	{
		string code1("\xF3\x0F\x2A\xCA\xF3\x0F\x58\x0D\x88\xCA\x71\0\xF3\x0F\x59\xC8", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0x113136;
		assembly.FromVirtual = 0x513136;
		assembly.ReturnVirtual = 0x51313E;
		assembly.Gvar_pos.push_back(8);							// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6E9788);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 352)
	{
		string code1("\xF3\x0F\x2A\xCA\xF3\x0F\x58\x0D\x88\xCA\x71\0\xF3\x0F\x59\xC8", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0x110E51;
		assembly.FromVirtual = 0x510E51;
		assembly.ReturnVirtual = 0x510E59;
		assembly.Gvar_pos.push_back(8);							// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x70BA48);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 349)
	{
		string code1("\xF3\x0F\x2A\xCA\xF3\x0F\x58\x0D\x88\xCA\x71\0\xF3\x0F\x59\xC8", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0x1110B1;
		assembly.FromVirtual = 0x5110B1;
		assembly.ReturnVirtual = 0x5110B9;
		assembly.Gvar_pos.push_back(8);							// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x70BA08);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 342)
	{
		string code1("\xF3\x0F\x2A\xCA\xF3\x0F\x58\x0D\x88\xCA\x71\0\xF3\x0F\x59\xC8", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0x10F619;
		assembly.FromVirtual = 0x50F619;
		assembly.ReturnVirtual = 0x50F621;
		assembly.Gvar_pos.push_back(8);							// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6E3748);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 339)
	{
		string code1("\xF3\x0F\x2A\xCA\xF3\x0F\x58\x0D\x88\xCA\x71\0\xF3\x0F\x59\xC8", 16);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0x10E239;
		assembly.FromVirtual = 0x50E239;
		assembly.ReturnVirtual = 0x50E241;
		assembly.Gvar_pos.push_back(8);							// _gsysMouseX
		assembly.GvarVirtual_pos.push_back(0x6D9708);			// _gsysMouseX
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 52)
	{
		string code1("\xD8\x05\x90\x22\x6C\0\xD8\x0D\xB0\xC4\x62\0", 12);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0xE81FA;
		assembly.FromVirtual = 0x4E81FA;
		assembly.ReturnVirtual = 0x4E8200;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 8});
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x6C2290, 0X62C4B0});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 49)
	{
		string code1("\xD8\x05\x90\x22\x6C\0\xD8\x0D\xB0\xC4\x62\0", 12);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0xE855A;
		assembly.FromVirtual = 0x4E855A;
		assembly.ReturnVirtual = 0x4E8560;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 8});
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x6C13D0, 0X62B4B0});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 42)
	{
		string code1("\xD8\x05\x90\x22\x6C\0\xD8\x0D\xB0\xC4\x62\0", 12);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0xE6FEA;
		assembly.FromVirtual = 0x4E6FEA;
		assembly.ReturnVirtual = 0x4E6FF0;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 8});
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x6A4A60, 0X622420});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 39)
	{
		string code1("\xD8\x05\x90\x22\x6C\0\xD8\x0D\xB0\xC4\x62\0", 12);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (mapUpdateZoomyCamAMX)
		assembly.code = code1;
		assembly.From = 0xE5E4A;
		assembly.FromVirtual = 0x4E5E4A;
		assembly.ReturnVirtual = 0x4E5E50;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 8});
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x68E190, 0X611228});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
}