#include "stdafx.h"
#include "MISC/concol.h"
#include "MISC/Misc_Functions.h"


void gAnimPlayFPS_write()
{
	float value = 30;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3351268;
	if (ver == 449)		offset = 3348612;
	if (ver == 442)		offset = 3181796;
	if (ver == 439)		offset = 3139012;
	if (ver == 352)		offset = 3281028;
	if (ver == 349)		offset = 3282564;
	if (ver == 342)		offset = 3115716;
	if (ver == 339)		offset = 3072932;
	if (ver == 52)		offset = 2274752;
	if (ver == 49)		offset = 2270656;
	if (ver == 42)		offset = 2233744;
	if (ver == 39)		offset = 2163584;
	cout << "\n\n -------------------------------------------------   gAnimPlayFPS   --------------------------------------------------\n\n";
	Ask_value("", 1, 150, &value, true);			// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset);
}


void playTriggerDamageEffectSize_write()
{
	float value = 4;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 1369585;
	if (ver == 449)		offset = 1369877;
	if (ver == 442)		offset = 1362837;
	if (ver == 439)		offset = 1357481;
	if (ver == 352)		offset = 1345691;
	if (ver == 349)		offset = 1345987;
	if (ver == 342)		offset = 1339255;
	if (ver == 339)		offset = 1334167;
	if (ver == 52)		offset = 1165579;
	if (ver == 49)		offset = 1166219;
	if (ver == 42)		offset = 1160683;
	if (ver == 39)		offset = 1157675;
	cout << "\n\n ------------------------------------------   playTriggerDamageEffectSize   ------------------------------------------\n\n";
	Ask_value("", 0, 40, &value, true);				// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset);
}


void g_physics_G_write()
{
	float value = 5400;								// Valore di default
	size_t offset1, offset2, offset3;
	if (ver == 452)	{	offset1 = 1556099;		offset2 = 1556647;		offset3 = 3369184;	}
	if (ver == 449)	{	offset1 = 1554491;		offset2 = 1555039;		offset3 = 3366528;	}
	if (ver == 442)	{	offset1 = 1546811;		offset2 = 1547359;		offset3 = 3199712;	}
	if (ver == 439)	{	offset1 = 1541455;		offset2 = 1542003;		offset3 = 3156864;	}
	if (ver == 352)	{	offset1 = 1530729;		offset2 = 1531275;		offset3 = 3298848;	}
	if (ver == 349)	{	offset1 = 1529173;		offset2 = 1529719;		offset3 = 3300416;	}
	if (ver == 342)	{	offset1 = 1521805;		offset2 = 1522351;		offset3 = 3133568;	}
	if (ver == 339)	{	offset1 = 1516709;		offset2 = 1517255;		offset3 = 3090720;	}
	if (ver == 52)	{	offset1 = 1343003;		offset2 = 2278292;		offset3 = 1343003;	}
	if (ver == 49)	{	offset1 = 1341803;		offset2 = 2274196;		offset3 = 1341803;	}
	if (ver == 42)	{	offset1 = 1335643;		offset2 = 2237188;		offset3 = 1335643;	}
	if (ver == 39)	{	offset1 = 1334491;		offset2 = 2167052;		offset3 = 1334491;	}
	cout << "\n\n --------------------------------------------------   g_physics_G   --------------------------------------------------\n\n";
	Ask_value("", 54, 540000, &value, true);		// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset1);
	ChangeSTRINGValue(temp, offset2);
	ChangeSTRINGValue(temp, offset3);
}


void gcamMaximumCameraDistance_write()
{
	float value = 1280;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3008612;
	if (ver == 449)		offset = 3004452;
	if (ver == 442)		offset = 2840036;
	if (ver == 439)		offset = 2799044;
	if (ver == 352)		offset = 2971492;
	if (ver == 349)		offset = 2971428;
	if (ver == 342)		offset = 2807012;
	if (ver == 339)		offset = 2766020;
	if (ver == 52)		offset = 2780696;
	if (ver == 49)		offset = 2777224;
	if (ver == 42)		offset = 2642768;
	if (ver == 39)		offset = 2567888;
	cout << "\n\n -------------------------------------------   gcamMaximumCameraDistance   -------------------------------------------\n\n";
	Ask_value("", 300, 12800, &value, true);		// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset);
}


void gCamera_CornerShoot_ViewDistance_write()
{
	float value = 900;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3008576;
	if (ver == 449)		offset = 3004416;
	if (ver == 442)		offset = 2840000;
	if (ver == 439)		offset = 2799008;
	if (ver == 352)		offset = 2971456;
	if (ver == 349)		offset = 2971392;
	if (ver == 342)		offset = 2806976;
	if (ver == 339)		offset = 2765984;
	if (ver == 52)		offset = 2780660;
	if (ver == 49)		offset = 2777188;
	if (ver == 42)		offset = 2642732;
	if (ver == 39)		offset = 2567852;
	cout << "\n\n ----------------------------------------   gCamera_CornerShoot_ViewDistance   ---------------------------------------\n\n";
	Ask_value("", 110, 10000, &value, true);		// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset);
}


void gCamera_LookAroundThetaMax_write()
{
	float value = 70;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3420604;
	if (ver == 449)		offset = 3417724;
	if (ver == 442)		offset = 3250812;
	if (ver == 439)		offset = 3207868;
	if (ver == 352)		offset = 3349852;
	if (ver == 349)		offset = 3351196;
	if (ver == 342)		offset = 3184252;
	if (ver == 339)		offset = 3141308;
	if (ver == 52)		offset = 2278836;
	if (ver == 49)		offset = 2274740;
	if (ver == 42)		offset = 2237732;
	if (ver == 39)		offset = 2167596;
	cout << "\n\n ------------------------------------------   gCamera_LookAroundThetaMax   -------------------------------------------\n\n";
	Ask_value("", 0, 89.9, &value, true);			// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset);
}


void gCamera_LookAroundThetaMin_write()
{
	float value = -60;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3420608;
	if (ver == 449)		offset = 3417728;
	if (ver == 442)		offset = 3250816;
	if (ver == 439)		offset = 3207872;
	if (ver == 352)		offset = 3349856;
	if (ver == 349)		offset = 3351200;
	if (ver == 342)		offset = 3184256;
	if (ver == 339)		offset = 3141312;
	if (ver == 52)		offset = 2278840;
	if (ver == 49)		offset = 2274744;
	if (ver == 42)		offset = 2237736;
	if (ver == 39)		offset = 2167600;
	cout << "\n\n ------------------------------------------   gCamera_LookAroundThetaMin   -------------------------------------------\n\n";
	Ask_value("", -89.9, 0, &value, true);			// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset);
}


void gCamera_LookAroundRhoMax_write()
{
	float value = 85;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3420612;
	if (ver == 449)		offset = 3417732;
	if (ver == 442)		offset = 3250820;
	if (ver == 439)		offset = 3207876;
	if (ver == 352)		offset = 3349860;
	if (ver == 349)		offset = 3351204;
	if (ver == 342)		offset = 3184260;
	if (ver == 339)		offset = 3141316;
	if (ver == 52)		offset = 2278844;
	if (ver == 49)		offset = 2274748;
	if (ver == 42)		offset = 2237740;
	if (ver == 39)		offset = 2167604;
	cout << "\n\n -------------------------------------------   gCamera_LookAroundRhoMax   --------------------------------------------\n\n";
	Ask_value("", 0, 179.9, &value, true);			// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset);
}


void gCamera_LookAroundRhoMin_write()
{
	float value = -85;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3420616;
	if (ver == 449)		offset = 3417736;
	if (ver == 442)		offset = 3250824;
	if (ver == 439)		offset = 3207880;
	if (ver == 352)		offset = 3349864;
	if (ver == 349)		offset = 3351208;
	if (ver == 342)		offset = 3184264;
	if (ver == 339)		offset = 3141320;
	if (ver == 52)		offset = 2278848;
	if (ver == 49)		offset = 2274752;
	if (ver == 42)		offset = 2237744;
	if (ver == 39)		offset = 2167608;
	cout << "\n\n -------------------------------------------   gCamera_LookAroundRhoMin   --------------------------------------------\n\n";
	Ask_value("", -179.9, 0, &value, true);			// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset);
}


void gconHealthColour_write()
{
	int R = 63, G = 0, B = 0, A = 111;
	size_t offset;
	if (ver == 452)		offset = 3000520;
	if (ver == 449)		offset = 2996392;
	if (ver == 442)		offset = 2832008;
	if (ver == 439)		offset = 2791016;
	if (ver == 352)		offset = 2963400;
	if (ver == 349)		offset = 2963368;
	if (ver == 342)		offset = 2798984;
	if (ver == 339)		offset = 2757992;
	if (ver == 52)		offset = 2754740;
	if (ver == 49)		offset = 2751492;
	if (ver == 42)		offset = 2617076;
	if (ver == 39)		offset = 2542196;
	cout << "\n\n ------------------------------------------------   gconHealthColour   -----------------------------------------------\n\n";
	Ask_Color_value("Red", &R, true, true);
	Ask_Color_value("Green", &G, true, true);
	Ask_Color_value("Blue", &B, true, true);
	Ask_Color_value("Alpha", &A, true, true);
	string temp, tempR = "R", tempG = "G", tempB = "B", tempA = "A";
	memcpy(&tempR, &R, 1);
	memcpy(&tempG, &G, 1);
	memcpy(&tempB, &B, 1);
	memcpy(&tempA, &A, 1);
	temp = EXEorig.substr(0, offset);
	temp += tempR;
	temp += tempG;
	temp += tempB;
	temp += tempA;
	temp += EXEorig.substr(offset + 4, string::npos);
	EXEorig = temp;
}


void gconDamageColour_write()
{
	int R = 63, G = 0, B = 0, A = 111;
	size_t offset;
	if (ver == 452)		offset = 1183593;
	if (ver == 449)		offset = 1184169;
	if (ver == 442)		offset = 1177065;
	if (ver == 439)		offset = 1171685;
	if (ver == 352)		offset = 1162137;
	if (ver == 349)		offset = 1162713;
	if (ver == 342)		offset = 1155905;
	if (ver == 339)		offset = 1150837;
	if (ver == 52)		offset = 992706;
	if (ver == 49)		offset = 993506;
	if (ver == 42)		offset = 988002;
	if (ver == 39)		offset = 983746;
	cout << "\n\n ------------------------------------------------   gconDamageColour   -----------------------------------------------\n\n";
	Ask_Color_value("Red", &R, true, true);
	Ask_Color_value("Green", &G, true, true);
	Ask_Color_value("Blue", &B, true, true);
	Ask_Color_value("Alpha", &A, true, true);
	string temp, tempR = "R", tempG = "G", tempB = "B", tempA = "A";
	memcpy(&tempR, &R, 1);
	memcpy(&tempG, &G, 1);
	memcpy(&tempB, &B, 1);
	memcpy(&tempA, &A, 1);
	temp = EXEorig.substr(0, offset);
	temp += tempR;
	temp += tempG;
	temp += tempB;
	temp += tempA;
	temp += EXEorig.substr(offset + 4, string::npos);
	EXEorig = temp;
}


void invBgRGB_write()
{
	int R = 128, G = 96, B = 32, A = 64;
	size_t offset;
	if (ver == 452)		offset = 3021308;
	if (ver == 449)		offset = 3017148;
	if (ver == 442)		offset = 2852732;
	if (ver == 439)		offset = 2811740;
	if (ver == 352)		offset = 2984188;
	if (ver == 349)		offset = 2984124;
	if (ver == 342)		offset = 2819708;
	if (ver == 339)		offset = 2778716;
	if (ver == 52)		offset = 2803064;
	if (ver == 49)		offset = 2799592;
	if (ver == 42)		offset = 2665064;
	if (ver == 39)		offset = 2590184;
	cout << "\n\n ----------------------------------------------------   invBgRGB   ---------------------------------------------------\n\n";
	Ask_Color_value("Red", &R, true, true);
	Ask_Color_value("Green", &G, true, true);
	Ask_Color_value("Blue", &B, true, true);
	Ask_Color_value("Alpha", &A, true, true);
	if (R == 127)
		R = 128;
	string temp, tempR = "R", tempG = "G", tempB = "B", tempA = "A";
	memcpy(&tempR, &R, 1);
	memcpy(&tempG, &G, 1);
	memcpy(&tempB, &B, 1);
	memcpy(&tempA, &A, 1);
	temp = EXEorig.substr(0, offset);
	temp += tempR;
	temp += tempG;
	temp += tempB;
	temp += tempA;
	temp += EXEorig.substr(offset + 4, string::npos);
	EXEorig = temp;
}


void crawl_targetDistance_write()
{
	float value = 700;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 1313230;
	if (ver == 449)		offset = 1313734;
	if (ver == 442)		offset = 1306694;
	if (ver == 439)		offset = 1301338;
	if (ver == 352)		offset = 1290403;
	if (ver == 349)		offset = 1290907;
	if (ver == 342)		offset = 1284175;
	if (ver == 339)		offset = 1279087;
	if (ver == 52)		offset = 1114700;
	if (ver == 49)		offset = 1115628;
	if (ver == 42)		offset = 1110140;
	if (ver == 39)		offset = 1106412;
	cout << "\n\n ----------------------------------------------   crawl_targetDistance   ---------------------------------------------\n\n";
	Ask_value("", 250, 10000, &value, true);		// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset);
}


void stair_targetDistance_write()
{
	float value = 850;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 1312788;
	if (ver == 449)		offset = 1313292;
	if (ver == 442)		offset = 1306252;
	if (ver == 439)		offset = 1300896;
	if (ver == 352)		offset = 1289961;
	if (ver == 349)		offset = 1290465;
	if (ver == 342)		offset = 1283733;
	if (ver == 339)		offset = 1278645;
	if (ver == 52)		offset = 1114643;
	if (ver == 49)		offset = 1115571;
	if (ver == 42)		offset = 1110083;
	if (ver == 39)		offset = 1106355;
	cout << "\n\n ----------------------------------------------   stair_targetDistance   ---------------------------------------------\n\n";
	Ask_value("", 250, 10000, &value, true);		// Richiesta input valore da parte dell'utente
	string temp = "fill";							// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
	memcpy(&temp, &value, 4);						// Copia del valore in esadecimale dal float alla stringa
	ChangeSTRINGValue(temp, offset);
}


void demo_video_timeout_write()
{
	float value = 60;								// Valore di default
	size_t Position1, Position2;
	string check1 = "#####Main menu demo patch#####";
	string check2;
	if (ver == 452)	{	string temp("\x8B\x15\xA0\xC0\x7B\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 449)	{	string temp("\x8B\x15\x60\xB0\x7B\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 442)	{	string temp("\x8B\x15\x40\x2D\x79\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 439)	{	string temp("\x8B\x15\0\x8A\x78\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 352)	{	string temp("\x8B\x15\x60\xA7\x7A\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 349)	{	string temp("\x8B\x15\x20\xA7\x7A\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 342)	{	string temp("\x8B\x15\0\x24\x78\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 339)	{	string temp("\x8B\x15\x80\x80\x77\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 52)	{	string temp("\xA1\x68\x3E\x87\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}
	if (ver == 49)	{	string temp("\xA1\xA8\x2F\x87\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}
	if (ver == 42)	{	string temp("\xA1\x28\x63\x85\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}
	if (ver == 39)	{	string temp("\xA1\x28\xF7\x83\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}

	if ((Position1 = EXEorig.find(check1)) != std::string::npos && (Position2 = EXEorig.find(check2)) != std::string::npos)
	{
		cout << "\n\n -----------------------------------------------   demo_video_timeout   ----------------------------------------------\n\n";
		Ask_value("", 5, 600, &value, true);		// Richiesta input valore da parte dell'utente
		string temp = "fill";						// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
		unsigned int uintvalue = (int)value * 60;
		memcpy(&temp, &uintvalue, 4);				// Copia del valore in esadecimale dal float alla stringa
		ChangeSTRINGValue(temp, Position2 + check2.size());
	}
}


void FOG_SetPlane_Distance_write()
{
	float value = 1;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3304768;
	if (ver == 449)		offset = 3300928;
	if (ver == 442)		offset = 3136800;
	if (ver == 439)		offset = 3094016;
	if (ver == 352)		offset = 3234944;
	if (ver == 349)		offset = 3235264;
	if (ver == 342)		offset = 3071136;
	if (ver == 339)		offset = 3028352;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		cout << "\n\n ---------------------------------------------   FOG_SetPlane_Distance   ---------------------------------------------\n\n";
		Ask_value("", 0, 25, &value, true);			// Richiesta input valore da parte dell'utente
		string temp = "fill";						// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
		memcpy(&temp, &value, 4);					// Copia del valore in esadecimale dal float alla stringa
		ChangeSTRINGValue(temp, offset);
	}
}


void fxUpdateWaterBuffer_Wave_Height_write()
{
	float value = -0.05f;							// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3362440;
	if (ver == 449)		offset = 3359784;
	if (ver == 442)		offset = 3192968;
	if (ver == 439)		offset = 3150120;
	if (ver == 352)		offset = 3292200;
	if (ver == 349)		offset = 3293736;
	if (ver == 342)		offset = 3126888;
	if (ver == 339)		offset = 3084040;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		cout << "\n\n ----------------------------------------   fxUpdateWaterBuffer_Wave_Height   ----------------------------------------\n\n";
		Ask_value("", -0.55, -0.001, &value, true);	// Richiesta input valore da parte dell'utente
		string temp = "fill";						// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
		memcpy(&temp, &value, 4);					// Copia del valore in esadecimale dal float alla stringa
		ChangeSTRINGValue(temp, offset);
	}
}


void dbgMinCameraDistance_write()
{
	float value = 10;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3328036;
	if (ver == 449)		offset = 3325252;
	if (ver == 442)		offset = 3159428;
	if (ver == 439)		offset = 3116612;
	if (ver == 352)		offset = 3257924;
	if (ver == 349)		offset = 3259300;
	if (ver == 342)		offset = 3093476;
	if (ver == 339)		offset = 3050660;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		cout << "\n\n ---------------------------------------------   dbgMinCameraDistance   ----------------------------------------------\n\n";
		Ask_value("", 4, 20, &value, true);			// Richiesta input valore da parte dell'utente
		string temp = "fill";						// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
		memcpy(&temp, &value, 4);					// Copia del valore in esadecimale dal float alla stringa
		ChangeSTRINGValue(temp, offset);
	}
}


void dbgMaxCameraDistance_write()
{
	float value = 90;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3328032;
	if (ver == 449)		offset = 3325248;
	if (ver == 442)		offset = 3159424;
	if (ver == 439)		offset = 3116608;
	if (ver == 352)		offset = 3257920;
	if (ver == 349)		offset = 3259296;
	if (ver == 342)		offset = 3093472;
	if (ver == 339)		offset = 3050656;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		cout << "\n\n ---------------------------------------------   dbgMaxCameraDistance   ----------------------------------------------\n\n";
		Ask_value("", 80, 160, &value, true);		// Richiesta input valore da parte dell'utente
		string temp = "fill";						// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
		memcpy(&temp, &value, 4);					// Copia del valore in esadecimale dal float alla stringa
		ChangeSTRINGValue(temp, offset);
	}
}


void gameover_timeout_write()
{
	float value = 3;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3425192;
	if (ver == 449)		offset = 3422280;
	if (ver == 442)		offset = 3255368;
	if (ver == 439)		offset = 3212424;
	if (ver == 352)		offset = 3354280;
	if (ver == 349)		offset = 3355592;
	if (ver == 342)		offset = 3188648;
	if (ver == 339)		offset = 3145704;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		cout << "\n\n -----------------------------------------------   gameover_timeout   ------------------------------------------------\n\n";
		Ask_value("", 0, 600, &value, true);		// Richiesta input valore da parte dell'utente
		value *= 60;								// Passa da secondi a frames (1 secondo = 60 frames)
		string temp = "fill";						// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
		memcpy(&temp, &value, 4);					// Copia del valore in esadecimale dal float alla stringa
		ChangeSTRINGValue(temp, offset);
	}
}


void swim_targetDistance_write()
{
	float value = 960;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3421292;
	if (ver == 449)		offset = 3418412;
	if (ver == 442)		offset = 3251500;
	if (ver == 439)		offset = 3208556;
	if (ver == 352)		offset = 3350500;
	if (ver == 349)		offset = 3351844;
	if (ver == 342)		offset = 3184900;
	if (ver == 339)		offset = 3141956;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		cout << "\n\n ----------------------------------------------   swim_targetDistance   ----------------------------------------------\n\n";
		Ask_value("", 300, 12800, &value, true);	// Richiesta input valore da parte dell'utente
		value /= 1280;
		string temp = "fill";						// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
		memcpy(&temp, &value, 4);					// Copia del valore in esadecimale dal float alla stringa
		ChangeSTRINGValue(temp, offset);
	}
}


void apnea_time_write()
{
	float value = 60;								// Valore di default
	size_t offset;
	if (ver == 452)		offset = 3427092;
	if (ver == 449)		offset = 3424180;
	if (ver == 442)		offset = 3257268;
	if (ver == 439)		offset = 3214324;
	if (ver == 352)		offset = 3356076;
	if (ver == 349)		offset = 3357388;
	if (ver == 342)		offset = 3190444;
	if (ver == 339)		offset = 3147500;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		cout << "\n\n --------------------------------------------------   apnea_time   ---------------------------------------------------\n\n";
		Ask_value("", 5, 300, &value, true);	// Richiesta input valore da parte dell'utente
		string temp = "fill";						// Viene assegnato un testo arbitrario alla string temp per inizializzare i 4 byte di memoria che accoglieranno il float
		memcpy(&temp, &value, 4);					// Copia del valore in esadecimale dal float alla stringa
		ChangeSTRINGValue(temp, offset);
	}
}