#include "stdafx.h"


void Pro_Fix_Deallocate_space()
{
	string temp, temp2, temp3, CompiledOn;
	size_t offset;
	unsigned short NumberOfSections;					// Numero di sezioni contenute nell'EXE (5-7 nel file originale, 8 in quello di Sasho)
	unsigned int SizeOfImage;							// Dimensione totale dello spazio allocato in RAM per l'assembly
	unsigned int LastSectionVirtualSize;				// Dimensione occupata in RAM dall'ultima sezione

	// Taglia tutta la porzione finale dei dati aggiunti dal Multi-Patcher
	string eof("\x2E\x70\x64\x62\0", 5);
	temp = EXEorig.substr(0, EXEorig.find(eof) + 5);
	EXEorig = temp;

	// Memorizza LastSectionVirtualSize e aggiorna il numero di sezioni del file (ne sottrae una)
	temp = EXEorig.substr(60, 4);						// Legge l'offset di inzio di NTHEADER
	memcpy(&offset, &temp, 4);
	temp = EXEorig.substr(offset + 6, 2);				// NUMBEROFSECTIONS: legge il numero di sezioni contenute nell'EXE
	memcpy(&NumberOfSections, &temp, 2);
	NumberOfSections--;
	temp = EXEorig.substr(offset + 248 + 40 * NumberOfSections + 8, 4);
	memcpy(&LastSectionVirtualSize, &temp, 4);
	temp2 = "fi";
	memcpy(&temp2, &NumberOfSections, 2);
	temp = EXEorig.substr(0, offset + 6);
	temp += temp2;
	temp += EXEorig.substr(offset + 8, string::npos);
	EXEorig = temp;

	// Aggiorna SizeofImage (sottrae il VirtualSize dell'ultima sezione al valore corrente)

	temp = EXEorig.substr(offset + 80, 4);
	memcpy(&SizeOfImage, &temp, 4);
	SizeOfImage -= LastSectionVirtualSize;
	temp3 = "fill";
	memcpy(&temp3, &SizeOfImage, 4);
	temp = EXEorig.substr(0, offset + 80);
	temp += temp3;
	temp += EXEorig.substr(offset + 84, string::npos);
	EXEorig = temp;

	// Elimina l'header dell'ultima sezione e lo sovrascrive con 80 bytes successivi (sovrascrive anche il precedente CompiledOn traslato)
	CompiledOn = EXEorig.substr(offset + 248 + 40 * (NumberOfSections + 1), 80);		// La stringa è lunga 80 bytes
	temp = EXEorig.substr(0, offset + 248 + 40 * NumberOfSections);
	temp += CompiledOn;
	temp += EXEorig.substr(offset + 248 + 40 * NumberOfSections + 80, string::npos);
	EXEorig = temp;
}