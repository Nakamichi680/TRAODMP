#include "stdafx.h"
#include "MISC/concol.h"


bool IsValidEXE()
{
	size_t Position;
	string check1 = "LARA";
	string check2 = "OBSCURA";
	string check3 = "PRAGUE";
	string check4 = "CHASE";
	string check5 = "KURTIS";
	string check6 = "FRONTEND";
	string check7 = "Darkness";
	string check8 = "Design";
	string check9 = "CheckBoxSphCollision";
	string check10 = "Cine_Camera.CBH";
	string check11 = "RemoveInventory";		check11.append("Item");
	if ((Position = EXEorig.find(check1)) != std::string::npos && (Position = EXEorig.find(check2)) != std::string::npos && (Position = EXEorig.find(check3)) != std::string::npos &&
		(Position = EXEorig.find(check4)) != std::string::npos && (Position = EXEorig.find(check5)) != std::string::npos && (Position = EXEorig.find(check6)) != std::string::npos &&
		(Position = EXEorig.find(check7)) != std::string::npos && (Position = EXEorig.find(check8)) != std::string::npos && (Position = EXEorig.find(check9)) != std::string::npos &&
		(Position = EXEorig.find(check10)) != std::string::npos && (Position = EXEorig.find(check11)) != std::string::npos)
		return true;
	else
		return false;
}


string Remove_path(char EXEname[MAX])					// Questa funzione prende in input una stringa di un percorso e rimuove tutto lasciando solo il nome del file
{
	string in(EXEname), out(EXEname);
	size_t Backslash_pos;
	if ((Backslash_pos = in.find("\\")) != std::string::npos)   // Cerca nella stringa il simbolo "\"
	{
		Backslash_pos = in.find_last_of("\\");                  // Identifica la posizione dell'ultimo "\"
		out = in.substr(Backslash_pos+1);                       // Copia dal punto Backslash_pos in poi
	}
	return out;
}


string Resize_string(string name, unsigned int length)	// Questa funzione prende in input una stringa e la sua lunghezza massima e la accorcia mettendo "..." alla fine
{
	if (name.length() > length)
	{
		name.resize(length-3);
		name.append("...");
	}
	return name;
}


void Center_string(string str, unsigned int length)		// Questa funzione prende in ingresso una stringa ed una larghezza e centra la scritta sullo schermo
{
	unsigned int len = str.length();
	int pos = (int)((length-len)/2);
	for(int counter=0; counter<pos; counter++)
		cout<<" ";									// Aggiunge gli spazi prima della scritta
	cout << setw(length-pos) << std::left << str;	// Scrive la stringa ed aggiunge gli spazi successivi
}


string Center_string2(string str, unsigned int length)	// Questa funzione prende in ingresso una stringa ed una larghezza e ritorna una stringa con la scritta centrata
{
	unsigned int len = str.length();
	if (len > length)
	{
		cout << endl << red << "ERROR: can't fit " << str << " in " << length << " columns.\n";
		system("pause");
		return str;
	}
	int pos = (int)((length-len)/2);
	stringstream out;
	for(int counter=0; counter<pos; counter++)
		out << " ";									// Aggiunge gli spazi prima della scritta
	out << setw(length-pos) << std::left << str;	// Scrive la stringa ed aggiunge gli spazi successivi
	return out.str();
}


void Ask_Color_value(string Colour, int *Target_colour, bool Cap127 = false, bool EnableDefault = false)	// Questa funzione chiede di inserire un valore per un colore e memorizza l'input
{
	int num;
	bool valid[4];				// Posizione 0: prima cifra, posizione 1: seconda cifra, posizione 2: terza cifra, posizione 4: intero numero (0-255)
	string userinput;
	valid[3] = false;
	while (!valid[3])
	{
		valid[0] = true;    valid[1] = true;    valid[2] = true;	// Da per scontato che le prime tre cifre siano numeri
		int max = 255;
		if(Cap127)
			max = 127;
		cout << " Insert a number between " <<white<< "0" <<aqua<< " and " <<white<< max <<aqua<< " for " << Colour << " channel ";
		if (EnableDefault)
			cout << "or press " <<white<< "D" <<aqua<< " to restore default ";
		cout << "[" <<white<< "0-" << max;
		if (EnableDefault)
			cout << "/D";
		cout <<aqua<< "]: " <<white;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		transform(userinput.begin(), userinput.end(), userinput.begin(), toupper);
		if (userinput == "D" && EnableDefault)
			return;
		if (userinput.length() <= 3)								// Verifica che l'input non sia più lungo di 3 caratteri
		{
			for (unsigned int counter = 0; counter < userinput.length(); counter++)	// Questo ciclo controlla che ogni cifra sia effettivamente un numero e non ci siano lettere
				if(!isdigit(userinput[counter]))
					valid[counter] = false;
			if (valid[0] && valid[1] && valid[2])					// Se tutte le tre cifre sono numeri allora userinput viene memorizzato in num
			{
				num = stoi(userinput);
				if (Cap127)
				{
					if (num>=0 && num <=127)						// Controlla che il numero sia nel range 0-127
					{
						*Target_colour = num;						// Esporta il numero
						valid[3] = true;							// Serve per uscire dal loop while
					}
				}
				else
				{
					if (num>=0 && num <=255)						// Controlla che il numero sia nel range 0-255
					{
						*Target_colour = num;						// Esporta il numero
						valid[3] = true;							// Serve per uscire dal loop while
					}
				}
			}
		}
	}
}


void Ask_value(string name, double min, double max, float *value, bool EnableDefault = false)	// Questa funzione chiede di inserire un valore e memorizza l'input
{
	bool loop = true;
	while (loop)
	{
		string userinput;
		bool valid = true;
		cout << " Insert a number between " <<white<< min <<aqua<< " and " <<white<< max <<aqua<< name;
		if (EnableDefault)
			cout << " or press " <<white<< "D" <<aqua<< " to restore default [" <<white<< "VALUE/D" <<aqua<< "]: " <<white;
		else
			cout << " [" <<white<< "VALUE" <<aqua<< "]: " << white;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		transform(userinput.begin(), userinput.end(), userinput.begin(), toupper);
		if (userinput == "D" && EnableDefault)
			return;
		for (unsigned int counter = 0; counter < userinput.length(); counter++)		// Questo ciclo controlla che ogni cifra sia effettivamente un numero e non ci siano lettere
			if (!isdigit(userinput[counter]) && !(counter == 0 && userinput[0] == '-' && userinput.length() > 1) && !(userinput[counter] == '.' && userinput.length() > 1))
			{
				valid = false;
				counter = userinput.length();
			}
		unsigned int dotcount = 0;
		for (unsigned int counter = 0; counter < userinput.length(); counter++)
			if (userinput[counter] == '.')
				dotcount++;
		if (dotcount > 1)
			valid = false;
		if (valid)
		{
			double temp = stod(userinput);
			if (temp >= min && temp <= max)
			{
				*value = (float)temp;
				loop = false;
			}
		}
	}
}


void ChangeWORDValue(unsigned short Value, size_t Offset)
{
	string Value_string = "fi";
	memcpy(&Value_string, &Value, 2);
	string temp = EXEorig.substr(0, Offset);
	temp += Value_string;
	temp += EXEorig.substr(Offset + 2, string::npos);
	EXEorig = temp;
}


void ChangeDWORDValue(unsigned int Value, size_t Offset)
{
	string Value_string = "fill";
	memcpy(&Value_string, &Value, 4);
	string temp = EXEorig.substr(0, Offset);
	temp += Value_string;
	temp += EXEorig.substr(Offset + 4, string::npos);
	EXEorig = temp;
}


void ChangeQWORDValue(unsigned long long Value, size_t Offset)
{
	string Value_string = "fillfill";
	memcpy(&Value_string, &Value, 8);
	string temp = EXEorig.substr(0, Offset);
	temp += Value_string;
	temp += EXEorig.substr(Offset + 8, string::npos);
	EXEorig = temp;
}


void ChangeSTRINGValue(string Value, size_t Offset)
{
	string temp = EXEorig.substr(0, Offset);
	temp += Value;
	temp += EXEorig.substr(Offset + Value.size(), string::npos);
	EXEorig = temp;
}