#pragma once
#include "stdafx.h"


int MENU_STANDARD1(int &Version, string &Short_name);
int MENU_STANDARD2(int &Version, string &Short_name);
int MENU_STANDARD3(int &Version, string &Short_name);
int MENU_STANDARD4(int &Version, string &Short_name);
int MENU_STANDARD5(int &Version, string &Short_name);
int MENU_ADVANCED1(int &Version, string &Short_name);
int MENU_ADVANCED2(int &Version, string &Short_name);
int MENU_VARIABLES(int &Version, string &Short_name);
bool MENU_SAVE_EXIT();
bool MENU_DISCARD_EXIT();
bool MENU_ACCESS_ERROR();


int MENU_TEST(int &Version, string &Short_name);