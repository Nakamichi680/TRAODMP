#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_LockOutControl_status()					// Restituisce vero se i movimenti sono bloccati (originale), falso se sono sbloccati (mod sasho)
{
	//////////////////		_mapActorCallback		Stringhe originali
	string orig_traod_p4_52("\x8B\x04\x24\x85\xC0\x0F\x84\xC0\x03\0\0\x57\x6A\x01\xE8\x2F\x68\x04", 18);
	string orig_traod_p4_49("\x8B\x04\x24\x85\xC0\x0F\x84\xC0\x03\0\0\x57\x6A\x01\xE8\x2B\x66\x04", 18);
	string orig_traod_p4_42("\x8B\x04\x24\x85\xC0\x0F\x84\xC0\x03\0\0\x57\x6A\x01\xE8\xFB\x65\x04", 18);
	string orig_traod_p4_39("\x8B\x04\x24\x85\xC0\x0F\x84\xC0\x03\0\0\x57\x6A\x01\xE8\x07\x66\x04", 18);

	string orig_traod_p3_52("\x8B\x04\x24\x85\xC0\x0F\x84\xC4\x03\0\0\x57\x6A\x01\xE8\xEB\x58\x04", 18);
	string orig_traod_p3_49("\x8B\x04\x24\x85\xC0\x0F\x84\xC4\x03\0\0\x57\x6A\x01\xE8\xF7\x56\x04", 18);
	string orig_traod_p3_42("\x8B\x04\x24\x85\xC0\x0F\x84\xC4\x03\0\0\x57\x6A\x01\xE8\xD7\x56\x04", 18);
	string orig_traod_p3_39("\x8B\x04\x24\x85\xC0\x0F\x84\xC4\x03\0\0\x57\x6A\x01\xE8\xCB\x56\x04", 18);

	string orig_traod_52("\x85\xFF\x0F\x84\x1B\x01\0\0\x55\x6A\x01\xE8\xE0\x5F\x04\0", 16);
	string orig_traod_49("\x85\xFF\x0F\x84\x1B\x01\0\0\x55\x6A\x01\xE8\x80\x5E\x04\0", 16);
	string orig_traod_42("\x85\xFF\x0F\x84\x1B\x01\0\0\x55\x6A\x01\xE8\0\x5E\x04\0", 16);
	string orig_traod_39("\x85\xFF\x0F\x84\x1B\x01\0\0\x55\x6A\x01\xE8\x20\x63\x04\0", 16);

	size_t Position;
	if ((Position = EXEorig.find(orig_traod_p4_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_p4_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p4_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_p4_39)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_p3_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_p3_39)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_49)) != std::string::npos ||
		(Position = EXEorig.find(orig_traod_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_39)) != std::string::npos)
		return true;
	return false;			// Se non trova alcuna stringa originale significa che il file è modificato
}


void Change_LockOutControl_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_p4_52("\x8B\x04\x24\x85\xC0\x0F\x84\xC0\x03\0\0\x57\x6A\x01\xE8\x2F\x68\x04", 18);
	string orig_traod_p4_49("\x8B\x04\x24\x85\xC0\x0F\x84\xC0\x03\0\0\x57\x6A\x01\xE8\x2B\x66\x04", 18);
	string orig_traod_p4_42("\x8B\x04\x24\x85\xC0\x0F\x84\xC0\x03\0\0\x57\x6A\x01\xE8\xFB\x65\x04", 18);
	string orig_traod_p4_39("\x8B\x04\x24\x85\xC0\x0F\x84\xC0\x03\0\0\x57\x6A\x01\xE8\x07\x66\x04", 18);

	string orig_traod_p3_52("\x8B\x04\x24\x85\xC0\x0F\x84\xC4\x03\0\0\x57\x6A\x01\xE8\xEB\x58\x04", 18);
	string orig_traod_p3_49("\x8B\x04\x24\x85\xC0\x0F\x84\xC4\x03\0\0\x57\x6A\x01\xE8\xF7\x56\x04", 18);
	string orig_traod_p3_42("\x8B\x04\x24\x85\xC0\x0F\x84\xC4\x03\0\0\x57\x6A\x01\xE8\xD7\x56\x04", 18);
	string orig_traod_p3_39("\x8B\x04\x24\x85\xC0\x0F\x84\xC4\x03\0\0\x57\x6A\x01\xE8\xCB\x56\x04", 18);

	string orig_traod_52("\x85\xFF\x0F\x84\x1B\x01\0\0\x55\x6A\x01\xE8\xE0\x5F\x04\0", 16);
	string orig_traod_49("\x85\xFF\x0F\x84\x1B\x01\0\0\x55\x6A\x01\xE8\x80\x5E\x04\0", 16);
	string orig_traod_42("\x85\xFF\x0F\x84\x1B\x01\0\0\x55\x6A\x01\xE8\0\x5E\x04\0", 16);
	string orig_traod_39("\x85\xFF\x0F\x84\x1B\x01\0\0\x55\x6A\x01\xE8\x20\x63\x04\0", 16);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_p4_52("\x90\x90\x90\x90\x90\x90\xE9\xC0\x03\0\0\x57\x6A\x01\xE8\x2F\x68\x04", 18);
	string mod_traod_p4_49("\x90\x90\x90\x90\x90\x90\xE9\xC0\x03\0\0\x57\x6A\x01\xE8\x2B\x66\x04", 18);
	string mod_traod_p4_42("\x90\x90\x90\x90\x90\x90\xE9\xC0\x03\0\0\x57\x6A\x01\xE8\xFB\x65\x04", 18);
	string mod_traod_p4_39("\x90\x90\x90\x90\x90\x90\xE9\xC0\x03\0\0\x57\x6A\x01\xE8\x07\x66\x04", 18);

	string mod_traod_p3_52("\x90\x90\x90\x90\x90\x90\xE9\xC4\x03\0\0\x57\x6A\x01\xE8\xEB\x58\x04", 18);
	string mod_traod_p3_49("\x90\x90\x90\x90\x90\x90\xE9\xC4\x03\0\0\x57\x6A\x01\xE8\xF7\x56\x04", 18);
	string mod_traod_p3_42("\x90\x90\x90\x90\x90\x90\xE9\xC4\x03\0\0\x57\x6A\x01\xE8\xD7\x56\x04", 18);
	string mod_traod_p3_39("\x90\x90\x90\x90\x90\x90\xE9\xC4\x03\0\0\x57\x6A\x01\xE8\xCB\x56\x04", 18);

	string mod_traod_52("\x90\x90\x90\xE9\x1B\x01\0\0\x55\x6A\x01\xE8\xE0\x5F\x04\0", 16);
	string mod_traod_49("\x90\x90\x90\xE9\x1B\x01\0\0\x55\x6A\x01\xE8\x80\x5E\x04\0", 16);
	string mod_traod_42("\x90\x90\x90\xE9\x1B\x01\0\0\x55\x6A\x01\xE8\0\x5E\x04\0", 16);
	string mod_traod_39("\x90\x90\x90\xE9\x1B\x01\0\0\x55\x6A\x01\xE8\x20\x63\x04\0", 16);

	size_t Position;
	bool LockOutControl_status = Detect_LockOutControl_status();
	if (!LockOutControl_status)		// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
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