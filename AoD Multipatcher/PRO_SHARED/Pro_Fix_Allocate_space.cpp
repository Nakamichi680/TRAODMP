#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


Pro_Fix_Class Pro_Fix_Allocate_space(unsigned int nBytes, string Title)
{
	Pro_Fix_Class output;
	size_t offset;
	string Magic = "----- Tomb Raider: The Angel Of Darkness EXE Multi-Patcher by Nakamichi680 -----";
	unsigned short NumberOfSections;					// Numero di sezioni contenute nell'EXE (5-7 nel file originale, 8 in quello di Sasho)
	unsigned int ImageBase;								// Offset inizio istruzioni in RAM (solitamente è 400000h)
	unsigned int SizeOfImage;							// Dimensione totale dello spazio allocato in RAM per l'assembly
	unsigned int SectionAlignment;						// Allineamento delle sezioni nella RAM. Necessario per allineare l'offset del gruppo dati da aggiungere
	unsigned int FileAlignment;							// Allineamento delle sezioni nel file EXE. Necessario per allineare l'offset del gruppo dati da aggiungere
	unsigned int LastVirtualSize, LastVirtualPos, LastSize, LastPos, NewVirtualPos, NewSize, NewPos, NewVirtualSize;
	string temp = EXEorig.substr(60, 4);				// Legge l'offset di inzio di NTHEADER
	memcpy(&offset, &temp, 4);
	temp = EXEorig.substr(offset + 6, 2);				// NUMBEROFSECTIONS: legge il numero di sezioni contenute nell'EXE
	memcpy(&NumberOfSections, &temp, 2);
	temp = EXEorig.substr(offset + 52, 4);				// IMAGEBASE: legge l'offset in RAM in cui iniziano le istruzioni
	memcpy(&ImageBase, &temp, 4);
	temp = EXEorig.substr(offset + 56, 4);				// SECTIONALIGNMENT: legge l'allineamento delle sezioni nella RAM
	memcpy(&SectionAlignment, &temp, 4);
	temp = EXEorig.substr(offset + 60, 4);				// FILEALIGNMENT: legge l'allineamento delle sezioni nel file EXE
	memcpy(&FileAlignment, &temp, 4);
	temp = EXEorig.substr(offset + 248 + 40 * (NumberOfSections - 1) + 12, 4);
	string temp2 = EXEorig.substr(offset + 248 + 40 * (NumberOfSections - 1) + 16, 4);
	string temp3 = EXEorig.substr(offset + 248 + 40 * (NumberOfSections - 1) + 20, 4);
	string temp4 = EXEorig.substr(offset + 248 + 40 * (NumberOfSections - 1) + 8, 4);
	memcpy(&LastVirtualPos, &temp, 4);
	memcpy(&LastSize, &temp2, 4);
	memcpy(&LastPos, &temp3, 4);
	memcpy(&LastVirtualSize, &temp4, 4);

	div_t divresult = div((int)nBytes, 16);				// Allinea a 16 bytes la dimensione del blocco di istruzioni
	if (divresult.rem != 0)
		nBytes = (divresult.quot + 1) * 16;

	// PREPARA LA STRINGA DA AGGIUNGERE
	if (Title.size() < 63)								// Allunga la stringa in modo che superi i 64 caratteri 
		Title += "###############################################################";
	if (Title.size() > 63)								// Limita la lunghezza della stringa a 64 caratteri
		Title = Title.substr(0, 63);
	Title += "\x90";
	string code = Title;
	for (unsigned int i = 0; i < nBytes; i++)			// Alloca lo spazio per i dati della funzione
		code += "\x90";

	if (EXEorig.find(Magic) == std::string::npos || EXEorig.find(".TRAODMP") == std::string::npos)		// Se il file è originale (stringhe MAGIC e ".TRAODMP" non trovate)
	{
		NewVirtualSize = nBytes + 64 + 80;
		div_t divresult3 = div((int)NewVirtualSize, SectionAlignment);
		if (divresult3.rem != 0)
			NewVirtualSize = (divresult3.quot + 1) * SectionAlignment;

		// AGGIORNA SIZEOFIMAGE
		temp = EXEorig.substr(offset + 80, 4);
		memcpy(&SizeOfImage, &temp, 4);
		SizeOfImage += NewVirtualSize;
		temp = EXEorig.substr(0, offset + 80);
		string temp5 = "fill";
		memcpy(&temp5, &SizeOfImage, 4);
		temp += temp5;
		temp += EXEorig.substr(offset + 84, string::npos);
		EXEorig = temp;

		// AGGIORNA NUMBEROFSECTIONS
		unsigned short temp4 = NumberOfSections + 1;
		string temp6 = "fi";
		memcpy(&temp6, &temp4, 2);
		temp = EXEorig.substr(0, offset + 6);
		temp += temp6;
		temp += EXEorig.substr(offset + 8, string::npos);
		EXEorig = temp;

		// SALVA LA STRINGA "Compiled on..." ORIGINALE
		string CompiledOn = EXEorig.substr(offset + 248 + 40 * NumberOfSections, 40);		// La stringa è lunga 40 bytes

		// AGGIUNGE L'HEADER DELLA SEZIONE NUOVA ALLA LISTA AD INIZIO FILE
		div_t divresult1, divresult2;
		unsigned int diff1;
		divresult1 = div((int)EXEorig.size(), FileAlignment);
		if (divresult1.rem == 0)
			NewPos = EXEorig.size();
		else
		{
			NewPos = (divresult1.quot + 1) * FileAlignment;
			diff1 = FileAlignment - divresult1.rem;
		}
		NewVirtualPos = LastVirtualPos + LastSize;
		divresult2 = div((int)NewVirtualPos, SectionAlignment);
		if (divresult2.rem != 0)
			NewVirtualPos = (divresult2.quot + 1) * SectionAlignment;
		NewSize = nBytes + 64 + 80;
		string temp7 = "fill", temp8 = "fill", temp9 = "fill", temp10 = "fill";
		memcpy(&temp7, &NewVirtualPos, 4);
		memcpy(&temp8, &NewSize, 4);
		memcpy(&temp9, &NewPos, 4);
		memcpy(&temp10, &NewVirtualSize, 4);
		string header = "\x2E\x54\x52\x41\x4F\x44\x4D\x50";		header += temp10;		header += temp7;			header += temp8;			header += temp9;
		header.push_back('\0');		header.push_back('\0');		header.push_back('\0');		header.push_back('\0');		header.push_back('\0');		header.push_back('\0');
		header.push_back('\0');		header.push_back('\0');		header.push_back('\0');		header.push_back('\0');		header.push_back('\0');		header.push_back('\0');
		header += "\x20";			header.push_back('\0');		header.push_back('\0');		header += "\xE0";

		// APPLICAZIONE DEL NUOVO HEADER E DELLO SPAZIO ALLOCATO AL FILE EXE
		temp = EXEorig.substr(0, offset + 248 + 40 * NumberOfSections);
		temp += header;
		temp += CompiledOn;
		temp += EXEorig.substr(offset + 248 + 40 * (NumberOfSections + 1) + 40, NewPos - (offset + 248 + 40 * (NumberOfSections + 1) + 40));
		if (divresult1.rem != 0)
			for (unsigned int i = 0; i < diff1; i++)
				temp.push_back('\0');
		temp += Magic;
		temp += code;
		EXEorig = temp;

		output.EXE_offset = NewPos + 64 + 80;
		output.Virtual_offset = ImageBase + NewVirtualPos + 64 + 80;
	}
	else
	{
		NewVirtualSize = nBytes + 64;
		div_t divresult3 = div((int)NewVirtualSize, SectionAlignment);
		if (divresult3.rem != 0)
			NewVirtualSize = (divresult3.quot + 1) * SectionAlignment;

		// AGGIORNA SIZEOFIMAGE
		temp = EXEorig.substr(offset + 80, 4);
		memcpy(&SizeOfImage, &temp, 4);
		SizeOfImage += NewVirtualSize;
		temp = EXEorig.substr(0, offset + 80);
		string temp5 = "fill";
		memcpy(&temp5, &SizeOfImage, 4);
		temp += temp5;
		temp += EXEorig.substr(offset + 84, string::npos);
		EXEorig = temp;

		// AGGIORNA L'HEADER DELL'ULTIMA SEZIONE
		NewVirtualSize += LastVirtualSize;
		NewSize = LastSize + nBytes + 64;
		string temp10 = "fill", temp11 = "fill";
		memcpy(&temp10, &NewVirtualSize, 4);
		memcpy(&temp11, &NewSize, 4);
		temp = EXEorig.substr(0, offset + 248 + 40 * (NumberOfSections - 1) + 8);
		temp += temp10;
		temp += EXEorig.substr(offset + 248 + 40 * (NumberOfSections - 1) + 12, 4);
		temp += temp11;
		temp += EXEorig.substr(offset + 248 + 40 * (NumberOfSections - 1) + 20, string::npos);
		EXEorig = temp;

		// APPLICAZIONE DELLO SPAZIO ALLOCATO AL FILE EXE
		temp = EXEorig;
		temp += code;
		EXEorig = temp;

		output.EXE_offset = LastPos + LastSize + 64;
		output.Virtual_offset = ImageBase + LastVirtualPos + LastSize + 64;
	}
	return output;	
}