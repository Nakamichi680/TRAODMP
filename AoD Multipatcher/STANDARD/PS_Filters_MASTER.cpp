#include "stdafx.h"
#include "MISC/concol.h"
#include "PRO_SHARED/Pro_FIX.h"


void Change_PS_Filters_MASTER_status(Pro_Fix_Status *Pro_Fix)
{
	do
	{
		system("cls");
		cout << " �������������������������������������������������������������������������������������������������������������������ͻ\n"
				" �                                                                                                                   �\n"
				" �" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "�\n"
				" �" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "�\n"
				" �                                                                                                                   �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<white<< "                                                      FILTERS                                                      " <<aqua<< "�\n"
				" �������������������������������������������������������������������������������������������������������������������Ķ\n"
				" �                                                                                                                   �\n"
				" �   Pixel shader 2.0 effects for AoD.                                                                               �\n"
				" �                                                                                                                   �\n"
				" �   Choose one of the following options:                                                                            �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �         1 )  DISABLED                                                                                             �\n"
				" �         2 )  SEPIA                                                                                                �\n"
				" �         3 )  EMBOSS                                                                                               �\n"
				" �         4 )  SHARPENING                                                                                           �\n"
				" �         5 )  DISTORT                                                                                              �\n"
				" �         6 )  NEGATIVE                                                                                             �\n"
				" �         7 )  GRAYSCALE                                                                                            �\n"
				" �         8 )  BLACK&WHITE                                                                                          �\n"
				" �         9 )  BLACK&WHITE INVERSE                                                                                  �\n"
				" �         10)  RED                                                                                                  �\n"
				" �         11)  GREEN                                                                                                �\n"
				" �         12)  BLUE                                                                                                 �\n"
				" �         13)  NIGHT VISION                                                                                         �\n"
				" �         14)  POSTERIZE                                                                                            �\n"
				" �         15)  MOSAIC                                                                                               �\n"
				" �         16)  DRAWING                                                                                              �\n"
				" �         17)  NEON                                                                                                 �\n"
				" �         18)  ANAGLYPH                                                                                             �\n"
				" �         19)  VIGNETTE                                                                                             �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �                                                                                                                   �\n"
				" �������������������������������������������������������������������������������������������������������������������͹\n"
				" �" <<pink<< "   Current status: ";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::NONE)
			cout << "Disabled                                                                                        " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::SEPIA)
			cout << "Enabled        Preset: Sepia                                                                    " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::EMBOSS)
			cout << "Enabled        Preset: Emboss                                                                   " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::SHARPENING)
			cout << "Enabled        Preset: Sharpening                                                               " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::DISTORT)
			cout << "Enabled        Preset: Distort                                                                  " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::NEGATIVE)
			cout << "Enabled        Preset: Negative                                                                 " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::GRAYSCALE)
			cout << "Enabled        Preset: Grayscale                                                                " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::BW)
			cout << "Enabled        Preset: Black&White                                                              " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::BWINVERSE)
			cout << "Enabled        Preset: Black&White Inverse                                                      " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::RED)
			cout << "Enabled        Preset: Red                                                                      " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::GREEN)
			cout << "Enabled        Preset: Green                                                                    " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::BLUE)
			cout << "Enabled        Preset: Blue                                                                     " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::NIGHTVISION)
			cout << "Enabled        Preset: Night vision                                                             " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::POSTERIZE)
			cout << "Enabled        Preset: Posterize                                                                " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::MOSAIC)
			cout << "Enabled        Preset: Mosaic                                                                   " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::DRAWING)
			cout << "Enabled        Preset: Drawing                                                                  " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::NEON)
			cout << "Enabled        Preset: Neon                                                                     " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::ANAGLYPH)
			cout << "Enabled        Preset: Anaglyph                                                                 " <<aqua<< "�\n";
		if (Pro_Fix->PS_Filters_status == PS_FILTER::VIGNETTE)
			cout << "Enabled        Preset: Vignette                                                                 " <<aqua<< "�\n";
		cout << " �������������������������������������������������������������������������������������������������������������������ͼ\n"
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