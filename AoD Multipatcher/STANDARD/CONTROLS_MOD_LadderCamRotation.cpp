#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_LadderCamRotation_status()				// Restituisce vero se la rotazione della LadderCam è attiva (originale o Sasho)
{
	size_t offset;
	string mod("\x90\x90\x90\x90\x90\x83\xC4\x14", 8);
	
	switch(ver)
	{
	case(452):
		offset = 0x13F510;
		break;
	case(449):
		offset = 0x13F708;
		break;
	case(442):
		offset = 0x13DB88;
		break;
	case(439):
		offset = 0x13C69C;
		break;
	case(352):
		offset = 0x139BE2;
		break;
	case(349):
		offset = 0x139DDA;
		break;
	case(342):
		offset = 0x13838E;
		break;
	case(339):
		offset = 0x136FAE;
		break;
	case(52):
		offset = 0x10EFA8;
		break;
	case(49):
		offset = 0x10F348;
		break;
	case(42):
		offset = 0x10DDD8;
		break;
	case(39):
		offset = 0x10CE18;
	}

	string temp = EXEorig.substr(offset, 8);
	if (temp == mod)
		return false;
	else
		return true;			// Se non viene trovata la stringa modificata significa che il file è originale
}


void Change_LadderCamRotation_status()				// Rimuove la rotazione della LadderCam attiva di default negli exe originali e di Sasho
{
	string mod("\x90\x90\x90\x90\x90\x83\xC4\x14", 8);
	string orig_sasho("\xE8\x59\x4B\x48\0\x83\xC4\x14", 8);
	string orig_traod_p4("\xE8\x83\xE6\xFF\xFF\x83\xC4\x14", 8);
	string orig_traod_p3("\xE8\xA5\xE6\xFF\xFF\x83\xC4\x14", 8);
	string orig_traod_52("\xE8\x43\xEC\xFF\xFF\x83\xC4\x14", 8);
	string orig_traod_49_42("\xE8\xD3\xEB\xFF\xFF\x83\xC4\x14", 8);
	string orig_traod_39("\xE8\x33\xEB\xFF\xFF\x83\xC4\x14", 8);

	bool LadderCamRotation_status = Detect_LadderCamRotation_status();
	if (LadderCamRotation_status)			// Se la rotazione è attiva va disattivata
		switch (ver)
		{
		case (452):
			ChangeSTRINGValue(mod, 0x13F510);
			break;
		case (449):
			ChangeSTRINGValue(mod, 0x13F708);
			break;
		case (442):
			ChangeSTRINGValue(mod, 0x13DB88);
			break;
		case (439):
			ChangeSTRINGValue(mod, 0x13C69C);
			break;
		case (352):
			ChangeSTRINGValue(mod, 0x139BE2);
			break;
		case (349):
			ChangeSTRINGValue(mod, 0x139DDA);
			break;
		case (342):
			ChangeSTRINGValue(mod, 0x13838E);
			break;
		case (339):
			ChangeSTRINGValue(mod, 0x136FAE);
			break;
		case (52):
			ChangeSTRINGValue(mod, 0x10EFA8);
			break;
		case (49):
			ChangeSTRINGValue(mod, 0x10F348);
			break;
		case (42):
			ChangeSTRINGValue(mod, 0x10DDD8);
			break;
		case (39):
			ChangeSTRINGValue(mod, 0x10CE18);
		}
	else									// Altrimenti se la rotazione è disattivata va ripristinata (per riportare l'exe alle condizioni originali)
	{
		int Version;
		bool Sasho;
		Detect_Sasho(Version, Sasho);
		if (Sasho)							// Le versioni 6.6.4/3/2/1/0 di Sasho hanno una chiamata a una funzione custom, le altre sono delle p4_52 standard
		{
			Version = Detect_Sasho_advanced();
			switch (Version)
			{
			case (664):
			case (663):
			case (662):
			case (661):
			case (660):
				ChangeSTRINGValue(orig_sasho, 0x13F510);
				break;
			default:
				ChangeSTRINGValue(orig_traod_p4, 0x13F510);
			}
		}
		else								// Qui si ripristinano le versioni standard non Sasho
			switch (ver)
			{
			case (452):
				ChangeSTRINGValue(orig_traod_p4, 0x13F510);
				break;
			case (449):
				ChangeSTRINGValue(orig_traod_p4, 0x13F708);
				break;
			case (442):
				ChangeSTRINGValue(orig_traod_p4, 0x13DB88);
				break;
			case (439):
				ChangeSTRINGValue(orig_traod_p4, 0x13C69C);
				break;
			case (352):
				ChangeSTRINGValue(orig_traod_p3, 0x139BE2);
				break;
			case (349):
				ChangeSTRINGValue(orig_traod_p3, 0x139DDA);
				break;
			case (342):
				ChangeSTRINGValue(orig_traod_p3, 0x13838E);
				break;
			case (339):
				ChangeSTRINGValue(orig_traod_p3, 0x136FAE);
				break;
			case (52):
				ChangeSTRINGValue(orig_traod_52, 0x10EFA8);
				break;
			case (49):
				ChangeSTRINGValue(orig_traod_49_42, 0x10F348);
				break;
			case (42):
				ChangeSTRINGValue(orig_traod_49_42, 0x10DDD8);
				break;
			case (39):
				ChangeSTRINGValue(orig_traod_39, 0x10CE18);
			}
	}
}