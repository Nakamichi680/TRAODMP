#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void HUD_mod_Enable()
{
	string Title = "#####################HUD health bar mod######################";
	if (ver == 452)
	{
		string code1("\xA3\xA0\x40\x9C\0\x59\x85\xC0\x0F\x85\xF2\x98\xB8\xFF", 14);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\x68\x7F\x7F\x7F\x3F", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x14DA20;
		assembly.FromVirtual = 0x54DA20;
		assembly.ReturnVirtual = 0x54DA25;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(4);
		assembly.ToRelocate_pos.push_back(10);
		assembly.AbsVirtual_pos.push_back(0x54DA31);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x14DA76;
		assembly.FromVirtual = 0x54DA76;
		assembly.ReturnVirtual = 0x54DA7B;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(4);
		assembly.ToRelocate_pos.push_back(10);
		assembly.AbsVirtual_pos.push_back(0x54DA99);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0x117005;
		assembly.FromVirtual = 0x517005;
		assembly.ReturnVirtual = 0x51700A;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(3);
		assembly.Data_pos.push_back(25);
		assembly.Data_ID.push_back(0);
		assembly.Data_pos.push_back(34);
		assembly.Data_ID.push_back(2);
		assembly.Data_pos.push_back(42);
		assembly.Data_ID.push_back(2);
		assembly.Data_pos.push_back(69);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(86);
		assembly.Data_ID.push_back(1);
		assembly.Data_pos.push_back(94);
		assembly.Data_ID.push_back(4);
		assembly.Data_pos.push_back(111);
		assembly.Data_ID.push_back(3);
		assembly.Data_pos.push_back(118);
		assembly.Data_ID.push_back(3);
		assembly.ToRelocate_pos.push_back(103);
		assembly.AbsVirtual_pos.push_back(0x51723A);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x17F57E;
		assembly.FromVirtual = 0x57F57E;
		assembly.ReturnVirtual = 0x57F583;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x17C0D5;
		assembly.FromVirtual = 0x57C0D5;
		assembly.ReturnVirtual = 0x57C0DA;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 449)
	{
		string code1("\xA3\xA0\x40\x9C\0\x59\x85\xC0\x0F\x85\xF2\x98\xB8\xFF", 14);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\x68\x7F\x7F\x7F\x3F", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x14DB44;
		assembly.FromVirtual = 0x54DB44;
		assembly.ReturnVirtual = 0x54DB49;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x54DB55);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x14DB9A;
		assembly.FromVirtual = 0x54DB9A;
		assembly.ReturnVirtual = 0x54DB9F;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(4);
		assembly.ToRelocate_pos.push_back(10);
		assembly.AbsVirtual_pos.push_back(0x54DBBD);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0x117269;
		assembly.FromVirtual = 0x517269;
		assembly.ReturnVirtual = 0x51726E;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x51749E);
		assembly.Add_Gvar(18, 0x6DB8A4);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x79DE78);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x6DB8BC);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x6DB8B0);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x17EF36;
		assembly.FromVirtual = 0x57EF36;
		assembly.ReturnVirtual = 0x57EF3B;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x17BA8D;
		assembly.FromVirtual = 0x57BA8D;
		assembly.ReturnVirtual = 0x57BA92;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 442)
	{
		string code1("\xA3\xA0\x40\x9C\0\x59\x85\xC0\x0F\x85\xF2\x98\xB8\xFF", 14);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\x68\x7F\x7F\x7F\x3F", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x14BFC4;
		assembly.FromVirtual = 0x54BFC4;
		assembly.ReturnVirtual = 0x54BFC9;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x54BFD5);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x14C01A;
		assembly.FromVirtual = 0x54C01A;
		assembly.ReturnVirtual = 0x54C01F;
		assembly.Data_pos.push_back(1);
		assembly.Data_ID.push_back(4);
		assembly.ToRelocate_pos.push_back(10);
		assembly.AbsVirtual_pos.push_back(0x54C03D);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0x1156AD;
		assembly.FromVirtual = 0x5156AD;
		assembly.ReturnVirtual = 0x5156B2;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x5158E2);
		assembly.Add_Gvar(18, 0x6B3684);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x775DCC);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x6B369C);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x6B3690);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x17D132;
		assembly.FromVirtual = 0x57D132;
		assembly.ReturnVirtual = 0x57D137;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x179C8D;
		assembly.FromVirtual = 0x579C8D;
		assembly.ReturnVirtual = 0x579C92;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 439)
	{
		string code1("\xA3\xA0\x40\x9C\0\x59\x85\xC0\x0F\x85\xF2\x98\xB8\xFF", 14);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\x68\x7F\x7F\x7F\x3F", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x14AAD8;
		assembly.FromVirtual = 0x54AAD8;
		assembly.ReturnVirtual = 0x54AADD;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x54AAE9);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x14AB2E;
		assembly.FromVirtual = 0x54AB2E;
		assembly.ReturnVirtual = 0x54AB33;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x54AB51);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0x1141A9;
		assembly.FromVirtual = 0x5141A9;
		assembly.ReturnVirtual = 0x5141AE;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x5143DE);
		assembly.Add_Gvar(18, 0x6A9664);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x76BA8C);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x6A967C);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x6A9670);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x17BC46;
		assembly.FromVirtual = 0x57BC46;
		assembly.ReturnVirtual = 0x57BC4B;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x1787A1;
		assembly.FromVirtual = 0x5787A1;
		assembly.ReturnVirtual = 0x5787A6;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 352)
	{
		string code1("\xA3\xA0\x40\x9C\0\x59\x85\xC0\x0F\x85\xF2\x98\xB8\xFF", 14);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\xBA\x10\0\0\0", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x147CC1;
		assembly.FromVirtual = 0x547CC1;
		assembly.ReturnVirtual = 0x547CC6;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x547CD2);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x147D17;
		assembly.FromVirtual = 0x547D17;
		assembly.ReturnVirtual = 0x547D1C;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x547D3A);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0x111E35;
		assembly.FromVirtual = 0x511E35;
		assembly.ReturnVirtual = 0x511E3A;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x512065);
		assembly.Add_Gvar(18, 0x6D37C4);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x78D978);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x6D37DC);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x6D37D0);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x1791C4;
		assembly.FromVirtual = 0x5791C4;
		assembly.ReturnVirtual = 0x5791C9;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x175DB9;
		assembly.FromVirtual = 0x575DB9;
		assembly.ReturnVirtual = 0x575DBE;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 349)
	{
		string code1("\xA3\xA0\x40\x9C\0\x59\x85\xC0\x0F\x85\xF2\x98\xB8\xFF", 14);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\xBA\x10\0\0\0", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x147DE9;
		assembly.FromVirtual = 0x547DE9;
		assembly.ReturnVirtual = 0x547DEE;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x547DFA);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x147E3F;
		assembly.FromVirtual = 0x547E3F;
		assembly.ReturnVirtual = 0x547E44;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x547E62);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0x1120A5;
		assembly.FromVirtual = 0x5120A5;
		assembly.ReturnVirtual = 0x5120AA;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x5122D5);
		assembly.Add_Gvar(18, 0x6D37A4);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x78D938);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x6D37BC);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x6D37B0);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x178BB0;
		assembly.FromVirtual = 0x578BB0;
		assembly.ReturnVirtual = 0x578BB5;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x1757A5;
		assembly.FromVirtual = 0x5757A5;
		assembly.ReturnVirtual = 0x5757AA;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 342)
	{
		string code1("\xA3\xA0\x40\x9C\0\x59\x85\xC0\x0F\x85\xF2\x98\xB8\xFF", 14);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\xBA\x10\0\0\0", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x14639D;
		assembly.FromVirtual = 0x54639D;
		assembly.ReturnVirtual = 0x5463A2;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x5463AE);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x1463F3;
		assembly.FromVirtual = 0x5463F3;
		assembly.ReturnVirtual = 0x5463F8;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x546416);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0x110611;
		assembly.FromVirtual = 0x510611;
		assembly.ReturnVirtual = 0x510616;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x510841);
		assembly.Add_Gvar(18, 0x6AB584);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x76588C);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x6AB59C);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x6AB590);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x176EE4;
		assembly.FromVirtual = 0x576EE4;
		assembly.ReturnVirtual = 0x576EE9;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x173ADD;
		assembly.FromVirtual = 0x573ADD;
		assembly.ReturnVirtual = 0x573AE2;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 339)
	{
		string code1("\xA3\xA0\x40\x9C\0\x59\x85\xC0\x0F\x85\xF2\x98\xB8\xFF", 14);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\xBA\x10\0\0\0", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x144FBD;
		assembly.FromVirtual = 0x544FBD;
		assembly.ReturnVirtual = 0x544FC2;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x544FCE);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x145013;
		assembly.FromVirtual = 0x545013;
		assembly.ReturnVirtual = 0x545018;
		assembly.Add_data(1, 4);
		assembly.Add_relocate(10, 0x545036);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0x10F245;
		assembly.FromVirtual = 0x50F245;
		assembly.ReturnVirtual = 0x50F24A;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x50F475);
		assembly.Add_Gvar(18, 0x6A1564);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x75B50C);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x6A157C);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x6A1570);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x175AFC;
		assembly.FromVirtual = 0x575AFC;
		assembly.ReturnVirtual = 0x575B01;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x1726F5;
		assembly.FromVirtual = 0x5726F5;
		assembly.ReturnVirtual = 0x5726FA;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 52)
	{
		string code1("\xA3\xA0\x40\x9C\0\x83\xC4\x04\x85\xC0", 10);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\x68\x7F\x7F\x7F\x3F", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x11A8D0;
		assembly.FromVirtual = 0x51A8D0;
		assembly.ReturnVirtual = 0x51A8D5;
		assembly.Add_data(1, 4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x11A94C;
		assembly.FromVirtual = 0x51A94C;
		assembly.ReturnVirtual = 0x51A951;
		assembly.Add_data(1, 4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0xE9001;
		assembly.FromVirtual = 0x4E9001;
		assembly.ReturnVirtual = 0x4E9006;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x4E91F8);
		assembly.Add_Gvar(18, 0x6A08B0);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x803974);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x6A08C8);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x6A08BC);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x14B060;
		assembly.FromVirtual = 0x54B060;
		assembly.ReturnVirtual = 0x54B065;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x148045;
		assembly.FromVirtual = 0x548045;
		assembly.ReturnVirtual = 0x54804A;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 49)
	{
		string code1("\xA3\xA0\x40\x9C\0\x83\xC4\x04\x85\xC0", 10);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\x68\x7F\x7F\x7F\x3F", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x11ABCC;
		assembly.FromVirtual = 0x51ABCC;
		assembly.ReturnVirtual = 0x51ABD1;
		assembly.Add_data(1, 4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x11AB50;
		assembly.FromVirtual = 0x51AB50;
		assembly.ReturnVirtual = 0x51AB55;
		assembly.Add_data(1, 4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0xE9351;
		assembly.FromVirtual = 0x4E9351;
		assembly.ReturnVirtual = 0x4E9356;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x4E9548);
		assembly.Add_Gvar(18, 0x69FC00);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x802AB4);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x69FC18);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x69FC0C);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x14ABB0;
		assembly.FromVirtual = 0x54ABB0;
		assembly.ReturnVirtual = 0x54ABB5;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x147B95;
		assembly.FromVirtual = 0x547B95;
		assembly.ReturnVirtual = 0x547B9A;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 42)
	{
		string code1("\xA3\xA0\x40\x9C\0\x83\xC4\x04\x85\xC0", 10);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\x68\x7F\x7F\x7F\x3F", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x11962C;
		assembly.FromVirtual = 0x51962C;
		assembly.ReturnVirtual = 0x519631;
		assembly.Add_data(1, 4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x1195B0;
		assembly.FromVirtual = 0x5195B0;
		assembly.ReturnVirtual = 0x5195B5;
		assembly.Add_data(1, 4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0xE7DB1;
		assembly.FromVirtual = 0x4E7DB1;
		assembly.ReturnVirtual = 0x4E7DB6;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x4E7FA8);
		assembly.Add_Gvar(18, 0x67EEF0);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x7E60BC);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x67EF08);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x67EEFC);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x1493A0;
		assembly.FromVirtual = 0x5493A0;
		assembly.ReturnVirtual = 0x5493A5;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x146385;
		assembly.FromVirtual = 0x546385;
		assembly.ReturnVirtual = 0x54638A;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}

	if (ver == 39)
	{
		string code1("\xA3\xA0\x40\x9C\0\x83\xC4\x04\x85\xC0", 10);
		string code2("\x8B\x1D\x9C\x40\x9C\0\x81\xFB\x8F\0\0\0\x7E\x65\xF3\x0F\x10\x1D\xC4\xC8\x6D\0\x0F\x2F\x1D\x90\x40\x9C\0\x72\x5B\x0F\x2F\x1D\x98\x40\x9C\0\xF3\x0F\x11\x1D\x98\x40\x9C\0\x75\x3B\x8B\x1D\xB8\xEE\x79\0\x85\xDB\x75\x40\xF3\x0F\x10\x1D\xDC\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x2F\xF3\x0F\x10\x1D\xD0\xC8\x6D\0\x0F\x2F\x1D\x94\x40\x9C\0\x77\x1E\x8B\x1D\xA0\x40\x9C\x0\x85\xDB\x75\x14\xE9\x27\x31\xB5\xFF\x31\xDB\x89\x1D\x9C\x40\x9C\0\x43\x89\x1D\x9C\x40\x9C\0\x68\x7F\x7F\x7F\x3F", 127);
		string code3("\xC7\x05\x60\x42\x9C\0\x01\0\0\0", 10);
		string code4("\xC7\x05\x92\x41\x9C\0\0\0\0\0", 10);
		Pro_Fix_String assembly;
		// Inizializzazione slot per dati e allocazione spazio per dati e codice assembly
		assembly.nData = 5;
		assembly.Data_default_value.push_back(0x3E500000);		// Soglia minima di vita al di sotto della quale viene visualizzato l'HUD
		assembly.Data_default_value.push_back(0);				// Usato per confrontare con i valori delle barre di grip e ossigeno
		assembly.Data_default_value.push_back(0x3F800000);		// Slot che salva il valore di vita del frame precedente per confrontarlo con l'attuale
		assembly.Data_default_value.push_back(0x00000090);		// Contatore timeout HUD dopo danno subito
		assembly.Data_default_value.push_back(0);				// 0 se l'arma è nella fondina, diverso da 0 se è estratta (usato anche per l'inventario, load game e new game)
		unsigned int assembly_size = code1.size() * 2 + code2.size() + code3.size() + code4.size() + assembly.nData * 4 + 25;
		Pro_Fix_Class exe = Pro_Fix_Allocate_space(assembly_size, Title);
		exe = Pro_Fix_Write_data(exe, assembly);
		// Scrittura blocco 1 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x118A6C;
		assembly.FromVirtual = 0x518A6C;
		assembly.ReturnVirtual = 0x518A71;
		assembly.Add_data(1, 4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 2 (_playCombatControl, per vedere se l'arma è estratta)
		assembly.code = code1;
		assembly.From = 0x1189F0;
		assembly.FromVirtual = 0x5189F0;
		assembly.ReturnVirtual = 0x5189F5;
		assembly.Add_data(1, 4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 3 (_conDrawStatusBar)
		assembly.code = code2;
		assembly.From = 0xE6C11;
		assembly.FromVirtual = 0x4E6C11;
		assembly.ReturnVirtual = 0x4E6C16;
		assembly.Add_data(2, 3);
		assembly.Add_data(25, 0);
		assembly.Add_data(34, 2);
		assembly.Add_data(42, 2);
		assembly.Add_data(69, 1);
		assembly.Add_data(86, 1);
		assembly.Add_data(94, 4);
		assembly.Add_data(111, 3);
		assembly.Add_data(118, 3);
		assembly.Add_relocate(103, 0x4E6E08);
		assembly.Add_Gvar(18, 0x66CA70);		// _gconHealthValue
		assembly.Add_Gvar(50, 0x7CF4AC);		// _gconDamageCount
		assembly.Add_Gvar(62, 0x66CA88);		// _gconArcBValue
		assembly.Add_Gvar(79, 0x66CA7C);		// _gconArcAValue
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 4 (attivazione barra nell'inventario)
		assembly.code = code3;
		assembly.From = 0x148F20;
		assembly.FromVirtual = 0x548F20;
		assembly.ReturnVirtual = 0x548F25;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
		// Pulitura vettori dati e relocate
		assembly.Reset();
		// Scrittura blocco 5 (disattivazione barra all'inizio di ogni frame)
		assembly.code = code4;
		assembly.From = 0x145F05;
		assembly.FromVirtual = 0x545F05;
		assembly.ReturnVirtual = 0x545F0A;
		assembly.Data_pos.push_back(2);
		assembly.Data_ID.push_back(4);
		exe = Pro_Fix_Write_code(exe, assembly);
	}
}