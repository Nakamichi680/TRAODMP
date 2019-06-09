#include "stdafx.h"
#include "MISC/Misc_Functions.h"


bool Detect_Ger_blood_status()						// Restituisce vero se il sangue è attivato, falso se è attiva la censura
{
	size_t Position;

	//////////////////		fxTriggerBlood		TRAOD_P4, TRAOD_P3, TRAOD
	string fxTB_p452("\xA0\xC0\xDA\x84\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x01\x79\xFE\xFF\x59\xF3\x0F\x10\x15\xF4\x58\x95", 31);
	string fxTB_p449("\xA0\x80\xCA\x84\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x01\x79\xFE\xFF\x59\xF3\x0F\x10\x15\x94\x4E\x95", 31);
	string fxTB_p442("\xA0\x60\x47\x82\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x01\x79\xFE\xFF\x59\xF3\x0F\x10\x15\xF4\xB2\x92", 31);
	string fxTB_p439("\xA0\x20\xA4\x81\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x0D\x78\xFE\xFF\x59\xF3\x0F\x10\x15\x94\x0B\x92", 31);

	string fxTB_p352("\x80\x3D\x80\xC1\x83\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\xBD\x7A\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x94\x36", 33);
	string fxTB_p349("\x80\x3D\x40\xC1\x83\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\xBD\x7A\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x94\x3C", 33);
	string fxTB_p342("\x80\x3D\x20\x3E\x81\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\xBD\x7A\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\xD4", 32);
	string fxTB_p339("\x80\x3D\xA0\x9A\x80\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\xBD\x78\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x74", 32);

	string fxTB_52("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x80\x26\x8B\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\x9B", 42);
	string fxTB_49("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\xC0\x17\x8B\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\x8B", 42);
	string fxTB_42("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x40\x4B\x89\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\xFB", 42);
	string fxTB_39("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x40\xDF\x87\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xA0\xEB", 42);

	//////////////////		fxTriggerGreenBlood		TRAOD_P4, TRAOD_P3, TRAOD
	string fxTGB_p452("\xA0\xC0\xDA\x84\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x65\x74\xFE\xFF\x59\xF3\x0F\x10\x15\x38\x59\x95", 31);
	string fxTGB_p449("\xA0\x80\xCA\x84\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x65\x74\xFE\xFF\x59\xF3\x0F\x10\x15\xD8\x4E\x95", 31);
	string fxTGB_p442("\xA0\x60\x47\x82\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x65\x74\xFE\xFF\x59\xF3\x0F\x10\x15\x38\xB3\x92", 31);
	string fxTGB_p439("\xA0\x20\xA4\x81\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x71\x73\xFE\xFF\x59\xF3\x0F\x10\x15", 28);

	string fxTGB_p352("\x80\x3D\x80\xC1\x83\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\x25\x76\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\xD8\x36", 33);
	string fxTGB_p349("\x80\x3D\x40\xC1\x83\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\x25\x76\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\xD8\x3C", 33);
	string fxTGB_p342("\x80\x3D\x20\x3E\x81\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\x25\x76\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x18\xB1", 33);
	string fxTGB_p339("\x80\x3D\xA0\x9A\x80\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\x25\x74", 21);

	string fxTGB_52("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x80\x26\x8B\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\x9B", 42);
	string fxTGB_49("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\xC0\x17\x8B\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\x8B", 42);
	string fxTGB_42("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x40\x4B\x89\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\xFB", 42);
	string fxTGB_39("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x40\xDF\x87\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xA0\xEB", 42);

	//////////////////		fxTriggerBloodSplat		TRAOD_P4, TRAOD_P3, TRAOD
	string fxTBS_p452("\xA0\xC0\xDA\x84\0\x3C\x04\x0F\x84\xA7\x01\0\0\xF3\x0F\x10\x05\x70\x59\x95", 20);
	string fxTBS_p449("\xA0\x80\xCA\x84\0\x3C\x04\x0F\x84\xA7\x01\0\0\xF3\x0F\x10\x05\x10\x4F\x95", 20);
	string fxTBS_p442("\xA0\x60\x47\x82\0\x3C\x04\x0F\x84\xA7\x01\0\0\xF3\x0F\x10\x05\x70\xB3\x92", 20);
	string fxTBS_p439("\xA0\x20\xA4\x81\0\x3C\x04\x0F\x84\xA7\x01\0\0\xF3\x0F\x10\x05\x10\x0C\x92", 20);

	string fxTBS_p352("\x80\x3D\x80\xC1\x83\0\x04\x0F\x84\xA5\x01\0\0\xF3\x0F\x10\x05\x10\x37\x94", 20);
	string fxTBS_p349("\x80\x3D\x40\xC1\x83\0\x04\x0F\x84\xA5\x01\0\0\xF3\x0F\x10\x05\x10\x3D\x94", 20);
	string fxTBS_p342("\x80\x3D\x20\x3E\x81\0\x04\x0F\x84\xA5\x01\0\0\xF3\x0F\x10\x05\x50\xB1\x91", 20);
	string fxTBS_p339("\x80\x3D\xA0\x9A\x80\0\x04\x0F\x84\xA5\x01\0\0\xF3\x0F\x10\x05\xF0\x09\x91", 20);

	string fxTBS_52("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\xA0\x80\x26\x8B\0\x56\x3C\x04\x57\x75\x57\xD9\x45\x10\xD8\x0D\xD0\x9B", 35);
	string fxTBS_49("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\xA0\xC0\x17\x8B\0\x56\x3C\x04\x57\x75\x57\xD9\x45\x10\xD8\x0D\xD0\x8B", 35);
	string fxTBS_42("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\xA0\x40\x4B\x89\0\x56\x3C\x04\x57\x75\x57\xD9\x45\x10\xD8\x0D\xD0\xFB", 35);
	string fxTBS_39("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\xA0\x40\xDF\x87\0\x56\x3C\x04\x57\x75\x57\xD9\x45\x10\xD8\x0D\xA0\xEB", 35);

	//////////////////		fxInit		TRAOD_P4, TRAOD_P3, TRAOD
	string fxNT_p452("\xA3\x3C\x5B\x90\0\x74\x5D", 7);
	string fxNT_p449("\xA3\xFC\x4A\x90\0\x74\x5D", 7);
	string fxNT_p442("\xA3\xDC\xC7\x8D\0\x74\x5D", 7);
	string fxNT_p439("\xA3\x9C\x24\x8D\0\x74\x5D", 7);

	string fxNT_p352("\xA3\0\x42\x8F\0\x74\x5D", 7);
	string fxNT_p349("\xA3\xC0\x41\x8F\0\x74\x5D", 7);
	string fxNT_p342("\xA3\xA0\xBE\x8C\0\x74\x5D", 7);
	string fxNT_p339("\xA3\x20\x1B\x8C\0\x74\x5D", 7);

	string fxNT_52("\xB8\0\x30\0\x80\x75\x1D", 7);
	string fxNT_49 = fxNT_52;
	string fxNT_42 = fxNT_52;
	string fxNT_39 = fxNT_52;
	
	if (((Position = EXEorig.find(fxTB_p452)) != std::string::npos &&			// INIZIO TRAOD_P4
		 (Position = EXEorig.find(fxTGB_p452)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_p452)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_p452)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_p449)) != std::string::npos &&
		 (Position = EXEorig.find(fxTGB_p449)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_p449)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_p449)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_p442)) != std::string::npos &&
		 (Position = EXEorig.find(fxTGB_p442)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_p442)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_p442)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_p439)) != std::string::npos &&
		 (Position = EXEorig.find(fxTGB_p439)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_p439)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_p439)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_p352)) != std::string::npos &&			// INIZIO TRAOD_P3
		 (Position = EXEorig.find(fxTGB_p352)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_p352)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_p352)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_p349)) != std::string::npos &&
		 (Position = EXEorig.find(fxTGB_p349)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_p349)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_p349)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_p342)) != std::string::npos &&
		 (Position = EXEorig.find(fxTGB_p342)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_p342)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_p342)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_p339)) != std::string::npos &&
		 (Position = EXEorig.find(fxTGB_p339)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_p339)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_p339)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_52)) != std::string::npos &&				// INIZIO TRAOD
		 (Position = EXEorig.find(fxTGB_52)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_52)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_52)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_49)) != std::string::npos &&
		 (Position = EXEorig.find(fxTGB_49)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_49)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_49)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_42)) != std::string::npos &&
		 (Position = EXEorig.find(fxTGB_42)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_42)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_42)) != std::string::npos) ||
		((Position = EXEorig.find(fxTB_39)) != std::string::npos &&
		 (Position = EXEorig.find(fxTGB_39)) != std::string::npos &&
		 (Position = EXEorig.find(fxTBS_39)) != std::string::npos &&
		 (Position = EXEorig.find(fxNT_39)) != std::string::npos))
		return false;
	return true;
}


void Change_Ger_blood_status()
{
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////		STRINGHE ORIGINALI CON CENSURA ATTIVA		/////////////////////////////////////////////////////////////

	//////////////////		fxTriggerBlood		TRAOD_P4, TRAOD_P3, TRAOD
	string fxTB_p452("\xA0\xC0\xDA\x84\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x01\x79\xFE\xFF\x59\xF3\x0F\x10\x15\xF4\x58\x95", 31);
	string fxTB_p449("\xA0\x80\xCA\x84\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x01\x79\xFE\xFF\x59\xF3\x0F\x10\x15\x94\x4E\x95", 31);
	string fxTB_p442("\xA0\x60\x47\x82\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x01\x79\xFE\xFF\x59\xF3\x0F\x10\x15\xF4\xB2\x92", 31);
	string fxTB_p439("\xA0\x20\xA4\x81\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x0D\x78\xFE\xFF\x59\xF3\x0F\x10\x15\x94\x0B\x92", 31);

	string fxTB_p352("\x80\x3D\x80\xC1\x83\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\xBD\x7A\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x94\x36", 33);
	string fxTB_p349("\x80\x3D\x40\xC1\x83\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\xBD\x7A\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x94\x3C", 33);
	string fxTB_p342("\x80\x3D\x20\x3E\x81\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\xBD\x7A\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\xD4", 32);
	string fxTB_p339("\x80\x3D\xA0\x9A\x80\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\xBD\x78\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x74", 32);

	string fxTB_52("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x80\x26\x8B\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\x9B", 42);
	string fxTB_49("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\xC0\x17\x8B\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\x8B", 42);
	string fxTB_42("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x40\x4B\x89\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\xFB", 42);
	string fxTB_39("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x40\xDF\x87\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xA0\xEB", 42);

	//////////////////		fxTriggerGreenBlood		TRAOD_P4, TRAOD_P3, TRAOD
	string fxTGB_p452("\xA0\xC0\xDA\x84\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x65\x74\xFE\xFF\x59\xF3\x0F\x10\x15\x38\x59\x95", 31);
	string fxTGB_p449("\xA0\x80\xCA\x84\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x65\x74\xFE\xFF\x59\xF3\x0F\x10\x15\xD8\x4E\x95", 31);
	string fxTGB_p442("\xA0\x60\x47\x82\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x65\x74\xFE\xFF\x59\xF3\x0F\x10\x15\x38\xB3\x92", 31);
	string fxTGB_p439("\xA0\x20\xA4\x81\0\x3C\x04\x0F\x84\xF8\x03\0\0\x68\0\0\xB4\x43\xE8\x71\x73\xFE\xFF\x59\xF3\x0F\x10\x15", 28);

	string fxTGB_p352("\x80\x3D\x80\xC1\x83\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\x25\x76\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\xD8\x36", 33);
	string fxTGB_p349("\x80\x3D\x40\xC1\x83\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\x25\x76\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\xD8\x3C", 33);
	string fxTGB_p342("\x80\x3D\x20\x3E\x81\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\x25\x76\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x18\xB1", 33);
	string fxTGB_p339("\x80\x3D\xA0\x9A\x80\0\x04\x0F\x84\xF6\x03\0\0\x68\0\0\xB4\x43\xE8\x25\x74", 21);

	string fxTGB_52("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x80\x26\x8B\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\x9B", 42);
	string fxTGB_49("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\xC0\x17\x8B\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\x8B", 42);
	string fxTGB_42("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x40\x4B\x89\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xD0\xFB", 42);
	string fxTGB_39("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\xA0\x40\xDF\x87\0\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x3C\x04\x6A\x02\x75\x4D\xD8\x0D\xA0\xEB", 42);

	//////////////////		fxTriggerBloodSplat		TRAOD_P4, TRAOD_P3, TRAOD
	string fxTBS_p452("\xA0\xC0\xDA\x84\0\x3C\x04\x0F\x84\xA7\x01\0\0\xF3\x0F\x10\x05\x70\x59\x95", 20);
	string fxTBS_p449("\xA0\x80\xCA\x84\0\x3C\x04\x0F\x84\xA7\x01\0\0\xF3\x0F\x10\x05\x10\x4F\x95", 20);
	string fxTBS_p442("\xA0\x60\x47\x82\0\x3C\x04\x0F\x84\xA7\x01\0\0\xF3\x0F\x10\x05\x70\xB3\x92", 20);
	string fxTBS_p439("\xA0\x20\xA4\x81\0\x3C\x04\x0F\x84\xA7\x01\0\0\xF3\x0F\x10\x05\x10\x0C\x92", 20);

	string fxTBS_p352("\x80\x3D\x80\xC1\x83\0\x04\x0F\x84\xA5\x01\0\0\xF3\x0F\x10\x05\x10\x37\x94", 20);
	string fxTBS_p349("\x80\x3D\x40\xC1\x83\0\x04\x0F\x84\xA5\x01\0\0\xF3\x0F\x10\x05\x10\x3D\x94", 20);
	string fxTBS_p342("\x80\x3D\x20\x3E\x81\0\x04\x0F\x84\xA5\x01\0\0\xF3\x0F\x10\x05\x50\xB1\x91", 20);
	string fxTBS_p339("\x80\x3D\xA0\x9A\x80\0\x04\x0F\x84\xA5\x01\0\0\xF3\x0F\x10\x05\xF0\x09\x91", 20);

	string fxTBS_52("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\xA0\x80\x26\x8B\0\x56\x3C\x04\x57\x75\x57\xD9\x45\x10\xD8\x0D\xD0\x9B", 35);
	string fxTBS_49("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\xA0\xC0\x17\x8B\0\x56\x3C\x04\x57\x75\x57\xD9\x45\x10\xD8\x0D\xD0\x8B", 35);
	string fxTBS_42("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\xA0\x40\x4B\x89\0\x56\x3C\x04\x57\x75\x57\xD9\x45\x10\xD8\x0D\xD0\xFB", 35);
	string fxTBS_39("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\xA0\x40\xDF\x87\0\x56\x3C\x04\x57\x75\x57\xD9\x45\x10\xD8\x0D\xA0\xEB", 35);

	//////////////////		fxInit		TRAOD_P4, TRAOD_P3, TRAOD
	string fxNT_p452("\xA3\x3C\x5B\x90\0\x74\x5D", 7);
	string fxNT_p449("\xA3\xFC\x4A\x90\0\x74\x5D", 7);
	string fxNT_p442("\xA3\xDC\xC7\x8D\0\x74\x5D", 7);
	string fxNT_p439("\xA3\x9C\x24\x8D\0\x74\x5D", 7);

	string fxNT_p352("\xA3\0\x42\x8F\0\x74\x5D", 7);
	string fxNT_p349("\xA3\xC0\x41\x8F\0\x74\x5D", 7);
	string fxNT_p342("\xA3\xA0\xBE\x8C\0\x74\x5D", 7);
	string fxNT_p339("\xA3\x20\x1B\x8C\0\x74\x5D", 7);

	string fxNT_52("\xB8\0\x30\0\x80\x75\x1D", 7);
	string fxNT_49 = fxNT_52;
	string fxNT_42 = fxNT_52;
	string fxNT_39 = fxNT_52;

	///////////////////////////////////////////////////////////////////		FINE STRINGHE ORIGINALI		/////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////		STRINGHE MODIFICATE CON CENSURA DISATTIVATA		/////////////////////////////////////////////////////////////

	//////////////////		fxTriggerBlood		TRAOD_P4, TRAOD_P3, TRAOD
	string dis_fxTB_p452("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x01\x79\xFE\xFF\x59\xF3\x0F\x10\x15\xF4\x58\x95", 31);
	string dis_fxTB_p449("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x01\x79\xFE\xFF\x59\xF3\x0F\x10\x15\x94\x4E\x95", 31);
	string dis_fxTB_p442("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x01\x79\xFE\xFF\x59\xF3\x0F\x10\x15\xF4\xB2\x92", 31);
	string dis_fxTB_p439("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x0D\x78\xFE\xFF\x59\xF3\x0F\x10\x15\x94\x0B\x92", 31);

	string dis_fxTB_p352("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\xBD\x7A\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x94\x36", 33);
	string dis_fxTB_p349("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\xBD\x7A\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x94\x3C", 33);
	string dis_fxTB_p342("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\xBD\x7A\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\xD4", 32);
	string dis_fxTB_p339("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\xBD\x78\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x74", 32);

	string dis_fxTB_52("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\x90\x90\x90\x90\x90\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x90\x90\x6A\x02\xEB\x4D\xD8\x0D\xD0\x9B", 42);
	string dis_fxTB_49("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\x90\x90\x90\x90\x90\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x90\x90\x6A\x02\xEB\x4D\xD8\x0D\xD0\x8B", 42);
	string dis_fxTB_42("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\x90\x90\x90\x90\x90\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x90\x90\x6A\x02\xEB\x4D\xD8\x0D\xD0\xFB", 42);
	string dis_fxTB_39("\x90\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\x90\x90\x90\x90\x90\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x90\x90\x6A\x02\xEB\x4D\xD8\x0D\xA0\xEB", 42);

	//////////////////		fxTriggerGreenBlood		TRAOD_P4, TRAOD_P3, TRAOD
	string dis_fxTGB_p452("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x65\x74\xFE\xFF\x59\xF3\x0F\x10\x15\x38\x59\x95", 31);
	string dis_fxTGB_p449("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x65\x74\xFE\xFF\x59\xF3\x0F\x10\x15\xD8\x4E\x95", 31);
	string dis_fxTGB_p442("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x65\x74\xFE\xFF\x59\xF3\x0F\x10\x15\x38\xB3\x92", 31);
	string dis_fxTGB_p439("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x71\x73\xFE\xFF\x59\xF3\x0F\x10\x15", 28);

	string dis_fxTGB_p352("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x25\x76\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\xD8\x36", 33);
	string dis_fxTGB_p349("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x25\x76\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\xD8\x3C", 33);
	string dis_fxTGB_p342("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x25\x76\xFE\xFF\x59\x89\x34\x24\xF3\x0F\x10\x15\x18\xB1", 33);
	string dis_fxTGB_p339("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x68\0\0\xB4\x43\xE8\x25\x74", 21);

	string dis_fxTGB_52("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\x90\x90\x90\x90\x90\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x90\x90\x6A\x02\xEB\x4D\xD8\x0D\xD0\x9B", 42);
	string dis_fxTGB_49("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\x90\x90\x90\x90\x90\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x90\x90\x6A\x02\xEB\x4D\xD8\x0D\xD0\x8B", 42);
	string dis_fxTGB_42("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\x90\x90\x90\x90\x90\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x90\x90\x6A\x02\xEB\x4D\xD8\x0D\xD0\xFB", 42);
	string dis_fxTGB_39("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x18\x90\x90\x90\x90\x90\x56\xD9\x45\x10\x57\x68\0\0\x80\x3F\x90\x90\x6A\x02\xEB\x4D\xD8\x0D\xA0\xEB", 42);

	//////////////////		fxTriggerBloodSplat		TRAOD_P4, TRAOD_P3, TRAOD
	string dis_fxTBS_p452("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\xF3\x0F\x10\x05\x70\x59\x95", 20);
	string dis_fxTBS_p449("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\xF3\x0F\x10\x05\x10\x4F\x95", 20);
	string dis_fxTBS_p442("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\xF3\x0F\x10\x05\x70\xB3\x92", 20);
	string dis_fxTBS_p439("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\xF3\x0F\x10\x05\x10\x0C\x92", 20);

	string dis_fxTBS_p352("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\xF3\x0F\x10\x05\x10\x37\x94", 20);
	string dis_fxTBS_p349("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\xF3\x0F\x10\x05\x10\x3D\x94", 20);
	string dis_fxTBS_p342("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\xF3\x0F\x10\x05\x50\xB1\x91", 20);
	string dis_fxTBS_p339("\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\xF3\x0F\x10\x05\xF0\x09\x91", 20);

	string dis_fxTBS_52("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\x90\x90\x90\x90\x90\x56\x90\x90\x57\xEB\x57\xD9\x45\x10\xD8\x0D\xD0\x9B", 35);
	string dis_fxTBS_49("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\x90\x90\x90\x90\x90\x56\x90\x90\x57\xEB\x57\xD9\x45\x10\xD8\x0D\xD0\x8B", 35);
	string dis_fxTBS_42("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\x90\x90\x90\x90\x90\x56\x90\x90\x57\xEB\x57\xD9\x45\x10\xD8\x0D\xD0\xFB", 35);
	string dis_fxTBS_39("\xC3\x90\x90\x90\x90\x90\x90\x90\x55\x8B\xEC\x83\xE4\xF0\x83\xEC\x28\x90\x90\x90\x90\x90\x56\x90\x90\x57\xEB\x57\xD9\x45\x10\xD8\x0D\xA0\xEB", 35);

	//////////////////		fxInit		TRAOD_P4, TRAOD_P3, TRAOD
	string dis_fxNT_p452("\xA3\x3C\x5B\x90\0\x90\x90", 7);
	string dis_fxNT_p449("\xA3\xFC\x4A\x90\0\x90\x90", 7);
	string dis_fxNT_p442("\xA3\xDC\xC7\x8D\0\x90\x90", 7);
	string dis_fxNT_p439("\xA3\x9C\x24\x8D\0\x90\x90", 7);

	string dis_fxNT_p352("\xA3\0\x42\x8F\0\x90\x90", 7);
	string dis_fxNT_p349("\xA3\xC0\x41\x8F\0\x90\x90", 7);
	string dis_fxNT_p342("\xA3\xA0\xBE\x8C\0\x90\x90", 7);
	string dis_fxNT_p339("\xA3\x20\x1B\x8C\0\x90\x90", 7);

	string dis_fxNT_52("\xB8\0\x30\0\x80\xEB\x1D", 7);
	string dis_fxNT_49 = dis_fxNT_52;
	string dis_fxNT_42 = dis_fxNT_52;
	string dis_fxNT_39 = dis_fxNT_52;

	///////////////////////////////////////////////////////////////		FINE STRINGHE MODIFICATE	 ////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	size_t Position;
	bool Ger_blood_status = Detect_Ger_blood_status();
	if (Ger_blood_status)	// Se il file è modificato ed il sangue è attivo, bisogna cercare le stringhe dis e sostituirle con le originali
	{
		/////////////////////		fxTriggerBlood
		if ((Position = EXEorig.find(dis_fxTB_p452)) != std::string::npos)
			ChangeSTRINGValue(fxTB_p452, Position);
		if ((Position = EXEorig.find(dis_fxTB_p449)) != std::string::npos)
			ChangeSTRINGValue(fxTB_p449, Position);
		if ((Position = EXEorig.find(dis_fxTB_p442)) != std::string::npos)
			ChangeSTRINGValue(fxTB_p442, Position);
		if ((Position = EXEorig.find(dis_fxTB_p439)) != std::string::npos)
			ChangeSTRINGValue(fxTB_p439, Position);

		if ((Position = EXEorig.find(dis_fxTB_p352)) != std::string::npos)
			ChangeSTRINGValue(fxTB_p352, Position);
		if ((Position = EXEorig.find(dis_fxTB_p349)) != std::string::npos)
			ChangeSTRINGValue(fxTB_p349, Position);
		if ((Position = EXEorig.find(dis_fxTB_p342)) != std::string::npos)
			ChangeSTRINGValue(fxTB_p342, Position);
		if ((Position = EXEorig.find(dis_fxTB_p339)) != std::string::npos)
			ChangeSTRINGValue(fxTB_p339, Position);

		if ((Position = EXEorig.find(dis_fxTB_52)) != std::string::npos)
			ChangeSTRINGValue(fxTB_52, Position);
		if ((Position = EXEorig.find(dis_fxTB_49)) != std::string::npos)
			ChangeSTRINGValue(fxTB_49, Position);
		if ((Position = EXEorig.find(dis_fxTB_42)) != std::string::npos)
			ChangeSTRINGValue(fxTB_42, Position);
		if ((Position = EXEorig.find(dis_fxTB_39)) != std::string::npos)
			ChangeSTRINGValue(fxTB_39, Position);

		/////////////////////		fxTriggerGreenBlood
		if ((Position = EXEorig.find(dis_fxTGB_p452)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_p452, Position);
		if ((Position = EXEorig.find(dis_fxTGB_p449)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_p449, Position);
		if ((Position = EXEorig.find(dis_fxTGB_p442)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_p442, Position);
		if ((Position = EXEorig.find(dis_fxTGB_p439)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_p439, Position);

		if ((Position = EXEorig.find(dis_fxTGB_p352)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_p352, Position);
		if ((Position = EXEorig.find(dis_fxTGB_p349)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_p349, Position);
		if ((Position = EXEorig.find(dis_fxTGB_p342)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_p342, Position);
		if ((Position = EXEorig.find(dis_fxTGB_p339)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_p339, Position);

		if ((Position = EXEorig.find(dis_fxTGB_52)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_52, Position);
		if ((Position = EXEorig.find(dis_fxTGB_49)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_49, Position);
		if ((Position = EXEorig.find(dis_fxTGB_42)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_42, Position);
		if ((Position = EXEorig.find(dis_fxTGB_39)) != std::string::npos)
			ChangeSTRINGValue(fxTGB_39, Position);

		/////////////////////		fxTriggerBloodSplat
		if ((Position = EXEorig.find(dis_fxTBS_p452)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_p452, Position);
		if ((Position = EXEorig.find(dis_fxTBS_p449)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_p449, Position);
		if ((Position = EXEorig.find(dis_fxTBS_p442)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_p442, Position);
		if ((Position = EXEorig.find(dis_fxTBS_p439)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_p439, Position);

		if ((Position = EXEorig.find(dis_fxTBS_p352)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_p352, Position);
		if ((Position = EXEorig.find(dis_fxTBS_p349)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_p349, Position);
		if ((Position = EXEorig.find(dis_fxTBS_p342)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_p342, Position);
		if ((Position = EXEorig.find(dis_fxTBS_p339)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_p339, Position);

		if ((Position = EXEorig.find(dis_fxTBS_52)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_52, Position);
		if ((Position = EXEorig.find(dis_fxTBS_49)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_49, Position);
		if ((Position = EXEorig.find(dis_fxTBS_42)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_42, Position);
		if ((Position = EXEorig.find(dis_fxTBS_39)) != std::string::npos)
			ChangeSTRINGValue(fxTBS_39, Position);

		/////////////////////		fxInit
		if ((Position = EXEorig.find(dis_fxNT_p452)) != std::string::npos)
			ChangeSTRINGValue(fxNT_p452, Position);
		if ((Position = EXEorig.find(dis_fxNT_p449)) != std::string::npos)
			ChangeSTRINGValue(fxNT_p449, Position);
		if ((Position = EXEorig.find(dis_fxNT_p442)) != std::string::npos)
			ChangeSTRINGValue(fxNT_p442, Position);
		if ((Position = EXEorig.find(dis_fxNT_p439)) != std::string::npos)
			ChangeSTRINGValue(fxNT_p439, Position);

		if ((Position = EXEorig.find(dis_fxNT_p352)) != std::string::npos)
			ChangeSTRINGValue(fxNT_p352, Position);
		if ((Position = EXEorig.find(dis_fxNT_p349)) != std::string::npos)
			ChangeSTRINGValue(fxNT_p349, Position);
		if ((Position = EXEorig.find(dis_fxNT_p342)) != std::string::npos)
			ChangeSTRINGValue(fxNT_p342, Position);
		if ((Position = EXEorig.find(dis_fxNT_p339)) != std::string::npos)
			ChangeSTRINGValue(fxNT_p339, Position);

		if ((Position = EXEorig.find(dis_fxNT_52)) != std::string::npos)
			ChangeSTRINGValue(fxNT_52, Position);
		if ((Position = EXEorig.find(dis_fxNT_49)) != std::string::npos)
			ChangeSTRINGValue(fxNT_49, Position);
		if ((Position = EXEorig.find(dis_fxNT_42)) != std::string::npos)
			ChangeSTRINGValue(fxNT_42, Position);
		if ((Position = EXEorig.find(dis_fxNT_39)) != std::string::npos)
			ChangeSTRINGValue(fxNT_39, Position);
	}
	else					// Se il file è originale si devono cercare le stringhe originali e sostituirle con quelle dis
	{
		/////////////////////		fxTriggerBlood
		if ((Position = EXEorig.find(fxTB_p452)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_p452, Position);
		if ((Position = EXEorig.find(fxTB_p449)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_p449, Position);
		if ((Position = EXEorig.find(fxTB_p442)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_p442, Position);
		if ((Position = EXEorig.find(fxTB_p439)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_p439, Position);

		if ((Position = EXEorig.find(fxTB_p352)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_p352, Position);
		if ((Position = EXEorig.find(fxTB_p349)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_p349, Position);
		if ((Position = EXEorig.find(fxTB_p342)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_p342, Position);
		if ((Position = EXEorig.find(fxTB_p339)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_p339, Position);

		if ((Position = EXEorig.find(fxTB_52)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_52, Position);
		if ((Position = EXEorig.find(fxTB_49)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_49, Position);
		if ((Position = EXEorig.find(fxTB_42)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_42, Position);
		if ((Position = EXEorig.find(fxTB_39)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTB_39, Position);

		/////////////////////		fxTriggerGreenBlood
		if ((Position = EXEorig.find(fxTGB_p452)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_p452, Position);
		if ((Position = EXEorig.find(fxTGB_p449)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_p449, Position);
		if ((Position = EXEorig.find(fxTGB_p442)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_p442, Position);
		if ((Position = EXEorig.find(fxTGB_p439)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_p439, Position);

		if ((Position = EXEorig.find(fxTGB_p352)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_p352, Position);
		if ((Position = EXEorig.find(fxTGB_p349)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_p349, Position);
		if ((Position = EXEorig.find(fxTGB_p342)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_p342, Position);
		if ((Position = EXEorig.find(fxTGB_p339)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_p339, Position);

		if ((Position = EXEorig.find(fxTGB_52)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_52, Position);
		if ((Position = EXEorig.find(fxTGB_49)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_49, Position);
		if ((Position = EXEorig.find(fxTGB_42)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_42, Position);
		if ((Position = EXEorig.find(fxTGB_39)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTGB_39, Position);

		/////////////////////		fxTriggerBloodSplat
		if ((Position = EXEorig.find(fxTBS_p452)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_p452, Position);
		if ((Position = EXEorig.find(fxTBS_p449)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_p449, Position);
		if ((Position = EXEorig.find(fxTBS_p442)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_p442, Position);
		if ((Position = EXEorig.find(fxTBS_p439)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_p439, Position);

		if ((Position = EXEorig.find(fxTBS_p352)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_p352, Position);
		if ((Position = EXEorig.find(fxTBS_p349)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_p349, Position);
		if ((Position = EXEorig.find(fxTBS_p342)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_p342, Position);
		if ((Position = EXEorig.find(fxTBS_p339)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_p339, Position);

		if ((Position = EXEorig.find(fxTBS_52)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_52, Position);
		if ((Position = EXEorig.find(fxTBS_49)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_49, Position);
		if ((Position = EXEorig.find(fxTBS_42)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_42, Position);
		if ((Position = EXEorig.find(fxTBS_39)) != std::string::npos)
			ChangeSTRINGValue(dis_fxTBS_39, Position);

		/////////////////////		fxInit
		if ((Position = EXEorig.find(fxNT_p452)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_p452, Position);
		if ((Position = EXEorig.find(fxNT_p449)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_p449, Position);
		if ((Position = EXEorig.find(fxNT_p442)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_p442, Position);
		if ((Position = EXEorig.find(fxNT_p439)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_p439, Position);

		if ((Position = EXEorig.find(fxNT_p352)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_p352, Position);
		if ((Position = EXEorig.find(fxNT_p349)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_p349, Position);
		if ((Position = EXEorig.find(fxNT_p342)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_p342, Position);
		if ((Position = EXEorig.find(fxNT_p339)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_p339, Position);

		if ((Position = EXEorig.find(fxNT_52)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_52, Position);
		if ((Position = EXEorig.find(fxNT_49)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_49, Position);
		if ((Position = EXEorig.find(fxNT_42)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_42, Position);
		if ((Position = EXEorig.find(fxNT_39)) != std::string::npos)
			ChangeSTRINGValue(dis_fxNT_39, Position);
	}
}