#include "stdafx.h"
#include "MISC/concol.h"
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
				" บ   Pixel shader 2.0 effects for AoD.                                                                               บ\n"
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
				" บ         14)  POSTERIZE                                                                                            บ\n"
				" บ         15)  MOSAIC                                                                                               บ\n"
				" บ         16)  DRAWING                                                                                              บ\n"
				" บ         17)  NEON                                                                                                 บ\n"
				" บ         18)  ANAGLYPH                                                                                             บ\n"
				" บ         19)  VIGNETTE                                                                                             บ\n"
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
		if (Pro_Fix->PS_Filters_status == PS_FILTER::NEON)
			cout << "Enabled        Preset: Neon                                                                     " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::ANAGLYPH)
			cout << "Enabled        Preset: Anaglyph                                                                 " <<aqua<< "บ\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::VIGNETTE)
			cout << "Enabled        Preset: Vignette                                                                 " <<aqua<< "บ\n";
		cout << " ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n"
				"\n Select an option and press Enter [" <<white<< "1-19" <<aqua<< "]: " <<white;
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
		if (userinput == "5")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::DISTORT);
			return;
		}
		if (userinput == "6")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::NEGATIVE);
			return;
		}
		if (userinput == "7")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::GRAYSCALE);
			return;
		}
		if (userinput == "8")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::BW);
			return;
		}
		if (userinput == "9")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::BWINVERSE);
			return;
		}
		if (userinput == "10")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::RED);
			return;
		}
		if (userinput == "11")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::GREEN);
			return;
		}
		if (userinput == "12")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::BLUE);
			return;
		}
		if (userinput == "13")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::NIGHTVISION);
			return;
		}
		if (userinput == "14")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::POSTERIZE);
			return;
		}
		if (userinput == "15")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::MOSAIC);
			return;
		}
		if (userinput == "16")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::DRAWING);
			return;
		}
		if (userinput == "17")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::NEON);
			return;
		}
		if (userinput == "18")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::ANAGLYPH);
			return;
		}
		if (userinput == "19")
		{
			if (Pro_Fix->PS_Filters_status != PS_FILTER::NONE)
			{
				Pro_Fix_Deallocate_space();
				Pro_Fix->PS_Filters_status = PS_FILTER::NONE;
				Pro_Fix_Restore_enabled(*Pro_Fix);
			}
			PS_Filters_Enable(PS_FILTER::VIGNETTE);
			return;
		}
	} while (true);
}