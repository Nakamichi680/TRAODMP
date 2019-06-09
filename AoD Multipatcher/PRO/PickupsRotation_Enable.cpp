#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void PickupsRotation_Enable()
{
	string Title = "######################PickupsRotation mod######################";
	if (ver == 452)
	{
		string code1("\xFF\x35\x90\x40\x9C\0\xE8\x1D\xB8\xAC\xFF\xF3\x0F\x10\x05\x90\x40\x9C\0\xF3\x0F\x10\x0D\x94\x40\x9C\0\xF3\x0F\x58\xC1\xF3\x0F\x11\x05\x90\x40\x9C\0\x83\xC4\x10\x8B\x44\x24\x4C", 46);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x9310F;
		assembly.FromVirtual = 0x49310F;
		assembly.ReturnVirtual = 0x493116;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x48F8DC);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(15);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(35);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(23);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 449)
	{
		string code1("\xFF\x35\x90\x40\x9C\0\xE8\x1D\xB8\xAC\xFF\xF3\x0F\x10\x05\x90\x40\x9C\0\xF3\x0F\x10\x0D\x94\x40\x9C\0\xF3\x0F\x58\xC1\xF3\x0F\x11\x05\x90\x40\x9C\0\x83\xC4\x10\x8B\x44\x24\x4C", 46);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x93527;
		assembly.FromVirtual = 0x493527;
		assembly.ReturnVirtual = 0x49352E;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x48FCF4);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(15);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(35);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(23);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 442)
	{
		string code1("\xFF\x35\x90\x40\x9C\0\xE8\x1D\xB8\xAC\xFF\xF3\x0F\x10\x05\x90\x40\x9C\0\xF3\x0F\x10\x0D\x94\x40\x9C\0\xF3\x0F\x58\xC1\xF3\x0F\x11\x05\x90\x40\x9C\0\x83\xC4\x10\x8B\x44\x24\x4C", 46);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x91863;
		assembly.FromVirtual = 0x491863;
		assembly.ReturnVirtual = 0x49186A;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x48E030);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(15);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(35);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(23);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 439)
	{
		string code1("\xFF\x35\x90\x40\x9C\0\xE8\x1D\xB8\xAC\xFF\xF3\x0F\x10\x05\x90\x40\x9C\0\xF3\x0F\x10\x0D\x94\x40\x9C\0\xF3\x0F\x58\xC1\xF3\x0F\x11\x05\x90\x40\x9C\0\x83\xC4\x10\x8B\x44\x24\x4C", 46);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x9036B;
		assembly.FromVirtual = 0x49036B;
		assembly.ReturnVirtual = 0x490372;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x48CB38);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(15);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(35);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(23);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 352)
	{
		string code1("\xFF\x35\x90\x40\x9C\0\xE8\x1D\xB8\xAC\xFF\xF3\x0F\x10\x05\x90\x40\x9C\0\xF3\x0F\x10\x0D\x94\x40\x9C\0\xF3\x0F\x58\xC1\xF3\x0F\x11\x05\x90\x40\x9C\0\x83\xC4\x10\x8B\x44\x24\x4C", 46);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x8FAE7;
		assembly.FromVirtual = 0x48FAE7;
		assembly.ReturnVirtual = 0x48FAEE;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x48C320);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(15);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(35);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(23);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 349)
	{
		string code1("\xFF\x35\x90\x40\x9C\0\xE8\x1D\xB8\xAC\xFF\xF3\x0F\x10\x05\x90\x40\x9C\0\xF3\x0F\x10\x0D\x94\x40\x9C\0\xF3\x0F\x58\xC1\xF3\x0F\x11\x05\x90\x40\x9C\0\x83\xC4\x10\x8B\x44\x24\x4C", 46);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x9016F;
		assembly.FromVirtual = 0x49016F;
		assembly.ReturnVirtual = 0x490176;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x48C9A8);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(15);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(35);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(23);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 342)
	{
		string code1("\xFF\x35\x90\x40\x9C\0\xE8\x1D\xB8\xAC\xFF\xF3\x0F\x10\x05\x90\x40\x9C\0\xF3\x0F\x10\x0D\x94\x40\x9C\0\xF3\x0F\x58\xC1\xF3\x0F\x11\x05\x90\x40\x9C\0\x83\xC4\x10\x8B\x44\x24\x4C", 46);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x8E7EF;
		assembly.FromVirtual = 0x48E7EF;
		assembly.ReturnVirtual = 0x48E7F6;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x48B028);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(15);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(35);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(23);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 339)
	{
		string code1("\xFF\x35\x90\x40\x9C\0\xE8\x1D\xB8\xAC\xFF\xF3\x0F\x10\x05\x90\x40\x9C\0\xF3\x0F\x10\x0D\x94\x40\x9C\0\xF3\x0F\x58\xC1\xF3\x0F\x11\x05\x90\x40\x9C\0\x83\xC4\x10\x8B\x44\x24\x4C", 46);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x8D0DB;
		assembly.FromVirtual = 0x48D0DB;
		assembly.ReturnVirtual = 0x48D0E2;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x489914);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(15);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(35);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(23);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 52)
	{
		string code1("\xFF\x35\x90\x40\x93\0\xE8\xCD\x18\xB4\xFF\xD9\x05\x90\x40\x93\0\xD8\x05\x94\x40\x93\0\xD9\x1D\x90\x40\x93\0\x83\xC4\x04\x8B\x44\x24\x4C\x50", 37);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x782F2;
		assembly.FromVirtual = 0x4782F2;
		assembly.ReturnVirtual = 0x4782F7;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x475970);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(13);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(25);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(19);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 49)
	{
		string code1("\xFF\x35\x90\x40\x93\0\xE8\xCD\x18\xB4\xFF\xD9\x05\x90\x40\x93\0\xD8\x05\x94\x40\x93\0\xD9\x1D\x90\x40\x93\0\x83\xC4\x04\x8B\x44\x24\x4C\x50", 37);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x78962;
		assembly.FromVirtual = 0x478962;
		assembly.ReturnVirtual = 0x478967;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x475FE0);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(13);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(25);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(19);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 42)
	{
		string code1("\xFF\x35\x90\x40\x93\0\xE8\xCD\x18\xB4\xFF\xD9\x05\x90\x40\x93\0\xD8\x05\x94\x40\x93\0\xD9\x1D\x90\x40\x93\0\x83\xC4\x04\x8B\x44\x24\x4C\x50", 37);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x773C2;
		assembly.FromVirtual = 0x4773C2;
		assembly.ReturnVirtual = 0x4773C7;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x474A40);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(13);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(25);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(19);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 39)
	{
		string code1("\xFF\x35\x90\x40\x93\0\xE8\xCD\x18\xB4\xFF\xD9\x05\x90\x40\x93\0\xD8\x05\x94\x40\x93\0\xD9\x1D\x90\x40\x93\0\x83\xC4\x04\x8B\x44\x24\x4C\x50", 37);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 2;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0x3CE00000});		// DATA1, DATA2
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_mapPlatformDisplayConsoleItem)
		assembly.code = code1;
		assembly.From = 0x760D2;
		assembly.FromVirtual = 0x4760D2;
		assembly.ReturnVirtual = 0x4760D7;
		assembly.ToRelocate_pos.push_back(7);
		assembly.AbsVirtual_pos.push_back(0x473760);		// _mathRotY
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(13);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(25);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(19);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
}