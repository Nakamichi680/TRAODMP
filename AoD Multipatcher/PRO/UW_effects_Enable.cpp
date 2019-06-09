#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void UW_effects_Enable()
{
	string Title = "##################PS2 Underwater effects fix##################";
	if (ver == 452)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4AD14Eh)
		assembly.code = code1;
		assembly.From = 0xAD247;
		assembly.FromVirtual = 0x4AD247;
		assembly.ReturnVirtual = 0x4AD24C;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x76ABA8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7110);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD24C);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B71B0);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4AD14Eh)
		assembly.code = code1;
		assembly.From = 0xAD288;
		assembly.FromVirtual = 0x4AD288;
		assembly.ReturnVirtual = 0x4AD28D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x76ABA8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7110);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD28D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B71B0);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4ACFFCh)
		assembly.code = code1;
		assembly.From = 0xAD10C;
		assembly.FromVirtual = 0x4AD10C;
		assembly.ReturnVirtual = 0x4AD111;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x76ABA8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7110);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD111);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B71B0);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4ACFFCh)
		assembly.code = code1;
		assembly.From = 0xAD139;
		assembly.FromVirtual = 0x4AD139;
		assembly.ReturnVirtual = 0x4AD13E;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x76ABA8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7110);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD13E);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B71B0);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh), offset 4AD2AEh)
		assembly.code = code1;
		assembly.From = 0xAD36E;
		assembly.FromVirtual = 0x4AD36E;
		assembly.ReturnVirtual = 0x4AD373;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x76ABA8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7110);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD373);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B71B0);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch), offset 4AD383h)
		assembly.code = code1;
		assembly.From = 0xAD443;
		assembly.FromVirtual = 0x4AD443;
		assembly.ReturnVirtual = 0x4AD448;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x76ABA8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7110);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD448);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B71B0);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0xB7311;
		assembly.FromVirtual = 0x4B7311;
		assembly.ReturnVirtual = 0x4B7316;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x76ABA8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B65A4);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B7316);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B6610);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0xB7C65;
		assembly.FromVirtual = 0x4B7C65;
		assembly.ReturnVirtual = 0x4B7C6A;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x76ABA8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B65A4);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B7C6A);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B6610);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xBD1A4;
		assembly.FromVirtual = 0x4BD1A4;
		assembly.ReturnVirtual = 0x4BD1A9;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x76ABA8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B667C);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4BD1A9);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B6714);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 4B25E4h)
		size_t Position = 0xB25E9;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 449)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4AD3D2h)
		assembly.code = code1;
		assembly.From = 0xAD4CB;
		assembly.FromVirtual = 0x4AD4CB;
		assembly.ReturnVirtual = 0x4AD4D0;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x769B68);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7394);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD4D0);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B7434);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4AD3D2h)
		assembly.code = code1;
		assembly.From = 0xAD50C;
		assembly.FromVirtual = 0x4AD50C;
		assembly.ReturnVirtual = 0x4AD511;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x769B68);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7394);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD511);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B7434);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4AD280h)
		assembly.code = code1;
		assembly.From = 0xAD390;
		assembly.FromVirtual = 0x4AD390;
		assembly.ReturnVirtual = 0x4AD395;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x769B68);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7394);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD395);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B7434);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4AD280h)
		assembly.code = code1;
		assembly.From = 0xAD3BD;
		assembly.FromVirtual = 0x4AD3BD;
		assembly.ReturnVirtual = 0x4AD3C2;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x769B68);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7394);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD3C2);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B7434);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh), offset 4AD532h)
		assembly.code = code1;
		assembly.From = 0xAD5F2;
		assembly.FromVirtual = 0x4AD5F2;
		assembly.ReturnVirtual = 0x4AD5F7;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x769B68);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7394);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD5F7);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B7434);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch), offset 4AD607h)
		assembly.code = code1;
		assembly.From = 0xAD6C7;
		assembly.FromVirtual = 0x4AD6C7;
		assembly.ReturnVirtual = 0x4AD6CC;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x769B68);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B7394);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AD6CC);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B7434);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0xB7595;
		assembly.FromVirtual = 0x4B7595;
		assembly.ReturnVirtual = 0x4B759A;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x769B68);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B6828);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B759A);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B6894);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0xB7EE9;
		assembly.FromVirtual = 0x4B7EE9;
		assembly.ReturnVirtual = 0x4B7EEE;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x769B68);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B6828);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B7EEE);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B6894);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xBD428;
		assembly.FromVirtual = 0x4BD428;
		assembly.ReturnVirtual = 0x4BD42D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x769B68);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B6900);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4BD42D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B6998);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 4B2868h)
		size_t Position = 0xB286D;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 442)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4AB8FEh)
		assembly.code = code1;
		assembly.From = 0xAB9F7;
		assembly.FromVirtual = 0x4AB9F7;
		assembly.ReturnVirtual = 0x4AB9FC;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7418A8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B58C0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AB9FC);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B5960);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4AB8FEh)
		assembly.code = code1;
		assembly.From = 0xABA38;
		assembly.FromVirtual = 0x4ABA38;
		assembly.ReturnVirtual = 0x4ABA3D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7418A8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B58C0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4ABA3D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B5960);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4AB7ACh)
		assembly.code = code1;
		assembly.From = 0xAB8BC;
		assembly.FromVirtual = 0x4AB8BC;
		assembly.ReturnVirtual = 0x4AB8C1;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7418A8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B58C0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AB8C1);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B5960);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4AB7ACh)
		assembly.code = code1;
		assembly.From = 0xAB8E9;
		assembly.FromVirtual = 0x4AB8E9;
		assembly.ReturnVirtual = 0x4AB8EE;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7418A8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B58C0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AB8EE);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B5960);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh), offset 4ABA5Eh)
		assembly.code = code1;
		assembly.From = 0xABB1E;
		assembly.FromVirtual = 0x4ABB1E;
		assembly.ReturnVirtual = 0x4ABB23;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7418A8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B58C0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4ABB23);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B5960);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch), offset 4ABB33h)
		assembly.code = code1;
		assembly.From = 0xABBF3;
		assembly.FromVirtual = 0x4ABBF3;
		assembly.ReturnVirtual = 0x4ABBF8;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7418A8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B58C0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4ABBF8);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B5960);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0xB5AC1;
		assembly.FromVirtual = 0x4B5AC1;
		assembly.ReturnVirtual = 0x4B5AC6;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7418A8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B4D54);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B5AC6);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B4DC0);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0xB6415;
		assembly.FromVirtual = 0x4B6415;
		assembly.ReturnVirtual = 0x4B641A;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7418A8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B4D54);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B641A);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B4DC0);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xBB954;
		assembly.FromVirtual = 0x4BB954;
		assembly.ReturnVirtual = 0x4BB959;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7418A8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B4E2C);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4BB959);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B4EC4);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 4B0D94h)
		size_t Position = 0xB0D99;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 439)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4AA0D6h)
		assembly.code = code1;
		assembly.From = 0xAA1CF;
		assembly.FromVirtual = 0x4AA1CF;
		assembly.ReturnVirtual = 0x4AA1D4;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x737568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B431C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AA1D4);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B43BC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4AA0D6h)
		assembly.code = code1;
		assembly.From = 0xAA210;
		assembly.FromVirtual = 0x4AA210;
		assembly.ReturnVirtual = 0x4AA215;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x737568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B431C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AA215);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B43BC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4A9F84h)
		assembly.code = code1;
		assembly.From = 0xAA094;
		assembly.FromVirtual = 0x4AA094;
		assembly.ReturnVirtual = 0x4AA099;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x737568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B431C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AA099);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B43BC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4A9F84h)
		assembly.code = code1;
		assembly.From = 0xAA0C1;
		assembly.FromVirtual = 0x4AA0C1;
		assembly.ReturnVirtual = 0x4AA0C6;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x737568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B431C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AA0C6);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B43BC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh), offset 4AA236h)
		assembly.code = code1;
		assembly.From = 0xAA2F6;
		assembly.FromVirtual = 0x4AA2F6;
		assembly.ReturnVirtual = 0x4AA2FB;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x737568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B431C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AA2FB);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B43BC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch), offset 4AA30Bh)
		assembly.code = code1;
		assembly.From = 0xAA3CB;
		assembly.FromVirtual = 0x4AA3CB;
		assembly.ReturnVirtual = 0x4AA3D0;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x737568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B431C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AA3D0);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B43BC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0xB451D;
		assembly.FromVirtual = 0x4B451D;
		assembly.ReturnVirtual = 0x4B4522;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x737568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B37B0);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B4522);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B381C);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0xB4E71;
		assembly.FromVirtual = 0x4B4E71;
		assembly.ReturnVirtual = 0x4B4E76;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x737568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B37B0);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B4E76);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B381C);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xBA3B0;
		assembly.FromVirtual = 0x4BA3B0;
		assembly.ReturnVirtual = 0x4BA3B5;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x737568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B3888);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4BA3B5);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B3920);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 4AF5EEh)
		size_t Position = 0xAF5F3;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 352)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4A888Fh)
		assembly.code = code1;
		assembly.From = 0xA8988;
		assembly.FromVirtual = 0x4A8988;
		assembly.ReturnVirtual = 0x4A898D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759868);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B275C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A898D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B27FC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4A888Fh)
		assembly.code = code1;
		assembly.From = 0xA89C9;
		assembly.FromVirtual = 0x4A89C9;
		assembly.ReturnVirtual = 0x4A89CE;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759868);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B275C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A89CE);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B27FC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4A873Dh)
		assembly.code = code1;
		assembly.From = 0xA884D;
		assembly.FromVirtual = 0x4A884D;
		assembly.ReturnVirtual = 0x4A8852;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759868);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B275C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A8852);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B27FC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4A873Dh)
		assembly.code = code1;
		assembly.From = 0xA887A;
		assembly.FromVirtual = 0x4A887A;
		assembly.ReturnVirtual = 0x4A887F;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759868);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B275C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A887F);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B27FC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh), offset 4A89EDh)
		assembly.code = code1;
		assembly.From = 0xA8AAE;
		assembly.FromVirtual = 0x4A8AAE;
		assembly.ReturnVirtual = 0x4A8AB3;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759868);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B275C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A8AB3);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B27FC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch), offset 4A8AC3h)
		assembly.code = code1;
		assembly.From = 0xA8B84;
		assembly.FromVirtual = 0x4A8B84;
		assembly.ReturnVirtual = 0x4A8B89;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759868);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B275C);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A8B89);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B27FC);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0xB2959;
		assembly.FromVirtual = 0x4B2959;
		assembly.ReturnVirtual = 0x4B295E;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759868);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1C04);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B295E);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B1C70);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0xB32AD;
		assembly.FromVirtual = 0x4B32AD;
		assembly.ReturnVirtual = 0x4B32B2;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759868);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1C04);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B32B2);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B1C70);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xB8788;
		assembly.FromVirtual = 0x4B8788;
		assembly.ReturnVirtual = 0x4B878D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759868);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1CDC);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B878D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B1D74);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 4ADCD3h)
		size_t Position = 0xADCD8;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 349)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4A8B1Fh)
		assembly.code = code1;
		assembly.From = 0xA8C18;
		assembly.FromVirtual = 0x4A8C18;
		assembly.ReturnVirtual = 0x4A8C1D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759828);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B29EC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A8C1D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B2A8C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4A8B1Fh)
		assembly.code = code1;
		assembly.From = 0xA8C59;
		assembly.FromVirtual = 0x4A8C59;
		assembly.ReturnVirtual = 0x4A8C5E;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759828);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B29EC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A8C5E);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B2A8C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4A89CDh)
		assembly.code = code1;
		assembly.From = 0xA8ADD;
		assembly.FromVirtual = 0x4A8ADD;
		assembly.ReturnVirtual = 0x4A8AE2;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759828);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B29EC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A8AE2);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B2A8C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4A89CDh)
		assembly.code = code1;
		assembly.From = 0xA8B0A;
		assembly.FromVirtual = 0x4A8B0A;
		assembly.ReturnVirtual = 0x4A8B0F;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759828);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B29EC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A8B0F);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B2A8C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh), offset 4A8C7Dh)
		assembly.code = code1;
		assembly.From = 0xA8D3E;
		assembly.FromVirtual = 0x4A8D3E;
		assembly.ReturnVirtual = 0x4A8D43;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759828);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B29EC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A8D43);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B2A8C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch), offset 4A8D53h)
		assembly.code = code1;
		assembly.From = 0xA8E14;
		assembly.FromVirtual = 0x4A8E14;
		assembly.ReturnVirtual = 0x4A8E19;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759828);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B29EC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A8E19);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B2A8C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0xB2BE9;
		assembly.FromVirtual = 0x4B2BE9;
		assembly.ReturnVirtual = 0x4B2BEE;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759828);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1E94);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B2BEE);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B1F00);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0xB353D;
		assembly.FromVirtual = 0x4B353D;
		assembly.ReturnVirtual = 0x4B3542;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759828);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1E94);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B3542);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B1F00);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xB8A18;
		assembly.FromVirtual = 0x4B8A18;
		assembly.ReturnVirtual = 0x4B8A1D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x759828);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1F6C);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B8A1D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B2004);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 4ADF63h)
		size_t Position = 0xADF68;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 342)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4A718Bh)
		assembly.code = code1;
		assembly.From = 0xA7284;
		assembly.FromVirtual = 0x4A7284;
		assembly.ReturnVirtual = 0x4A7289;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x731568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1058);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A7289);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B10F8);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4A718Bh)
		assembly.code = code1;
		assembly.From = 0xA72C5;
		assembly.FromVirtual = 0x4A72C5;
		assembly.ReturnVirtual = 0x4A72CA;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x731568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1058);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A72CA);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B10F8);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4A7039h)
		assembly.code = code1;
		assembly.From = 0xA7149;
		assembly.FromVirtual = 0x4A7149;
		assembly.ReturnVirtual = 0x4A714E;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x731568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1058);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A714E);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B10F8);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4A7039h)
		assembly.code = code1;
		assembly.From = 0xA7176;
		assembly.FromVirtual = 0x4A7176;
		assembly.ReturnVirtual = 0x4A717B;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x731568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1058);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A717B);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B10F8);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh), offset 4A72E9h)
		assembly.code = code1;
		assembly.From = 0xA73AA;
		assembly.FromVirtual = 0x4A73AA;
		assembly.ReturnVirtual = 0x4A73AF;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x731568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1058);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A73AF);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B10F8);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch), offset 4A73BFh)
		assembly.code = code1;
		assembly.From = 0xA7480;
		assembly.FromVirtual = 0x4A7480;
		assembly.ReturnVirtual = 0x4A7485;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x731568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B1058);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A7485);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B10F8);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0xB1255;
		assembly.FromVirtual = 0x4B1255;
		assembly.ReturnVirtual = 0x4B125A;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x731568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B0500);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B125A);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B056C);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0xB1BA9;
		assembly.FromVirtual = 0x4B1BA9;
		assembly.ReturnVirtual = 0x4B1BAE;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x731568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B0500);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B1BAE);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B056C);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xB7084;
		assembly.FromVirtual = 0x4B7084;
		assembly.ReturnVirtual = 0x4B7089;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x731568);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4B05D8);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B7089);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4B0670);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 4AC5CFh)
		size_t Position = 0xAC5D4;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 339)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4A597Fh)
		assembly.code = code1;
		assembly.From = 0xA5A78;
		assembly.FromVirtual = 0x4A5A78;
		assembly.ReturnVirtual = 0x4A5A7D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7271E8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4AFADC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A5A7D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4AFB7C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh), offset 4A597Fh)
		assembly.code = code1;
		assembly.From = 0xA5AB9;
		assembly.FromVirtual = 0x4A5AB9;
		assembly.ReturnVirtual = 0x4A5ABE;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7271E8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4AFADC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A5ABE);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4AFB7C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4A582Dh)
		assembly.code = code1;
		assembly.From = 0xA593D;
		assembly.FromVirtual = 0x4A593D;
		assembly.ReturnVirtual = 0x4A5942;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7271E8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4AFADC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A5942);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4AFB7C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh), offset 4A582Dh)
		assembly.code = code1;
		assembly.From = 0xA596A;
		assembly.FromVirtual = 0x4A596A;
		assembly.ReturnVirtual = 0x4A596F;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7271E8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4AFADC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A596F);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4AFB7C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh), offset 4A5ADDh)
		assembly.code = code1;
		assembly.From = 0xA5B9E;
		assembly.FromVirtual = 0x4A5B9E;
		assembly.ReturnVirtual = 0x4A5BA3;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7271E8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4AFADC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A5BA3);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4AFB7C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch), offset 4A5BB3h)
		assembly.code = code1;
		assembly.From = 0xA5C74;
		assembly.FromVirtual = 0x4A5C74;
		assembly.ReturnVirtual = 0x4A5C79;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7271E8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4AFADC);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A5C79);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4AFB7C);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0xAFCD9;
		assembly.FromVirtual = 0x4AFCD9;
		assembly.ReturnVirtual = 0x4AFCDE;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7271E8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4AEF84);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4AFCDE);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4AEFF0);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0xB062D;
		assembly.FromVirtual = 0x4B062D;
		assembly.ReturnVirtual = 0x4B0632;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7271E8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4AEF84);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B0632);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4AEFF0);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xB5B08;
		assembly.FromVirtual = 0x4B5B08;
		assembly.ReturnVirtual = 0x4B5B0D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7271E8);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4AF05C);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4B5B0D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x4AF0F4);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 4AAE52h)
		size_t Position = 0xAAE57;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 52)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh))
		assembly.code = code1;
		assembly.From = 0x8FD0E;
		assembly.FromVirtual = 0x48FD0E;
		assembly.ReturnVirtual = 0x48FD13;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BC28C);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x494F90);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48FD13);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495050);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh))
		assembly.code = code1;
		assembly.From = 0x8FD4C;
		assembly.FromVirtual = 0x48FD4C;
		assembly.ReturnVirtual = 0x48FD51;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BC28C);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x494F90);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48FD51);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495050);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh))
		assembly.code = code1;
		assembly.From = 0x8FEA7;
		assembly.FromVirtual = 0x48FEA7;
		assembly.ReturnVirtual = 0x48FEAC;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BC28C);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x494F90);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48FEAC);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495050);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh))
		assembly.code = code1;
		assembly.From = 0x8FED8;
		assembly.FromVirtual = 0x48FED8;
		assembly.ReturnVirtual = 0x48FEDD;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BC28C);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x494F90);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48FEDD);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495050);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh))
		assembly.code = code1;
		assembly.From = 0x8FC14;
		assembly.FromVirtual = 0x48FC14;
		assembly.ReturnVirtual = 0x48FC19;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BC28C);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x494F90);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48FC19);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495050);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch))
		assembly.code = code1;
		assembly.From = 0x8FB68;
		assembly.FromVirtual = 0x48FB68;
		assembly.ReturnVirtual = 0x48FB6D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BC28C);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x494F90);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48FB6D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495050);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0x951C3;
		assembly.FromVirtual = 0x4951C3;
		assembly.ReturnVirtual = 0x4951C8;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BC28C);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x494390);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4951C8);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x494410);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0x95A13;
		assembly.FromVirtual = 0x495A13;
		assembly.ReturnVirtual = 0x495A18;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BC28C);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x494390);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x495A18);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x494410);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xA3E60;
		assembly.FromVirtual = 0x4A3E60;
		assembly.ReturnVirtual = 0x4A3E65;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BC28C);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x494490);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A3E65);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x494550);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 48C09Fh)
		size_t Position = 0x8C0A4;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 49)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh))
		assembly.code = code1;
		assembly.From = 0x9004E;
		assembly.FromVirtual = 0x49004E;
		assembly.ReturnVirtual = 0x490053;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BB3CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4952D0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x490053);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495390);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh))
		assembly.code = code1;
		assembly.From = 0x9008C;
		assembly.FromVirtual = 0x49008C;
		assembly.ReturnVirtual = 0x490091;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BB3CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4952D0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x490091);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495390);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh))
		assembly.code = code1;
		assembly.From = 0x901E7;
		assembly.FromVirtual = 0x4901E7;
		assembly.ReturnVirtual = 0x4901EC;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BB3CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4952D0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4901EC);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495390);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh))
		assembly.code = code1;
		assembly.From = 0x90218;
		assembly.FromVirtual = 0x490218;
		assembly.ReturnVirtual = 0x49021D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BB3CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4952D0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x49021D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495390);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh))
		assembly.code = code1;
		assembly.From = 0x8FF54;
		assembly.FromVirtual = 0x48FF54;
		assembly.ReturnVirtual = 0x48FF59;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BB3CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4952D0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48FF59);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495390);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch))
		assembly.code = code1;
		assembly.From = 0x8FEA8;
		assembly.FromVirtual = 0x48FEA8;
		assembly.ReturnVirtual = 0x48FEAD;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BB3CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4952D0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48FEAD);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x495390);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0x95503;
		assembly.FromVirtual = 0x495503;
		assembly.ReturnVirtual = 0x495508;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BB3CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4946D0);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x495508);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x494750);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0x95D53;
		assembly.FromVirtual = 0x495D53;
		assembly.ReturnVirtual = 0x495D58;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BB3CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4946D0);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x495D58);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x494750);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xA41A0;
		assembly.FromVirtual = 0x4A41A0;
		assembly.ReturnVirtual = 0x4A41A5;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x7BB3CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4947D0);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A41A5);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x494890);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 48C3DFh)
		size_t Position = 0x8C3E4;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 42)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 9 + 45;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh))
		assembly.code = code1;
		assembly.From = 0x8EC1E;
		assembly.FromVirtual = 0x48EC1E;
		assembly.ReturnVirtual = 0x48EC23;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x79E7CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493ED0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48EC23);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493F90);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh))
		assembly.code = code1;
		assembly.From = 0x8EC5C;
		assembly.FromVirtual = 0x48EC5C;
		assembly.ReturnVirtual = 0x48EC61;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x79E7CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493ED0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48EC61);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493F90);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh))
		assembly.code = code1;
		assembly.From = 0x8EDB7;
		assembly.FromVirtual = 0x48EDB7;
		assembly.ReturnVirtual = 0x48EDBC;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x79E7CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493ED0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48EDBC);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493F90);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh))
		assembly.code = code1;
		assembly.From = 0x8EDE8;
		assembly.FromVirtual = 0x48EDE8;
		assembly.ReturnVirtual = 0x48EDED;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x79E7CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493ED0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48EDED);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493F90);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh))
		assembly.code = code1;
		assembly.From = 0x8EB24;
		assembly.FromVirtual = 0x48EB24;
		assembly.ReturnVirtual = 0x48EB29;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x79E7CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493ED0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48EB29);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493F90);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 6 (_fxAnimTriggerHandler, effetto sfera di luce piccola (7Ch))
		assembly.code = code1;
		assembly.From = 0x8EA78;
		assembly.FromVirtual = 0x48EA78;
		assembly.ReturnVirtual = 0x48EA7D;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x79E7CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493ED0);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48EA7D);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493F90);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0x94103;
		assembly.FromVirtual = 0x494103;
		assembly.ReturnVirtual = 0x494108;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x79E7CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4932D0);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x494108);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493350);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0x94953;
		assembly.FromVirtual = 0x494953;
		assembly.ReturnVirtual = 0x494958;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x79E7CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4932D0);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x494958);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493350);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xA2DA0;
		assembly.FromVirtual = 0x4A2DA0;
		assembly.ReturnVirtual = 0x4A2DA5;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x79E7CC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x4933D0);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A2DA5);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493490);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 48AFAFh)
		size_t Position = 0x8AFB4;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
	if (ver == 39)
	{
		string code1 ("\x8A\x0D\xA8\xAB\x76\0\x80\xF9\x01\x74\x0A\xE8\x70\x30\xAF\xFF\xE9\xA7\x91\xAE\xFF\xE8\x06\x31\xAF\xFF", 26);
		Pro_Fix_String assembly;
		unsigned int assembly_size = code1.size() * 8 + 40;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		// Scrittura blocco 1 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh))
		assembly.code = code1;
		assembly.From = 0x8D8F4;
		assembly.FromVirtual = 0x48D8F4;
		assembly.ReturnVirtual = 0x48D8F9;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x787BBC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493090);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48D8F9);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493150);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_fxAnimTriggerHandler, effetto nebulosa blu (7Eh))
		assembly.code = code1;
		assembly.From = 0x8D932;
		assembly.FromVirtual = 0x48D932;
		assembly.ReturnVirtual = 0x48D937;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x787BBC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493090);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48D937);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493150);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		
		// Scrittura blocco 3 (_fxAnimTriggerHandler, effetto fulmini (7Fh))
		assembly.code = code1;
		assembly.From = 0x8DAEA;
		assembly.FromVirtual = 0x48DAEA;
		assembly.ReturnVirtual = 0x48DAEF;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x787BBC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493090);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48DAEF);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493150);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (_fxAnimTriggerHandler, effetto fulmini (7Fh))
		assembly.code = code1;
		assembly.From = 0x8DB1E;
		assembly.FromVirtual = 0x48DB1E;
		assembly.ReturnVirtual = 0x48DB23;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x787BBC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493090);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48DB23);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493150);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 5 (_fxAnimTriggerHandler, effetto sfera di luce grande (7Dh))
		assembly.code = code1;
		assembly.From = 0x8D7AA;
		assembly.FromVirtual = 0x48D7AA;
		assembly.ReturnVirtual = 0x48D7AF;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x787BBC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x493090);			// _fxInsertDustParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x48D7AF);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x493150);			// _fxInsertDustParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Il blocco 6 non esiste perchè è lo stesso del 5.		

		// Scrittura blocco 7 (_fxInsertLightParticle)
		assembly.code = code1;
		assembly.From = 0x932C3;
		assembly.FromVirtual = 0x4932C3;
		assembly.ReturnVirtual = 0x4932C8;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x787BBC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x492490);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4932C8);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x492510);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 8 (_fxInsertFlareParticle)
		assembly.code = code1;
		assembly.From = 0x93B13;
		assembly.FromVirtual = 0x493B13;
		assembly.ReturnVirtual = 0x493B18;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x787BBC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x492490);			// _fxFindFreeParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x493B18);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x492510);			// _fxFindFreeParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();

		// Scrittura blocco 9 (_fxProcessBox)
		assembly.code = code1;
		assembly.From = 0xA1DA4;
		assembly.FromVirtual = 0x4A1DA4;
		assembly.ReturnVirtual = 0x4A1DA9;
		assembly.Gvar_pos.push_back(2);
		assembly.GvarVirtual_pos.push_back(0x787BBC);			// _fxCamUnderWater
		assembly.ToRelocate_pos.push_back(12);
		assembly.AbsVirtual_pos.push_back(0x492590);			// _fxInsertParticle
		assembly.ToRelocate_pos.push_back(17);
		assembly.AbsVirtual_pos.push_back(0x4A1DA9);
		assembly.ToRelocate_pos.push_back(22);
		assembly.AbsVirtual_pos.push_back(0x492650);			// _fxInsertParticleUW
		exe = Pro_Fix_Write_code(exe, assembly);

		// Fix per aumentare il numero di bolle d'acqua (fxInsertBubbleParticleUW, offset 489924h)
		size_t Position = 0x89929;
		string code("\xA8\x01", 2);
		string temp = EXEorig.substr(0, Position);
		temp += code;
		temp += EXEorig.substr(Position + code.size(), string::npos);
		EXEorig = temp;
	}
}