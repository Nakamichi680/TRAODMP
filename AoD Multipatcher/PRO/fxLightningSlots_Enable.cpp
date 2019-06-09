#include "stdafx.h"
#include "MISC/Misc_Functions.h"
#include "PRO_SHARED/Pro_FIX.h"


void fxLightningSlots_Enable()
{
	string Title, temp;
	Pro_Fix_Class exe;
	unsigned int Slot_size, Data_size;

	// Per personalizzare il numero di effetti cambiare questo valore
	unsigned int nLightning = 180;						// Default: 128

	if (ver == 452)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xD53C2);
		ChangeDWORDValue(exe.Virtual_offset, 0xD53CE);
		ChangeDWORDValue(exe.Virtual_offset, 0xD53DA);
		ChangeDWORDValue(exe.Virtual_offset, 0xD53E0);
		ChangeDWORDValue(exe.Virtual_offset, 0xD53EC);
		ChangeDWORDValue(exe.Virtual_offset, 0xD53F8);
		ChangeDWORDValue(exe.Virtual_offset, 0xD5410);
		ChangeDWORDValue(exe.Virtual_offset, 0xD5453);
		ChangeDWORDValue(exe.Virtual_offset, 0xD545A);
		ChangeDWORDValue(exe.Virtual_offset + 4, 0xD53C8);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size + 4, 0xD53E6);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xD53F2);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2 + 4, 0xD5404);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2, 0xD540A);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3 + 4, 0xD5416);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3, 0xD5420);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xD5464);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xD5469);
		ChangeDWORDValue(Slot_size * (nLightning + 4), 0xD5443);							// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 449)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xD5646);
		ChangeDWORDValue(exe.Virtual_offset, 0xD5652);
		ChangeDWORDValue(exe.Virtual_offset, 0xD565E);
		ChangeDWORDValue(exe.Virtual_offset, 0xD5664);
		ChangeDWORDValue(exe.Virtual_offset, 0xD5670);
		ChangeDWORDValue(exe.Virtual_offset, 0xD567C);
		ChangeDWORDValue(exe.Virtual_offset, 0xD5694);
		ChangeDWORDValue(exe.Virtual_offset, 0xD56D7);
		ChangeDWORDValue(exe.Virtual_offset, 0xD56DE);
		ChangeDWORDValue(exe.Virtual_offset + 4, 0xD564C);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size + 4, 0xD566A);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xD5676);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2 + 4, 0xD5688);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2, 0xD568E);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3 + 4, 0xD569A);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3, 0xD56A4);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xD56E8);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xD56ED);
		ChangeDWORDValue(Slot_size * (nLightning + 4), 0xD56C7);							// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 442)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xD3B72);
		ChangeDWORDValue(exe.Virtual_offset, 0xD3B7E);
		ChangeDWORDValue(exe.Virtual_offset, 0xD3B8A);
		ChangeDWORDValue(exe.Virtual_offset, 0xD3B90);
		ChangeDWORDValue(exe.Virtual_offset, 0xD3B9C);
		ChangeDWORDValue(exe.Virtual_offset, 0xD3BA8);
		ChangeDWORDValue(exe.Virtual_offset, 0xD3BC0);
		ChangeDWORDValue(exe.Virtual_offset, 0xD3C03);
		ChangeDWORDValue(exe.Virtual_offset, 0xD3C0A);
		ChangeDWORDValue(exe.Virtual_offset + 4, 0xD3B78);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size + 4, 0xD3B96);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xD3BA2);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2 + 4, 0xD3BB4);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2, 0xD3BBA);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3 + 4, 0xD3BC6);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3, 0xD3BD0);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xD3C14);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xD3C19);
		ChangeDWORDValue(Slot_size * (nLightning + 4), 0xD3BF3);							// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 439)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xD26C2);
		ChangeDWORDValue(exe.Virtual_offset, 0xD26CE);
		ChangeDWORDValue(exe.Virtual_offset, 0xD26DA);
		ChangeDWORDValue(exe.Virtual_offset, 0xD26E0);
		ChangeDWORDValue(exe.Virtual_offset, 0xD26EC);
		ChangeDWORDValue(exe.Virtual_offset, 0xD26F8);
		ChangeDWORDValue(exe.Virtual_offset, 0xD2710);
		ChangeDWORDValue(exe.Virtual_offset, 0xD2753);
		ChangeDWORDValue(exe.Virtual_offset, 0xD275A);
		ChangeDWORDValue(exe.Virtual_offset + 4, 0xD26C8);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size + 4, 0xD26E6);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xD26F2);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2 + 4, 0xD2704);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2, 0xD270A);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3 + 4, 0xD2716);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3, 0xD2720);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xD2764);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xD2769);
		ChangeDWORDValue(Slot_size * (nLightning + 4), 0xD2743);							// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 352)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xD07B7);
		ChangeDWORDValue(exe.Virtual_offset, 0xD07C4);
		ChangeDWORDValue(exe.Virtual_offset, 0xD07CA);
		ChangeDWORDValue(exe.Virtual_offset, 0xD07DC);
		ChangeDWORDValue(exe.Virtual_offset, 0xD07E2);
		ChangeDWORDValue(exe.Virtual_offset, 0xD07F4);
		ChangeDWORDValue(exe.Virtual_offset, 0xD0806);
		ChangeDWORDValue(exe.Virtual_offset, 0xD084F);
		ChangeDWORDValue(exe.Virtual_offset, 0xD0860);
		ChangeDWORDValue(exe.Virtual_offset + 4, 0xD07D0);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size + 4, 0xD07E8);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xD07EE);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2 + 4, 0xD0800);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2, 0xD0811);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3 + 4, 0xD0817);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3, 0xD081D);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xD085B);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xD0865);
		ChangeDWORDValue(Slot_size * (nLightning + 4), 0xD083F);							// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 349)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xD0A47);
		ChangeDWORDValue(exe.Virtual_offset, 0xD0A54);
		ChangeDWORDValue(exe.Virtual_offset, 0xD0A5A);
		ChangeDWORDValue(exe.Virtual_offset, 0xD0A6C);
		ChangeDWORDValue(exe.Virtual_offset, 0xD0A72);
		ChangeDWORDValue(exe.Virtual_offset, 0xD0A84);
		ChangeDWORDValue(exe.Virtual_offset, 0xD0A96);
		ChangeDWORDValue(exe.Virtual_offset, 0xD0ADF);
		ChangeDWORDValue(exe.Virtual_offset, 0xD0AF0);
		ChangeDWORDValue(exe.Virtual_offset + 4, 0xD0A60);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size + 4, 0xD0A78);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xD0A7E);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2 + 4, 0xD0A90);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2, 0xD0AA1);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3 + 4, 0xD0AA7);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3, 0xD0AAD);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xD0AEB);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xD0AF5);
		ChangeDWORDValue(Slot_size * (nLightning + 4), 0xD0ACF);							// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 342)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xCF0B3);
		ChangeDWORDValue(exe.Virtual_offset, 0xCF0C0);
		ChangeDWORDValue(exe.Virtual_offset, 0xCF0C6);
		ChangeDWORDValue(exe.Virtual_offset, 0xCF0D8);
		ChangeDWORDValue(exe.Virtual_offset, 0xCF0DE);
		ChangeDWORDValue(exe.Virtual_offset, 0xCF0F0);
		ChangeDWORDValue(exe.Virtual_offset, 0xCF102);
		ChangeDWORDValue(exe.Virtual_offset, 0xCF14B);
		ChangeDWORDValue(exe.Virtual_offset, 0xCF15C);
		ChangeDWORDValue(exe.Virtual_offset + 4, 0xCF0CC);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size + 4, 0xCF0E4);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xCF0EA);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2 + 4, 0xCF0FC);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2, 0xCF10D);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3 + 4, 0xCF113);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3, 0xCF119);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xCF157);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xCF161);
		ChangeDWORDValue(Slot_size * (nLightning + 4), 0xCF13B);							// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 339)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xCDD37);
		ChangeDWORDValue(exe.Virtual_offset, 0xCDD44);
		ChangeDWORDValue(exe.Virtual_offset, 0xCDD4A);
		ChangeDWORDValue(exe.Virtual_offset, 0xCDD5C);
		ChangeDWORDValue(exe.Virtual_offset, 0xCDD62);
		ChangeDWORDValue(exe.Virtual_offset, 0xCDD74);
		ChangeDWORDValue(exe.Virtual_offset, 0xCDD86);
		ChangeDWORDValue(exe.Virtual_offset, 0xCDDCF);
		ChangeDWORDValue(exe.Virtual_offset, 0xCDDE0);
		ChangeDWORDValue(exe.Virtual_offset + 4, 0xCDD50);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size + 4, 0xCDD68);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xCDD6E);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2 + 4, 0xCDD80);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2, 0xCDD91);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3 + 4, 0xCDD97);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3, 0xCDD9D);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xCDDDB);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xCDDE5);
		ChangeDWORDValue(Slot_size * (nLightning + 4), 0xCDDBF);							// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 52)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xAB94B);												// _lightning
		ChangeDWORDValue(exe.Virtual_offset, 0xAB95A);												// _lightning
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xAB921);									// Primo valore della funzione
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xAB955);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xAB95F);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning + 1), 0xAB93D);				// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 49)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xABC8B);												// _lightning
		ChangeDWORDValue(exe.Virtual_offset, 0xABC9A);												// _lightning
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xABC61);									// Primo valore della funzione
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xABC95);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xABC9F);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning + 1), 0xABC7D);				// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 42)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xAA88B);												// _lightning
		ChangeDWORDValue(exe.Virtual_offset, 0xAA89A);												// _lightning
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xAA861);									// Primo valore della funzione
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xAA895);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xAA89F);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning + 1), 0xAA87D);				// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 39)
	{
		Title = "######################fxInitLightning_mod######################";
		Slot_size = 0xB0;																	// Dimensione slot luci: 176 bytes
		Data_size = nLightning * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;

		ChangeDWORDValue(exe.Virtual_offset, 0xA97BB);												// _lightning
		ChangeDWORDValue(exe.Virtual_offset, 0xA97CA);												// _lightning
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xA9791);									// Primo valore della funzione
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1), 0xA97C5);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning - 1) + 4, 0xA97CF);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nLightning + 1), 0xA97AD);				// Numero di ripetizioni del ciclo da effettuare
	}
}