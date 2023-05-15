#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Fog_status()							// Restituisce vero se il fix per la nebbia è attivo, falso se l'exe è originale
{
	//////////////////		_fxSave		Stringhe originali
	string orig_fxSave_traod_p4_52("\x6A\x20\x68\x40\x5B\x90\0\xE8\xB8\xCE\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p4_49("\x6A\x20\x68\0\x4B\x90\0\xE8\0\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p4_42("\x6A\x20\x68\xE0\xC7\x8D\0\xE8\0\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p4_39("\x6A\x20\x68\xA0\x24\x8D\0\xE8\0\xD0\xFF\xFF\x6A\x08", 14);

	string orig_fxSave_traod_p3_52("\x6A\x20\x68\x04\x42\x8F\0\xE8\x0C\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p3_49("\x6A\x20\x68\xC4\x41\x8F\0\xE8\x5C\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p3_42("\x6A\x20\x68\xA4\xBE\x8C\0\xE8\x5C\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p3_39("\x6A\x20\x68\x24\x1B\x8C\0\xE8\x5C\xD0\xFF\xFF\x6A\x08", 14);

	string orig_fxSave_traod_52("\x6A\x20\x68\x6C\x28\x8C\0\xE8\x40\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_49("\x6A\x20\x68\xAC\x19\x8C\0\xE8\x80\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_42("\x6A\x20\x68\x2C\x4D\x8A\0\xE8\x80\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_39("\x6A\x20\x68\x2C\xE1\x88\0\xE8\x80\xD0\xFF\xFF\x6A\x08", 14);

	//////////////////		_fxLoad		Stringhe originali
	string orig_fxLoad_traod_p4_52("\x6A\x20\x68\x40\x5B\x90\0\xE8\xE0\xCD\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p4_49("\x6A\x20\x68\0\x4B\x90\0\xE8\x28\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p4_42("\x6A\x20\x68\xE0\xC7\x8D\0\xE8\x28\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p4_39("\x6A\x20\x68\xA0\x24\x8D\0\xE8\x28\xCF\xFF\xFF\x6A\x08", 14);

	string orig_fxLoad_traod_p3_52("\x6A\x20\x68\x04\x42\x8F\0\xE8\x30\xCE\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p3_49("\x6A\x20\x68\xC4\x41\x8F\0\xE8\x80\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p3_42("\x6A\x20\x68\xA4\xBE\x8C\0\xE8\x80\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p3_39("\x6A\x20\x68\x24\x1B\x8C\0\xE8\x80\xCF\xFF\xFF\x6A\x08", 14);

	string orig_fxLoad_traod_52("\x6A\x20\x68\x6C\x28\x8C\0\xE8\x60\xCE\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_49("\x6A\x20\x68\xAC\x19\x8C\0\xE8\xA0\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_42("\x6A\x20\x68\x2C\x4D\x8A\0\xE8\xA0\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_39("\x6A\x20\x68\x2C\xE1\x88\0\xE8\xA0\xCF\xFF\xFF\x6A\x08", 14);

	size_t Position;
	if ((Position = EXEorig.find(orig_fxSave_traod_p4_52)) != std::string::npos || (Position = EXEorig.find(orig_fxSave_traod_p4_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_fxSave_traod_p4_42)) != std::string::npos || (Position = EXEorig.find(orig_fxSave_traod_p4_39)) != std::string::npos ||
		(Position = EXEorig.find(orig_fxSave_traod_p3_52)) != std::string::npos || (Position = EXEorig.find(orig_fxSave_traod_p3_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_fxSave_traod_p3_42)) != std::string::npos || (Position = EXEorig.find(orig_fxSave_traod_p3_39)) != std::string::npos ||
		(Position = EXEorig.find(orig_fxSave_traod_52)) != std::string::npos || (Position = EXEorig.find(orig_fxSave_traod_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_fxSave_traod_42)) != std::string::npos || (Position = EXEorig.find(orig_fxSave_traod_39)) != std::string::npos)
		return false;
	return true;			// Se non trova alcuna stringa originale significa che il file è modificato
}


void Change_Fog_status()
{
	//////////////////		_fxSave		Stringhe originali
	string orig_fxSave_traod_p4_52("\x6A\x20\x68\x40\x5B\x90\0\xE8\xB8\xCE\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p4_49("\x6A\x20\x68\0\x4B\x90\0\xE8\0\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p4_42("\x6A\x20\x68\xE0\xC7\x8D\0\xE8\0\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p4_39("\x6A\x20\x68\xA0\x24\x8D\0\xE8\0\xD0\xFF\xFF\x6A\x08", 14);

	string orig_fxSave_traod_p3_52("\x6A\x20\x68\x04\x42\x8F\0\xE8\x0C\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p3_49("\x6A\x20\x68\xC4\x41\x8F\0\xE8\x5C\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p3_42("\x6A\x20\x68\xA4\xBE\x8C\0\xE8\x5C\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_p3_39("\x6A\x20\x68\x24\x1B\x8C\0\xE8\x5C\xD0\xFF\xFF\x6A\x08", 14);

	string orig_fxSave_traod_52("\x6A\x20\x68\x6C\x28\x8C\0\xE8\x40\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_49("\x6A\x20\x68\xAC\x19\x8C\0\xE8\x80\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_42("\x6A\x20\x68\x2C\x4D\x8A\0\xE8\x80\xD0\xFF\xFF\x6A\x08", 14);
	string orig_fxSave_traod_39("\x6A\x20\x68\x2C\xE1\x88\0\xE8\x80\xD0\xFF\xFF\x6A\x08", 14);

	//////////////////		_fxLoad		Stringhe originali
	string orig_fxLoad_traod_p4_52("\x6A\x20\x68\x40\x5B\x90\0\xE8\xE0\xCD\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p4_49("\x6A\x20\x68\0\x4B\x90\0\xE8\x28\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p4_42("\x6A\x20\x68\xE0\xC7\x8D\0\xE8\x28\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p4_39("\x6A\x20\x68\xA0\x24\x8D\0\xE8\x28\xCF\xFF\xFF\x6A\x08", 14);

	string orig_fxLoad_traod_p3_52("\x6A\x20\x68\x04\x42\x8F\0\xE8\x30\xCE\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p3_49("\x6A\x20\x68\xC4\x41\x8F\0\xE8\x80\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p3_42("\x6A\x20\x68\xA4\xBE\x8C\0\xE8\x80\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_p3_39("\x6A\x20\x68\x24\x1B\x8C\0\xE8\x80\xCF\xFF\xFF\x6A\x08", 14);

	string orig_fxLoad_traod_52("\x6A\x20\x68\x6C\x28\x8C\0\xE8\x60\xCE\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_49("\x6A\x20\x68\xAC\x19\x8C\0\xE8\xA0\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_42("\x6A\x20\x68\x2C\x4D\x8A\0\xE8\xA0\xCF\xFF\xFF\x6A\x08", 14);
	string orig_fxLoad_traod_39("\x6A\x20\x68\x2C\xE1\x88\0\xE8\xA0\xCF\xFF\xFF\x6A\x08", 14);

	//////////////////		_fxSave		Stringhe modificate
	string mod_fxSave_traod_p4_52("\x6A\x20\x68\x50\xFD\x89\0\xE8\xB8\xCE\xFF\xFF\x6A\x08", 14);
	string mod_fxSave_traod_p4_49("\x6A\x20\x68\x10\xED\x89\0\xE8\0\xD0\xFF\xFF\x6A\x08", 14);
	string mod_fxSave_traod_p4_42("\x6A\x20\x68\xF0\x69\x87\0\xE8\0\xD0\xFF\xFF\x6A\x08", 14);
	string mod_fxSave_traod_p4_39("\x6A\x20\x68\xB0\xC6\x86\0\xE8\0\xD0\xFF\xFF\x6A\x08", 14);

	string mod_fxSave_traod_p3_52("\x6A\x20\x68\x10\xE4\x88\0\xE8\x0C\xCF\xFF\xFF\x6A\x08", 14);
	string mod_fxSave_traod_p3_49("\x6A\x20\x68\xD0\xE3\x88\0\xE8\x5C\xD0\xFF\xFF\x6A\x08", 14);
	string mod_fxSave_traod_p3_42("\x6A\x20\x68\xB0\x60\x86\0\xE8\x5C\xD0\xFF\xFF\x6A\x08", 14);
	string mod_fxSave_traod_p3_39("\x6A\x20\x68\x30\xBD\x85\0\xE8\x5C\xD0\xFF\xFF\x6A\x08", 14);

	string mod_fxSave_traod_52("\x6A\x20\x68\x14\x2A\x8C\0\xE8\x40\xCF\xFF\xFF\x6A\x08", 14);
	string mod_fxSave_traod_49("\x6A\x20\x68\x54\x1B\x8C\0\xE8\x80\xD0\xFF\xFF\x6A\x08", 14);
	string mod_fxSave_traod_42("\x6A\x20\x68\xD4\x4E\x8A\0\xE8\x80\xD0\xFF\xFF\x6A\x08", 14);
	string mod_fxSave_traod_39("\x6A\x20\x68\xD4\xE2\x88\0\xE8\x80\xD0\xFF\xFF\x6A\x08", 14);

	//////////////////		_fxLoad		Stringhe modificate
	string mod_fxLoad_traod_p4_52("\x6A\x20\x68\x50\xFD\x89\0\xE8\xE0\xCD\xFF\xFF\x6A\x08", 14);
	string mod_fxLoad_traod_p4_49("\x6A\x20\x68\x10\xED\x89\0\xE8\x28\xCF\xFF\xFF\x6A\x08", 14);
	string mod_fxLoad_traod_p4_42("\x6A\x20\x68\xF0\x69\x87\0\xE8\x28\xCF\xFF\xFF\x6A\x08", 14);
	string mod_fxLoad_traod_p4_39("\x6A\x20\x68\xB0\xC6\x86\0\xE8\x28\xCF\xFF\xFF\x6A\x08", 14);

	string mod_fxLoad_traod_p3_52("\x6A\x20\x68\x10\xE4\x88\0\xE8\x30\xCE\xFF\xFF\x6A\x08", 14);
	string mod_fxLoad_traod_p3_49("\x6A\x20\x68\xD0\xE3\x88\0\xE8\x80\xCF\xFF\xFF\x6A\x08", 14);
	string mod_fxLoad_traod_p3_42("\x6A\x20\x68\xB0\x60\x86\0\xE8\x80\xCF\xFF\xFF\x6A\x08", 14);
	string mod_fxLoad_traod_p3_39("\x6A\x20\x68\x30\xBD\x85\0\xE8\x80\xCF\xFF\xFF\x6A\x08", 14);

	string mod_fxLoad_traod_52("\x6A\x20\x68\x14\x2A\x8C\0\xE8\x60\xCE\xFF\xFF\x6A\x08", 14);
	string mod_fxLoad_traod_49("\x6A\x20\x68\x54\x1B\x8C\0\xE8\xA0\xCF\xFF\xFF\x6A\x08", 14);
	string mod_fxLoad_traod_42("\x6A\x20\x68\xD4\x4E\x8A\0\xE8\xA0\xCF\xFF\xFF\x6A\x08", 14);
	string mod_fxLoad_traod_39("\x6A\x20\x68\xD4\xE2\x88\0\xE8\xA0\xCF\xFF\xFF\x6A\x08", 14);

	size_t Position;
	bool Fog_status = Detect_Fog_status();
	if (Fog_status)						// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(mod_fxSave_traod_p4_52)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_p4_52, Position);
		if ((Position = EXEorig.find(mod_fxSave_traod_p4_49)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_p4_49, Position);
		if ((Position = EXEorig.find(mod_fxSave_traod_p4_42)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_p4_42, Position);
		if ((Position = EXEorig.find(mod_fxSave_traod_p4_39)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_p4_39, Position);

		if ((Position = EXEorig.find(mod_fxLoad_traod_p4_52)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_p4_52, Position);
		if ((Position = EXEorig.find(mod_fxLoad_traod_p4_49)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_p4_49, Position);
		if ((Position = EXEorig.find(mod_fxLoad_traod_p4_42)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_p4_42, Position);
		if ((Position = EXEorig.find(mod_fxLoad_traod_p4_39)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_p4_39, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(mod_fxSave_traod_p3_52)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_p3_52, Position);
		if ((Position = EXEorig.find(mod_fxSave_traod_p3_49)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_p3_49, Position);
		if ((Position = EXEorig.find(mod_fxSave_traod_p3_42)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_p3_42, Position);
		if ((Position = EXEorig.find(mod_fxSave_traod_p3_39)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_p3_39, Position);

		if ((Position = EXEorig.find(mod_fxLoad_traod_p3_52)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_p3_52, Position);
		if ((Position = EXEorig.find(mod_fxLoad_traod_p3_49)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_p3_49, Position);
		if ((Position = EXEorig.find(mod_fxLoad_traod_p3_42)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_p3_42, Position);
		if ((Position = EXEorig.find(mod_fxLoad_traod_p3_39)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_p3_39, Position);

		// TRAOD
		if ((Position = EXEorig.find(mod_fxSave_traod_52)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_52, Position);
		if ((Position = EXEorig.find(mod_fxSave_traod_49)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_49, Position);
		if ((Position = EXEorig.find(mod_fxSave_traod_42)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_42, Position);
		if ((Position = EXEorig.find(mod_fxSave_traod_39)) != std::string::npos)
			ChangeSTRINGValue(orig_fxSave_traod_39, Position);
		
		if ((Position = EXEorig.find(mod_fxLoad_traod_52)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_52, Position);
		if ((Position = EXEorig.find(mod_fxLoad_traod_49)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_49, Position);
		if ((Position = EXEorig.find(mod_fxLoad_traod_42)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_42, Position);
		if ((Position = EXEorig.find(mod_fxLoad_traod_39)) != std::string::npos)
			ChangeSTRINGValue(orig_fxLoad_traod_39, Position);
	}
	else				// Altrimenti, se il file è originale si applicano le stringhe modificate
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(orig_fxSave_traod_p4_52)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_p4_52, Position);
		if ((Position = EXEorig.find(orig_fxSave_traod_p4_49)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_p4_49, Position);
		if ((Position = EXEorig.find(orig_fxSave_traod_p4_42)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_p4_42, Position);
		if ((Position = EXEorig.find(orig_fxSave_traod_p4_39)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_p4_39, Position);

		if ((Position = EXEorig.find(orig_fxLoad_traod_p4_52)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_p4_52, Position);
		if ((Position = EXEorig.find(orig_fxLoad_traod_p4_49)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_p4_49, Position);
		if ((Position = EXEorig.find(orig_fxLoad_traod_p4_42)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_p4_42, Position);
		if ((Position = EXEorig.find(orig_fxLoad_traod_p4_39)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_p4_39, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(orig_fxSave_traod_p3_52)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_p3_52, Position);
		if ((Position = EXEorig.find(orig_fxSave_traod_p3_49)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_p3_49, Position);
		if ((Position = EXEorig.find(orig_fxSave_traod_p3_42)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_p3_42, Position);
		if ((Position = EXEorig.find(orig_fxSave_traod_p3_39)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_p3_39, Position);

		if ((Position = EXEorig.find(orig_fxLoad_traod_p3_52)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_p3_52, Position);
		if ((Position = EXEorig.find(orig_fxLoad_traod_p3_49)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_p3_49, Position);
		if ((Position = EXEorig.find(orig_fxLoad_traod_p3_42)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_p3_42, Position);
		if ((Position = EXEorig.find(orig_fxLoad_traod_p3_39)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_p3_39, Position);

		// TRAOD
		if ((Position = EXEorig.find(orig_fxSave_traod_52)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_52, Position);
		if ((Position = EXEorig.find(orig_fxSave_traod_49)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_49, Position);
		if ((Position = EXEorig.find(orig_fxSave_traod_42)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_42, Position);
		if ((Position = EXEorig.find(orig_fxSave_traod_39)) != std::string::npos)
			ChangeSTRINGValue(mod_fxSave_traod_39, Position);

		if ((Position = EXEorig.find(orig_fxLoad_traod_52)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_52, Position);
		if ((Position = EXEorig.find(orig_fxLoad_traod_49)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_49, Position);
		if ((Position = EXEorig.find(orig_fxLoad_traod_42)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_42, Position);
		if ((Position = EXEorig.find(orig_fxLoad_traod_39)) != std::string::npos)
			ChangeSTRINGValue(mod_fxLoad_traod_39, Position);
	}
}