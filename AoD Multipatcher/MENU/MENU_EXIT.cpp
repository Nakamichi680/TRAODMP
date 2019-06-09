#include "stdafx.h"
#include "MISC/concol.h"


bool MENU_SAVE_EXIT()
{
	do
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n"
				"                 ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n"
				"                 บ                                                                                   บ\n"
				"                 บ" <<red<< "                    Are you sure you want to apply the changes?                    " <<aqua<< "บ\n"
				"                 บ                                                                                   บ\n"
				"                 บ                               (Y)es            (N)o                               บ\n"
				"                 บ                                                                                   บ\n"
				"                 บ                                                                                   บ\n"
				"                 บ                                                                                   บ\n"
				"                 บ" <<green<< "        N.B. Your old file will be renamed as \"OriginalFilename_BACKUP.EXE\"        " <<aqua<< "บ\n"
				"                 บ                                                                                   บ\n"
				"                 ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n\n\n\n\n\n\n\n\n"
				" Select an option and press Enter [" <<white<< "Y/N" <<aqua<< "]: " <<white;
		string userinput;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		for (unsigned int i = 0; i < userinput.length(); i++)       // Questo ciclo for converte le lettere minuscole in maiuscole
			userinput[i] = toupper(userinput[i]);
		if (userinput == "Y" || userinput == "YES")
			return true;								// Il programma salva le modifiche e termina
		if (userinput == "N" || userinput == "NO")
			return false;								// Ritorna al menu precedente
	} while (true);
}


bool MENU_DISCARD_EXIT()
{
	do
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n"
				"                 ษอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป\n"
				"                 บ                                                                                   บ\n"
				"                 บ" <<white<< "                   Are you sure you want to exit without saving?                   " <<aqua<< "บ\n"
				"                 บ                                                                                   บ\n"
				"                 บ                               (Y)es            (N)o                               บ\n"
				"                 บ                                                                                   บ\n"
				"                 ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n\n\n\n\n\n\n\n\n\n"
				" Select an option and press Enter [" <<white<< "Y/N" <<aqua<< "]: " <<white;
		string userinput;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		for (unsigned int i = 0; i < userinput.length(); i++)		// Questo ciclo for converte le lettere minuscole in maiuscole
			userinput[i] = toupper(userinput[i]);
		if (userinput == "Y" || userinput == "YES")
			return true;								// Il programma termina senza salvare
		if (userinput == "N" || userinput == "NO")
			return false;								// Ritorna al menu precedente
	} while (true);
}