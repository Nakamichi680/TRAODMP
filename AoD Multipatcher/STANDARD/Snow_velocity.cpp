#include "stdafx.h"
#include "MISC/Misc_Functions.h"


int Detect_Snow_velocity_status()					// Ritorna 0=normale, 1=low
{
	size_t offset, Position;
	if (ver == 452)		offset = 3338360;
	if (ver == 449)		offset = 3335656;
	if (ver == 442)		offset = 3169832;
	if (ver == 439)		offset = 3127048;
	if (ver == 352)		offset = 3268248;
	if (ver == 349)		offset = 3269704;
	if (ver == 342)		offset = 3103880;
	if (ver == 339)		offset = 3061096;

	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_52("\xD8\x25\x7C\xBF\x62\0\xD9\x5C\x24\x18\xE8\x09\x48", 13);
	string orig_traod_49("\xD8\x25\x74\xAF\x62\0\xD9\x5C\x24\x18\xE8\x09\x45", 13);
	string orig_traod_42("\xD8\x25\xEC\x1E\x62\0\xD9\x5C\x24\x18\xE8\x79\x46", 13);
	string orig_traod_39("\xD8\x25\xE4\x0C\x61\0\xD9\x5C\x24\x18\xE8\x79\x4A", 13);
	
	if (ver == 452 || ver == 449 || ver == 442 || ver == 439 || ver == 352 || ver == 349 || ver == 342 || ver == 339)
	{
		float value;
		string temp;
		temp = EXEorig.substr(offset, 4);
		memcpy(&value, &temp, 4);
		if (value == -16)
			return 0;
		return 1;
	}
	else
	{
		if ((Position = EXEorig.find(orig_traod_52)) != std::string::npos || (Position = EXEorig.find(orig_traod_49)) != std::string::npos ||
			(Position = EXEorig.find(orig_traod_42)) != std::string::npos || (Position = EXEorig.find(orig_traod_39)) != std::string::npos)
			return 0;
		return 1;
	}
}


void Change_Snow_velocity_status()
{
	size_t offset, Position;
	string temp;
	if (ver == 452)		offset = 3338360;
	if (ver == 449)		offset = 3335656;
	if (ver == 442)		offset = 3169832;
	if (ver == 439)		offset = 3127048;
	if (ver == 352)		offset = 3268248;
	if (ver == 349)		offset = 3269704;
	if (ver == 342)		offset = 3103880;
	if (ver == 339)		offset = 3061096;
	
	/////////////////////////////	STRINGHE ORIGINALI
	string orig_traod_52("\xD8\x25\x7C\xBF\x62\0\xD9\x5C\x24\x18\xE8\x09\x48", 13);
	string orig_traod_49("\xD8\x25\x74\xAF\x62\0\xD9\x5C\x24\x18\xE8\x09\x45", 13);
	string orig_traod_42("\xD8\x25\xEC\x1E\x62\0\xD9\x5C\x24\x18\xE8\x79\x46", 13);
	string orig_traod_39("\xD8\x25\xE4\x0C\x61\0\xD9\x5C\x24\x18\xE8\x79\x4A", 13);
	
	/////////////////////////////	STRINGHE MODIFICATE
	string mod_traod_52("\xD8\x25\x4C\xC3\x62\0\xD9\x5C\x24\x18\xE8\x09\x48", 13);
	string mod_traod_49("\xD8\x25\x4C\xB3\x62\0\xD9\x5C\x24\x18\xE8\x09\x45", 13);
	string mod_traod_42("\xD8\x25\xBC\x22\x62\0\xD9\x5C\x24\x18\xE8\x79\x46", 13);
	string mod_traod_39("\xD8\x25\xC4\x10\x61\0\xD9\x5C\x24\x18\xE8\x79\x4A", 13);

	if (ver == 452 || ver == 449 || ver == 442 || ver == 439 || ver == 352 || ver == 349 || ver == 342 || ver == 339)
	{
		float value;
		temp = EXEorig.substr(offset, 4);
		memcpy(&value, &temp, 4);
		if (value == -16)
		{
			temp = EXEorig.substr(0, offset);
			temp.push_back('\0');		temp.push_back('\0');		temp.push_back('\0');		temp += "\xC1";
			temp += EXEorig.substr(offset + 4, string::npos);
			EXEorig = temp;
			return;
		}
		else
		{
			temp = EXEorig.substr(0, offset);
			temp.push_back('\0');		temp.push_back('\0');		temp += "\x80\xC1";
			temp += EXEorig.substr(offset + 4, string::npos);
			EXEorig = temp;
			return;
		}
	}
	else
	{
		// QUESTA PARTE ABILITA LA MODIFICA (la velocità della neve viene dimezzata)
		if ((Position = EXEorig.find(orig_traod_52)) != std::string::npos)
		{
			ChangeSTRINGValue(mod_traod_52, Position);
			return;
		}
		if ((Position = EXEorig.find(orig_traod_49)) != std::string::npos)
		{
			ChangeSTRINGValue(mod_traod_49, Position);
			return;
		}
		if ((Position = EXEorig.find(orig_traod_42)) != std::string::npos)
		{
			ChangeSTRINGValue(mod_traod_42, Position);
			return;
		}
		if ((Position = EXEorig.find(orig_traod_39)) != std::string::npos)
		{
			ChangeSTRINGValue(mod_traod_39, Position);
			return;
		}
		// QUESTA PARTE DISABILITA LA MODIFICA (la velocità della neve viene riportata a quella normale)
		if ((Position = EXEorig.find(mod_traod_52)) != std::string::npos)
		{
			ChangeSTRINGValue(orig_traod_52, Position);
			return;
		}
		if ((Position = EXEorig.find(mod_traod_49)) != std::string::npos)
		{
			ChangeSTRINGValue(orig_traod_49, Position);
			return;
		}
		if ((Position = EXEorig.find(mod_traod_42)) != std::string::npos)
		{
			ChangeSTRINGValue(orig_traod_42, Position);
			return;
		}
		if ((Position = EXEorig.find(mod_traod_39)) != std::string::npos)
		{
			ChangeSTRINGValue(orig_traod_39, Position);
			return;
		}
	}
}