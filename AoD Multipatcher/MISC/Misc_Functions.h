#pragma once
#include "stdafx.h"


int Detect_version();
int Detect_version_advanced();
void Detect_Sasho(int &Version, bool &Sasho);
int Detect_Sasho_advanced();

bool IsValidEXE();
string Remove_path(char EXEname[MAX]);						// Questa funzione prende in input una stringa di un percorso e rimuove tutto lasciando solo il nome del file
string Resize_string(string name, unsigned int length);		// Questa funzione prende in input una stringa e la sua lunghezza massima e la accorcia mettendo "..." alla fine
void Center_string(string str, unsigned int length);		// Questa funzione prende in ingresso una stringa ed una larghezza e centra la scritta sullo schermo
string Center_string2(string str, unsigned int length);		// Questa funzione prende in ingresso una stringa ed una larghezza e ritorna una stringa con la scritta centrata
void Ask_value(string name, double min, double max, float *value, bool EnableDefault = false);		// Questa funzione chiede di inserire un valore e memorizza l'input
void Ask_Color_value(string Colour, int *Target_colour, bool Cap127 = false, bool EnableDefault = false);	// Questa funzione chiede di inserire un valore per un colore e memorizza l'input
void ChangeWORDValue(unsigned short Value, size_t Offset);						// Questa funzione cambia un unsigned short (2 bytes) all'offset indicato del file
void ChangeDWORDValue(unsigned int Value, size_t Offset);						// Questa funzione cambia un unsigned int (4 bytes) all'offset indicato del file
void ChangeQWORDValue(unsigned long long Value, size_t Offset);					// Questa funzione cambia un unsigned long long (8 bytes) all'offset indicato del file
void ChangeSTRINGValue(string Value, size_t Offset);							// Questa funzione cambia una stringa all'offset indicato del file