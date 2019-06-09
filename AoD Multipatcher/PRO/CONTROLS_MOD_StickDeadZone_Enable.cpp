#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void StickDeadZone_Enable()
{
	string Title = "######################StickDeadZone mod######################";
	if (ver == 452)
	{
		string code1("\x81\xC1\x01\x80\xFF\xFF\x81\xF9\xC6\x0C\0\0\x7D\x0A\x81\xF9\x3A\xF3\xFF\xFF\x7E\x02\x31\xC9", 24);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() * 4 + 20;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (SYS_DI::ReadInputs, PAD_RSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1D9B9;
		assembly.FromVirtual = 0x41D9B9;
		assembly.ReturnVirtual = 0x41D9BF;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 2 (SYS_DI::ReadInputs, PAD_RSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1D9DE;
		assembly.FromVirtual = 0x41D9DE;
		assembly.ReturnVirtual = 0x41D9E4;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 3 (SYS_DI::ReadInputs, PAD_LSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1DA03;
		assembly.FromVirtual = 0x41DA03;
		assembly.ReturnVirtual = 0x41DA09;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 4 (SYS_DI::ReadInputs, PAD_LSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1DA28;
		assembly.FromVirtual = 0x41DA28;
		assembly.ReturnVirtual = 0x41DA2E;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 449)
	{
		string code1("\x81\xC1\x01\x80\xFF\xFF\x81\xF9\xC6\x0C\0\0\x7D\x0A\x81\xF9\x3A\xF3\xFF\xFF\x7E\x02\x31\xC9", 24);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() * 4 + 20;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (SYS_DI::ReadInputs, PAD_RSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1D9FD;
		assembly.FromVirtual = 0x41D9FD;
		assembly.ReturnVirtual = 0x41DA03;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 2 (SYS_DI::ReadInputs, PAD_RSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1DA22;
		assembly.FromVirtual = 0x41DA22;
		assembly.ReturnVirtual = 0x41DA28;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 3 (SYS_DI::ReadInputs, PAD_LSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1DA47;
		assembly.FromVirtual = 0x41DA47;
		assembly.ReturnVirtual = 0x41DA4D;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 4 (SYS_DI::ReadInputs, PAD_LSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1DA6C;
		assembly.FromVirtual = 0x41DA6C;
		assembly.ReturnVirtual = 0x41DA72;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 442)
	{
		string code1("\x81\xC1\x01\x80\xFF\xFF\x81\xF9\xC6\x0C\0\0\x7D\x0A\x81\xF9\x3A\xF3\xFF\xFF\x7E\x02\x31\xC9", 24);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() * 4 + 20;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (SYS_DI::ReadInputs, PAD_RSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1D4B5;
		assembly.FromVirtual = 0x41D4B5;
		assembly.ReturnVirtual = 0x41D4BB;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 2 (SYS_DI::ReadInputs, PAD_RSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1D4DA;
		assembly.FromVirtual = 0x41D4DA;
		assembly.ReturnVirtual = 0x41D4E0;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 3 (SYS_DI::ReadInputs, PAD_LSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1D4FF;
		assembly.FromVirtual = 0x41D4FF;
		assembly.ReturnVirtual = 0x41D505;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 4 (SYS_DI::ReadInputs, PAD_LSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1D524;
		assembly.FromVirtual = 0x41D524;
		assembly.ReturnVirtual = 0x41D52A;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 439)
	{
		string code1("\x81\xC1\x01\x80\xFF\xFF\x81\xF9\xC6\x0C\0\0\x7D\x0A\x81\xF9\x3A\xF3\xFF\xFF\x7E\x02\x31\xC9", 24);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() * 4 + 20;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (SYS_DI::ReadInputs, PAD_RSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1C375;
		assembly.FromVirtual = 0x41C375;
		assembly.ReturnVirtual = 0x41C37B;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 2 (SYS_DI::ReadInputs, PAD_RSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1C39A;
		assembly.FromVirtual = 0x41C39A;
		assembly.ReturnVirtual = 0x41C3A0;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 3 (SYS_DI::ReadInputs, PAD_LSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1C3BF;
		assembly.FromVirtual = 0x41C3BF;
		assembly.ReturnVirtual = 0x41C3C5;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 4 (SYS_DI::ReadInputs, PAD_LSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1C3E4;
		assembly.FromVirtual = 0x41C3E4;
		assembly.ReturnVirtual = 0x41C3EA;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 352)
	{
		string code1("\x81\xC1\x01\x80\xFF\xFF\x81\xF9\xC6\x0C\0\0\x7D\x0A\x81\xF9\x3A\xF3\xFF\xFF\x7E\x02\x31\xC9", 24);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() * 4 + 20;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (SYS_DI::ReadInputs, PAD_RSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1CE7A;
		assembly.FromVirtual = 0x41CE7A;
		assembly.ReturnVirtual = 0x41CE80;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 2 (SYS_DI::ReadInputs, PAD_RSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1CE9F;
		assembly.FromVirtual = 0x41CE9F;
		assembly.ReturnVirtual = 0x41CEA5;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 3 (SYS_DI::ReadInputs, PAD_LSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1CEC4;
		assembly.FromVirtual = 0x41CEC4;
		assembly.ReturnVirtual = 0x41CECA;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 4 (SYS_DI::ReadInputs, PAD_LSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1CEE9;
		assembly.FromVirtual = 0x41CEE9;
		assembly.ReturnVirtual = 0x41CEEF;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 349)
	{
		string code1("\x81\xC1\x01\x80\xFF\xFF\x81\xF9\xC6\x0C\0\0\x7D\x0A\x81\xF9\x3A\xF3\xFF\xFF\x7E\x02\x31\xC9", 24);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() * 4 + 20;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (SYS_DI::ReadInputs, PAD_RSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1CE6E;
		assembly.FromVirtual = 0x41CE6E;
		assembly.ReturnVirtual = 0x41CE74;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 2 (SYS_DI::ReadInputs, PAD_RSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1CE93;
		assembly.FromVirtual = 0x41CE93;
		assembly.ReturnVirtual = 0x41CE99;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 3 (SYS_DI::ReadInputs, PAD_LSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1CEB8;
		assembly.FromVirtual = 0x41CEB8;
		assembly.ReturnVirtual = 0x41CEBE;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 4 (SYS_DI::ReadInputs, PAD_LSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1CEDD;
		assembly.FromVirtual = 0x41CEDD;
		assembly.ReturnVirtual = 0x41CEE3;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 342)
	{
		string code1("\x81\xC1\x01\x80\xFF\xFF\x81\xF9\xC6\x0C\0\0\x7D\x0A\x81\xF9\x3A\xF3\xFF\xFF\x7E\x02\x31\xC9", 24);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() * 4 + 20;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (SYS_DI::ReadInputs, PAD_RSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1CA5E;
		assembly.FromVirtual = 0x41CA5E;
		assembly.ReturnVirtual = 0x41CA64;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 2 (SYS_DI::ReadInputs, PAD_RSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1CA83;
		assembly.FromVirtual = 0x41CA83;
		assembly.ReturnVirtual = 0x41CA89;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 3 (SYS_DI::ReadInputs, PAD_LSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1CAA8;
		assembly.FromVirtual = 0x41CAA8;
		assembly.ReturnVirtual = 0x41CAAE;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 4 (SYS_DI::ReadInputs, PAD_LSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1CACD;
		assembly.FromVirtual = 0x41CACD;
		assembly.ReturnVirtual = 0x41CAD3;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 339)
	{
		string code1("\x81\xC1\x01\x80\xFF\xFF\x81\xF9\xC6\x0C\0\0\x7D\x0A\x81\xF9\x3A\xF3\xFF\xFF\x7E\x02\x31\xC9", 24);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() * 4 + 20;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (SYS_DI::ReadInputs, PAD_RSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1B932;
		assembly.FromVirtual = 0x41B932;
		assembly.ReturnVirtual = 0x41B938;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 2 (SYS_DI::ReadInputs, PAD_RSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1B957;
		assembly.FromVirtual = 0x41B957;
		assembly.ReturnVirtual = 0x41B95D;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 3 (SYS_DI::ReadInputs, PAD_LSTICK_YAXIS)
		assembly.code = code1;
		assembly.From = 0x1B97C;
		assembly.FromVirtual = 0x41B97C;
		assembly.ReturnVirtual = 0x41B982;
		exe = Pro_Fix_Write_code(exe, assembly);
		// Scrittura blocco 4 (SYS_DI::ReadInputs, PAD_LSTICK_XAXIS)
		assembly.code = code1;
		assembly.From = 0x1B9A1;
		assembly.FromVirtual = 0x41B9A1;
		assembly.ReturnVirtual = 0x41B9A7;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 52)
	{
		string code1("\x05\x01\x80\xFF\xFF\x3D\xC6\x0C\0\0\x7D\x09\x3D\x3A\xF3\xFF\xFF\x7E\x02\x31\xC0", 21);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (GetAbsAxisToAxis, valido per tutti gli assi analogici, in tutto 8)
		assembly.code = code1;
		assembly.From = 0x17374;
		assembly.FromVirtual = 0x417374;
		assembly.ReturnVirtual = 0x417379;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 49)
	{
		string code1("\x05\x01\x80\xFF\xFF\x3D\xC6\x0C\0\0\x7D\x09\x3D\x3A\xF3\xFF\xFF\x7E\x02\x31\xC0", 21);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (GetAbsAxisToAxis, valido per tutti gli assi analogici, in tutto 8)
		assembly.code = code1;
		assembly.From = 0x17394;
		assembly.FromVirtual = 0x417394;
		assembly.ReturnVirtual = 0x417399;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 42)
	{
		string code1("\x05\x01\x80\xFF\xFF\x3D\xC6\x0C\0\0\x7D\x09\x3D\x3A\xF3\xFF\xFF\x7E\x02\x31\xC0", 21);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (GetAbsAxisToAxis, valido per tutti gli assi analogici, in tutto 8)
		assembly.code = code1;
		assembly.From = 0x17214;
		assembly.FromVirtual = 0x417214;
		assembly.ReturnVirtual = 0x417219;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
	if (ver == 39)
	{
		string code1("\x05\x01\x80\xFF\xFF\x3D\xC6\x0C\0\0\x7D\x09\x3D\x3A\xF3\xFF\xFF\x7E\x02\x31\xC0", 21);
		Pro_Fix_String assembly;
		// Allocazione spazio per codice assembly
		unsigned int assembly_size = code1.size() + 5;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (GetAbsAxisToAxis, valido per tutti gli assi analogici, in tutto 8)
		assembly.code = code1;
		assembly.From = 0x16114;
		assembly.FromVirtual = 0x416114;
		assembly.ReturnVirtual = 0x416119;
		exe = Pro_Fix_Write_code(exe, assembly);
	}
}