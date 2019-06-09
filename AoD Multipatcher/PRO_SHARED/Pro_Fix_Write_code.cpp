#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


Pro_Fix_Class Pro_Fix_Write_code(Pro_Fix_Class Position_info, Pro_Fix_String input)
{
	for (unsigned int i = 0; i < input.ToRelocate_pos.size(); i++)
	{
		string temp = "fill";
		int diff = input.AbsVirtual_pos[i] - (Position_info.Virtual_offset + input.ToRelocate_pos[i] + 4);
		memcpy(&temp, &diff, 4);
		string temp2 = input.code.substr(0, input.ToRelocate_pos[i]);
		temp2 += temp;
		temp2 += input.code.substr(input.ToRelocate_pos[i] + 4, string::npos);
		input.code = temp2;
	}
	for (unsigned int i = 0; i < input.Gvar_pos.size(); i++)
	{
		string temp = "fill";
		memcpy(&temp, &input.GvarVirtual_pos[i], 4);
		string temp2 = input.code.substr(0, input.Gvar_pos[i]);
		temp2 += temp;
		temp2 += input.code.substr(input.Gvar_pos[i] + 4, string::npos);
		input.code = temp2;
	}
	for (unsigned int i = 0; i < input.Data_pos.size(); i++)
	{
		string temp = "fill";
		int pos = input.DataVirtual_pos[input.Data_ID[i]];
		memcpy(&temp, &pos, 4);
		string temp2 = input.code.substr(0, input.Data_pos[i]);
		temp2 += temp;
		temp2 += input.code.substr(input.Data_pos[i] + 4, string::npos);
		input.code = temp2;
	}
	string temp = "fill";
	string temp2 = EXEorig.substr(0, input.From);
	int diff = Position_info.Virtual_offset - input.FromVirtual - 5;
	memcpy(&temp, &diff, 4);
	temp2 += "\xE9";
	temp2 += temp;
	temp2 += EXEorig.substr(input.From + 5, (Position_info.EXE_offset - (input.From + 5)));
	temp2 += input.code;
	diff = input.ReturnVirtual - (Position_info.Virtual_offset + input.code.size() + 5);
	memcpy(&temp, &diff, 4);
	temp2 += "\xE9";
	temp2 += temp;
	temp2 += EXEorig.substr(Position_info.EXE_offset + input.code.size() + 5, string::npos);
	EXEorig = temp2;
	Position_info.EXE_offset += input.code.size() + 5;
	Position_info.Virtual_offset += input.code.size() + 5;
	return Position_info;
}