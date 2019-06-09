#include "stdafx.h"
#include "MISC/Misc_Functions.h"


void CONTROLS_MOD_Sasho_Apply_Fix()					// Reimposta alcune istruzioni originali modificate da Sasho
{
	int Version;
	bool Sasho;
	Detect_Sasho(Version, Sasho);
	if (!Sasho)				// Termina subito se l'EXE non è di Sasho
		return;
	Version = Detect_Sasho_advanced();
	if (Version == -1)		// Termina subito se la versione di Sasho è sconosciuta
		return;
	switch (Version)
	{
	case (664):
	case (663):
	case (662):
	case (661):
	case (660):
		ChangeDWORDValue(0x0041DA24, 0x322A20);			// Ripristina l'offset di PAD_LSTICK_XAXIS
		ChangeDWORDValue(0x0041D9FF, 0x322A24);			// Ripristina l'offset di PAD_LSTICK_YAXIS
	case (651):
	case (650):
		ChangeDWORDValue(0x0000027F, 0x1C721);			// Ripristina la chiamata a GetPS2PAD
	}
}


void CONTROLS_MOD_Sasho_Restore()					// Riapplica le modifiche fatte da Sasho
{
	int Version;
	bool Sasho;
	Detect_Sasho(Version, Sasho);
	if (!Sasho)				// Termina subito se l'EXE non è di Sasho
		return;
	Version = Detect_Sasho_advanced();
	if (Version == -1)		// Termina subito se la versione di Sasho è sconosciuta
		return;
	switch (Version)
	{
	case (664):
	case (663):
	case (662):
	case (661):
	case (660):
		ChangeDWORDValue(0x009C4069, 0x322A20);			// Ripristina l'offset di PAD_LSTICK_XAXIS custom
		ChangeDWORDValue(0x009C4064, 0x322A24);			// Ripristina l'offset di PAD_LSTICK_YAXIS custom
	case (651):
	case (650):
		ChangeDWORDValue(0x005A793A, 0x1C721);			// Ripristina la chiamata a GetPS2PAD custom
	}
}