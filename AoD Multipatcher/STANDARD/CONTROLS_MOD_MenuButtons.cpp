#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_MenuButtons_status()					// Restituisce vero se i tasti indietro, su e giù dei menu sono modificati
{
	size_t offset1, offset2, offset3;
	string orig1("\xA9\0\x40\x20\0", 5);			// _menuRing, movimento su/giù
	string orig2("\xA9\0\x10\x10\0", 5);			// _menuRing, movimento su/giù
	string orig3("\xA8\x10", 2);					// _menuProcess, tasto indietro
	
	switch(ver)
	{
	case(452):
		offset1 = 0x1898A5;
		offset2 = 0x1898B7;
		offset3 = 0x187B5B;
		break;
	case(449):
		offset1 = 0x18910D;
		offset2 = 0x18911F;
		offset3 = 0x1873C6;
		break;
	case(442):
		offset1 = 0x187305;
		offset2 = 0x187317;
		offset3 = 0x1855BE;
		break;
	case(439):
		offset1 = 0x185E25;
		offset2 = 0x185E37;
		offset3 = 0x1840D2;
		break;
	case(352):
		offset1 = 0x18328C;
		offset2 = 0x18329E;
		offset3 = 0x18154C;
		break;
	case(349):
		offset1 = 0x182B28;
		offset2 = 0x182B3A;
		offset3 = 0x180DEB;
		break;
	case(342):
		offset1 = 0x180E50;
		offset2 = 0x180E62;
		offset3 = 0x17F113;
		break;
	case(339):
		offset1 = 0x17FA7C;
		offset2 = 0x17FA8E;
		offset3 = 0x17DD33;
		break;
	case(52):
		offset1 = 0x15448E;
		offset2 = 0x1544D2;
		offset3 = 0x1521EE;
		break;
	case(49):
		offset1 = 0x153E8E;
		offset2 = 0x153ED2;
		offset3 = 0x151BDE;
		break;
	case(42):
		offset1 = 0x15268E;
		offset2 = 0x1526D2;
		offset3 = 0x1503DE;
		break;
	case(39):
		offset1 = 0x15221E;
		offset2 = 0x152262;
		offset3 = 0x14FF5E;
	}

	string temp1 = EXEorig.substr(offset1, 5);
	string temp2 = EXEorig.substr(offset2, 5);
	string temp3 = EXEorig.substr(offset3, 2);
	if (temp1 == orig1 && temp2 == orig2 && temp3 == orig3)
		return false;
	else
		return true;			// Se non viene trovata la stringa originale significa che il file è modificato
}


void Change_MenuButtons_status()					// Cambia i tasti indietro e su/giù nei menu
{
	string orig1("\xA9\0\x40\x20\0", 5);			// _menuRing, movimento su/giù
	string orig2("\xA9\0\x10\x10\0", 5);			// _menuRing, movimento su/giù
	string orig3("\xA8\x10", 2);					// _menuProcess, tasto indietro
	string mod1("\xA9\0\0\x20\0", 5);
	string mod2("\xA9\0\0\x10\0", 5);
	string mod3("\xA8\x20", 2);

	bool MenuButtons_status = Detect_MenuButtons_status();
	if (MenuButtons_status)				// Se i tasti sono modificati vanno ripristinati quelli originali
		switch (ver)
		{
		case (452):
			ChangeSTRINGValue(orig1, 0x1898A5);
			ChangeSTRINGValue(orig2, 0x1898B7);
			ChangeSTRINGValue(orig3, 0x187B5B);
			break;
		case (449):
			ChangeSTRINGValue(orig1, 0x18910D);
			ChangeSTRINGValue(orig2, 0x18911F);
			ChangeSTRINGValue(orig3, 0x1873C6);
			break;
		case (442):
			ChangeSTRINGValue(orig1, 0x187305);
			ChangeSTRINGValue(orig2, 0x187317);
			ChangeSTRINGValue(orig3, 0x1855BE);
			break;
		case (439):
			ChangeSTRINGValue(orig1, 0x185E25);
			ChangeSTRINGValue(orig2, 0x185E37);
			ChangeSTRINGValue(orig3, 0x1840D2);
			break;
		case (352):
			ChangeSTRINGValue(orig1, 0x18328C);
			ChangeSTRINGValue(orig2, 0x18329E);
			ChangeSTRINGValue(orig3, 0x18154C);
			break;
		case (349):
			ChangeSTRINGValue(orig1, 0x182B28);
			ChangeSTRINGValue(orig2, 0x182B3A);
			ChangeSTRINGValue(orig3, 0x180DEB);
			break;
		case (342):
			ChangeSTRINGValue(orig1, 0x180E50);
			ChangeSTRINGValue(orig2, 0x180E62);
			ChangeSTRINGValue(orig3, 0x17F113);
			break;
		case (339):
			ChangeSTRINGValue(orig1, 0x17FA7C);
			ChangeSTRINGValue(orig2, 0x17FA8E);
			ChangeSTRINGValue(orig3, 0x17DD33);
			break;
		case (52):
			ChangeSTRINGValue(orig1, 0x15448E);
			ChangeSTRINGValue(orig2, 0x1544D2);
			ChangeSTRINGValue(orig3, 0x1521EE);
			break;
		case (49):
			ChangeSTRINGValue(orig1, 0x153E8E);
			ChangeSTRINGValue(orig2, 0x153ED2);
			ChangeSTRINGValue(orig3, 0x151BDE);
			break;
		case (42):
			ChangeSTRINGValue(orig1, 0x15268E);
			ChangeSTRINGValue(orig2, 0x1526D2);
			ChangeSTRINGValue(orig3, 0x1503DE);
			break;
		case (39):
			ChangeSTRINGValue(orig1, 0x15221E);
			ChangeSTRINGValue(orig2, 0x152262);
			ChangeSTRINGValue(orig3, 0x14FF5E);
		}
	else									// Altrimenti se i tasti sono originali vanno modificati
		switch (ver)
		{
		case (452):
			ChangeSTRINGValue(mod1, 0x1898A5);
			ChangeSTRINGValue(mod2, 0x1898B7);
			ChangeSTRINGValue(mod3, 0x187B5B);
			break;
		case (449):
			ChangeSTRINGValue(mod1, 0x18910D);
			ChangeSTRINGValue(mod2, 0x18911F);
			ChangeSTRINGValue(mod3, 0x1873C6);
			break;
		case (442):
			ChangeSTRINGValue(mod1, 0x187305);
			ChangeSTRINGValue(mod2, 0x187317);
			ChangeSTRINGValue(mod3, 0x1855BE);
			break;
		case (439):
			ChangeSTRINGValue(mod1, 0x185E25);
			ChangeSTRINGValue(mod2, 0x185E37);
			ChangeSTRINGValue(mod3, 0x1840D2);
			break;
		case (352):
			ChangeSTRINGValue(mod1, 0x18328C);
			ChangeSTRINGValue(mod2, 0x18329E);
			ChangeSTRINGValue(mod3, 0x18154C);
			break;
		case (349):
			ChangeSTRINGValue(mod1, 0x182B28);
			ChangeSTRINGValue(mod2, 0x182B3A);
			ChangeSTRINGValue(mod3, 0x180DEB);
			break;
		case (342):
			ChangeSTRINGValue(mod1, 0x180E50);
			ChangeSTRINGValue(mod2, 0x180E62);
			ChangeSTRINGValue(mod3, 0x17F113);
			break;
		case (339):
			ChangeSTRINGValue(mod1, 0x17FA7C);
			ChangeSTRINGValue(mod2, 0x17FA8E);
			ChangeSTRINGValue(mod3, 0x17DD33);
			break;
		case (52):
			ChangeSTRINGValue(mod1, 0x15448E);
			ChangeSTRINGValue(mod2, 0x1544D2);
			ChangeSTRINGValue(mod3, 0x1521EE);
			break;
		case (49):
			ChangeSTRINGValue(mod1, 0x153E8E);
			ChangeSTRINGValue(mod2, 0x153ED2);
			ChangeSTRINGValue(mod3, 0x151BDE);
			break;
		case (42):
			ChangeSTRINGValue(mod1, 0x15268E);
			ChangeSTRINGValue(mod2, 0x1526D2);
			ChangeSTRINGValue(mod3, 0x1503DE);
			break;
		case (39):
			ChangeSTRINGValue(mod1, 0x15221E);
			ChangeSTRINGValue(mod2, 0x152262);
			ChangeSTRINGValue(mod3, 0x14FF5E);
		}
}