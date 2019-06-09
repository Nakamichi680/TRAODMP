#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Debug_status()							// Restituisce vero se la modalità debug forzata è attiva
{
    size_t Position;
    // Tutte queste stringhe provengono dalla funzione "SYS_DI(SYS_DI *this, SYS_COMMAND_LINE *, int, int)"
    string traod_39("\xE8\xCE\x6D\x04\0\x3C\x01\x75\x03\x88\x46\x09\x8D\x4C\x24\x0C\x51", 17);
    string traod_42("\xE8\x0E\x6F\x04\0\x3C\x01\x75\x03\x88\x46\x09\x8D\x4C\x24\x0C\x51", 17);
    string traod_49("\xE8\xCE\x7D\x04\0\x3C\x01\x75\x03\x88\x46\x09\x8D\x4C\x24\x0C\x51", 17);
    string traod_52("\xE8\x6E\x79\x04\0\x3C\x01\x8B\xC6\x75\x04\xC6\x46\x09\x01\x5F\x5E", 17);
    string traod_P3_39("\xE8\xFA\x30\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
    string traod_P3_42("\xE8\x8E\x36\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
    string traod_P3_49("\xE8\x06\x46\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
    string traod_P3_52("\xE8\xCC\x41\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x46\x09\x01", 17);
    string traod_P4_39("\xE8\x42\x47\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
    string traod_P4_42("\xE8\xAE\x4A\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
	string traod_P4_49("\xE8\x86\x5C\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
    string traod_P4_52("\xE8\xDC\x5A\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x46\x09\x01", 17);

    if ((Position = EXEorig.find(traod_39)) != std::string::npos || (Position = EXEorig.find(traod_42)) != std::string::npos ||
        (Position = EXEorig.find(traod_49)) != std::string::npos || (Position = EXEorig.find(traod_52)) != std::string::npos ||
        (Position = EXEorig.find(traod_P3_39)) != std::string::npos || (Position = EXEorig.find(traod_P3_42)) != std::string::npos ||
        (Position = EXEorig.find(traod_P3_49)) != std::string::npos || (Position = EXEorig.find(traod_P3_52)) != std::string::npos ||
        (Position = EXEorig.find(traod_P4_39)) != std::string::npos || (Position = EXEorig.find(traod_P4_42)) != std::string::npos ||
        (Position = EXEorig.find(traod_P4_49)) != std::string::npos || (Position = EXEorig.find(traod_P4_52)) != std::string::npos)
        return false;
    else
        return true;
}


void Change_Debug_status()
{
	/////////////////////////////	STRINGHE ORIGINALI
	string traod_39("\xE8\xCE\x6D\x04\0\x3C\x01\x75\x03\x88\x46\x09\x8D\x4C\x24\x0C\x51", 17);
	string traod_42("\xE8\x0E\x6F\x04\0\x3C\x01\x75\x03\x88\x46\x09\x8D\x4C\x24\x0C\x51", 17);
	string traod_49("\xE8\xCE\x7D\x04\0\x3C\x01\x75\x03\x88\x46\x09\x8D\x4C\x24\x0C\x51", 17);
	string traod_52("\xE8\x6E\x79\x04\0\x3C\x01\x8B\xC6\x75\x04\xC6\x46\x09\x01\x5F\x5E", 17);
	string traod_P3_39("\xE8\xFA\x30\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
	string traod_P3_42("\xE8\x8E\x36\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
	string traod_P3_49("\xE8\x06\x46\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
	string traod_P3_52("\xE8\xCC\x41\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x46\x09\x01", 17);
	string traod_P4_39("\xE8\x42\x47\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
	string traod_P4_42("\xE8\xAE\x4A\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
	string traod_P4_49("\xE8\x86\x5C\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x45\x09\x01", 17);
	string traod_P4_52("\xE8\xDC\x5A\x05\0\x0F\xB6\xC0\x83\xF8\x01\x75\x04\xC6\x46\x09\x01", 17);

	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_39("\xE8\xCE\x6D\x04\0\xC6\x46\x09\x01\x90\x90\x90\x8D\x4C\x24\x0C\x51", 17);
	string mod_traod_42("\xE8\x0E\x6F\x04\0\xC6\x46\x09\x01\x90\x90\x90\x8D\x4C\x24\x0C\x51", 17);
	string mod_traod_49("\xE8\xCE\x7D\x04\0\xC6\x46\x09\x01\x90\x90\x90\x8D\x4C\x24\x0C\x51", 17);
	string mod_traod_52("\xE8\x6E\x79\x04\0\x3C\x01\x8B\xC6\x90\x90\xC6\x46\x09\x01\x5F\x5E", 17);
	string mod_traod_P3_39("\xE8\xFA\x30\x05\0\x0F\xB6\xC0\x83\xF8\x01\x90\x90\xC6\x45\x09\x01", 17);
	string mod_traod_P3_42("\xE8\x8E\x36\x05\0\x0F\xB6\xC0\x83\xF8\x01\x90\x90\xC6\x45\x09\x01", 17);
	string mod_traod_P3_49("\xE8\x06\x46\x05\0\x0F\xB6\xC0\x83\xF8\x01\x90\x90\xC6\x45\x09\x01", 17);
	string mod_traod_P3_52("\xE8\xCC\x41\x05\0\x0F\xB6\xC0\x83\xF8\x01\x90\x90\xC6\x46\x09\x01", 17);
	string mod_traod_P4_39("\xE8\x42\x47\x05\0\x0F\xB6\xC0\x83\xF8\x01\x90\x90\xC6\x45\x09\x01", 17);
	string mod_traod_P4_42("\xE8\xAE\x4A\x05\0\x0F\xB6\xC0\x83\xF8\x01\x90\x90\xC6\x45\x09\x01", 17);
	string mod_traod_P4_49("\xE8\x86\x5C\x05\0\x0F\xB6\xC0\x83\xF8\x01\x90\x90\xC6\x45\x09\x01", 17);
	string mod_traod_P4_52("\xE8\xDC\x5A\x05\0\x0F\xB6\xC0\x83\xF8\x01\x90\x90\xC6\x46\x09\x01", 17);

	size_t Position;
	bool Debug_status = Detect_Debug_status();
	if (Debug_status)		// Se il file è modificato, bisogna cercare le stringhe mod e sostituirle con le originali
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(mod_traod_P4_52)) != std::string::npos)
			ChangeSTRINGValue(traod_P4_52, Position);
		if ((Position = EXEorig.find(mod_traod_P4_49)) != std::string::npos)
			ChangeSTRINGValue(traod_P4_49, Position);
		if ((Position = EXEorig.find(mod_traod_P4_42)) != std::string::npos)
			ChangeSTRINGValue(traod_P4_42, Position);
		if ((Position = EXEorig.find(mod_traod_P4_39)) != std::string::npos)
			ChangeSTRINGValue(traod_P4_39, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(mod_traod_P3_52)) != std::string::npos)
			ChangeSTRINGValue(traod_P3_52, Position);
		if ((Position = EXEorig.find(mod_traod_P3_49)) != std::string::npos)
			ChangeSTRINGValue(traod_P3_49, Position);
		if ((Position = EXEorig.find(mod_traod_P3_42)) != std::string::npos)
			ChangeSTRINGValue(traod_P3_42, Position);
		if ((Position = EXEorig.find(mod_traod_P3_39)) != std::string::npos)
			ChangeSTRINGValue(traod_P3_39, Position);

		// TRAOD
		if ((Position = EXEorig.find(mod_traod_52)) != std::string::npos)
			ChangeSTRINGValue(traod_52, Position);
		if ((Position = EXEorig.find(mod_traod_49)) != std::string::npos)
			ChangeSTRINGValue(traod_49, Position);
		if ((Position = EXEorig.find(mod_traod_42)) != std::string::npos)
			ChangeSTRINGValue(traod_42, Position);
		if ((Position = EXEorig.find(mod_traod_39)) != std::string::npos)
			ChangeSTRINGValue(traod_39, Position);
	}
	else					// Se il file è originale bisogna applicare le stringhe modificate
	{
		// TRAOD_P4
		if ((Position = EXEorig.find(traod_P4_52)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_P4_52, Position);
		if ((Position = EXEorig.find(traod_P4_49)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_P4_49, Position);
		if ((Position = EXEorig.find(traod_P4_42)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_P4_42, Position);
		if ((Position = EXEorig.find(traod_P4_39)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_P4_39, Position);

		// TRAOD_P3
		if ((Position = EXEorig.find(traod_P3_52)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_P3_52, Position);
		if ((Position = EXEorig.find(traod_P3_49)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_P3_49, Position);
		if ((Position = EXEorig.find(traod_P3_42)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_P3_42, Position);
		if ((Position = EXEorig.find(traod_P3_39)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_P3_39, Position);

		// TRAOD
		if ((Position = EXEorig.find(traod_52)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_52, Position);
		if ((Position = EXEorig.find(traod_49)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_49, Position);
		if ((Position = EXEorig.find(traod_42)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_42, Position);
		if ((Position = EXEorig.find(traod_39)) != std::string::npos)
			ChangeSTRINGValue(mod_traod_39, Position);
	}
}