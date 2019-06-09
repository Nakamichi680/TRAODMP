#include "stdafx.h"
#include "MISC/Misc_Functions.h"
#include "PRO_SHARED/Pro_FIX.h"


void fxRainSlots_Enable()
{
	string Title, temp;
	Pro_Fix_Class exe;
	unsigned int Slot_size, Data_size;

	// Per personalizzare il numero di effetti cambiare questo valore
	unsigned int nRain = 24576;							// Default: 2048

	if (ver == 452)
	{
		Title = "########################fxRain mod########################";
		Slot_size = 0x40;																	// Dimensione slot pioggia: 64 bytes
		Data_size = nRain * Slot_size;
		exe = Pro_Fix_Allocate_space(Data_size, Title);										// Allocazione spazio in coda all'exe
		temp = EXEorig.substr(0, exe.EXE_offset);
		for (unsigned int i = 0; i < Data_size; i++)
			temp.push_back('\0');															// La serie di "90h" viene sostituita da altrettanti "00h"
		EXEorig = temp;
		ChangeDWORDValue(exe.Virtual_offset, 0xD5086);
		ChangeDWORDValue(exe.Virtual_offset, 0xD5092);
		ChangeDWORDValue(exe.Virtual_offset, 0xD509E);
		ChangeDWORDValue(exe.Virtual_offset, 0xD50A4);
		ChangeDWORDValue(exe.Virtual_offset, 0xD50B0);
		ChangeDWORDValue(exe.Virtual_offset, 0xD50BC);
		ChangeDWORDValue(exe.Virtual_offset, 0xD50DE);
		ChangeDWORDValue(exe.Virtual_offset, 0xD5117);
		ChangeDWORDValue(exe.Virtual_offset, 0xD511E);
		ChangeDWORDValue(exe.Virtual_offset + 4, 0xD508C);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size + 4, 0xD50AA);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size, 0xD50B6);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2 + 4, 0xD50C8);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 2, 0xD50D2);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3 + 4, 0xD50E4);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * 3, 0xD50EA);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nRain - 1), 0xD5128);
		ChangeDWORDValue(exe.Virtual_offset + Slot_size * (nRain - 1) + 4, 0xD512D);
		ChangeDWORDValue(Slot_size * (nRain + 4), 0xD5107);									// Numero di ripetizioni del ciclo da effettuare
	}
	if (ver == 449)
	{
		
	}
	if (ver == 442)
	{
		
	}
	if (ver == 439)
	{
		
	}
	if (ver == 352)
	{
		
	}
	if (ver == 349)
	{
		
	}
	if (ver == 342)
	{
		
	}
	if (ver == 339)
	{
		
	}
	if (ver == 52)
	{
		
	}
	if (ver == 49)
	{
		
	}
	if (ver == 42)
	{
		
	}
	if (ver == 39)
	{
		
	}
}