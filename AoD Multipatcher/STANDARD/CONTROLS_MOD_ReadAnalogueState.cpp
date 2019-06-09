#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_ReadAnalogueState_status()				// Restituisce vero se è modificato il movimento del nuoto con il mouse, falso se è originale
{
	size_t offset;
	string temp;
	string mod_traod_p3_p4("\x90\x90\x90\x90\x90\x90\x90\x90\x90", 9);
	string mod_traod("\x90\x90\x90\x90\x90\x90\x90\x90", 8);
	switch(ver)
	{
	case(452):
		offset = 1549436;
		temp = EXEorig.substr(offset, 9);
		if (temp == mod_traod_p3_p4)	return true;
		break;
	case(449):
		offset = 1547828;
		temp = EXEorig.substr(offset, 9);
		if (temp == mod_traod_p3_p4)	return true;
		break;
	case(442):
		offset = 1540148;
		temp = EXEorig.substr(offset, 9);
		if (temp == mod_traod_p3_p4)	return true;
		break;
	case(439):
		offset = 1534792;
		temp = EXEorig.substr(offset, 9);
		if (temp == mod_traod_p3_p4)	return true;
		break;
	case(352):
		offset = 1524108;
		temp = EXEorig.substr(offset, 9);
		if (temp == mod_traod_p3_p4)	return true;
		break;
	case(349):
		offset = 1522552;
		temp = EXEorig.substr(offset, 9);
		if (temp == mod_traod_p3_p4)	return true;
		break;
	case(342):
		offset = 1515184;
		temp = EXEorig.substr(offset, 9);
		if (temp == mod_traod_p3_p4)	return true;
		break;
	case(339):
		offset = 1510088;
		temp = EXEorig.substr(offset, 9);
		if (temp == mod_traod_p3_p4)	return true;
		break;
	case(52):
		offset = 1336547;
		temp = EXEorig.substr(offset, 8);
		if (temp == mod_traod)	return true;
		break;
	case(49):
		offset = 1335347;
		temp = EXEorig.substr(offset, 8);
		if (temp == mod_traod)	return true;
		break;
	case(42):
		offset = 1329187;
		temp = EXEorig.substr(offset, 8);
		if (temp == mod_traod)	return true;
		break;
	case(39):
		offset = 1328035;
		temp = EXEorig.substr(offset, 8);
		if (temp == mod_traod)	return true;
	}
	return false;			// Se non viene trovata la stringa modificata significa che il file è originale
}


void Change_ReadAnalogueState_status()
{
	////////////	STRINGHE ORIGINALI
	string orig_traod_p4_52("\xA0\x80\xCA\x71\0\x88\x44\x3D\x16", 9);
	string orig_traod_p4_49("\xA0\x40\xBA\x71\0\x88\x44\x3D\x16", 9);
	string orig_traod_p4_42("\xA0\x80\x37\x6F\0\x88\x44\x3D\x16", 9);
	string orig_traod_p4_39("\xA0\x80\x97\x6E\0\x88\x44\x3D\x16", 9);
	string orig_traod_p3_52("\xA0\x40\xBA\x70\0\x88\x44\x3D\x16", 9);
	string orig_traod_p3_49("\xA0\0\xBA\x70\0\x88\x44\x3D\x16", 9);
	string orig_traod_p3_42("\xA0\x40\x37\x6E\0\x88\x44\x3D\x16", 9);
	string orig_traod_p3_39("\xA0\0\x97\x6D\0\x88\x44\x3D\x16", 9);
	string orig_traod_52("\xA0\x98\x22\x6C\0\x88\x41\x17", 8);
	string orig_traod_49("\xA0\xD8\x13\x6C\0\x88\x41\x17", 8);
	string orig_traod_42("\xA0\x68\x4A\x6A\0\x88\x41\x17", 8);
	string orig_traod_39("\xA0\x98\xE1\x68\0\x88\x41\x17", 8);
	
	////////////	STRINGHE MODIFICATE
	string mod_traod_p3_p4("\x90\x90\x90\x90\x90\x90\x90\x90\x90", 9);
	string mod_traod("\x90\x90\x90\x90\x90\x90\x90\x90", 8);

	size_t offset;
	string newstring;

	if (Detect_ReadAnalogueState_status())			// Se la modifica è vera è necessario copiare le stringhe originali in base alla versione dell'exe
		switch (ver)
		{
		case(452):
			offset = 1549436;
			newstring = orig_traod_p4_52;
			break;
		case(449):
			offset = 1547828;
			newstring = orig_traod_p4_49;
			break;
		case(442):
			offset = 1540148;
			newstring = orig_traod_p4_42;
			break;
		case(439):
			offset = 1534792;
			newstring = orig_traod_p4_39;
			break;
		case(352):
			offset = 1524108;
			newstring = orig_traod_p3_52;
			break;
		case(349):
			offset = 1522552;
			newstring = orig_traod_p3_49;
			break;
		case(342):
			offset = 1515184;
			newstring = orig_traod_p3_42;
			break;
		case(339):
			offset = 1510088;
			newstring = orig_traod_p3_39;
			break;
		case(52):
			offset = 1336547;
			newstring = orig_traod_52;
			break;
		case(49):
			offset = 1335347;
			newstring = orig_traod_49;
			break;
		case(42):
			offset = 1329187;
			newstring = orig_traod_42;
			break;
		case(39):
			offset = 1328035;
			newstring = orig_traod_39;
		}
	else							// Se il file è originale è sufficiente applicare una delle due stringhe modificate
		switch (ver)
		{
		case(452):
			offset = 1549436;
			newstring = mod_traod_p3_p4;
			break;
		case(449):
			offset = 1547828;
			newstring = mod_traod_p3_p4;
			break;
		case(442):
			offset = 1540148;
			newstring = mod_traod_p3_p4;
			break;
		case(439):
			offset = 1534792;
			newstring = mod_traod_p3_p4;
			break;
		case(352):
			offset = 1524108;
			newstring = mod_traod_p3_p4;
			break;
		case(349):
			offset = 1522552;
			newstring = mod_traod_p3_p4;
			break;
		case(342):
			offset = 1515184;
			newstring = mod_traod_p3_p4;
			break;
		case(339):
			offset = 1510088;
			newstring = mod_traod_p3_p4;
			break;
		case(52):
			offset = 1336547;
			newstring = mod_traod;
			break;
		case(49):
			offset = 1335347;
			newstring = mod_traod;
			break;
		case(42):
			offset = 1329187;
			newstring = mod_traod;
			break;
		case(39):
			offset = 1328035;
			newstring = mod_traod;
		}
	ChangeSTRINGValue(newstring, offset);
}