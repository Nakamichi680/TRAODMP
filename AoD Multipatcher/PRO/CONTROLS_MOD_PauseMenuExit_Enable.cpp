#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void PauseMenuExit_Enable()
{
	string Title = "#######################PauseMenuExit mod#######################";
	if (ver == 452)
	{
		string code1("\x8B\x15\x84\xBA\x93\0\xF7\xC2\0\x08\x02\0\x74\x0C\xC7\x05\xD4\xAB\x7B\0\x01\0\0\0\xB0\x01\x84\xC0\x0F\x84\x6E\x1E\xBC\xFF", 34);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x18614A;
		assembly.FromVirtual = 0x58614A;
		assembly.ReturnVirtual = 0x586152;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 16});									// _gsysController + 4, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x93BA84, 0x7BABD4});		// _gsysController + 4, _ginvFinished
		assembly.ToRelocate_pos.push_back(30);
		assembly.AbsVirtual_pos.push_back(0x5860B0);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 449)
	{
		string code1("\x8B\x15\x84\xBA\x93\0\xF7\xC2\0\x08\x02\0\x74\x0C\xC7\x05\xD4\xAB\x7B\0\x01\0\0\0\xB0\x01\x84\xC0\x0F\x84\x6E\x1E\xBC\xFF", 34);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x1859A2;
		assembly.FromVirtual = 0x5859A2;
		assembly.ReturnVirtual = 0x5859AA;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 16});									// _gsysController + 4, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x93AA44, 0x7B9B94});		// _gsysController + 4, _ginvFinished
		assembly.ToRelocate_pos.push_back(30);
		assembly.AbsVirtual_pos.push_back(0x585908);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 442)
	{
		string code1("\x8B\x15\x84\xBA\x93\0\xF7\xC2\0\x08\x02\0\x74\x0C\xC7\x05\xD4\xAB\x7B\0\x01\0\0\0\xB0\x01\x84\xC0\x0F\x84\x6E\x1E\xBC\xFF", 34);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x183B9E;
		assembly.FromVirtual = 0x583B9E;
		assembly.ReturnVirtual = 0x583BA6;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 16});									// _gsysController + 4, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x9124A4, 0x791874});		// _gsysController + 4, _ginvFinished
		assembly.ToRelocate_pos.push_back(30);
		assembly.AbsVirtual_pos.push_back(0x583B04);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 439)
	{
		string code1("\x8B\x15\x84\xBA\x93\0\xF7\xC2\0\x08\x02\0\x74\x0C\xC7\x05\xD4\xAB\x7B\0\x01\0\0\0\xB0\x01\x84\xC0\x0F\x84\x6E\x1E\xBC\xFF", 34);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x1826B2;
		assembly.FromVirtual = 0x5826B2;
		assembly.ReturnVirtual = 0x5826BA;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 16});									// _gsysController + 4, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x908164, 0x787534});		// _gsysController + 4, _ginvFinished
		assembly.ToRelocate_pos.push_back(30);
		assembly.AbsVirtual_pos.push_back(0x582618);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 352)
	{
		string code1("\x8B\x15\x84\xBA\x93\0\xF7\xC2\0\x08\x02\0\x74\x0C\xC7\x05\xD4\xAB\x7B\0\x01\0\0\0\xB0\x01\x84\xC0\x0F\x84\x6E\x1E\xBC\xFF", 34);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x17FD06;
		assembly.FromVirtual = 0x57FD06;
		assembly.ReturnVirtual = 0x57FD0E;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 16});									// _gsysController + 4, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x92A144, 0x7A9274});		// _gsysController + 4, _ginvFinished
		assembly.ToRelocate_pos.push_back(30);
		assembly.AbsVirtual_pos.push_back(0x57FC6C);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 349)
	{
		string code1("\x8B\x15\x84\xBA\x93\0\xF7\xC2\0\x08\x02\0\x74\x0C\xC7\x05\xD4\xAB\x7B\0\x01\0\0\0\xB0\x01\x84\xC0\x0F\x84\x6E\x1E\xBC\xFF", 34);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x17F58A;
		assembly.FromVirtual = 0x57F58A;
		assembly.ReturnVirtual = 0x57F592;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 16});									// _gsysController + 4, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x92A104, 0x7A9234});		// _gsysController + 4, _ginvFinished
		assembly.ToRelocate_pos.push_back(30);
		assembly.AbsVirtual_pos.push_back(0x57F4F0);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 342)
	{
		string code1("\x8B\x15\x84\xBA\x93\0\xF7\xC2\0\x08\x02\0\x74\x0C\xC7\x05\xD4\xAB\x7B\0\x01\0\0\0\xB0\x01\x84\xC0\x0F\x84\x6E\x1E\xBC\xFF", 34);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x17D8BE;
		assembly.FromVirtual = 0x57D8BE;
		assembly.ReturnVirtual = 0x57D8C6;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 16});									// _gsysController + 4, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x901B64, 0x780F14});		// _gsysController + 4, _ginvFinished
		assembly.ToRelocate_pos.push_back(30);
		assembly.AbsVirtual_pos.push_back(0x57D824);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 339)
	{
		string code1("\x8B\x15\x84\xBA\x93\0\xF7\xC2\0\x08\x02\0\x74\x0C\xC7\x05\xD4\xAB\x7B\0\x01\0\0\0\xB0\x01\x84\xC0\x0F\x84\x6E\x1E\xBC\xFF", 34);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x17C4D6;
		assembly.FromVirtual = 0x57C4D6;
		assembly.ReturnVirtual = 0x57C4DE;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 16});									// _gsysController + 4, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x8F77E4, 0x776B94});		// _gsysController + 4, _ginvFinished
		assembly.ToRelocate_pos.push_back(30);
		assembly.AbsVirtual_pos.push_back(0x57C43C);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 52)
	{
		string code1("\xF7\x05\x0C\x22\x6C\0\0\x08\x02\0\x74\x07\xC6\x05\xBB\x29\x87\0\x01\x38\x1D\xBB\x29\x87\0", 25);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x1516A3;
		assembly.FromVirtual = 0x5516A3;
		assembly.ReturnVirtual = 0x5516A9;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 14, 21});										// _gsysController + 4, _ginvFinished, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x6C220C, 0x8729BB, 0x8729BB});	// _gsysController + 4, _ginvFinished, _ginvFinished
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 49)
	{
		string code1("\xF7\x05\x0C\x22\x6C\0\0\x08\x02\0\x74\x07\xC6\x05\xBB\x29\x87\0\x01\x38\x1D\xBB\x29\x87\0", 25);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x151093;
		assembly.FromVirtual = 0x551093;
		assembly.ReturnVirtual = 0x551099;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 14, 21});										// _gsysController + 4, _ginvFinished, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x6C134C, 0x871AFB, 0x871AFB});	// _gsysController + 4, _ginvFinished, _ginvFinished
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 42)
	{
		string code1("\xF7\x05\x0C\x22\x6C\0\0\x08\x02\0\x74\x07\xC6\x05\xBB\x29\x87\0\x01\x38\x1D\xBB\x29\x87\0", 25);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x14F893;
		assembly.FromVirtual = 0x54F893;
		assembly.ReturnVirtual = 0x54F899;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 14, 21});										// _gsysController + 4, _ginvFinished, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x6A49DC, 0x854E7F, 0x854E7F});	// _gsysController + 4, _ginvFinished, _ginvFinished
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 39)
	{
		string code1("\xF7\x05\x0C\x22\x6C\0\0\x08\x02\0\x74\x07\xC6\x05\xBB\x29\x87\0\x01\x38\x1D\xBB\x29\x87\0", 25);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_invPauseMenu)
		assembly.code = code1;
		assembly.From = 0x14F413;
		assembly.FromVirtual = 0x54F413;
		assembly.ReturnVirtual = 0x54F419;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {2, 14, 21});										// _gsysController + 4, _ginvFinished, _ginvFinished
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x68E10C, 0x83E26B, 0x83E26B});	// _gsysController + 4, _ginvFinished, _ginvFinished
		exe = Pro_Fix_Write_code(exe, assembly);
	}
}