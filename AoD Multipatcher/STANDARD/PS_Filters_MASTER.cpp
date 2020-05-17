#include "stdafx.h"
#include "MISC/concol.h"
//#include "STANDARD/Standard_FIX.h"
#include "PRO_SHARED/Pro_FIX.h"


void Change_PS_Filters_MASTER_status(Pro_Fix_Status *Pro_Fix)
{
	do
	{
		system("cls");
		cout << " ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n"
				" บ                                                                                                                   บ\n"
				" บ" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "บ\n"
				" บ" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<white<< "                                                      FILTERS                                                      " <<aqua<< "บ\n"
				" วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ\n"
				" บ                                                                                                                   บ\n"
				" บ   All keyboard/gamepad inputs except for the \"ESC\" button will be ignored during cutscenes and/or FMVs, thus      บ\n"
				" บ   making it possible, for example, to take screenshots or to start video recording.                               บ\n"
				" บ                                                                                                                   บ\n"
				" บ   Choose one of the following options:                                                                            บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ         1 )  DISABLED                                                                                             บ\n"
				" บ         2 )  SEPIA                                                                                                บ\n"
				" บ         3 )  EMBOSS                                                                                               บ\n"
				" บ         4 )  SHARPENING                                                                                           บ\n"
				" บ         5 )  DISTORT                                                                                              บ\n"
				" บ         6 )  NEGATIVE                                                                                             บ\n"
				" บ         7 )  GRAYSCALE                                                                                            บ\n"
				" บ         8 )  BLACK&WHITE                                                                                          บ\n"
				" บ         9 )  BLACK&WHITE INVERSE                                                                                  บ\n"
				" บ         10)  RED                                                                                                  บ\n"
				" บ         11)  GREEN                                                                                                บ\n"
				" บ         12)  BLUE                                                                                                 บ\n"
				" บ         13)  NIGHT VISION                                                                                         บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" บ                                                                                                                   บ\n"
				" ฬอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออน\n"
				" บ" <<pink<< "   Current status: ";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::NONE)
			cout << "Disabled                                                                                        " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::SEPIA)
			cout << "Enabled        Preset: Sepia                                                                    " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::EMBOSS)
			cout << "Enabled        Preset: Emboss                                                                   " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::SHARPENING)
			cout << "Enabled        Preset: Sharpening                                                               " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::DISTORT)
			cout << "Enabled        Preset: Distort                                                                  " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::NEGATIVE)
			cout << "Enabled        Preset: Negative                                                                 " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::GRAYSCALE)
			cout << "Enabled        Preset: Grayscale                                                                " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::BW)
			cout << "Enabled        Preset: Black&White                                                              " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::BWINVERSE)
			cout << "Enabled        Preset: Black&White Inverse                                                      " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::RED)
			cout << "Enabled        Preset: Red                                                                      " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::GREEN)
			cout << "Enabled        Preset: Green                                                                    " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::BLUE)
			cout << "Enabled        Preset: Blue                                                                     " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::NIGHTVISION)
			cout << "Enabled        Preset: Night vision                                                             " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::POSTERIZE)
			cout << "Enabled        Preset: Posterize                                                                " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::MOSAIC)
			cout << "Enabled        Preset: Mosaic                                                                   " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::DRAWING)
			cout << "Enabled        Preset: Drawing                                                                  " <<aqua<< "บ\n";
		cout << " ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n"
				"\n Select an option and press Enter [" <<white<< "1-4" <<aqua<< "]: " <<white;
		string userinput;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		
		if (userinput == "1")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				PS_Filters_Disable();
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			return;
		}
		if (userinput == "2")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::SEPIA);
			return;
		}
		if (userinput == "3")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::EMBOSS);
			return;
		}
		if (userinput == "4")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::SHARPENING);
			return;
		}
	} while (true);
}