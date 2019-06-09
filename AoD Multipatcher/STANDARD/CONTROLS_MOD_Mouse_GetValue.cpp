#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Mouse_GetValue_status()					// Restituisce vero se è modificato il mouse (no isteresi, range oltre -127/+127), falso se originale
{
	size_t offset;
	string temp;
	string orig_traod_p4("\xF3\x0F\x58\x19", 4);
	string orig_traod_p3("\xF3\x0F\x58\x0A", 4);
	string orig_traod("\x8B\x4C\x24\x08\xD8\x01", 6);
	switch(ver)
	{
	case(452):
		offset = 0x1CC52;
		temp = EXEorig.substr(offset, 4);
		if (temp == orig_traod_p4)	return false;
		break;
	case(449):
		offset = 0x1CC96;
		temp = EXEorig.substr(offset, 4);
		if (temp == orig_traod_p4)	return false;
		break;
	case(442):
		offset = 0x1C74E;
		temp = EXEorig.substr(offset, 4);
		if (temp == orig_traod_p4)	return false;
		break;
	case(439):
		offset = 0x1B60E;
		temp = EXEorig.substr(offset, 4);
		if (temp == orig_traod_p4)	return false;
		break;
	case(352):
		offset = 0x1C10E;
		temp = EXEorig.substr(offset, 4);
		if (temp == orig_traod_p3)	return false;
		break;
	case(349):
		offset = 0x1C102;
		temp = EXEorig.substr(offset, 4);
		if (temp == orig_traod_p3)	return false;
		break;
	case(342):
		offset = 0x1BCF2;
		temp = EXEorig.substr(offset, 4);
		if (temp == orig_traod_p3)	return false;
		break;
	case(339):
		offset = 0x1ABC6;
		temp = EXEorig.substr(offset, 4);
		if (temp == orig_traod_p3)	return false;
		break;
	case(52):
		offset = 0x16F3B;
		temp = EXEorig.substr(offset, 6);
		if (temp == orig_traod)	return false;
		break;
	case(49):
		offset = 0x16F5B;
		temp = EXEorig.substr(offset, 6);
		if (temp == orig_traod)	return false;
		break;
	case(42):
		offset = 0x16DDB;
		temp = EXEorig.substr(offset, 6);
		if (temp == orig_traod)	return false;
		break;
	case(39):
		offset = 0x15CDB;
		temp = EXEorig.substr(offset, 6);
		if (temp == orig_traod) return false;
	}
	return true;			// Se non viene trovata la stringa originale significa che il file è modificato
}


void Change_Mouse_GetValue_status()
{
	////////////	STRINGHE ORIGINALI
	string orig_traod("\x8B\x4C\x24\x08\xD8\x01", 6);
	
	////////////	STRINGHE MODIFICATE
	string mod_traod("\x90\x90\x90\x90\x90\x90", 6);

	if (Detect_Mouse_GetValue_status())			// Se la modifica è vera è necessario copiare le stringhe originali
		switch (ver)
		{
		case(452):
			ChangeDWORDValue(0x19580FF3, 0x1CC52);						// Stringa isteresi
			ChangeQWORDValue(0x405FC00000000000, 0x322818);				// +127
			ChangeQWORDValue(0xC05FC00000000000, 0x322830);				// -127
			return;
		case(449):
			ChangeDWORDValue(0x19580FF3, 0x1CC96);						// Stringa isteresi
			ChangeQWORDValue(0x405FC00000000000, 0x321848);				// +127
			ChangeQWORDValue(0xC05FC00000000000, 0x321860);				// -127
			return;
		case(442):
			ChangeDWORDValue(0x19580FF3, 0x1C74E);						// Stringa isteresi
			ChangeQWORDValue(0x405FC00000000000, 0x2F9748);				// +127
			ChangeQWORDValue(0xC05FC00000000000, 0x2F9760);				// -127
			return;
		case(439):
			ChangeDWORDValue(0x19580FF3, 0x1B60E);						// Stringa isteresi
			ChangeQWORDValue(0x405FC00000000000, 0x2EF028);				// +127
			ChangeQWORDValue(0xC05FC00000000000, 0x2EF040);				// -127
			return;
		case(352):
			ChangeDWORDValue(0x0A580FF3, 0x1C10E);						// Stringa isteresi
			ChangeDWORDValue(0x42FE0000, 0x3117C8);						// +127
			ChangeDWORDValue(0xC2FE0000, 0x3117C4);						// -127
			return;
		case(349):
			ChangeDWORDValue(0x0A580FF3, 0x1C102);						// Stringa isteresi
			ChangeDWORDValue(0x42FE0000, 0x311818);						// +127
			ChangeDWORDValue(0xC2FE0000, 0x311814);						// -127
			return;
		case(342):
			ChangeDWORDValue(0x0A580FF3, 0x1BCF2);						// Stringa isteresi
			ChangeDWORDValue(0x42FE0000, 0x2E9718);						// +127
			ChangeDWORDValue(0xC2FE0000, 0x2E9714);						// -127
			return;
		case(339):
			ChangeDWORDValue(0x0A580FF3, 0x1ABC6);						// Stringa isteresi
			ChangeDWORDValue(0x42FE0000, 0x2DEFF8);						// +127
			ChangeDWORDValue(0xC2FE0000, 0x2DEFF4);						// -127
			return;
		case(52):
			ChangeSTRINGValue(orig_traod, 0x16F3B);						// Stringa isteresi
			ChangeDWORDValue(0x00629BE0, 0x16F43);						// Puntatore a +127
			ChangeDWORDValue(0x00629BE0, 0x16F52);						// Puntatore a +127
			ChangeDWORDValue(0x00629BE0, 0x16F6F);						// Puntatore a +127
			ChangeDWORDValue(0x00629BE0, 0x16F83);						// Puntatore a +127
			ChangeDWORDValue(0x0062B208, 0x16F76);						// Puntatore a -127
			ChangeDWORDValue(0x0062B208, 0x16FA2);						// Puntatore a -127
			ChangeQWORDValue(0x9090909090909090, 0x16FC4);				// Codecave per +850/-850
			return;
		case(49):
			ChangeSTRINGValue(orig_traod, 0x16F5B);						// Stringa isteresi
			ChangeDWORDValue(0x00628BE0, 0x16F63);						// Puntatore a +127
			ChangeDWORDValue(0x00628BE0, 0x16F72);						// Puntatore a +127
			ChangeDWORDValue(0x00628BE0, 0x16F8F);						// Puntatore a +127
			ChangeDWORDValue(0x00628BE0, 0x16FA3);						// Puntatore a +127
			ChangeDWORDValue(0x0062A208, 0x16F96);						// Puntatore a -127
			ChangeDWORDValue(0x0062A208, 0x16FC2);						// Puntatore a -127
			ChangeQWORDValue(0x9090909090909090, 0x16FE4);				// Codecave per +850/-850
			return;
		case(42):
			ChangeSTRINGValue(orig_traod, 0x16DDB);						// Stringa isteresi
			ChangeDWORDValue(0x0061FBE0, 0x16DE3);						// Puntatore a +127
			ChangeDWORDValue(0x0061FBE0, 0x16DF2);						// Puntatore a +127
			ChangeDWORDValue(0x0061FBE0, 0x16E0F);						// Puntatore a +127
			ChangeDWORDValue(0x0061FBE0, 0x16E23);						// Puntatore a +127
			ChangeDWORDValue(0x00621208, 0x16E16);						// Puntatore a -127
			ChangeDWORDValue(0x00621208, 0x16E42);						// Puntatore a -127
			ChangeQWORDValue(0x9090909090909090, 0x16E64);				// Codecave per +850/-850
			return;
		case(39):
			ChangeSTRINGValue(orig_traod, 0x15CDB);						// Stringa isteresi
			ChangeDWORDValue(0x0060EBB0, 0x15CE3);						// Puntatore a +127
			ChangeDWORDValue(0x0060EBB0, 0x15CF2);						// Puntatore a +127
			ChangeDWORDValue(0x0060EBB0, 0x15D0F);						// Puntatore a +127
			ChangeDWORDValue(0x0060EBB0, 0x15D23);						// Puntatore a +127
			ChangeDWORDValue(0x0060FFF8, 0x15D16);						// Puntatore a -127
			ChangeDWORDValue(0x0060FFF8, 0x15D42);						// Puntatore a -127
			ChangeQWORDValue(0x9090909090909090, 0x15D64);				// Codecave per +850/-850
			return;
		}
	else							// Se il file è originale è necessario applicare le stringhe modificate
		switch (ver)
		{
		case(452):
			ChangeDWORDValue(0x90909090, 0x1CC52);						// Stringa isteresi
			ChangeQWORDValue(0x408A900000000000, 0x322818);				// +127
			ChangeQWORDValue(0xC08A900000000000, 0x322830);				// -127
			return;
		case(449):
			ChangeDWORDValue(0x90909090, 0x1CC96);						// Stringa isteresi
			ChangeQWORDValue(0x408A900000000000, 0x321848);				// +127
			ChangeQWORDValue(0xC08A900000000000, 0x321860);				// -127
			return;
		case(442):
			ChangeDWORDValue(0x90909090, 0x1C74E);						// Stringa isteresi
			ChangeQWORDValue(0x408A900000000000, 0x2F9748);				// +127
			ChangeQWORDValue(0xC08A900000000000, 0x2F9760);				// -127
			return;
		case(439):
			ChangeDWORDValue(0x90909090, 0x1B60E);						// Stringa isteresi
			ChangeQWORDValue(0x408A900000000000, 0x2EF028);				// +127
			ChangeQWORDValue(0xC08A900000000000, 0x2EF040);				// -127
			return;
		case(352):
			ChangeDWORDValue(0x90909090, 0x1C10E);						// Stringa isteresi
			ChangeDWORDValue(0x44548000, 0x3117C8);						// +127
			ChangeDWORDValue(0xC4548000, 0x3117C4);						// -127
			return;
		case(349):
			ChangeDWORDValue(0x90909090, 0x1C102);						// Stringa isteresi
			ChangeDWORDValue(0x44548000, 0x311818);						// +127
			ChangeDWORDValue(0xC4548000, 0x311814);						// -127
			return;
		case(342):
			ChangeDWORDValue(0x90909090, 0x1BCF2);						// Stringa isteresi
			ChangeDWORDValue(0x44548000, 0x2E9718);						// +127
			ChangeDWORDValue(0xC4548000, 0x2E9714);						// -127
			return;
		case(339):
			ChangeDWORDValue(0x90909090, 0x1ABC6);						// Stringa isteresi
			ChangeDWORDValue(0x44548000, 0x2DEFF8);						// +127
			ChangeDWORDValue(0xC4548000, 0x2DEFF4);						// -127
			return;
		case(52):
			ChangeSTRINGValue(mod_traod, 0x16F3B);						// Stringa isteresi
			ChangeDWORDValue(0x00416FC4, 0x16F43);						// Puntatore a +127
			ChangeDWORDValue(0x00416FC4, 0x16F52);						// Puntatore a +127
			ChangeDWORDValue(0x00416FC4, 0x16F6F);						// Puntatore a +127
			ChangeDWORDValue(0x00416FC4, 0x16F83);						// Puntatore a +127
			ChangeDWORDValue(0x00416FC8, 0x16F76);						// Puntatore a -127
			ChangeDWORDValue(0x00416FC8, 0x16FA2);						// Puntatore a -127
			ChangeQWORDValue(0xC454800044548000, 0x16FC4);				// Codecave per +850/-850
			return;
		case(49):
			ChangeSTRINGValue(mod_traod, 0x16F5B);						// Stringa isteresi
			ChangeDWORDValue(0x00416FE4, 0x16F63);						// Puntatore a +127
			ChangeDWORDValue(0x00416FE4, 0x16F72);						// Puntatore a +127
			ChangeDWORDValue(0x00416FE4, 0x16F8F);						// Puntatore a +127
			ChangeDWORDValue(0x00416FE4, 0x16FA3);						// Puntatore a +127
			ChangeDWORDValue(0x00416FE8, 0x16F96);						// Puntatore a -127
			ChangeDWORDValue(0x00416FE8, 0x16FC2);						// Puntatore a -127
			ChangeQWORDValue(0xC454800044548000, 0x16FE4);				// Codecave per +850/-850
			return;
		case(42):
			ChangeSTRINGValue(mod_traod, 0x16DDB);						// Stringa isteresi
			ChangeDWORDValue(0x00416E64, 0x16DE3);						// Puntatore a +127
			ChangeDWORDValue(0x00416E64, 0x16DF2);						// Puntatore a +127
			ChangeDWORDValue(0x00416E64, 0x16E0F);						// Puntatore a +127
			ChangeDWORDValue(0x00416E64, 0x16E23);						// Puntatore a +127
			ChangeDWORDValue(0x00416E68, 0x16E16);						// Puntatore a -127
			ChangeDWORDValue(0x00416E68, 0x16E42);						// Puntatore a -127
			ChangeQWORDValue(0xC454800044548000, 0x16E64);				// Codecave per +850/-850
			return;
		case(39):
			ChangeSTRINGValue(mod_traod, 0x15CDB);						// Stringa isteresi
			ChangeDWORDValue(0x00415D64, 0x15CE3);						// Puntatore a +127
			ChangeDWORDValue(0x00415D64, 0x15CF2);						// Puntatore a +127
			ChangeDWORDValue(0x00415D64, 0x15D0F);						// Puntatore a +127
			ChangeDWORDValue(0x00415D64, 0x15D23);						// Puntatore a +127
			ChangeDWORDValue(0x00415D68, 0x15D16);						// Puntatore a -127
			ChangeDWORDValue(0x00415D68, 0x15D42);						// Puntatore a -127
			ChangeQWORDValue(0xC454800044548000, 0x15D64);				// Codecave per +850/-850
			return;
		}
}