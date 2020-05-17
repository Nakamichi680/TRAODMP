#include "stdafx.h"
#include "MISC/concol.h"
#include "MISC/Misc_Functions.h"
#include "MENU/MENUS.h"
string EXEorig;
int ver;


int main(int argc, char **argv)
{
	CONSOLE_FONT_INFOEX cfi;					// Struttura per la gestione della console di Windows
	cfi.cbSize = sizeof cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.X = 8;
	cfi.dwFontSize.Y = 14;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Lucida Console");	// Seleziona il carattere lucida console (in questo momento non è ancora impostato!!!)
	TCHAR OldTitle[MAX_PATH];
	GetConsoleTitle(OldTitle, MAX_PATH);		// Legge il nome attuale dalla barra della console. Serve per ripristinarlo quando il programma termina
	LPCWSTR NewTitle = L"Tomb Raider - The Angel of Darkness EXE Multi-Patcher  (by Nakamichi680)";
	SetConsoleTitle(NewTitle);					// Imposta il nome del programma nella barra della console di Windows

	if (argv[1] != NULL)                        // Controlla se il nome del file è stato inserito
	{
		char EXEname[MAX];
		strcpy(EXEname, argv[1]);
		for (unsigned int i = 0; i < strlen(EXEname); i++)			// Questo ciclo for converte le lettere minuscole in maiuscole
			EXEname[i] = toupper(EXEname[i]);
		if (EXEname[strlen(EXEname)-4] != '.' || EXEname[strlen(EXEname)-3] != 'E' || EXEname[strlen(EXEname)-2] != 'X' || EXEname[strlen(EXEname)-1] != 'E')
			strcat(EXEname, ".EXE");						// Aggiunge l'estensione se manca

		string Short_name(Remove_path(EXEname));	// Rimuove il percorso del file se necessario e salva il nome più corto in una stringa nuova
		string Only_name = Short_name;				// Stringa contenente il nome del file completo
		Short_name = Resize_string(Short_name, 32); // Accorcia il nome del file se troppo lungo per essere mostrato a schermo
		ifstream input(EXEname, std::ios::binary);

		if (input.is_open())
		{
			input.seekg(0, input.end);
			unsigned int filesize = input.tellg();					// Calcolo dimensione file EXE
			input.seekg(0, input.beg);
			char* buffer = new char[filesize];			// Buffer di lettura temporaneo del file EXE
			input.read(buffer, filesize);				// Lettura file EXE
			EXEorig.assign(buffer, filesize);			// Copia il buffer all'interno della stringa "EXEorig"
			input.close();								// Chiude il file di input

			/////////////////////////// A QUESTO PUNTO LA STRINGA "EXEorig" CONTIENE IL FILE EXE ORIGINALE ED E' PRONTA PER ESSERE LETTA ED ANALIZZATA

			if (!IsValidEXE())					// Verifica della validità del file EXE
			{
				system("cls");				//////////////////////////////////////////////// Se il file aperto non è un EXE di TRAOD
				cout << "TOMB RAIDER - THE ANGEL OF DARKNESS EXE MULTI-PATCHER (by Nakamichi680)\n\n"
						"For any questions, feel free to contact me on:\n"
						"http://www.aspidetr.com/forum\n"
						"or\n"
						"http://www.tombraiderforums.com\n\n\n\n"
						"ERROR: " << Only_name << " is not a valid TR AoD executable.\n\n\n";
				system("pause");
				SetConsoleTitle(OldTitle);			// Ripristina il vecchio nome della barra della console
				return 0;
			}

			HWND hConsoleWnd = GetConsoleWindow();
			HMONITOR hMonitor = MonitorFromWindow(hConsoleWnd, MONITOR_DEFAULTTONEAREST);
			if (hMonitor) 
			{
				MONITORINFO info{sizeof(info)};
				if (GetMonitorInfo(hMonitor, &info))
				{
					int width = 956;
					int height = 872;
					int x = (info.rcWork.left + info.rcWork.right) / 2 - width / 2;
					int y = (info.rcWork.top + info.rcWork.bottom) / 2 - height / 2;
					if (x < 0)	x = 0;
					if (y < 0)	y = 0;
					SetWindowPos(hConsoleWnd, nullptr, x, y, width, height, SWP_NOZORDER | SWP_NOOWNERZORDER);		// Centra la finestra nello schermo
				}
			}
			SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);		// Imposta dimensione caratteri e font
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x1B);				// Imposta il colore di testo e sfondo
			system("chcp 437");															// Imposta il codepage americano
			system("mode 119, 60");														// Imposta la dimensione della finestra
			concolinit();																// Inizializza il gestore dei colori testuali
			int Version = Detect_version();
			ver = Detect_version_advanced();
			bool Save_exit = false;		// Finchè è falso, il programma rimane nel menu principale. Per terminare il programma deve diventare vero

			int current_page = 1;
			int previous_page;
			int old_standard_page = 1;
			int old_advanced_page = 50;
			bool exit = false;
			do
			{
				if (current_page != 100 && current_page != 101)
					previous_page = current_page;

				switch (current_page)
				{
				case (1):
					old_standard_page = current_page;
					current_page = MENU_STANDARD1(Version, Short_name);
					if (current_page == 50)
						current_page = old_advanced_page;
					break;
				case (2):
					old_standard_page = current_page;
					current_page = MENU_STANDARD2(Version, Short_name);
					if (current_page == 50)
						current_page = old_advanced_page;
					break;
				case (3):
					old_standard_page = current_page;
					current_page = MENU_STANDARD3(Version, Short_name);
					if (current_page == 50)
						current_page = old_advanced_page;
					break;
				case (4):
					old_standard_page = current_page;
					current_page = MENU_STANDARD4(Version, Short_name);
					if (current_page == 50)
						current_page = old_advanced_page;
					break;
				case (5):
					old_standard_page = current_page;
					current_page = MENU_STANDARD5(Version, Short_name);
					if (current_page == 50)
						current_page = old_advanced_page;
					break;
				case (50):
					old_advanced_page = current_page;
					current_page = MENU_ADVANCED1(Version, Short_name);
					if (current_page == 1)
						current_page = old_standard_page;
					break;
				case (51):
					old_advanced_page = current_page;
					current_page = MENU_ADVANCED2(Version, Short_name);
					if (current_page == 1)
						current_page = old_standard_page;
					break;
				case (666):
					current_page = MENU_TEST(Version, Short_name);
					break;
				case (70):
					current_page = MENU_VARIABLES(Version, Short_name);
					break;
				case (100):
					exit = MENU_SAVE_EXIT();
					current_page = previous_page;
					break;
				case (101):
					exit = MENU_DISCARD_EXIT();
					current_page = previous_page;
					if (exit)
					{
						delete[] buffer;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);
						SetConsoleTitle(OldTitle);			// Ripristina il vecchio nome della barra della console
						system("cls");
						return 0;							// Il programma termina
					}
				}
			} while (!exit);

			fstream out;
			exit = false;
			do												// Questo loop si ripete finchè il file di destinazione non è correttamente aperto
			{
				out.open(EXEname, fstream::in | fstream::out | fstream::binary | fstream::trunc);
				if (out.is_open())
					exit = true;
				else
					if(!MENU_ACCESS_ERROR())				// Se l'utente decide di uscire senza salvare
					{
						delete[] buffer;
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);		// Ripristina i colori originali della console
						SetConsoleTitle(OldTitle);											// Ripristina il vecchio nome della barra della console
						system("cls");
						return 0;							// Il programma termina
					}
			} while (!exit);
			
			//////////////////  Crea un file di backup
			char backupname[MAX];
			memset(&backupname[0], 0, sizeof(backupname));			// Cancella il contenuto di backupname
			strncat(backupname, EXEname, strlen(EXEname) - 4);		// Aggiunge il nome del file (incluso il percorso, se presente) togliendo ".EXE"
			strcat(backupname, "_BACKUP.EXE");						// Aggiunge "_BACKUP.EXE"
			ofstream backup;
			backup.open(backupname, ofstream::binary);				// Crea il nuovo file di backup
			backup.write(buffer, filesize);							// Copia il buffer (scritto all'inizio del programma) dentro il file di backup
			delete[] buffer;
			backup.close();
			////////////////////////////////////////////

			//////////////////  Crea il file definitivo
			out << EXEorig;
			out.close();
			////////////////////////////////////////////
		
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x07);		// Ripristina i colori originali della console
			SetConsoleTitle(OldTitle);											// Ripristina il vecchio nome della barra della console
			system("cls");
			return 0;
		}
		else
		{
			system("cls");		//////////////////////////////////////////////// Se il file è inesistente
			cout << "TOMB RAIDER - THE ANGEL OF DARKNESS EXE MULTI-PATCHER (by Nakamichi680)\n\n"
					"For any questions, feel free to contact me on:\n"
					"http://www.aspidetr.com/forum\n"
					"or\n"
					"http://www.tombraiderforums.com\n\n\n\n"
					"ERROR: " << Only_name << " not found.\n\n\n";
			system("pause");
			SetConsoleTitle(OldTitle);			// Ripristina il vecchio nome della barra della console
			return 0;
		}
	}
	system("cls");				//////////////////////////////////////////////// Se il nome del file non è inserito
	cout << "TOMB RAIDER - THE ANGEL OF DARKNESS EXE MULTI-PATCHER (by Nakamichi680)\n\n"
			"For any questions, feel free to contact me on:\n"
			"http://www.aspidetr.com/forum\n"
			"or\n"
			"http://www.tombraiderforums.com\n\n\n\n"
			"USAGE\n"
			"- Command Prompt:\n"
			"     SYNTAX:   TRAODMP [filename]\n\n"
			"- File Explorer:\n"
			"     Drag and drop the game executable into TRAODMP.EXE\n\n\n";
	system("pause");
	SetConsoleTitle(OldTitle);			// Ripristina il vecchio nome della barra della console
	return 0;
}