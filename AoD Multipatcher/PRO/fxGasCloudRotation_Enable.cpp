#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void fxGasCloudRotation_Enable()
{
	string Title = "#####################fxGasCloudRotation mod####################";
	if (ver == 452)
	{
		string code1("\x8B\x4B\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\xC0\x11\x95\0\xD9\xFB\x0F\x12\0\x0F\x12\x48\x48\x0F\x58\xC1\x0F\x12\x0D\x40\x79\x71\0\x0F\x5E\xC1\x0F\x13\x05\0\xC1\x9C\0\x0F\x16\x05\0\xC1\x9C\0\x0F\x12\x08\x0F\x16\x48\x18\x0F\x12\x50\x30\x0F\x16\x50\x48\x0F\x5C\xC8\x0F\x5C\xD0\x0F\x28\xD9\x0F\x28\xE2\xD9\x15\0\xC1\x9C\0\xD9\x1D\x0C\xC1\x9C\0\xD9\x15\x04\xC1\x9C\0\xD9\x1D\x08\xC1\x9C\0\x0F\x12\x3D\0\xC1\x9C\0\x0F\x16\x3D\0\xC1\x9C\0\x0F\x59\xCF\x0F\x59\xD7\x0F\x12\x3D\x08\xC1\x9C\0\x0F\x16\x3D\x08\xC1\x9C\0\x0F\x59\xDF\x0F\x59\xE7\x0F\x28\xE9\x66\x0F\x73\xDD\x04\x0F\x5C\xCD\x0F\x28\xEA\x66\x0F\x73\xDD\x04\x0F\x5C\xD5\x0F\x28\xEB\x66\x0F\x73\xDD\x04\x0F\x58\xDD\x0F\x28\xEC\x66\x0F\x73\xDD\x04\x0F\x58\xE5\x0F\x29\x1D\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x0D\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x0D\0\xC1\x9C\0\x0F\x29\x25\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x15\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x15\0\xC1\x9C\0\x0F\x58\xC8\x0F\x58\xD0\x0F\x13\x08\x0F\x17\x48\x18\x0F\x13\x50\x30\x0F\x17\x50\x48\x83\xC0\x60\x89\x02", 303);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0, 0, 0});	// DATA1, DATA2, DATA3, DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x84B1C;
		assembly.FromVirtual = 0x484B1C;
		assembly.ReturnVirtual = 0x484B21;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x9511C0);			// 180
		assembly.Gvar_pos.push_back(31);						// 2-2-2-2
		assembly.GvarVirtual_pos.push_back(0x717940);			// 2-2-2-2
		
		// DATA1
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {41, 48, 81, 106, 113, 190, 196, 209, 228, 235, 241, 254, 273});

		// DATA2
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {93, 215, 260});

		// DATA3
		for (unsigned int i = 0; i < 5; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {99, 126, 133, 202, 247});

		// DATA4
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {87, 221, 266});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 449)
	{
		string code1("\x8B\x4B\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\xC0\x11\x95\0\xD9\xFB\x0F\x12\0\x0F\x12\x48\x48\x0F\x58\xC1\x0F\x12\x0D\x40\x79\x71\0\x0F\x5E\xC1\x0F\x13\x05\0\xC1\x9C\0\x0F\x16\x05\0\xC1\x9C\0\x0F\x12\x08\x0F\x16\x48\x18\x0F\x12\x50\x30\x0F\x16\x50\x48\x0F\x5C\xC8\x0F\x5C\xD0\x0F\x28\xD9\x0F\x28\xE2\xD9\x15\0\xC1\x9C\0\xD9\x1D\x0C\xC1\x9C\0\xD9\x15\x04\xC1\x9C\0\xD9\x1D\x08\xC1\x9C\0\x0F\x12\x3D\0\xC1\x9C\0\x0F\x16\x3D\0\xC1\x9C\0\x0F\x59\xCF\x0F\x59\xD7\x0F\x12\x3D\x08\xC1\x9C\0\x0F\x16\x3D\x08\xC1\x9C\0\x0F\x59\xDF\x0F\x59\xE7\x0F\x28\xE9\x66\x0F\x73\xDD\x04\x0F\x5C\xCD\x0F\x28\xEA\x66\x0F\x73\xDD\x04\x0F\x5C\xD5\x0F\x28\xEB\x66\x0F\x73\xDD\x04\x0F\x58\xDD\x0F\x28\xEC\x66\x0F\x73\xDD\x04\x0F\x58\xE5\x0F\x29\x1D\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x0D\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x0D\0\xC1\x9C\0\x0F\x29\x25\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x15\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x15\0\xC1\x9C\0\x0F\x58\xC8\x0F\x58\xD0\x0F\x13\x08\x0F\x17\x48\x18\x0F\x13\x50\x30\x0F\x17\x50\x48\x83\xC0\x60\x89\x02", 303);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0, 0, 0});	// DATA1, DATA2, DATA3, DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x84F40;
		assembly.FromVirtual = 0x484F40;
		assembly.ReturnVirtual = 0x484F45;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x950740);			// 180
		assembly.Gvar_pos.push_back(31);						// 2-2-2-2
		assembly.GvarVirtual_pos.push_back(0x716900);			// 2-2-2-2
		
		// DATA1
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {41, 48, 81, 106, 113, 190, 196, 209, 228, 235, 241, 254, 273});

		// DATA2
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {93, 215, 260});

		// DATA3
		for (unsigned int i = 0; i < 5; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {99, 126, 133, 202, 247});

		// DATA4
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {87, 221, 266});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 442)
	{
		string code1("\x8B\x4B\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\xC0\x11\x95\0\xD9\xFB\x0F\x12\0\x0F\x12\x48\x48\x0F\x58\xC1\x0F\x12\x0D\x40\x79\x71\0\x0F\x5E\xC1\x0F\x13\x05\0\xC1\x9C\0\x0F\x16\x05\0\xC1\x9C\0\x0F\x12\x08\x0F\x16\x48\x18\x0F\x12\x50\x30\x0F\x16\x50\x48\x0F\x5C\xC8\x0F\x5C\xD0\x0F\x28\xD9\x0F\x28\xE2\xD9\x15\0\xC1\x9C\0\xD9\x1D\x0C\xC1\x9C\0\xD9\x15\x04\xC1\x9C\0\xD9\x1D\x08\xC1\x9C\0\x0F\x12\x3D\0\xC1\x9C\0\x0F\x16\x3D\0\xC1\x9C\0\x0F\x59\xCF\x0F\x59\xD7\x0F\x12\x3D\x08\xC1\x9C\0\x0F\x16\x3D\x08\xC1\x9C\0\x0F\x59\xDF\x0F\x59\xE7\x0F\x28\xE9\x66\x0F\x73\xDD\x04\x0F\x5C\xCD\x0F\x28\xEA\x66\x0F\x73\xDD\x04\x0F\x5C\xD5\x0F\x28\xEB\x66\x0F\x73\xDD\x04\x0F\x58\xDD\x0F\x28\xEC\x66\x0F\x73\xDD\x04\x0F\x58\xE5\x0F\x29\x1D\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x0D\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x0D\0\xC1\x9C\0\x0F\x29\x25\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x15\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x15\0\xC1\x9C\0\x0F\x58\xC8\x0F\x58\xD0\x0F\x13\x08\x0F\x17\x48\x18\x0F\x13\x50\x30\x0F\x17\x50\x48\x83\xC0\x60\x89\x02", 303);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0, 0, 0});	// DATA1, DATA2, DATA3, DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x8324C;
		assembly.FromVirtual = 0x48324C;
		assembly.ReturnVirtual = 0x483251;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x926F80);			// 180
		assembly.Gvar_pos.push_back(31);						// 2-2-2-2
		assembly.GvarVirtual_pos.push_back(0x6EE640);			// 2-2-2-2
		
		// DATA1
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {41, 48, 81, 106, 113, 190, 196, 209, 228, 235, 241, 254, 273});

		// DATA2
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {93, 215, 260});

		// DATA3
		for (unsigned int i = 0; i < 5; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {99, 126, 133, 202, 247});

		// DATA4
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {87, 221, 266});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 439)
	{
		string code1("\x8B\x4B\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\xC0\x11\x95\0\xD9\xFB\x0F\x12\0\x0F\x12\x48\x48\x0F\x58\xC1\x0F\x12\x0D\x40\x79\x71\0\x0F\x5E\xC1\x0F\x13\x05\0\xC1\x9C\0\x0F\x16\x05\0\xC1\x9C\0\x0F\x12\x08\x0F\x16\x48\x18\x0F\x12\x50\x30\x0F\x16\x50\x48\x0F\x5C\xC8\x0F\x5C\xD0\x0F\x28\xD9\x0F\x28\xE2\xD9\x15\0\xC1\x9C\0\xD9\x1D\x0C\xC1\x9C\0\xD9\x15\x04\xC1\x9C\0\xD9\x1D\x08\xC1\x9C\0\x0F\x12\x3D\0\xC1\x9C\0\x0F\x16\x3D\0\xC1\x9C\0\x0F\x59\xCF\x0F\x59\xD7\x0F\x12\x3D\x08\xC1\x9C\0\x0F\x16\x3D\x08\xC1\x9C\0\x0F\x59\xDF\x0F\x59\xE7\x0F\x28\xE9\x66\x0F\x73\xDD\x04\x0F\x5C\xCD\x0F\x28\xEA\x66\x0F\x73\xDD\x04\x0F\x5C\xD5\x0F\x28\xEB\x66\x0F\x73\xDD\x04\x0F\x58\xDD\x0F\x28\xEC\x66\x0F\x73\xDD\x04\x0F\x58\xE5\x0F\x29\x1D\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x0D\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x0D\0\xC1\x9C\0\x0F\x29\x25\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x15\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x15\0\xC1\x9C\0\x0F\x58\xC8\x0F\x58\xD0\x0F\x13\x08\x0F\x17\x48\x18\x0F\x13\x50\x30\x0F\x17\x50\x48\x83\xC0\x60\x89\x02", 303);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0, 0, 0});	// DATA1, DATA2, DATA3, DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x81D94;
		assembly.FromVirtual = 0x481D94;
		assembly.ReturnVirtual = 0x481D99;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x91C860);			// 180
		assembly.Gvar_pos.push_back(31);						// 2-2-2-2
		assembly.GvarVirtual_pos.push_back(0x6E4640);			// 2-2-2-2
		
		// DATA1
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {41, 48, 81, 106, 113, 190, 196, 209, 228, 235, 241, 254, 273});

		// DATA2
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {93, 215, 260});

		// DATA3
		for (unsigned int i = 0; i < 5; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {99, 126, 133, 202, 247});

		// DATA4
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {87, 221, 266});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 352)
	{
		string code1("\x8B\x4B\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\xC0\x11\x95\0\xD9\xFB\x0F\x12\0\x0F\x12\x48\x48\x0F\x58\xC1\x0F\x12\x0D\x40\x79\x71\0\x0F\x5E\xC1\x0F\x13\x05\0\xC1\x9C\0\x0F\x16\x05\0\xC1\x9C\0\x0F\x12\x08\x0F\x16\x48\x18\x0F\x12\x50\x30\x0F\x16\x50\x48\x0F\x5C\xC8\x0F\x5C\xD0\x0F\x28\xD9\x0F\x28\xE2\xD9\x15\0\xC1\x9C\0\xD9\x1D\x0C\xC1\x9C\0\xD9\x15\x04\xC1\x9C\0\xD9\x1D\x08\xC1\x9C\0\x0F\x12\x3D\0\xC1\x9C\0\x0F\x16\x3D\0\xC1\x9C\0\x0F\x59\xCF\x0F\x59\xD7\x0F\x12\x3D\x08\xC1\x9C\0\x0F\x16\x3D\x08\xC1\x9C\0\x0F\x59\xDF\x0F\x59\xE7\x0F\x28\xE9\x66\x0F\x73\xDD\x04\x0F\x5C\xCD\x0F\x28\xEA\x66\x0F\x73\xDD\x04\x0F\x5C\xD5\x0F\x28\xEB\x66\x0F\x73\xDD\x04\x0F\x58\xDD\x0F\x28\xEC\x66\x0F\x73\xDD\x04\x0F\x58\xE5\x0F\x29\x1D\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x0D\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x0D\0\xC1\x9C\0\x0F\x29\x25\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x15\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x15\0\xC1\x9C\0\x0F\x58\xC8\x0F\x58\xD0\x0F\x13\x08\x0F\x17\x48\x18\x0F\x13\x50\x30\x0F\x17\x50\x48\x83\xC0\x60\x89\x02", 303);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0, 0, 0});	// DATA1, DATA2, DATA3, DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x815FF;
		assembly.FromVirtual = 0x4815FF;
		assembly.ReturnVirtual = 0x481604;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x93EF80);			// 180
		assembly.Gvar_pos.push_back(31);						// 2-2-2-2
		assembly.GvarVirtual_pos.push_back(0x706980);			// 2-2-2-2
		
		// DATA1
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {41, 48, 81, 106, 113, 190, 196, 209, 228, 235, 241, 254, 273});

		// DATA2
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {93, 215, 260});

		// DATA3
		for (unsigned int i = 0; i < 5; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {99, 126, 133, 202, 247});

		// DATA4
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {87, 221, 266});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 349)
	{
		string code1("\x8B\x4B\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\xC0\x11\x95\0\xD9\xFB\x0F\x12\0\x0F\x12\x48\x48\x0F\x58\xC1\x0F\x12\x0D\x40\x79\x71\0\x0F\x5E\xC1\x0F\x13\x05\0\xC1\x9C\0\x0F\x16\x05\0\xC1\x9C\0\x0F\x12\x08\x0F\x16\x48\x18\x0F\x12\x50\x30\x0F\x16\x50\x48\x0F\x5C\xC8\x0F\x5C\xD0\x0F\x28\xD9\x0F\x28\xE2\xD9\x15\0\xC1\x9C\0\xD9\x1D\x0C\xC1\x9C\0\xD9\x15\x04\xC1\x9C\0\xD9\x1D\x08\xC1\x9C\0\x0F\x12\x3D\0\xC1\x9C\0\x0F\x16\x3D\0\xC1\x9C\0\x0F\x59\xCF\x0F\x59\xD7\x0F\x12\x3D\x08\xC1\x9C\0\x0F\x16\x3D\x08\xC1\x9C\0\x0F\x59\xDF\x0F\x59\xE7\x0F\x28\xE9\x66\x0F\x73\xDD\x04\x0F\x5C\xCD\x0F\x28\xEA\x66\x0F\x73\xDD\x04\x0F\x5C\xD5\x0F\x28\xEB\x66\x0F\x73\xDD\x04\x0F\x58\xDD\x0F\x28\xEC\x66\x0F\x73\xDD\x04\x0F\x58\xE5\x0F\x29\x1D\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x0D\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x0D\0\xC1\x9C\0\x0F\x29\x25\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x15\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x15\0\xC1\x9C\0\x0F\x58\xC8\x0F\x58\xD0\x0F\x13\x08\x0F\x17\x48\x18\x0F\x13\x50\x30\x0F\x17\x50\x48\x83\xC0\x60\x89\x02", 303);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0, 0, 0});	// DATA1, DATA2, DATA3, DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x81C87;
		assembly.FromVirtual = 0x481C87;
		assembly.ReturnVirtual = 0x481C8C;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x93F540);			// 180
		assembly.Gvar_pos.push_back(31);						// 2-2-2-2
		assembly.GvarVirtual_pos.push_back(0x706940);			// 2-2-2-2
		
		// DATA1
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {41, 48, 81, 106, 113, 190, 196, 209, 228, 235, 241, 254, 273});

		// DATA2
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {93, 215, 260});

		// DATA3
		for (unsigned int i = 0; i < 5; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {99, 126, 133, 202, 247});

		// DATA4
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {87, 221, 266});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 342)
	{
		string code1("\x8B\x4B\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\xC0\x11\x95\0\xD9\xFB\x0F\x12\0\x0F\x12\x48\x48\x0F\x58\xC1\x0F\x12\x0D\x40\x79\x71\0\x0F\x5E\xC1\x0F\x13\x05\0\xC1\x9C\0\x0F\x16\x05\0\xC1\x9C\0\x0F\x12\x08\x0F\x16\x48\x18\x0F\x12\x50\x30\x0F\x16\x50\x48\x0F\x5C\xC8\x0F\x5C\xD0\x0F\x28\xD9\x0F\x28\xE2\xD9\x15\0\xC1\x9C\0\xD9\x1D\x0C\xC1\x9C\0\xD9\x15\x04\xC1\x9C\0\xD9\x1D\x08\xC1\x9C\0\x0F\x12\x3D\0\xC1\x9C\0\x0F\x16\x3D\0\xC1\x9C\0\x0F\x59\xCF\x0F\x59\xD7\x0F\x12\x3D\x08\xC1\x9C\0\x0F\x16\x3D\x08\xC1\x9C\0\x0F\x59\xDF\x0F\x59\xE7\x0F\x28\xE9\x66\x0F\x73\xDD\x04\x0F\x5C\xCD\x0F\x28\xEA\x66\x0F\x73\xDD\x04\x0F\x5C\xD5\x0F\x28\xEB\x66\x0F\x73\xDD\x04\x0F\x58\xDD\x0F\x28\xEC\x66\x0F\x73\xDD\x04\x0F\x58\xE5\x0F\x29\x1D\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x0D\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x0D\0\xC1\x9C\0\x0F\x29\x25\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x15\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x15\0\xC1\x9C\0\x0F\x58\xC8\x0F\x58\xD0\x0F\x13\x08\x0F\x17\x48\x18\x0F\x13\x50\x30\x0F\x17\x50\x48\x83\xC0\x60\x89\x02", 303);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0, 0, 0});	// DATA1, DATA2, DATA3, DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x802D3;
		assembly.FromVirtual = 0x4802D3;
		assembly.ReturnVirtual = 0x4802D8;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x916D80);			// 180
		assembly.Gvar_pos.push_back(31);						// 2-2-2-2
		assembly.GvarVirtual_pos.push_back(0x6DE680);			// 2-2-2-2
		
		// DATA1
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {41, 48, 81, 106, 113, 190, 196, 209, 228, 235, 241, 254, 273});

		// DATA2
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {93, 215, 260});

		// DATA3
		for (unsigned int i = 0; i < 5; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {99, 126, 133, 202, 247});

		// DATA4
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {87, 221, 266});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 339)
	{
		string code1("\x8B\x4B\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\xC0\x11\x95\0\xD9\xFB\x0F\x12\0\x0F\x12\x48\x48\x0F\x58\xC1\x0F\x12\x0D\x40\x79\x71\0\x0F\x5E\xC1\x0F\x13\x05\0\xC1\x9C\0\x0F\x16\x05\0\xC1\x9C\0\x0F\x12\x08\x0F\x16\x48\x18\x0F\x12\x50\x30\x0F\x16\x50\x48\x0F\x5C\xC8\x0F\x5C\xD0\x0F\x28\xD9\x0F\x28\xE2\xD9\x15\0\xC1\x9C\0\xD9\x1D\x0C\xC1\x9C\0\xD9\x15\x04\xC1\x9C\0\xD9\x1D\x08\xC1\x9C\0\x0F\x12\x3D\0\xC1\x9C\0\x0F\x16\x3D\0\xC1\x9C\0\x0F\x59\xCF\x0F\x59\xD7\x0F\x12\x3D\x08\xC1\x9C\0\x0F\x16\x3D\x08\xC1\x9C\0\x0F\x59\xDF\x0F\x59\xE7\x0F\x28\xE9\x66\x0F\x73\xDD\x04\x0F\x5C\xCD\x0F\x28\xEA\x66\x0F\x73\xDD\x04\x0F\x5C\xD5\x0F\x28\xEB\x66\x0F\x73\xDD\x04\x0F\x58\xDD\x0F\x28\xEC\x66\x0F\x73\xDD\x04\x0F\x58\xE5\x0F\x29\x1D\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x0D\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x0D\0\xC1\x9C\0\x0F\x29\x25\0\xC1\x9C\0\x8B\x0D\0\xC1\x9C\0\x8B\x2D\x08\xC1\x9C\0\x0F\x29\x15\0\xC1\x9C\0\x89\x0D\x04\xC1\x9C\0\x89\x2D\x0C\xC1\x9C\0\x0F\x28\x15\0\xC1\x9C\0\x0F\x58\xC8\x0F\x58\xD0\x0F\x13\x08\x0F\x17\x48\x18\x0F\x13\x50\x30\x0F\x17\x50\x48\x83\xC0\x60\x89\x02", 303);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.insert(assembly.Data_default_value.end(), {0, 0, 0, 0});	// DATA1, DATA2, DATA3, DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x7EBFB;
		assembly.FromVirtual = 0x47EBFB;
		assembly.ReturnVirtual = 0x47EC00;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x90C660);			// 180
		assembly.Gvar_pos.push_back(31);						// 2-2-2-2
		assembly.GvarVirtual_pos.push_back(0x6D4640);			// 2-2-2-2
		
		// DATA1
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {41, 48, 81, 106, 113, 190, 196, 209, 228, 235, 241, 254, 273});

		// DATA2
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {93, 215, 260});

		// DATA3
		for (unsigned int i = 0; i < 5; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {99, 126, 133, 202, 247});

		// DATA4
		for (unsigned int i = 0; i < 3; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {87, 221, 266});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 52)
	{
		string code1("\x8B\x4D\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\x70\xC1\x62\0\xD9\xFB\xD9\x1D\x90\x40\x93\0\xD9\x1D\x94\x40\x93\0\xD9\x47\xB8\xD8\x07\xD8\x35\x5C\xB3\x62\0\xD9\x1D\x98\x40\x93\0\xD9\x47\xBC\xD8\x47\x04\xD8\x35\x5C\xB3\x62\0\xD9\x1D\x9C\x40\x93\0\xD9\x47\xB8\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xBC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xB8\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xBC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xBC\xD9\x5F\xB8\xD9\x47\xD0\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xD4\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xD0\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xD4\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xD4\xD9\x5F\xD0\xD9\x47\xE8\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xEC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xE8\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xEC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xEC\xD9\x5F\xE8\xD9\x07\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\x04\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x07\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\x04\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\x04\xD9\x1F\x83\xC7\x18\x89\x3A", 395);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.push_back(0);				// DATA1
		assembly.Data_default_value.push_back(0);				// DATA2
		assembly.Data_default_value.push_back(0);				// DATA3
		assembly.Data_default_value.push_back(0);				// DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x6D28A;
		assembly.FromVirtual = 0x46D28A;
		assembly.ReturnVirtual = 0x46D28F;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x62C170);			// 180
		assembly.Gvar_pos.push_back(37);						// 2
		assembly.GvarVirtual_pos.push_back(0x62B35C);			// 2
		assembly.Gvar_pos.push_back(55);						// 2
		assembly.GvarVirtual_pos.push_back(0x62B35C);			// 2
		
		// DATA1
		for (unsigned int i = 0; i < 9; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {20, 76, 129, 158, 211, 240, 293, 321, 373});

		// DATA2
		for (unsigned int i = 0; i < 9; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {26, 91, 114, 173, 196, 255, 278, 336, 358});

		// DATA3
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {43, 70, 99, 108, 152, 181, 190, 234, 263, 272, 315, 344, 352});

		// DATA4
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {61, 85, 123, 137, 167, 205, 219, 249, 287, 301, 330, 367, 381});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 49)
	{
		string code1("\x8B\x4D\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\x70\xC1\x62\0\xD9\xFB\xD9\x1D\x90\x40\x93\0\xD9\x1D\x94\x40\x93\0\xD9\x47\xB8\xD8\x07\xD8\x35\x5C\xB3\x62\0\xD9\x1D\x98\x40\x93\0\xD9\x47\xBC\xD8\x47\x04\xD8\x35\x5C\xB3\x62\0\xD9\x1D\x9C\x40\x93\0\xD9\x47\xB8\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xBC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xB8\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xBC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xBC\xD9\x5F\xB8\xD9\x47\xD0\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xD4\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xD0\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xD4\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xD4\xD9\x5F\xD0\xD9\x47\xE8\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xEC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xE8\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xEC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xEC\xD9\x5F\xE8\xD9\x07\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\x04\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x07\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\x04\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\x04\xD9\x1F\x83\xC7\x18\x89\x3A", 395);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.push_back(0);				// DATA1
		assembly.Data_default_value.push_back(0);				// DATA2
		assembly.Data_default_value.push_back(0);				// DATA3
		assembly.Data_default_value.push_back(0);				// DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x6D8CA;
		assembly.FromVirtual = 0x46D8CA;
		assembly.ReturnVirtual = 0x46D8CF;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x62B170);			// 180
		assembly.Gvar_pos.push_back(37);						// 2
		assembly.GvarVirtual_pos.push_back(0x629DE8);			// 2
		assembly.Gvar_pos.push_back(55);						// 2
		assembly.GvarVirtual_pos.push_back(0x629DE8);			// 2
		
		// DATA1
		for (unsigned int i = 0; i < 9; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {20, 76, 129, 158, 211, 240, 293, 321, 373});

		// DATA2
		for (unsigned int i = 0; i < 9; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {26, 91, 114, 173, 196, 255, 278, 336, 358});

		// DATA3
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {43, 70, 99, 108, 152, 181, 190, 234, 263, 272, 315, 344, 352});

		// DATA4
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {61, 85, 123, 137, 167, 205, 219, 249, 287, 301, 330, 367, 381});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 42)
	{
		string code1("\x8B\x4D\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\x70\xC1\x62\0\xD9\xFB\xD9\x1D\x90\x40\x93\0\xD9\x1D\x94\x40\x93\0\xD9\x47\xB8\xD8\x07\xD8\x35\x5C\xB3\x62\0\xD9\x1D\x98\x40\x93\0\xD9\x47\xBC\xD8\x47\x04\xD8\x35\x5C\xB3\x62\0\xD9\x1D\x9C\x40\x93\0\xD9\x47\xB8\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xBC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xB8\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xBC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xBC\xD9\x5F\xB8\xD9\x47\xD0\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xD4\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xD0\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xD4\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xD4\xD9\x5F\xD0\xD9\x47\xE8\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xEC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xE8\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xEC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xEC\xD9\x5F\xE8\xD9\x07\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\x04\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x07\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\x04\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\x04\xD9\x1F\x83\xC7\x18\x89\x3A", 395);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.push_back(0);				// DATA1
		assembly.Data_default_value.push_back(0);				// DATA2
		assembly.Data_default_value.push_back(0);				// DATA3
		assembly.Data_default_value.push_back(0);				// DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x6C35A;
		assembly.FromVirtual = 0x46C35A;
		assembly.ReturnVirtual = 0x46C35F;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x6220E0);			// 180
		assembly.Gvar_pos.push_back(37);						// 2
		assembly.GvarVirtual_pos.push_back(0x620DE8);			// 2
		assembly.Gvar_pos.push_back(55);						// 2
		assembly.GvarVirtual_pos.push_back(0x620DE8);			// 2
		
		// DATA1
		for (unsigned int i = 0; i < 9; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {20, 76, 129, 158, 211, 240, 293, 321, 373});

		// DATA2
		for (unsigned int i = 0; i < 9; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {26, 91, 114, 173, 196, 255, 278, 336, 358});

		// DATA3
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {43, 70, 99, 108, 152, 181, 190, 234, 263, 272, 315, 344, 352});

		// DATA4
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {61, 85, 123, 137, 167, 205, 219, 249, 287, 301, 330, 367, 381});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 39)
	{
		string code1("\x8B\x4D\x08\xD9\x41\x14\xD9\xEB\xDE\xC9\xD8\x35\x70\xC1\x62\0\xD9\xFB\xD9\x1D\x90\x40\x93\0\xD9\x1D\x94\x40\x93\0\xD9\x47\xB8\xD8\x07\xD8\x35\x5C\xB3\x62\0\xD9\x1D\x98\x40\x93\0\xD9\x47\xBC\xD8\x47\x04\xD8\x35\x5C\xB3\x62\0\xD9\x1D\x9C\x40\x93\0\xD9\x47\xB8\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xBC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xB8\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xBC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xBC\xD9\x5F\xB8\xD9\x47\xD0\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xD4\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xD0\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xD4\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xD4\xD9\x5F\xD0\xD9\x47\xE8\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\xEC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x47\xE8\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\xEC\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\xEC\xD9\x5F\xE8\xD9\x07\xD8\x25\x98\x40\x93\0\xD8\x0D\x90\x40\x93\0\xD9\x47\x04\xD8\x25\x9C\x40\x93\0\xD8\x0D\x94\x40\x93\0\xDE\xE9\xD8\x05\x98\x40\x93\0\xD9\x07\xD8\x25\x98\x40\x93\0\xD8\x0D\x94\x40\x93\0\xD9\x47\x04\xD8\x25\x9C\x40\x93\0\xD8\x0D\x90\x40\x93\0\xDE\xC1\xD8\x05\x9C\x40\x93\0\xD9\x5F\x04\xD9\x1F\x83\xC7\x18\x89\x3A", 395);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 4;
		assembly.Data_default_value.push_back(0);				// DATA1
		assembly.Data_default_value.push_back(0);				// DATA2
		assembly.Data_default_value.push_back(0);				// DATA3
		assembly.Data_default_value.push_back(0);				// DATA4
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (fxParticleAdd_GasCloud)
		assembly.code = code1;
		assembly.From = 0x6B0DA;
		assembly.FromVirtual = 0x46B0DA;
		assembly.ReturnVirtual = 0x46B0DF;
		assembly.Gvar_pos.push_back(12);						// 180
		assembly.GvarVirtual_pos.push_back(0x610EE8);			// 180
		assembly.Gvar_pos.push_back(37);						// 2
		assembly.GvarVirtual_pos.push_back(0x61014C);			// 2
		assembly.Gvar_pos.push_back(55);						// 2
		assembly.GvarVirtual_pos.push_back(0x61014C);			// 2
		
		// DATA1
		for (unsigned int i = 0; i < 9; i++)
			assembly.Data_ID.push_back(0);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {20, 76, 129, 158, 211, 240, 293, 321, 373});

		// DATA2
		for (unsigned int i = 0; i < 9; i++)
			assembly.Data_ID.push_back(1);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {26, 91, 114, 173, 196, 255, 278, 336, 358});

		// DATA3
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(2);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {43, 70, 99, 108, 152, 181, 190, 234, 263, 272, 315, 344, 352});

		// DATA4
		for (unsigned int i = 0; i < 13; i++)
			assembly.Data_ID.push_back(3);
		assembly.Data_pos.insert(assembly.Data_pos.end(), {61, 85, 123, 137, 167, 205, 219, 249, 287, 301, 330, 367, 381});

		exe = Pro_Fix_Write_code(exe, assembly);
	}
}