#include "stdafx.h"
#include "MISC/concol.h"


bool MENU_ACCESS_ERROR()
{
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n"
			"                ���������������������������������������������������������������������������������������ͻ\n"
			"                �                                                                                       �\n"
			"                �                                         " << red << "ERROR" << aqua << "                                         �\n"
			"                �                                                                                       �\n"
			"                �   " << white << "Could not save because the file is already in use. Close the game and try again." << aqua << "    �\n"
			"                �                                                                                       �\n"
			"                �                                                                                       �\n"
			"                ���������������������������������������������������������������������������������������ͼ\n\n\n\n\n\n\n\n\n\n"
			" Press any key to retry or ESC to exit without saving. ";
	int user_input;
	user_input = getch();
	if (user_input == 27)
		return false;
	return true;
}