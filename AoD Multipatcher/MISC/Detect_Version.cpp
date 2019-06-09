#include "stdafx.h"


int Detect_version()
{
	size_t Position;

	// Questa stringa contiene il punto del file dove normalmente sono presenti le informazioni sulla versione
	// 56004500 52005300 49004F00 4E005F00 49004E00  V.E.R.S.I.O.N._.I.N.
	// 46004F00 00000000 BD04EFFE 00000100 00000100  F.O.................
	string MainVersion("\x56\0\x45\0\x52\0\x53\0\x49\0\x4F\0\x4E\0\x5F\0\x49\0\x4E\0\x46\0\x4F\0\0\0\0\0\xBD\x04\xEF\xFE\0\0\x01\0\0\0\x01\0", 40);

	if ((Position = EXEorig.find(MainVersion)) != std::string::npos)
		return int(EXEorig.at(Position+40));					// Se trova la versione restituisce il valore intero (39/42/49/52)
	else
		return -1;												// Se non trova la versione restituisce il valore -1
}


int Detect_version_advanced()
{
	size_t Position1, Position2;

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////		STRINGHE DI IDENTIFICAZIONE VERSIONE FILE  	/////////////////////////////////////////////////////////////////

	string only_p452_1("\x43\x1C\xD8\x15\x70\x55\x94\0\xDF\xE0\xDD\x45", 12);
	string only_p449_1("\x43\x1C\xD8\x15\x50\x46\x94\0\xDF\xE0\xDD\x45", 12);
	string only_p442_1("\x43\x1C\xD8\x15\x10\xB5\x91\0\xDF\xE0\xDD\x45", 12);
	string only_p439_1("\x43\x1C\xD8\x15\xF0\x0D\x91\0\xDF\xE0\xDD\x45", 12);

	string only_p352_1("\xD9\x43\x1C\xD8\x15\x04\x35\x93\0\xDF\xE0\x9E", 12);
	string only_p349_1("\xD9\x43\x1C\xD8\x15\x04\x36\x93\0\xDF\xE0\x9E", 12);
	string only_p342_1("\xD9\x43\x1C\xD8\x15\xC4\xB4\x90\0\xDF\xE0\x9E", 12);
	string only_p339_1("\xD9\x43\x1C\xD8\x15\xA4\x0D\x90\0\xDF\xE0\x9E", 12);

	string only_52_1("\x9B\x62\0\xDF\xE0\xF6\xC4\x44\x8B\x44\x24\x18", 12);
	string only_49_1("\x8B\x62\0\xDF\xE0\xF6\xC4\x44\x8B\x44\x24\x18", 12);
	string only_42_1("\xFB\x61\0\xDF\xE0\xF6\xC4\x44\x8B\x44\x24\x18", 12);
	string only_39_1("\xEB\x60\0\xDF\xE0\xF6\xC4\x44\x8B\x44\x24\x18", 12);

	string only_p452_2("\x8B\x44\x24\x04\xF3\x0F\x10\x05\xE4\x32\x95", 11);
	string only_p449_2("\x8B\x44\x24\x04\xF3\x0F\x10\x05\x84\x28\x95", 11);
	string only_p442_2("\x8B\x44\x24\x04\xF3\x0F\x10\x05\xE4\x8C\x92", 11);
	string only_p439_2("\x8B\x44\x24\x04\xF3\x0F\x10\x05\xC4\xE5\x91", 11);

	string only_p352_2("\x8B\x44\x24\x04\xA3\x04\x63\x91\0\xF3\x0F\x10\x05\x84\x10\x94", 16);
	string only_p349_2("\x8B\x44\x24\x04\xA3\xC4\x62\x91\0\xF3\x0F\x10\x05\x84\x16\x94", 16);
	string only_p342_2("\x8B\x44\x24\x04\xA3\xA4\xDF\x8E\0\xF3\x0F\x10\x05\xC4\x8A\x91", 16);
	string only_p339_2("\x8B\x44\x24\x04\xA3\x24\x3C\x8E\0\xF3\x0F\x10\x05\xA4\xE3\x90", 16);

	string only_52_2("\xD9\x05\xC0\xB5\x62\0\xD8\x74\x24\x04\x8B\x44\x24\x04", 14);
	string only_49_2("\xD9\x05\xC0\xA5\x62\0\xD8\x74\x24\x04\x8B\x44\x24\x04", 14);
	string only_42_2("\xD9\x05\x90\x15\x62\0\xD8\x74\x24\x04\x8B\x44\x24\x04", 14);
	string only_39_2("\xD9\x05\x80\x03\x61\0\xD8\x74\x24\x04\x8B\x44\x24\x04", 14);

	///////////////////////////////////////////////////		FINE STRINGHE DI IDENTIFICAZIONE VERSIONE FILE	 ////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	if ((Position1 = EXEorig.find(only_p452_1)) != std::string::npos || (Position2 = EXEorig.find(only_p452_2)) != std::string::npos)
		return 452;
	if ((Position1 = EXEorig.find(only_p449_1)) != std::string::npos || (Position2 = EXEorig.find(only_p449_2)) != std::string::npos)
		return 449;
	if ((Position1 = EXEorig.find(only_p442_1)) != std::string::npos || (Position2 = EXEorig.find(only_p442_2)) != std::string::npos)
		return 442;
	if ((Position1 = EXEorig.find(only_p439_1)) != std::string::npos || (Position2 = EXEorig.find(only_p439_2)) != std::string::npos)
		return 439;

	if ((Position1 = EXEorig.find(only_p352_1)) != std::string::npos || (Position2 = EXEorig.find(only_p352_2)) != std::string::npos)
		return 352;
	if ((Position1 = EXEorig.find(only_p349_1)) != std::string::npos || (Position2 = EXEorig.find(only_p349_2)) != std::string::npos)
		return 349;
	if ((Position1 = EXEorig.find(only_p342_1)) != std::string::npos || (Position2 = EXEorig.find(only_p342_2)) != std::string::npos)
		return 342;
	if ((Position1 = EXEorig.find(only_p339_1)) != std::string::npos || (Position2 = EXEorig.find(only_p339_2)) != std::string::npos)
		return 339;

	if ((Position1 = EXEorig.find(only_52_1)) != std::string::npos || (Position2 = EXEorig.find(only_52_2)) != std::string::npos)
		return 52;
	if ((Position1 = EXEorig.find(only_49_1)) != std::string::npos || (Position2 = EXEorig.find(only_49_2)) != std::string::npos)
		return 49;
	if ((Position1 = EXEorig.find(only_42_1)) != std::string::npos || (Position2 = EXEorig.find(only_42_2)) != std::string::npos)
		return 42;
	if ((Position1 = EXEorig.find(only_39_1)) != std::string::npos || (Position2 = EXEorig.find(only_39_2)) != std::string::npos)
		return 39;
	return -1;
}