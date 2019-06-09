#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_LookCamera_InvertYaxis_status()			// Restituisce vero se l'asse Y della LookCamera è invertito, falso se è originale (premi giù, guarda giù)
{
	size_t offset;
	stringstream temp2;
	float value;
	if (ver == 452)		offset = 3420624;
	if (ver == 449)		offset = 3417744;
	if (ver == 442)		offset = 3250832;
	if (ver == 439)		offset = 3207888;
	if (ver == 352)		offset = 3349872;
	if (ver == 349)		offset = 3351216;
	if (ver == 342)		offset = 3184272;
	if (ver == 339)		offset = 3141328;
	if (ver == 52)		offset = 2278808;
	if (ver == 49)		offset = 2274712;
	if (ver == 42)		offset = 2237704;
	if (ver == 39)		offset = 2167568;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&value, &temp, 4);
	if (value < 0)
		return false;		// Il valore originale è negativo (-0.02)
	else
		return true;
}


void Change_LookCamera_InvertYaxis_status()
{
	size_t offset;
	float value;
	if (ver == 452)		offset = 3420624;
	if (ver == 449)		offset = 3417744;
	if (ver == 442)		offset = 3250832;
	if (ver == 439)		offset = 3207888;
	if (ver == 352)		offset = 3349872;
	if (ver == 349)		offset = 3351216;
	if (ver == 342)		offset = 3184272;
	if (ver == 339)		offset = 3141328;
	if (ver == 52)		offset = 2278808;
	if (ver == 49)		offset = 2274712;
	if (ver == 42)		offset = 2237704;
	if (ver == 39)		offset = 2167568;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&value, &temp, 4);
	value *= -1;							// Inverte il segno al valore attuale
	string temp2 = "fill";					// Viene assegnato un testo arbitrario alla string temp2 per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp2, &value, 4);				// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp2, offset);
}