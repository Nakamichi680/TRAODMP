#include "stdafx.h"
#include "MISC/Misc_Functions.h"


int Detect_Snow_shakiness_status()					// Ritorna 0=normale, 1=low
{
	size_t offset1;
	string temp;
	float value;
	if (ver == 452)		offset1 = 553050;
	if (ver == 449)		offset1 = 554110;
	if (ver == 442)		offset1 = 546694;
	if (ver == 439)		offset1 = 541390;
	if (ver == 352)		offset1 = 539454;
	if (ver == 349)		offset1 = 541126;
	if (ver == 342)		offset1 = 534542;
	if (ver == 339)		offset1 = 528694;
	if (ver == 52)		offset1 = 454957;
	if (ver == 49)		offset1 = 456557;
	if (ver == 42)		offset1 = 451069;
	if (ver == 39)		offset1 = 446397;
	temp = EXEorig.substr(offset1, 4);
	memcpy(&value, &temp, 4);
	if (value == 8)
		return 0;
	return 1;
}


void Change_Snow_shakiness_status()
{
	size_t offset1, offset2;
	string temp;
	float value;
	if (ver == 452)	{		offset1 = 553050;		offset2 = 553066;	}
	if (ver == 449)	{		offset1 = 554110;		offset2 = 554126;	}
	if (ver == 442)	{		offset1 = 546694;		offset2 = 546710;	}
	if (ver == 439)	{		offset1 = 541390;		offset2 = 541406;	}
	if (ver == 352)	{		offset1 = 539454;		offset2 = 539470;	}
	if (ver == 349)	{		offset1 = 541126;		offset2 = 541142;	}
	if (ver == 342)	{		offset1 = 534542;		offset2 = 534558;	}
	if (ver == 339)	{		offset1 = 528694;		offset2 = 528710;	}
	if (ver == 52)	{		offset1 = 454957;		offset2 = 454970;	}
	if (ver == 49)	{		offset1 = 456557;		offset2 = 456570;	}
	if (ver == 42)	{		offset1 = 451069;		offset2 = 451082;	}
	if (ver == 39)	{		offset1 = 446397;		offset2 = 446410;	}

	temp = EXEorig.substr(offset1, 4);
	memcpy(&value, &temp, 4);
	if (value == 8)					// Se il valore è normale si sostituisce 8 con 2
	{
		temp = EXEorig.substr(0, offset1);
		temp.push_back('\0');		temp.push_back('\0');		temp.push_back('\0');		temp += "\x40";
		temp += EXEorig.substr(offset1 + 4, offset2 - offset1 - 4);
		temp.push_back('\0');		temp.push_back('\0');		temp.push_back('\0');		temp += "\x40";
		temp += EXEorig.substr(offset2 + 4, string::npos);
		EXEorig = temp;
	}
	else							// Se il valore è modificato si ripristina quello originale (8)
	{
		temp = EXEorig.substr(0, offset1);
		temp.push_back('\0');		temp.push_back('\0');		temp.push_back('\0');		temp += "\x41";
		temp += EXEorig.substr(offset1 + 4, offset2 - offset1 - 4);
		temp.push_back('\0');		temp.push_back('\0');		temp.push_back('\0');		temp += "\x41";
		temp += EXEorig.substr(offset2 + 4, string::npos);
		EXEorig = temp;
	}
}