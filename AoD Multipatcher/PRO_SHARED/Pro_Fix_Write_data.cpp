#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


Pro_Fix_Class Pro_Fix_Write_data(Pro_Fix_Class Position_info, Pro_Fix_String &assembly)
{
	for (unsigned int i = 0; i < assembly.nData; i++)
		assembly.DataVirtual_pos.push_back(Position_info.Virtual_offset + i * 4);
	string temp = EXEorig.substr(0, Position_info.EXE_offset);
	for (unsigned int i = 0; i < assembly.nData; i++)
	{
		string temp2 = "fill";
		memcpy(&temp2, &assembly.Data_default_value[i], 4);
		temp += temp2;
	}
	temp += EXEorig.substr(Position_info.EXE_offset + assembly.nData * 4, string::npos);
	EXEorig = temp;
	Position_info.EXE_offset += assembly.nData * 4;
	Position_info.Virtual_offset += assembly.nData * 4;
	return Position_info;
}