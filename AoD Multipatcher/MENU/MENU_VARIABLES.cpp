#include "stdafx.h"
#include "MISC/concol.h"
//#include "chrono"
#include "ADVANCED/Advanced_FIX.h"
#include "PRO_SHARED/Pro_FIX.h"
#include "MISC/Misc_Functions.h"


int MENU_VARIABLES(int &Version, string &Short_name)
{
	do
	{
		//chrono::steady_clock::time_point begin = chrono::steady_clock::now();
		vector <int> gcHC(4), gcDC(4), invBg(4);
		string value1 = gAnimPlayFPS_read();
		string value2 = playTriggerDamageEffectSize_read();
		string value3 = g_physics_G_read();
		string value4 = gcamMaximumCameraDistance_read();
		string value5 = gCamera_CornerShoot_ViewDistance_read();
		string value6 = gCamera_LookAroundThetaMax_read();
		string value7 = gCamera_LookAroundThetaMin_read();
		string value8 = gCamera_LookAroundRhoMax_read();
		string value9 = gCamera_LookAroundRhoMin_read();
		gconHealthColour_read(&gcHC[0], &gcHC[1], &gcHC[2], &gcHC[3]);
		gconDamageColour_read(&gcDC[0], &gcDC[1], &gcDC[2], &gcDC[3]);
		invBgRGB_read(&invBg[0], &invBg[1], &invBg[2], &invBg[3]);
		string value13 = crawl_targetDistance_read();
		string value14 = stair_targetDistance_read();
		string value15 = demo_video_timeout_read();
		string value16 = FOG_SetPlane_Distance_read();
		string value17 = fxUpdateWaterBuffer_Wave_Height_read();
		string value18 = dbgMinCameraDistance_read();
		string value19 = dbgMaxCameraDistance_read();
		string value20 = gameover_timeout_read();
		string value21 = swim_targetDistance_read();

		setbackcolor(black);
		system("cls");
		cout << " ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n"
				" º                                                                                                                   º\n"
				" º" <<yellow<< "                               Tomb Raider - The Angel of Darkness EXE Multi-Patcher                               " <<aqua<< "º\n"
				" º" <<yellow<< "                                                  by Nakamichi680                                                  " <<aqua<< "º\n"
				" º                                                                                                                   º\n"
				" ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹\n"
				" º" <<white<< "                                                  GLOBAL VARIABLES                                                 " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º                                                                                                                   º\n"
				" º  1.  " <<green<< "gconHealthColour" <<aqua<< ": health bar colour ............................................. [" <<red<< "R=" << left << setw(3) << gcHC[0]
				<<green<< " G=" << setw(3) << gcHC[1] <<blue<< " B=" << setw(3) << gcHC[2] <<dark_white<< " A=" << setw(3) << gcHC[3] <<aqua<< "]  º\n"
				" º  2.  " <<green<< "gconDamageColour" <<aqua<< ": damage bar colour ............................................. [" <<red<< "R=" << left << setw(3) << gcDC[0]
				<<green<< " G=" << setw(3) << gcDC[1] <<blue<< " B=" << setw(3) << gcDC[2] <<dark_white<< " A=" << setw(3) << gcDC[3] <<aqua<< "]  º\n"
				" º  3.  " <<green<< "invBgRGB" <<aqua<< ": inventory background colour ........................................... [" <<red<< "R=" << left << setw(3) << invBg[0]
				<<green<< " G=" << setw(3) << invBg[1] <<blue<< " B=" << setw(3) << invBg[2] <<dark_white<< " A=" << setw(3) << invBg[3] <<aqua<< "]  º\n"
				" º  4.  " <<green<< "DemoVideoTimeout" <<aqua<< ": main menu idle time in seconds (requires Demo Video patch) ............... [" <<dark_white<< value15 <<aqua<< "]  º\n"
				" º  5.  " <<green<< "FOG_SetPlane_Distance" <<aqua<< ": fog plane distance from player (traod_p3/p4 only) ................... [" <<dark_white<< value16 <<aqua<< "]  º\n"
				" º  6.  " <<red<< "gAnimPlayFPS" <<aqua<< ": animations playback speed (fps) .............................................. [" <<dark_white<< value1 <<aqua<< "]  º\n"
				" º  7.  " <<red<< "g_physics_G" <<aqua<< ": Spring System gravity (affects ragdolls, clothes, hair and Lara's breast) ..... [" <<dark_white<< value3 <<aqua<< "]  º\n"
				" º  8.  " <<yellow<< "fxUpdateWaterBuffer_Wave_Height" <<aqua<< ": water waves height (traod_p3/p4 only) ..................... [" <<dark_white<< value17 <<aqua<< "]  º\n"
				" º  9.  " <<yellow<< "playTriggerDamageEffectSize" <<aqua<< ": blood effect sprite size ...................................... [" <<dark_white<< value2 <<aqua<< "]  º\n"
				" º  10. " <<yellow<< "gcamMaximumCameraDistance" <<aqua<< ": maximum distance between player and camera ...................... [" <<dark_white<< value4 <<aqua<< "]  º\n"
				" º  11. " <<yellow<< "crawl_targetDistance" <<aqua<< ": distance between player and camera while crawling .................... [" <<dark_white<< value13 <<aqua<< "]  º\n"
				" º  12. " <<yellow<< "stair_targetDistance" <<aqua<< ": distance between player and camera while climbing stairs ............. [" <<dark_white<< value14 <<aqua<< "]  º\n"
				" º  13. " <<yellow<< "swim_targetDistance" <<aqua<< ": distance between player and camera while swimming (traod_p3/p4 only) .. [" <<dark_white<< value21 <<aqua<< "]  º\n"
				" º  14. " <<yellow<< "gCamera_CornerShoot_ViewDistance" <<aqua<< ": camera position while peering around a corner ............ [" <<dark_white<< value5 <<aqua<< "]  º\n"
				" º  15. " <<yellow<< "gCamera_LookAroundThetaMax" <<aqua<< ": maximum down vertical angle of Look Camera ..................... [" <<dark_white<< value6 <<aqua<< "]  º\n"
				" º  16. " <<yellow<< "gCamera_LookAroundThetaMin" <<aqua<< ": maximum up vertical angle of Look Camera ....................... [" <<dark_white<< value7 <<aqua<< "]  º\n"
				" º  17. " <<yellow<< "gCamera_LookAroundRhoMax" <<aqua<< ": maximum left horizontal angle of Look Camera ..................... [" <<dark_white<< value8 <<aqua<< "]  º\n"
				" º  18. " <<yellow<< "gCamera_LookAroundRhoMin" <<aqua<< ": maximum right horizontal angle of Look Camera .................... [" <<dark_white<< value9 <<aqua<< "]  º\n"
				" º  19. " <<green<< "dbgMinCameraDistance" <<aqua<< ": minimum distance between player and Dbg Camera (traod_p3/p4 only) .... [" <<dark_white<< value18 <<aqua<< "]  º\n"
				" º  20. " <<green<< "dbgMaxCameraDistance" <<aqua<< ": maximum distance between player and Dbg Camera (traod_p3/p4 only) .... [" <<dark_white<< value19 <<aqua<< "]  º\n"
				" º  21. " <<green<< "gameover_timeout" <<aqua<< ": game-over screen delay in seconds (traod_p3/p4 only) ..................... [" <<dark_white<< value20 <<aqua<< "]  º\n"
				" º                                                                                                                   º\n"
				" º                                                                                                                   º\n"
				" º                                                                                                                   º\n"
				" º                                                                                                                   º\n"
				" º                                                                                                                   º\n"
				" º                                                                                                                   º\n"
				" º                                                                                                                   º\n"
				" º        Legend:     " <<green<< "Safe to change      " <<yellow<< "May cause some graphical issues      " <<red<< "Can severely break the gameplay       " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º" <<white<< "                           " <<aqua<< "³" <<white<< "                  (B)ack to Advanced Mods                  "
				<<aqua<< "³" <<white<< "                           " <<aqua<< "º\n"
				" ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶\n"
				" º                                                         ³                                                         º\n"
				" º" <<green<< "                 (S)ave changes and exit                 " <<aqua<< "³" <<red<< "               (D)iscard changes and exit                " <<aqua<< "º\n"
				" º                                                         ³                                                         º\n"
				" ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÏÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍËÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹\n"
				" º" <<pink<< "              TRAOD EXE Multi-Patcher by Nakamichi680              " <<aqua<< "º" <<pink<< "    Version: " << VER << "   " <<aqua<< "º" <<pink<< "  Build date: " << BDATE << "  " <<aqua<< "º\n"
				" ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÊÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n"
				"\n Select an option and press Enter [" <<white<< "1-21/B/S/D" <<aqua<< "]: " <<white;
		//chrono::steady_clock::time_point end= chrono::steady_clock::now();
		//cout << endl << " Draw time = " << chrono::duration_cast<chrono::milliseconds>(end - begin).count() << " milliseconds" << endl;
		string userinput;
		cin >> userinput;
		cin.ignore(10000, '\n');
		settextcolor(aqua);
		transform(userinput.begin(), userinput.end(), userinput.begin(), toupper);
		
		if (userinput == "1")
			gconHealthColour_write();
		if (userinput == "2")
			gconDamageColour_write();
		if (userinput == "3")
			invBgRGB_write();
		if (userinput == "4")
			demo_video_timeout_write();
		if (userinput == "5")
			FOG_SetPlane_Distance_write();
		if (userinput == "6")
			gAnimPlayFPS_write();
		if (userinput == "7")
			g_physics_G_write();
		if (userinput == "8")
			fxUpdateWaterBuffer_Wave_Height_write();
		if (userinput == "9")
			playTriggerDamageEffectSize_write();
		if (userinput == "10")
			gcamMaximumCameraDistance_write();
		if (userinput == "11")
			crawl_targetDistance_write();
		if (userinput == "12")
			stair_targetDistance_write();
		if (userinput == "13")
			swim_targetDistance_write();
		if (userinput == "14")
			gCamera_CornerShoot_ViewDistance_write();
		if (userinput == "15")
			gCamera_LookAroundThetaMax_write();
		if (userinput == "16")
			gCamera_LookAroundThetaMin_write();
		if (userinput == "17")
			gCamera_LookAroundRhoMax_write();
		if (userinput == "18")
			gCamera_LookAroundRhoMin_write();
		if (userinput == "19")
			dbgMinCameraDistance_write();
		if (userinput == "20")
			dbgMaxCameraDistance_write();
		if (userinput == "21")
			gameover_timeout_write();

		//if (userinput == "CUTSCENE")
		//	CutsceneAR_Enable(ver, EXEorig);

		if (userinput == "ALLOCATE")
			Pro_Fix_Test_Allocate();
		if (userinput == "NEWMENU")
		{
			setbackcolor(dark_blue);
			return 666;
		}
		if (userinput == "B")
			return 50;
		if (userinput == "S")
		{
			setbackcolor(dark_blue);
			return 100;
		}
		if (userinput == "D")
		{
			setbackcolor(dark_blue);
			return 101;
		}
	} while (true);
}