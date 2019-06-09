#include "stdafx.h"
#include "MISC/Misc_Functions.h"


string gAnimPlayFPS_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3351268;
	if (ver == 449)		offset = 3348612;
	if (ver == 442)		offset = 3181796;
	if (ver == 439)		offset = 3139012;
	if (ver == 352)		offset = 3281028;
	if (ver == 349)		offset = 3282564;
	if (ver == 342)		offset = 3115716;
	if (ver == 339)		offset = 3072932;
	if (ver == 52)		offset = 2274752;
	if (ver == 49)		offset = 2270656;
	if (ver == 42)		offset = 2233744;
	if (ver == 39)		offset = 2163584;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


string playTriggerDamageEffectSize_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 1369585;
	if (ver == 449)		offset = 1369877;
	if (ver == 442)		offset = 1362837;
	if (ver == 439)		offset = 1357481;
	if (ver == 352)		offset = 1345691;
	if (ver == 349)		offset = 1345987;
	if (ver == 342)		offset = 1339255;
	if (ver == 339)		offset = 1334167;
	if (ver == 52)		offset = 1165579;
	if (ver == 49)		offset = 1166219;
	if (ver == 42)		offset = 1160683;
	if (ver == 39)		offset = 1157675;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


string g_physics_G_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 1556099;
	if (ver == 449)		offset = 1554491;
	if (ver == 442)		offset = 1546811;
	if (ver == 439)		offset = 1541455;
	if (ver == 352)		offset = 1530729;
	if (ver == 349)		offset = 1529173;
	if (ver == 342)		offset = 1521805;
	if (ver == 339)		offset = 1516709;
	if (ver == 52)		offset = 1343003;
	if (ver == 49)		offset = 1341803;
	if (ver == 42)		offset = 1335643;
	if (ver == 39)		offset = 1334491;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


string gcamMaximumCameraDistance_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3008612;
	if (ver == 449)		offset = 3004452;
	if (ver == 442)		offset = 2840036;
	if (ver == 439)		offset = 2799044;
	if (ver == 352)		offset = 2971492;
	if (ver == 349)		offset = 2971428;
	if (ver == 342)		offset = 2807012;
	if (ver == 339)		offset = 2766020;
	if (ver == 52)		offset = 2780696;
	if (ver == 49)		offset = 2777224;
	if (ver == 42)		offset = 2642768;
	if (ver == 39)		offset = 2567888;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


string gCamera_CornerShoot_ViewDistance_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3008576;
	if (ver == 449)		offset = 3004416;
	if (ver == 442)		offset = 2840000;
	if (ver == 439)		offset = 2799008;
	if (ver == 352)		offset = 2971456;
	if (ver == 349)		offset = 2971392;
	if (ver == 342)		offset = 2806976;
	if (ver == 339)		offset = 2765984;
	if (ver == 52)		offset = 2780660;
	if (ver == 49)		offset = 2777188;
	if (ver == 42)		offset = 2642732;
	if (ver == 39)		offset = 2567852;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


string gCamera_LookAroundThetaMax_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3420604;
	if (ver == 449)		offset = 3417724;
	if (ver == 442)		offset = 3250812;
	if (ver == 439)		offset = 3207868;
	if (ver == 352)		offset = 3349852;
	if (ver == 349)		offset = 3351196;
	if (ver == 342)		offset = 3184252;
	if (ver == 339)		offset = 3141308;
	if (ver == 52)		offset = 2278836;
	if (ver == 49)		offset = 2274740;
	if (ver == 42)		offset = 2237732;
	if (ver == 39)		offset = 2167596;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


string gCamera_LookAroundThetaMin_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3420608;
	if (ver == 449)		offset = 3417728;
	if (ver == 442)		offset = 3250816;
	if (ver == 439)		offset = 3207872;
	if (ver == 352)		offset = 3349856;
	if (ver == 349)		offset = 3351200;
	if (ver == 342)		offset = 3184256;
	if (ver == 339)		offset = 3141312;
	if (ver == 52)		offset = 2278840;
	if (ver == 49)		offset = 2274744;
	if (ver == 42)		offset = 2237736;
	if (ver == 39)		offset = 2167600;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


string gCamera_LookAroundRhoMax_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3420612;
	if (ver == 449)		offset = 3417732;
	if (ver == 442)		offset = 3250820;
	if (ver == 439)		offset = 3207876;
	if (ver == 352)		offset = 3349860;
	if (ver == 349)		offset = 3351204;
	if (ver == 342)		offset = 3184260;
	if (ver == 339)		offset = 3141316;
	if (ver == 52)		offset = 2278844;
	if (ver == 49)		offset = 2274748;
	if (ver == 42)		offset = 2237740;
	if (ver == 39)		offset = 2167604;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


string gCamera_LookAroundRhoMin_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3420616;
	if (ver == 449)		offset = 3417736;
	if (ver == 442)		offset = 3250824;
	if (ver == 439)		offset = 3207880;
	if (ver == 352)		offset = 3349864;
	if (ver == 349)		offset = 3351208;
	if (ver == 342)		offset = 3184264;
	if (ver == 339)		offset = 3141320;
	if (ver == 52)		offset = 2278848;
	if (ver == 49)		offset = 2274752;
	if (ver == 42)		offset = 2237744;
	if (ver == 39)		offset = 2167608;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


void gconHealthColour_read(int *R, int *G, int *B, int *A)
{
	size_t offset;
	if (ver == 452)		offset = 3000520;
	if (ver == 449)		offset = 2996392;
	if (ver == 442)		offset = 2832008;
	if (ver == 439)		offset = 2791016;
	if (ver == 352)		offset = 2963400;
	if (ver == 349)		offset = 2963368;
	if (ver == 342)		offset = 2798984;
	if (ver == 339)		offset = 2757992;
	if (ver == 52)		offset = 2754740;
	if (ver == 49)		offset = 2751492;
	if (ver == 42)		offset = 2617076;
	if (ver == 39)		offset = 2542196;
	string Rtemp = EXEorig.substr(offset, 1);
	string Gtemp = EXEorig.substr(offset+1, 1);
	string Btemp = EXEorig.substr(offset+2, 1);
	string Atemp = EXEorig.substr(offset+3, 1);
	memcpy(R, &Rtemp, 1);
	memcpy(G, &Gtemp, 1);
	memcpy(B, &Btemp, 1);
	memcpy(A, &Atemp, 1);
}


void gconDamageColour_read(int *R, int *G, int *B, int *A)
{
	size_t offset;
	if (ver == 452)		offset = 1183593;
	if (ver == 449)		offset = 1184169;
	if (ver == 442)		offset = 1177065;
	if (ver == 439)		offset = 1171685;
	if (ver == 352)		offset = 1162137;
	if (ver == 349)		offset = 1162713;
	if (ver == 342)		offset = 1155905;
	if (ver == 339)		offset = 1150837;
	if (ver == 52)		offset = 992706;
	if (ver == 49)		offset = 993506;
	if (ver == 42)		offset = 988002;
	if (ver == 39)		offset = 983746;
	string Rtemp = EXEorig.substr(offset, 1);
	string Gtemp = EXEorig.substr(offset+1, 1);
	string Btemp = EXEorig.substr(offset+2, 1);
	string Atemp = EXEorig.substr(offset+3, 1);
	memcpy(R, &Rtemp, 1);
	memcpy(G, &Gtemp, 1);
	memcpy(B, &Btemp, 1);
	memcpy(A, &Atemp, 1);
}


void invBgRGB_read(int *R, int *G, int *B, int *A)
{
	size_t offset;
	if (ver == 452)		offset = 3021308;
	if (ver == 449)		offset = 3017148;
	if (ver == 442)		offset = 2852732;
	if (ver == 439)		offset = 2811740;
	if (ver == 352)		offset = 2984188;
	if (ver == 349)		offset = 2984124;
	if (ver == 342)		offset = 2819708;
	if (ver == 339)		offset = 2778716;
	if (ver == 52)		offset = 2803064;
	if (ver == 49)		offset = 2799592;
	if (ver == 42)		offset = 2665064;
	if (ver == 39)		offset = 2590184;
	string Rtemp = EXEorig.substr(offset, 1);
	string Gtemp = EXEorig.substr(offset+1, 1);
	string Btemp = EXEorig.substr(offset+2, 1);
	string Atemp = EXEorig.substr(offset+3, 1);
	memcpy(R, &Rtemp, 1);
	memcpy(G, &Gtemp, 1);
	memcpy(B, &Btemp, 1);
	memcpy(A, &Atemp, 1);
	if (*R == 128)
		*R = 127;
}


string crawl_targetDistance_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 1313230;
	if (ver == 449)		offset = 1313734;
	if (ver == 442)		offset = 1306694;
	if (ver == 439)		offset = 1301338;
	if (ver == 352)		offset = 1290403;
	if (ver == 349)		offset = 1290907;
	if (ver == 342)		offset = 1284175;
	if (ver == 339)		offset = 1279087;
	if (ver == 52)		offset = 1114700;
	if (ver == 49)		offset = 1115628;
	if (ver == 42)		offset = 1110140;
	if (ver == 39)		offset = 1106412;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


string stair_targetDistance_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 1312788;
	if (ver == 449)		offset = 1313292;
	if (ver == 442)		offset = 1306252;
	if (ver == 439)		offset = 1300896;
	if (ver == 352)		offset = 1289961;
	if (ver == 349)		offset = 1290465;
	if (ver == 342)		offset = 1283733;
	if (ver == 339)		offset = 1278645;
	if (ver == 52)		offset = 1114643;
	if (ver == 49)		offset = 1115571;
	if (ver == 42)		offset = 1110083;
	if (ver == 39)		offset = 1106355;
	string temp = EXEorig.substr(offset, 4);
	memcpy(&out, &temp, 4);
	temp2 << out;
	return Center_string2(temp2.str(), 12);
}


string demo_video_timeout_read()
{
	size_t Position1, Position2;
	string check1 = "#####Main menu demo patch#####";
	string check2;
	stringstream temp2;
	unsigned int out;
	if (ver == 452)	{	string temp("\x8B\x15\xA0\xC0\x7B\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 449)	{	string temp("\x8B\x15\x60\xB0\x7B\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 442)	{	string temp("\x8B\x15\x40\x2D\x79\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 439)	{	string temp("\x8B\x15\0\x8A\x78\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 352)	{	string temp("\x8B\x15\x60\xA7\x7A\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 349)	{	string temp("\x8B\x15\x20\xA7\x7A\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 342)	{	string temp("\x8B\x15\0\x24\x78\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 339)	{	string temp("\x8B\x15\x80\x80\x77\0\x8D\x4A\x01\x81\xFA", 11);		check2 = temp;	}
	if (ver == 52)	{	string temp("\xA1\x68\x3E\x87\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}
	if (ver == 49)	{	string temp("\xA1\xA8\x2F\x87\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}
	if (ver == 42)	{	string temp("\xA1\x28\x63\x85\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}
	if (ver == 39)	{	string temp("\xA1\x28\xF7\x83\0\x8B\xC8\x40\x81\xF9", 10);			check2 = temp;	}

	if ((Position1 = EXEorig.find(check1)) != std::string::npos && (Position2 = EXEorig.find(check2)) != std::string::npos)
	{
		string temp = EXEorig.substr(Position2 + check2.size(), 4);
		memcpy(&out, &temp, 4);
		temp2 << out / 60;
		return Center_string2(temp2.str(), 12);
	}
	else
		return Center_string2("N.A.", 12);
}


string FOG_SetPlane_Distance_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3304768;
	if (ver == 449)		offset = 3300928;
	if (ver == 442)		offset = 3136800;
	if (ver == 439)		offset = 3094016;
	if (ver == 352)		offset = 3234944;
	if (ver == 349)		offset = 3235264;
	if (ver == 342)		offset = 3071136;
	if (ver == 339)		offset = 3028352;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		string temp = EXEorig.substr(offset, 4);
		memcpy(&out, &temp, 4);
		temp2 << out;
		return Center_string2(temp2.str(), 12);
	}
	else
		return Center_string2("N.A.", 12);
}


string fxUpdateWaterBuffer_Wave_Height_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3362440;
	if (ver == 449)		offset = 3359784;
	if (ver == 442)		offset = 3192968;
	if (ver == 439)		offset = 3150120;
	if (ver == 352)		offset = 3292200;
	if (ver == 349)		offset = 3293736;
	if (ver == 342)		offset = 3126888;
	if (ver == 339)		offset = 3084040;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		string temp = EXEorig.substr(offset, 4);
		memcpy(&out, &temp, 4);
		temp2 << out;
		return Center_string2(temp2.str(), 12);
	}
	else
		return Center_string2("N.A.", 12);
}


string dbgMinCameraDistance_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3328036;
	if (ver == 449)		offset = 3325252;
	if (ver == 442)		offset = 3159428;
	if (ver == 439)		offset = 3116612;
	if (ver == 352)		offset = 3257924;
	if (ver == 349)		offset = 3259300;
	if (ver == 342)		offset = 3093476;
	if (ver == 339)		offset = 3050660;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		string temp = EXEorig.substr(offset, 4);
		memcpy(&out, &temp, 4);
		temp2 << out;
		return Center_string2(temp2.str(), 12);
	}
	else
		return Center_string2("N.A.", 12);
}


string dbgMaxCameraDistance_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3328032;
	if (ver == 449)		offset = 3325248;
	if (ver == 442)		offset = 3159424;
	if (ver == 439)		offset = 3116608;
	if (ver == 352)		offset = 3257920;
	if (ver == 349)		offset = 3259296;
	if (ver == 342)		offset = 3093472;
	if (ver == 339)		offset = 3050656;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		string temp = EXEorig.substr(offset, 4);
		memcpy(&out, &temp, 4);
		temp2 << out;
		return Center_string2(temp2.str(), 12);
	}
	else
		return Center_string2("N.A.", 12);
}


string gameover_timeout_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3425192;
	if (ver == 449)		offset = 3422280;
	if (ver == 442)		offset = 3255368;
	if (ver == 439)		offset = 3212424;
	if (ver == 352)		offset = 3354280;
	if (ver == 349)		offset = 3355592;
	if (ver == 342)		offset = 3188648;
	if (ver == 339)		offset = 3145704;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		string temp = EXEorig.substr(offset, 4);
		memcpy(&out, &temp, 4);
		temp2 << out/60;
		return Center_string2(temp2.str(), 12);
	}
	else
		return Center_string2("N.A.", 12);
}


string swim_targetDistance_read()
{
	size_t offset;
	stringstream temp2;
	float out;
	if (ver == 452)		offset = 3421292;
	if (ver == 449)		offset = 3418412;
	if (ver == 442)		offset = 3251500;
	if (ver == 439)		offset = 3208556;
	if (ver == 352)		offset = 3350500;
	if (ver == 349)		offset = 3351844;
	if (ver == 342)		offset = 3184900;
	if (ver == 339)		offset = 3141956;
	if (ver != 39 && ver != 42 && ver != 49 && ver != 52)
	{
		string temp = EXEorig.substr(offset, 4);
		memcpy(&out, &temp, 4);
		temp2 << out*1280;
		return Center_string2(temp2.str(), 12);
	}
	else
		return Center_string2("N.A.", 12);
}