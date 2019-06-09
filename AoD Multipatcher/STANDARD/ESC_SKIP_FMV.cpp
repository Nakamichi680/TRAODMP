#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_ESC_SKIP_FMV_status()					// Restituisce vero se la modifica è attiva (l'FMV termina solo con ESC)
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4_52("\xA1\x84\xBA\x93\0\xA9\0\0\0\x80\x74\x1A\xA1", 13);
	string orig_traod_p4_49("\xA1\x44\xAA\x93\0\xA9\0\0\0\x80\x74\x1A\xA1", 13);
	string orig_traod_p4_42("\xA1\xA4\x24\x91\0\xA9\0\0\0\x80\x74\x1A\xA1", 13);
	string orig_traod_p4_39("\xA1\x68\x81\x90\0\xA9\0\0\0\x80\x75\x0A\x6A", 13);
	string orig_traod_p3_52("\xF7\x05\x44\xA1\x92\0\0\0\0\x80\x74\x1A", 12);
	string orig_traod_p3_49("\xF7\x05\x04\xA1\x92\0\0\0\0\x80\x74\x1A", 12);
	string orig_traod_p3_42("\xF7\x05\x64\x1B\x90\0\0\0\0\x80\x74\x1A", 12);
	string orig_traod_p3_39("\xF7\x05\xE8\x77\x8F\0\0\0\0\x80\x75\x0A", 12);
	string orig_traod_52("\xB9\0\0\0\x80\x83\xC4\x04\xB0\x01\x85\xD1\x75\x03\x88\x46\x08\x38\x46\x08\x75\x08\x85\x0D\x0C\x22\x6C\0\x75\x0C", 30);
	string orig_traod_49("\xB9\0\0\0\x80\x83\xC4\x04\xB0\x01\x85\xD1\x75\x03\x88\x46\x08\x38\x46\x08\x75\x08\x85\x0D\x4C\x13\x6C\0\x75\x0C", 30);
	string orig_traod_42("\xB9\0\0\0\x80\x83\xC4\x04\xB0\x01\x85\xD1\x75\x03\x88\x46\x08\x38\x46\x08\x75\x08\x85\x0D\xDC\x49\x6A\0\x75\x0C", 30);
	string orig_traod_39("\x74\x32\x85\xC0\x75\x2E\x8B\x0D\xB8\xAA\x6E\0\x85\xC9\x74\x18\xE8\x6A\x22\0\0\x6A\0\xE8\x53\x20\0\0\xA1\x10\xE1\x68\0\x83\xC4\x04\x85\xC0\x78\x0C\x6A\x14\xFF\x15\x1C\xE1\x60\0\x33\xC0\x5E\xC3\x8B\x0D\xAC\xEE\x6D\0\xE8\x70\xFF\xFF\xFF\x8B\xCE\xE8\x39\x27\x05\0\x33\xC0\x5E\xC3\x90\x90\x90", 77);

	size_t Position;
	if ((Position = EXEorig.find(orig_traod_p4_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_p4_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p4_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_p4_39)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_52)) != std::string::npos ||	(Position = EXEorig.find(orig_traod_p3_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_42)) != std::string::npos ||	(Position = EXEorig.find(orig_traod_p3_39)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_39)) != std::string::npos)
		return false;
	return true;			// Se non trova alcuna stringa originale significa che il file è modificato
}


void Change_ESC_SKIP_FMV_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4_52("\xA1\x84\xBA\x93\0\xA9\0\0\0\x80\x74\x1A\xA1", 13);
	string orig_traod_p4_49("\xA1\x44\xAA\x93\0\xA9\0\0\0\x80\x74\x1A\xA1", 13);
	string orig_traod_p4_42("\xA1\xA4\x24\x91\0\xA9\0\0\0\x80\x74\x1A\xA1", 13);
	string orig_traod_p4_39("\xA1\x68\x81\x90\0\xA9\0\0\0\x80\x75\x0A\x6A", 13);
	string orig_traod_p3_52("\xF7\x05\x44\xA1\x92\0\0\0\0\x80\x74\x1A", 12);
	string orig_traod_p3_49("\xF7\x05\x04\xA1\x92\0\0\0\0\x80\x74\x1A", 12);
	string orig_traod_p3_42("\xF7\x05\x64\x1B\x90\0\0\0\0\x80\x74\x1A", 12);
	string orig_traod_p3_39("\xF7\x05\xE8\x77\x8F\0\0\0\0\x80\x75\x0A", 12);
	string orig_traod_52("\xB9\0\0\0\x80\x83\xC4\x04\xB0\x01\x85\xD1\x75\x03\x88\x46\x08\x38\x46\x08\x75\x08\x85\x0D\x0C\x22\x6C\0\x75\x0C", 30);
	string orig_traod_49("\xB9\0\0\0\x80\x83\xC4\x04\xB0\x01\x85\xD1\x75\x03\x88\x46\x08\x38\x46\x08\x75\x08\x85\x0D\x4C\x13\x6C\0\x75\x0C", 30);
	string orig_traod_42("\xB9\0\0\0\x80\x83\xC4\x04\xB0\x01\x85\xD1\x75\x03\x88\x46\x08\x38\x46\x08\x75\x08\x85\x0D\xDC\x49\x6A\0\x75\x0C", 30);
	string orig_traod_39("\x74\x32\x85\xC0\x75\x2E\x8B\x0D\xB8\xAA\x6E\0\x85\xC9\x74\x18\xE8\x6A\x22\0\0\x6A\0\xE8\x53\x20\0\0\xA1\x10\xE1\x68\0\x83\xC4\x04\x85\xC0\x78\x0C\x6A\x14\xFF\x15\x1C\xE1\x60\0\x33\xC0\x5E\xC3\x8B\x0D\xAC\xEE\x6D\0\xE8\x70\xFF\xFF\xFF\x8B\xCE\xE8\x39\x27\x05\0\x33\xC0\x5E\xC3\x90\x90\x90", 77);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p4_52("\x66\xA1\x86\xBA\x93\0\x66\x3D\x08\x80\x75\x1A\xA1", 13);
	string mod_traod_p4_49("\x66\xA1\x46\xAA\x93\0\x66\x3D\x08\x80\x75\x1A\xA1", 13);
	string mod_traod_p4_42("\x66\xA1\xA6\x24\x91\0\x66\x3D\x08\x80\x75\x1A\xA1", 13);
	string mod_traod_p4_39("\x66\xA1\x6A\x81\x90\0\x66\x3D\x08\x80\x74\x0A\x6A", 13); 
	string mod_traod_p3_52("\x66\x81\x3D\x46\xA1\x92\0\x08\x80\x90\x75\x1A", 12);
	string mod_traod_p3_49("\x66\x81\x3D\x06\xA1\x92\0\x08\x80\x90\x75\x1A", 12);
	string mod_traod_p3_42("\x66\x81\x3D\x66\x1B\x90\0\x08\x80\x90\x75\x1A", 12);
	string mod_traod_p3_39("\x66\x81\x3D\xEA\x77\x8F\0\x08\x80\x90\x74\x0A", 12);
	string mod_traod_52("\x66\xB9\x08\x80\x83\xC4\x04\xB0\x01\x85\xD1\x75\x03\x88\x46\x08\x38\x46\x08\x75\x09\x66\x39\x0D\x0E\x22\x6C\0\x74\x0C", 30);
	string mod_traod_49("\x66\xB9\x08\x80\x83\xC4\x04\xB0\x01\x85\xD1\x75\x03\x88\x46\x08\x38\x46\x08\x75\x09\x66\x39\x0D\x4E\x13\x6C\0\x74\x0C", 30);
	string mod_traod_42("\x66\xB9\x08\x80\x83\xC4\x04\xB0\x01\x85\xD1\x75\x03\x88\x46\x08\x38\x46\x08\x75\x09\x66\x39\x0D\xDE\x49\x6A\0\x74\x0C", 30);
	string mod_traod_39("\x74\x35\x85\xC0\x75\x31\x8B\x0D\xB8\xAA\x6E\0\x85\xC9\x74\x1B\xE8\x6A\x22\0\0\x6A\0\xE8\x53\x20\0\0\x66\xA1\x12\xE1\x68\0\x83\xC4\x04\x66\x3D\x08\x80\x74\x0C\x6A\x14\xFF\x15\x1C\xE1\x60\0\x31\xC0\x5E\xC3\x8B\x0D\xAC\xEE\x6D\0\xE8\x6D\xFF\xFF\xFF\x8B\xCE\xE8\x36\x27\x05\0\x31\xC0\x5E\xC3", 77);

	size_t Position;
	bool FMVESC_status = Detect_ESC_SKIP_FMV_status();
	if (FMVESC_status)					// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(mod_traod_p4_52)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4_52, Position);
		if ((Position = EXEorig.find(mod_traod_p4_49)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4_49, Position);
		if ((Position = EXEorig.find(mod_traod_p4_42)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4_42, Position);
		if ((Position = EXEorig.find(mod_traod_p4_39)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p4_39, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(mod_traod_p3_52)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3_52, Position);
		if ((Position = EXEorig.find(mod_traod_p3_49)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3_49, Position);
		if ((Position = EXEorig.find(mod_traod_p3_42)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3_42, Position);
		if ((Position = EXEorig.find(mod_traod_p3_39)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_p3_39, Position);

		// TRAOD
		if ((Position = EXEorig.find(mod_traod_52)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_52, Position);
		if ((Position = EXEorig.find(mod_traod_49)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_49, Position);
		if ((Position = EXEorig.find(mod_traod_42)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_42, Position);
		if ((Position = EXEorig.find(mod_traod_39)) != std::string::npos)
			ChangeSTRINGValue(orig_traod_39, Position);
	}
	else				// Altrimenti, se il file è originale si applicano le stringhe modificate
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(orig_traod_p4_52)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4_52, Position);
		if ((Position = EXEorig.find(orig_traod_p4_49)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4_49, Position);
		if ((Position = EXEorig.find(orig_traod_p4_42)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4_42, Position);
		if ((Position = EXEorig.find(orig_traod_p4_39)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p4_39, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(orig_traod_p3_52)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3_52, Position);
		if ((Position = EXEorig.find(orig_traod_p3_49)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3_49, Position);
		if ((Position = EXEorig.find(orig_traod_p3_42)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3_42, Position);
		if ((Position = EXEorig.find(orig_traod_p3_39)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_p3_39, Position);

		// TRAOD
		if ((Position = EXEorig.find(orig_traod_52)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_52, Position);
		if ((Position = EXEorig.find(orig_traod_49)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_49, Position);
		if ((Position = EXEorig.find(orig_traod_42)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_42, Position);
		if ((Position = EXEorig.find(orig_traod_39)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_39, Position);
	}
}