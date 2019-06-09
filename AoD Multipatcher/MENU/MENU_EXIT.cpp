#include "stdafx.h"
#include "MISC/concol.h"


bool MENU_SAVE_EXIT()
{
	do
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n"
				"                 �����������������������������������������������������������������������������������ͻ\n"
				"                 �                                                                                   �\n"
				"                 �" <<red<< "                    Are you sure you want to apply the changes?                    " <<aqua<< "�\n"
				"                 �                                                                                   �\n"
				"                 �                               (Y)es            (N)o                               �\n"
				"                 �                                                                                   �\n"
				"                 �                                                                                   �\n"
				"                 �                                                                                   �\n"
				"                 �" <<green<< "        N.B. Your old file will be renamed as \"OriginalFilename_BACKUP.EXE\"        " <<aqua<< "�\n"
				"                 �                                                                                   �\n"
				"                 �����������������������������������������������������������������������������������ͼ\n\n\n\n\n\n\n\n\n"
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
				"                 �����������������������������������������������������������������������������������ͻ\n"
				"                 �                                                                                   �\n"
				"                 �" <<white<< "                   Are you sure you want to exit without saving?                   " <<aqua<< "�\n"
				"                 �                                                                                   �\n"
				"                 �                               (Y)es            (N)o                               �\n"
				"                 �                                                                                   �\n"
				"                 �����������������������������������������������������������������������������������ͼ\n\n\n\n\n\n\n\n\n\n"
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