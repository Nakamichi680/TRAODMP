#include "stdafx.h"
#include "PRO_SHARED/Pro_FIX.h"


void Pro_Fix_Test_Allocate()
{
	string Title = "###########################Test_space##########################";
	system("cls");
	cout << "Bytes to be allocated? MIN 16, MAX 1.048.576 (1 MB)   : ";
	unsigned int size;
	cin >> size;
	if (size < 16)
		size = 16;
	if (size > 1048576)
		size = 1048576;
	cout << "\nAllocating " << size << " bytes...  Look for \"Test_space\" inside the EXE.\n\nPlease wait...";
	Pro_Fix_Class exe = Pro_Fix_Allocate_space(size, Title);
	Sleep(3500);
}