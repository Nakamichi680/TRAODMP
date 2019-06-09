#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void FreeCameraTrigger_Enable()
{
	string Title = "#####################FreeCameraTrigger mod#####################";
	if (ver == 452)
	{
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x75A6D;
		assembly.FromVirtual = 0x475A6D;
		assembly.ReturnVirtual = 0x475A77;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x80FA38, 0x80FA38, 0x80FA38});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 449)
	{
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x75E89;
		assembly.FromVirtual = 0x475E89;
		assembly.ReturnVirtual = 0x475E93;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x80E9F8, 0x80E9F8, 0x80E9F8});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 442)
	{
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x741A1;
		assembly.FromVirtual = 0x4741A1;
		assembly.ReturnVirtual = 0x4741AB;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x7E66D8, 0x7E66D8, 0x7E66D8});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 439)
	{
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x72CE5;
		assembly.FromVirtual = 0x472CE5;
		assembly.ReturnVirtual = 0x472CEF;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x7DC398, 0x7DC398, 0x7DC398});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 352)
	{
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x73B76;
		assembly.FromVirtual = 0x473B76;
		assembly.ReturnVirtual = 0x473B80;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x7FE0F8, 0x7FE0F8, 0x7FE0F8});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 349)
	{
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x741D6;
		assembly.FromVirtual = 0x4741D6;
		assembly.ReturnVirtual = 0x4741E0;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x7FE0B8, 0x7FE0B8, 0x7FE0B8});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 342)
	{
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x7284A;
		assembly.FromVirtual = 0x47284A;
		assembly.ReturnVirtual = 0x472854;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x7D5D98, 0x7D5D98, 0x7D5D98});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 339)
	{
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x71176;
		assembly.FromVirtual = 0x471176;
		assembly.ReturnVirtual = 0x471180;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x7CBA18, 0x7CBA18, 0x7CBA18});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 52)
	{
		return;
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x61D99;
		assembly.FromVirtual = 0x461D99;
		assembly.ReturnVirtual = 0x461D9F;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x8574F8, 0x8574F8, 0x8574F8});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 49)
	{
		return;
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x623D9;
		assembly.FromVirtual = 0x4623D9;
		assembly.ReturnVirtual = 0x4623DF;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x856638, 0x856638, 0x856638});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 42)
	{
		return;
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x60E09;
		assembly.FromVirtual = 0x460E09;
		assembly.ReturnVirtual = 0x460E0F;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x8399B8, 0x8399B8, 0x8399B8});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 39)
	{
		return;
		string code1("\xA0\x38\xFA\x80\0\x3C\x0B\x74\x0E\xA2\x30\x02\x81\0\xC6\x05\x38\xFA\x80\0\x0B\xEB\x0A\xA0\x30\x02\x81\0\xA2\x38\xFA\x80\0", 33);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 1;
		assembly.Data_default_value.push_back(0);							// DATA1
		unsigned int assembly_size = code1.size() + assembly.nData * 4 + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (SYS_WINDOW::HandleWM_KEYDOWN)
		assembly.code = code1;
		assembly.From = 0x5FBD9;
		assembly.FromVirtual = 0x45FBD9;
		assembly.ReturnVirtual = 0x45FBDF;
		assembly.Gvar_pos.insert(assembly.Gvar_pos.end(), {1, 16, 29});										// Camera Mode
		assembly.GvarVirtual_pos.insert(assembly.GvarVirtual_pos.end(), {0x822DA8, 0x822DA8, 0x822DA8});	// Camera Mode
		assembly.Data_ID.insert(assembly.Data_ID.end(), {0, 0});
		assembly.Data_pos.insert(assembly.Data_pos.end(), {10, 24});
		exe = Pro_Fix_Write_code(exe, assembly);
	}
}