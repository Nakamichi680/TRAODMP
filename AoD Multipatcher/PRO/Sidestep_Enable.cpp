#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void Sidestep_Enable()
{
	string Title = "#########################WalkMode FIX##########################";
	if (ver == 452)
	{
		string code1("\xA1\x70\xA4\x7F\0\x3D\x04\0\x80\0\x74\x30\x3D\x04\0\x40\0\x74\x29\x3D\x04\0\x20\0\x74\x22\x3D\x04\0\x80\x80\x74\x1B\x3D\x04\0\x40\x80\x74\x14\x3D\x04\0\x20\x80\x74\x0D\xF3\x0F\x11\x82\x24\x01\0\0\xE9\x47\x88\xB8\xFF\xB8\0\0\x70\x41", 65);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x1509FB;
		assembly.FromVirtual = 0x5509FB;
		assembly.ReturnVirtual = 0x5509EC;
		assembly.Gvar_pos.push_back(1);
		assembly.GvarVirtual_pos.push_back(0x7FA470);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x550A03);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 449)
	{
		string code1("\xA1\x70\xA4\x7F\0\x3D\x04\0\x80\0\x74\x30\x3D\x04\0\x40\0\x74\x29\x3D\x04\0\x20\0\x74\x22\x3D\x04\0\x80\x80\x74\x1B\x3D\x04\0\x40\x80\x74\x14\x3D\x04\0\x20\x80\x74\x0D\xF3\x0F\x11\x82\x24\x01\0\0\xE9\x47\x88\xB8\xFF\xB8\0\0\x70\x41", 65);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x150B27;
		assembly.FromVirtual = 0x550B27;
		assembly.ReturnVirtual = 0x550B18;
		assembly.Gvar_pos.push_back(1);
		assembly.GvarVirtual_pos.push_back(0x7F9430);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x550B2F);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 442)
	{
		string code1("\xA1\x70\xA4\x7F\0\x3D\x04\0\x80\0\x74\x30\x3D\x04\0\x40\0\x74\x29\x3D\x04\0\x20\0\x74\x22\x3D\x04\0\x80\x80\x74\x1B\x3D\x04\0\x40\x80\x74\x14\x3D\x04\0\x20\x80\x74\x0D\xF3\x0F\x11\x82\x24\x01\0\0\xE9\x47\x88\xB8\xFF\xB8\0\0\x70\x41", 65);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x14EFA7;
		assembly.FromVirtual = 0x54EFA7;
		assembly.ReturnVirtual = 0x54EF98;
		assembly.Gvar_pos.push_back(1);
		assembly.GvarVirtual_pos.push_back(0x7D1110);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x54EFAF);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 439)
	{
		string code1("\xA1\x70\xA4\x7F\0\x3D\x04\0\x80\0\x74\x30\x3D\x04\0\x40\0\x74\x29\x3D\x04\0\x20\0\x74\x22\x3D\x04\0\x80\x80\x74\x1B\x3D\x04\0\x40\x80\x74\x14\x3D\x04\0\x20\x80\x74\x0D\xF3\x0F\x11\x82\x24\x01\0\0\xE9\x47\x88\xB8\xFF\xB8\0\0\x70\x41", 65);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x14DABB;
		assembly.FromVirtual = 0x54DABB;
		assembly.ReturnVirtual = 0x54DAAC;
		assembly.Gvar_pos.push_back(1);
		assembly.GvarVirtual_pos.push_back(0x7C6DD0);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x54DAC3);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 352)
	{
		string code1("\xA1\x70\xA4\x7F\0\x3D\x04\0\x80\0\x74\x30\x3D\x04\0\x40\0\x74\x29\x3D\x04\0\x20\0\x74\x22\x3D\x04\0\x80\x80\x74\x1B\x3D\x04\0\x40\x80\x74\x14\x3D\x04\0\x20\x80\x74\x0D\xF3\x0F\x11\x82\x24\x01\0\0\xE9\x47\x88\xB8\xFF\xB8\0\0\x70\x41", 65);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x14AC9B;
		assembly.FromVirtual = 0x54AC9B;
		assembly.ReturnVirtual = 0x54AC8C;
		assembly.Gvar_pos.push_back(1);
		assembly.GvarVirtual_pos.push_back(0x7E8B30);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x54ACA3);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 349)
	{
		string code1("\xA1\x70\xA4\x7F\0\x3D\x04\0\x80\0\x74\x30\x3D\x04\0\x40\0\x74\x29\x3D\x04\0\x20\0\x74\x22\x3D\x04\0\x80\x80\x74\x1B\x3D\x04\0\x40\x80\x74\x14\x3D\x04\0\x20\x80\x74\x0D\xF3\x0F\x11\x82\x24\x01\0\0\xE9\x47\x88\xB8\xFF\xB8\0\0\x70\x41", 65);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x14ADCB;
		assembly.FromVirtual = 0x54ADCB;
		assembly.ReturnVirtual = 0x54ADBC;
		assembly.Gvar_pos.push_back(1);
		assembly.GvarVirtual_pos.push_back(0x7E8AF0);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x54ADD3);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 342)
	{
		string code1("\xA1\x70\xA4\x7F\0\x3D\x04\0\x80\0\x74\x30\x3D\x04\0\x40\0\x74\x29\x3D\x04\0\x20\0\x74\x22\x3D\x04\0\x80\x80\x74\x1B\x3D\x04\0\x40\x80\x74\x14\x3D\x04\0\x20\x80\x74\x0D\xF3\x0F\x11\x82\x24\x01\0\0\xE9\x47\x88\xB8\xFF\xB8\0\0\x70\x41", 65);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x14937F;
		assembly.FromVirtual = 0x54937F;
		assembly.ReturnVirtual = 0x549370;
		assembly.Gvar_pos.push_back(1);
		assembly.GvarVirtual_pos.push_back(0x7C07D0);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x549387);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 339)
	{
		string code1("\xA1\x70\xA4\x7F\0\x3D\x04\0\x80\0\x74\x30\x3D\x04\0\x40\0\x74\x29\x3D\x04\0\x20\0\x74\x22\x3D\x04\0\x80\x80\x74\x1B\x3D\x04\0\x40\x80\x74\x14\x3D\x04\0\x20\x80\x74\x0D\xF3\x0F\x11\x82\x24\x01\0\0\xE9\x47\x88\xB8\xFF\xB8\0\0\x70\x41", 65);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x147F9F;
		assembly.FromVirtual = 0x547F9F;
		assembly.ReturnVirtual = 0x547F90;
		assembly.Gvar_pos.push_back(1);
		assembly.GvarVirtual_pos.push_back(0x7B6450);
		assembly.ToRelocate_pos.push_back(56);
		assembly.AbsVirtual_pos.push_back(0x547FA7);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 52)
	{
		string code1("\x25\0\x41\0\0\x75\x05\xE9\xB4\xEE\x51\0\xA1\x30\x22\x8B\0\x3D\x04\0\x80\x80\x74\xEF\x3D\x04\0\x40\x80\x74\xE8\x3D\x04\0\x20\x80\x74\xE1\x3D\x04\0\x80\0\x74\xDA\x3D\x04\0\x40\0\x74\xD3\x3D\x04\0\x20\0\x74\xCC", 59);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x11EEAD;
		assembly.FromVirtual = 0x51EEAD;
		assembly.ReturnVirtual = 0x51EF31;
		assembly.Gvar_pos.push_back(13);
		assembly.GvarVirtual_pos.push_back(0x8B2230);
		assembly.ToRelocate_pos.push_back(8);
		assembly.AbsVirtual_pos.push_back(0x51EEB4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 49)
	{
		string code1("\x25\0\x41\0\0\x75\x05\xE9\xB4\xEE\x51\0\xA1\x30\x22\x8B\0\x3D\x04\0\x80\x80\x74\xEF\x3D\x04\0\x40\x80\x74\xE8\x3D\x04\0\x20\x80\x74\xE1\x3D\x04\0\x80\0\x74\xDA\x3D\x04\0\x40\0\x74\xD3\x3D\x04\0\x20\0\x74\xCC", 59);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x11F14D;
		assembly.FromVirtual = 0x51F14D;
		assembly.ReturnVirtual = 0x51F1D1;
		assembly.Gvar_pos.push_back(13);
		assembly.GvarVirtual_pos.push_back(0x8B1370);
		assembly.ToRelocate_pos.push_back(8);
		assembly.AbsVirtual_pos.push_back(0x51F154);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 42)
	{
		string code1("\x25\0\x41\0\0\x75\x05\xE9\xB4\xEE\x51\0\xA1\x30\x22\x8B\0\x3D\x04\0\x80\x80\x74\xEF\x3D\x04\0\x40\x80\x74\xE8\x3D\x04\0\x20\x80\x74\xE1\x3D\x04\0\x80\0\x74\xDA\x3D\x04\0\x40\0\x74\xD3\x3D\x04\0\x20\0\x74\xCC", 59);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x11DBAD;
		assembly.FromVirtual = 0x51DBAD;
		assembly.ReturnVirtual = 0x51DC31;
		assembly.Gvar_pos.push_back(13);
		assembly.GvarVirtual_pos.push_back(0x8946F0);
		assembly.ToRelocate_pos.push_back(8);
		assembly.AbsVirtual_pos.push_back(0x51DBB4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 39)
	{
		string code1("\x25\0\x41\0\0\x75\x05\xE9\xB4\xEE\x51\0\xA1\x30\x22\x8B\0\x3D\x04\0\x80\x80\x74\xEF\x3D\x04\0\x40\x80\x74\xE8\x3D\x04\0\x20\x80\x74\xE1\x3D\x04\0\x80\0\x74\xDA\x3D\x04\0\x40\0\x74\xD3\x3D\x04\0\x20\0\x74\xCC", 59);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_playControlHandleWalkMode)
		assembly.code = code1;
		assembly.From = 0x11CFED;
		assembly.FromVirtual = 0x51CFED;
		assembly.ReturnVirtual = 0x51D071;
		assembly.Gvar_pos.push_back(13);
		assembly.GvarVirtual_pos.push_back(0x87DAF0);
		assembly.ToRelocate_pos.push_back(8);
		assembly.AbsVirtual_pos.push_back(0x51CFF4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
}