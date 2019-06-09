#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void Main_menu_demo_Enable()
{
	string Title = "#####################Main menu demo patch######################";
	if (ver == 452)
	{
		string code1("\xA1\xD3\x42\x9C\0\x85\xC0\x74\x1A\x83\xF8\x03\xB0\0\x0F\x85\xC6\x07\xBC\xFF\xA3\xD3\x42\x9C\0\xB8\x83\0\0\0\xE9\xB7\x07\xBC\xFF\x8B\x15\xA0\xC0\x7B\0\x8D\x4A\x01\x81\xFA\x10\x0E\0\0\x7E\x18\xBA\x01\0\0\0\x89\x15\xD3\x42\x9C\0\x31\xD2\x89\x15\xA0\xC0\x7B\0\xE9\x8D\x07\xBC\xFF\x89\x0D\xA0\xC0\x7B\0",82);
		string code2("\xA1\xD3\x42\x9C\0\x85\xC0\x75\x0C\x0F\xB6\x05\0\x6B\x7B\0\xE9\x7C\x01\xBC\xFF\x83\xF8\x01\x75\x19\xC7\x05\x38\x6F\x76\0\xFC\0\0\0\x83\xC0\x01\xA3\xD3\x42\x9C\0\x31\xFF\xE9\x0C\x03\xBC\xFF\x0F\xBE\x05\x38\x6F\x76\0\xBA\x02\0\0\0\xBF\x03\0\0\0\x83\xF8\0\x0F\x44\xD7\x89\x15\xD3\x42\x9C\0\x31\xFF", 82);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x184969;
		assembly.FromVirtual = 0x584969;
		assembly.ReturnVirtual = 0x58498D;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(59);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(16);
		assembly.AbsVirtual_pos.push_back(0x58498D);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x58498D);
		assembly.ToRelocate_pos.push_back(72);
		assembly.AbsVirtual_pos.push_back(0x58498D);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x1842C5;
		assembly.FromVirtual = 0x5842C5;
		assembly.ReturnVirtual = 0x58447A;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(40);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(76);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x5842CC);
		assembly.ToRelocate_pos.push_back(47);
		assembly.AbsVirtual_pos.push_back(0x58447A);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 449)
	{
		string code1("\xA1\xD3\x42\x9C\0\x85\xC0\x74\x1A\x83\xF8\x03\xB0\0\x0F\x85\xC6\x07\xBC\xFF\xA3\xD3\x42\x9C\0\xB8\x83\0\0\0\xE9\xB7\x07\xBC\xFF\x8B\x15\x60\xB0\x7B\0\x8D\x4A\x01\x81\xFA\x10\x0E\0\0\x7E\x18\xBA\x01\0\0\0\x89\x15\xD3\x42\x9C\0\x31\xD2\x89\x15\x60\xB0\x7B\0\xE9\x8D\x07\xBC\xFF\x89\x0D\x60\xB0\x7B\0",82);
		string code2("\xA1\xD3\x42\x9C\0\x85\xC0\x75\x0C\x0F\xB6\x05\xBC\x5A\x7B\0\xE9\x7C\x01\xBC\xFF\x83\xF8\x01\x75\x19\xC7\x05\xF8\x5E\x76\0\xFC\0\0\0\x83\xC0\x01\xA3\xD3\x42\x9C\0\x31\xFF\xE9\x0C\x03\xBC\xFF\x0F\xBE\x05\xF8\x5E\x76\0\xBA\x02\0\0\0\xBF\x03\0\0\0\x83\xF8\0\x0F\x44\xD7\x89\x15\xD3\x42\x9C\0\x31\xFF", 82);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x1841C1;
		assembly.FromVirtual = 0x5841C1;
		assembly.ReturnVirtual = 0x5841E5;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(59);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(16);
		assembly.AbsVirtual_pos.push_back(0x5841E5);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x5841E5);
		assembly.ToRelocate_pos.push_back(72);
		assembly.AbsVirtual_pos.push_back(0x5841E5);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x183B1D;
		assembly.FromVirtual = 0x583B1D;
		assembly.ReturnVirtual = 0x583CD2;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(40);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(76);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x583B24);
		assembly.ToRelocate_pos.push_back(47);
		assembly.AbsVirtual_pos.push_back(0x583CD2);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 442)
	{
		string code1("\xA1\xD3\x42\x9C\0\x85\xC0\x74\x1A\x83\xF8\x03\xB0\0\x0F\x85\xC6\x07\xBC\xFF\xA3\xD3\x42\x9C\0\xB8\x83\0\0\0\xE9\xB7\x07\xBC\xFF\x8B\x15\x40\x2D\x79\0\x8D\x4A\x01\x81\xFA\x10\x0E\0\0\x7E\x18\xBA\x01\0\0\0\x89\x15\xD3\x42\x9C\0\x31\xD2\x89\x15\x40\x2D\x79\0\xE9\x8D\x07\xBC\xFF\x89\x0D\x40\x2D\x79\0",82);
		string code2("\xA1\xD3\x42\x9C\0\x85\xC0\x75\x0C\x0F\xB6\x05\x9C\xD7\x78\0\xE9\x7C\x01\xBC\xFF\x83\xF8\x01\x75\x19\xC7\x05\x38\xDC\x73\0\xFC\0\0\0\x83\xC0\x01\xA3\xD3\x42\x9C\0\x31\xFF\xE9\x0C\x03\xBC\xFF\x0F\xBE\x05\x38\xDC\x73\0\xBA\x02\0\0\0\xBF\x03\0\0\0\x83\xF8\0\x0F\x44\xD7\x89\x15\xD3\x42\x9C\0\x31\xFF", 82);

		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x1823BD;
		assembly.FromVirtual = 0x5823BD;
		assembly.ReturnVirtual = 0x5823E1;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(59);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(16);
		assembly.AbsVirtual_pos.push_back(0x5823E1);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x5823E1);
		assembly.ToRelocate_pos.push_back(72);
		assembly.AbsVirtual_pos.push_back(0x5823E1);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x181D19;
		assembly.FromVirtual = 0x581D19;
		assembly.ReturnVirtual = 0x581ECE;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(40);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(76);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x581D20);
		assembly.ToRelocate_pos.push_back(47);
		assembly.AbsVirtual_pos.push_back(0x581ECE);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 439)
	{
		string code1("\xA1\xD3\x42\x9C\0\x85\xC0\x74\x1A\x83\xF8\x03\xB0\0\x0F\x85\xC6\x07\xBC\xFF\xA3\xD3\x42\x9C\0\xB8\x83\0\0\0\xE9\xB7\x07\xBC\xFF\x8B\x15\0\x8A\x78\0\x8D\x4A\x01\x81\xFA\x10\x0E\0\0\x7E\x18\xBA\x01\0\0\0\x89\x15\xD3\x42\x9C\0\x31\xD2\x89\x15\0\x8A\x78\0\xE9\x8D\x07\xBC\xFF\x89\x0D\0\x8A\x78\0",82);
		string code2("\xA1\xD3\x42\x9C\0\x85\xC0\x75\x0C\x0F\xB6\x05\x5C\x34\x78\0\xE9\x7C\x01\xBC\xFF\x83\xF8\x01\x75\x19\xC7\x05\x38\x3C\x73\0\xFC\0\0\0\x83\xC0\x01\xA3\xD3\x42\x9C\0\x31\xFF\xE9\x0C\x03\xBC\xFF\x0F\xBE\x05\x38\x3C\x73\0\xBA\x02\0\0\0\xBF\x03\0\0\0\x83\xF8\0\x0F\x44\xD7\x89\x15\xD3\x42\x9C\0\x31\xFF", 82);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x180ED1;
		assembly.FromVirtual = 0x580ED1;
		assembly.ReturnVirtual = 0x580EF5;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(59);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(16);
		assembly.AbsVirtual_pos.push_back(0x580EF5);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x580EF5);
		assembly.ToRelocate_pos.push_back(72);
		assembly.AbsVirtual_pos.push_back(0x580EF5);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x18082D;
		assembly.FromVirtual = 0x58082D;
		assembly.ReturnVirtual = 0x5809E2;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(40);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(76);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x580834);
		assembly.ToRelocate_pos.push_back(47);
		assembly.AbsVirtual_pos.push_back(0x5809E2);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 352)
	{
		string code1("\xA1\xD3\x42\x9C\0\x85\xC0\x74\x1A\x83\xF8\x03\xB0\0\x0F\x85\xC6\x07\xBC\xFF\xA3\xD3\x42\x9C\0\xB8\x83\0\0\0\xE9\xB7\x07\xBC\xFF\x8B\x15\x60\xA7\x7A\0\x8D\x4A\x01\x81\xFA\x10\x0E\0\0\x7E\x18\xBA\x01\0\0\0\x89\x15\xD3\x42\x9C\0\x31\xD2\x89\x15\x60\xA7\x7A\0\xE9\x8D\x07\xBC\xFF\x89\x0D\x60\xA7\x7A\0",82);
		string code2("\xA1\x70\xDD\x73\0\x85\xC0\x75\x0E\x31\xDB\x0F\xB6\x05\xC0\x51\x7A\0\xE9\xAF\x02\xE4\xFF\x83\xF8\x01\x75\x14\xC6\x05\xF8\x5D\x75\0\xFC\x40\xA3\x70\xDD\x73\0\x31\xDB\xE9\x3F\x04\xE4\xFF\xBB\x03\0\0\0\x83\x3D\xF8\x5D\x75\0\0\x0F\x44\xC3\xA3\x70\xDD\x73\0\x31\xDB", 70);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x17E535;
		assembly.FromVirtual = 0x57E535;
		assembly.ReturnVirtual = 0x57E559;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(59);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(16);
		assembly.AbsVirtual_pos.push_back(0x57E559);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x57E559);
		assembly.ToRelocate_pos.push_back(72);
		assembly.AbsVirtual_pos.push_back(0x57E559);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x17DE95;
		assembly.FromVirtual = 0x57DE95;
		assembly.ReturnVirtual = 0x57E047;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(37);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(64);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(19);
		assembly.AbsVirtual_pos.push_back(0x57DE9E);
		assembly.ToRelocate_pos.push_back(44);
		assembly.AbsVirtual_pos.push_back(0x57E047);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 349)
	{
		string code1("\xA1\xD3\x42\x9C\0\x85\xC0\x74\x1A\x83\xF8\x03\xB0\0\x0F\x85\xC6\x07\xBC\xFF\xA3\xD3\x42\x9C\0\xB8\x83\0\0\0\xE9\xB7\x07\xBC\xFF\x8B\x15\x20\xA7\x7A\0\x8D\x4A\x01\x81\xFA\x10\x0E\0\0\x7E\x18\xBA\x01\0\0\0\x89\x15\xD3\x42\x9C\0\x31\xD2\x89\x15\x20\xA7\x7A\0\xE9\x8D\x07\xBC\xFF\x89\x0D\x20\xA7\x7A\0",82);
		string code2("\xA1\x70\xDD\x73\0\x85\xC0\x75\x0E\x31\xDB\x0F\xB6\x05\x7C\x51\x7A\0\xE9\xAF\x02\xE4\xFF\x83\xF8\x01\x75\x14\xC6\x05\xB8\x5D\x75\0\xFC\x40\xA3\x70\xDD\x73\0\x31\xDB\xE9\x3F\x04\xE4\xFF\xBB\x03\0\0\0\x83\x3D\xB8\x5D\x75\0\0\x0F\x44\xC3\xA3\x70\xDD\x73\0\x31\xDB", 70);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x17DDB9;
		assembly.FromVirtual = 0x57DDB9;
		assembly.ReturnVirtual = 0x57DDDD;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(59);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(16);
		assembly.AbsVirtual_pos.push_back(0x57DDDD);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x57DDDD);
		assembly.ToRelocate_pos.push_back(72);
		assembly.AbsVirtual_pos.push_back(0x57DDDD);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x17D719;
		assembly.FromVirtual = 0x57D719;
		assembly.ReturnVirtual = 0x57D8CB;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(37);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(64);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(19);
		assembly.AbsVirtual_pos.push_back(0x57D722);
		assembly.ToRelocate_pos.push_back(44);
		assembly.AbsVirtual_pos.push_back(0x57D8CB);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 342)
	{
		string code1("\xA1\xD3\x42\x9C\0\x85\xC0\x74\x1A\x83\xF8\x03\xB0\0\x0F\x85\xC6\x07\xBC\xFF\xA3\xD3\x42\x9C\0\xB8\x83\0\0\0\xE9\xB7\x07\xBC\xFF\x8B\x15\0\x24\x78\0\x8D\x4A\x01\x81\xFA\x10\x0E\0\0\x7E\x18\xBA\x01\0\0\0\x89\x15\xD3\x42\x9C\0\x31\xD2\x89\x15\0\x24\x78\0\xE9\x8D\x07\xBC\xFF\x89\x0D\0\x24\x78\0",82);
		string code2("\xA1\x70\xDD\x73\0\x85\xC0\x75\x0E\x31\xDB\x0F\xB6\x05\x5C\xCE\x77\0\xE9\xAF\x02\xE4\xFF\x83\xF8\x01\x75\x14\xC6\x05\xF8\xDA\x72\0\xFC\x40\xA3\x70\xDD\x73\0\x31\xDB\xE9\x3F\x04\xE4\xFF\xBB\x03\0\0\0\x83\x3D\xF8\xDA\x72\0\0\x0F\x44\xC3\xA3\x70\xDD\x73\0\x31\xDB", 70);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x17C0ED;
		assembly.FromVirtual = 0x57C0ED;
		assembly.ReturnVirtual = 0x57C111;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(59);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(16);
		assembly.AbsVirtual_pos.push_back(0x57C111);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x57C111);
		assembly.ToRelocate_pos.push_back(72);
		assembly.AbsVirtual_pos.push_back(0x57C111);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x17BA4D;
		assembly.FromVirtual = 0x57BA4D;
		assembly.ReturnVirtual = 0x57BBFF;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(37);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(64);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(19);
		assembly.AbsVirtual_pos.push_back(0x57BA56);
		assembly.ToRelocate_pos.push_back(44);
		assembly.AbsVirtual_pos.push_back(0x57BBFF);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 339)
	{
		string code1("\xA1\xD3\x42\x9C\0\x85\xC0\x74\x1A\x83\xF8\x03\xB0\0\x0F\x85\xC6\x07\xBC\xFF\xA3\xD3\x42\x9C\0\xB8\x83\0\0\0\xE9\xB7\x07\xBC\xFF\x8B\x15\x80\x80\x77\0\x8D\x4A\x01\x81\xFA\x10\x0E\0\0\x7E\x18\xBA\x01\0\0\0\x89\x15\xD3\x42\x9C\0\x31\xD2\x89\x15\x80\x80\x77\0\xE9\x8D\x07\xBC\xFF\x89\x0D\x80\x80\x77\0",82);
		string code2("\xA1\x70\xDD\x73\0\x85\xC0\x75\x0E\x31\xDB\x0F\xB6\x05\xDC\x2A\x77\0\xE9\xAF\x02\xE4\xFF\x83\xF8\x01\x75\x14\xC6\x05\xB8\x3A\x72\0\xFC\x40\xA3\x70\xDD\x73\0\x31\xDB\xE9\x3F\x04\xE4\xFF\xBB\x03\0\0\0\x83\x3D\xB8\x3A\x72\0\0\x0F\x44\xC3\xA3\x70\xDD\x73\0\x31\xDB", 70);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x17AD05;
		assembly.FromVirtual = 0x57AD05;
		assembly.ReturnVirtual = 0x57AD29;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(59);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(16);
		assembly.AbsVirtual_pos.push_back(0x57AD29);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x57AD29);
		assembly.ToRelocate_pos.push_back(72);
		assembly.AbsVirtual_pos.push_back(0x57AD29);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x17A665;
		assembly.FromVirtual = 0x57A665;
		assembly.ReturnVirtual = 0x57A817;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(37);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(64);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(19);
		assembly.AbsVirtual_pos.push_back(0x57A66E);
		assembly.ToRelocate_pos.push_back(44);
		assembly.AbsVirtual_pos.push_back(0x57A817);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 52)
	{
		string code1("\xA1\x15\xD8\x65\0\x85\xC0\x74\x1A\x83\xF8\x03\x0F\x85\x78\x27\xEF\xFF\xB0\0\xA3\x15\xD8\x65\0\xB8\x83\0\0\0\xE9\x56\x27\xEF\xFF\xA1\x68\x3E\x87\0\x8B\xC8\x40\x81\xF9\x10\x0E\0\0\xA3\x68\x3E\x87\0\x0F\x8E\x4E\x27\xEF\xFF\xB8\x01\0\0\0\xA3\x15\xD8\x65\0\x66\x89\x1D\x68\x3E\x87\0", 77);
		string code2("\xA1\x15\xD8\x65\0\x85\xC0\x75\x0C\xA0\xE5\xE2\x86\0\x31\xF6\xE9\x60\x27\xEF\xFF\x83\xF8\x01\x75\x17\xC7\x05\x62\xC6\x70\0\xFC\0\0\0\x40\xA3\x15\xD8\x65\0\x31\xF6\xE9\xED\x28\xEF\xFF\xBE\x03\0\0\0\x83\x3D\x62\xC6\x70\0\0\x0F\x44\xC6\xA3\x15\xD8\x65\0\x31\xF6", 71);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x14FF68;
		assembly.FromVirtual = 0x54FF68;
		assembly.ReturnVirtual = 0x54FFA3;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(66);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(14);
		assembly.AbsVirtual_pos.push_back(0x54FFA3);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x54FF92);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x54FFA3);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x14FFE3;
		assembly.FromVirtual = 0x54FFE3;
		assembly.ReturnVirtual = 0x550193;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(38);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(65);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x54FFEA);
		assembly.ToRelocate_pos.push_back(45);
		assembly.AbsVirtual_pos.push_back(0x550193);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 49)
	{
		string code1("\xA1\x15\xD8\x65\0\x85\xC0\x74\x1A\x83\xF8\x03\x0F\x85\x78\x27\xEF\xFF\xB0\0\xA3\x15\xD8\x65\0\xB8\x83\0\0\0\xE9\x56\x27\xEF\xFF\xA1\xA8\x2F\x87\0\x8B\xC8\x40\x81\xF9\x10\x0E\0\0\xA3\xA8\x2F\x87\0\x0F\x8E\x4E\x27\xEF\xFF\xB8\x01\0\0\0\xA3\x15\xD8\x65\0\x66\x89\x1D\xA8\x2F\x87\0", 77);
		string code2("\xA1\x15\xD8\x65\0\x85\xC0\x75\x0C\xA0\x25\xD4\x86\0\x31\xF6\xE9\x60\x27\xEF\xFF\x83\xF8\x01\x75\x17\xC7\x05\xA2\xB7\x70\0\xFC\0\0\0\x40\xA3\x15\xD8\x65\0\x31\xF6\xE9\xED\x28\xEF\xFF\xBE\x03\0\0\0\x83\x3D\xA2\xB7\x70\0\0\x0F\x44\xC6\xA3\x15\xD8\x65\0\x31\xF6", 71);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x14F958;
		assembly.FromVirtual = 0x54F958;
		assembly.ReturnVirtual = 0x54F993;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(66);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(14);
		assembly.AbsVirtual_pos.push_back(0x54F993);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x54F982);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x54F993);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x14F9D3;
		assembly.FromVirtual = 0x54F9D3;
		assembly.ReturnVirtual = 0x54FB83;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(38);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(65);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x54F9DA);
		assembly.ToRelocate_pos.push_back(45);
		assembly.AbsVirtual_pos.push_back(0x54FB83);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 42)
	{
		string code1("\xA1\x15\xD8\x65\0\x85\xC0\x74\x1A\x83\xF8\x03\x0F\x85\x78\x27\xEF\xFF\xB0\0\xA3\x15\xD8\x65\0\xB8\x83\0\0\0\xE9\x56\x27\xEF\xFF\xA1\x28\x63\x85\0\x8B\xC8\x40\x81\xF9\x10\x0E\0\0\xA3\x28\x63\x85\0\x0F\x8E\x4E\x27\xEF\xFF\xB8\x01\0\0\0\xA3\x15\xD8\x65\0\x66\x89\x1D\x28\x63\x85\0", 77);
		string code2("\xA1\x15\xD8\x65\0\x85\xC0\x75\x0C\xA0\xA5\x07\x85\0\x31\xF6\xE9\x60\x27\xEF\xFF\x83\xF8\x01\x75\x17\xC7\x05\x32\xEE\x6E\0\xFC\0\0\0\x40\xA3\x15\xD8\x65\0\x31\xF6\xE9\xED\x28\xEF\xFF\xBE\x03\0\0\0\x83\x3D\x32\xEE\x6E\0\0\x0F\x44\xC6\xA3\x15\xD8\x65\0\x31\xF6", 71);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x14E158;
		assembly.FromVirtual = 0x54E158;
		assembly.ReturnVirtual = 0x54E193;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(66);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(14);
		assembly.AbsVirtual_pos.push_back(0x54E193);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x54E182);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x54E193);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x14E1D3;
		assembly.FromVirtual = 0x54E1D3;
		assembly.ReturnVirtual = 0x54E383;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(38);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(65);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x54E1DA);
		assembly.ToRelocate_pos.push_back(45);
		assembly.AbsVirtual_pos.push_back(0x54E383);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 39)
	{
		string code1("\xA1\x15\xD8\x65\0\x85\xC0\x74\x1A\x83\xF8\x03\x0F\x85\x78\x27\xEF\xFF\xB0\0\xA3\x15\xD8\x65\0\xB8\x83\0\0\0\xE9\x56\x27\xEF\xFF\xA1\x28\xF7\x83\0\x8B\xC8\x40\x81\xF9\x10\x0E\0\0\xA3\x28\xF7\x83\0\x0F\x8E\x4E\x27\xEF\xFF\xB8\x01\0\0\0\xA3\x15\xD8\x65\0\x66\x89\x1D\x28\xF7\x83\0", 77);
		string code2("\xA1\x15\xD8\x65\0\x85\xC0\x75\x0C\xA0\x95\x9B\x83\0\x31\xF6\xE9\x60\x27\xEF\xFF\x83\xF8\x01\x75\x17\xC7\x05\x62\x85\x6D\0\xFC\0\0\0\x40\xA3\x15\xD8\x65\0\x31\xF6\xE9\xED\x28\xEF\xFF\xBE\x03\0\0\0\x83\x3D\x62\x85\x6D\0\0\x0F\x44\xC6\xA3\x15\xD8\x65\0\x31\xF6", 71);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);
		unsigned int assembly_size = code1.size() + code2.size() + assembly.nData * 4 + 10;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_feDoFrontEnd, contatore)
		assembly.code = code1;
		assembly.From = 0x14DCD8;
		assembly.FromVirtual = 0x54DCD8;
		assembly.ReturnVirtual = 0x54DD13;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(21);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(66);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(14);
		assembly.AbsVirtual_pos.push_back(0x54DD13);
		assembly.ToRelocate_pos.push_back(31);
		assembly.AbsVirtual_pos.push_back(0x54DD02);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x54DD13);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (effeto fade out)
		assembly.code = code2;
		assembly.From = 0x14DD53;
		assembly.FromVirtual = 0x54DD53;
		assembly.ReturnVirtual = 0x54DF03;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(38);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(65);
		assembly.Data_ID.push_back(0);
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x54DD5A);
		assembly.ToRelocate_pos.push_back(45);
		assembly.AbsVirtual_pos.push_back(0x54DF03);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
}