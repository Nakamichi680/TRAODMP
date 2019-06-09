#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_NumpadExit_status()						// Restituisce vero se è possibile uscire dal tastierino col gamepad, falso se impossibile (originale)
{
	size_t offset1;
	string orig("\xB9\0\0\x04\0", 5);			// mov ecx, 40000h (mapGetDBPadAMX)
	
	switch(ver)
	{
	case(452):
		offset1 = 0x11636B;
		break;
	case(449):
		offset1 = 0x1165BF;
		break;
	case(442):
		offset1 = 0x114A0F;
		break;
	case(439):
		offset1 = 0x113517;
		break;
	case(352):
		offset1 = 0x11122B;
		break;
	case(349):
		offset1 = 0x11148B;
		break;
	case(342):
		offset1 = 0x10F9F3;
		break;
	case(339):
		offset1 = 0x10E613;
		break;
	case(52):
		offset1 = 0xE85EA;
		break;
	case(49):
		offset1 = 0xE894A;
		break;
	case(42):
		offset1 = 0xE73DA;
		break;
	case(39):
		offset1 = 0xE623A;
	}

	string temp1 = EXEorig.substr(offset1, 5);
	if (temp1 == orig)
		return false;
	else
		return true;			// Se non viene trovata la stringa originale significa che il file è modificato
}


void Change_NumpadExit_status()						// Permette di uscire dal tastierino numerico con il gamepad (normalmente impossibile)
{
	string orig("\xB9\0\0\x04\0", 5);			// mov ecx, 40000h (mapGetDBPadAMX)
	string mod("\xB9\x20\0\x04\0", 5);			// mov ecx, 40020h (mapGetDBPadAMX)

	bool NumpadExit_status = Detect_NumpadExit_status();
	if (NumpadExit_status)				// Se il tasto di uscita per il gamepad (salto) è impostato, va disattivato
		switch (ver)
		{
		case (452):
			ChangeSTRINGValue(orig, 0x11636B);
			break;
		case (449):
			ChangeSTRINGValue(orig, 0x1165BF);
			break;
		case (442):
			ChangeSTRINGValue(orig, 0x114A0F);
			break;
		case (439):
			ChangeSTRINGValue(orig, 0x113517);
			break;
		case (352):
			ChangeSTRINGValue(orig, 0x11122B);
			break;
		case (349):
			ChangeSTRINGValue(orig, 0x11148B);
			break;
		case (342):
			ChangeSTRINGValue(orig, 0x10F9F3);
			break;
		case (339):
			ChangeSTRINGValue(orig, 0x10E613);
			break;
		case (52):
			ChangeSTRINGValue(orig, 0xE85EA);
			break;
		case (49):
			ChangeSTRINGValue(orig, 0xE894A);
			break;
		case (42):
			ChangeSTRINGValue(orig, 0xE73DA);
			break;
		case (39):
			ChangeSTRINGValue(orig, 0xE623A);
		}
	else								// Altrimenti se il tasto di uscita non è presente va attivato
		switch (ver)
		{
		case (452):
			ChangeSTRINGValue(mod, 0x11636B);
			break;
		case (449):
			ChangeSTRINGValue(mod, 0x1165BF);
			break;
		case (442):
			ChangeSTRINGValue(mod, 0x114A0F);
			break;
		case (439):
			ChangeSTRINGValue(mod, 0x113517);
			break;
		case (352):
			ChangeSTRINGValue(mod, 0x11122B);
			break;
		case (349):
			ChangeSTRINGValue(mod, 0x11148B);
			break;
		case (342):
			ChangeSTRINGValue(mod, 0x10F9F3);
			break;
		case (339):
			ChangeSTRINGValue(mod, 0x10E613);
			break;
		case (52):
			ChangeSTRINGValue(mod, 0xE85EA);
			break;
		case (49):
			ChangeSTRINGValue(mod, 0xE894A);
			break;
		case (42):
			ChangeSTRINGValue(mod, 0xE73DA);
			break;
		case (39):
			ChangeSTRINGValue(mod, 0xE623A);
		}
}