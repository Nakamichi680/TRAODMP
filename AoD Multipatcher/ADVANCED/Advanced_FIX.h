#pragma once
#include "stdafx.h"


class Pro_Fix_Status;


bool Detect_BB_rooms_status();						// Restituisce vero se la modifica è attivata, falso se il codice è originale
bool Detect_Debug_status();							// Restituisce vero se la modalità debug forzata è attiva
bool Detect_Hide_camera_blinds_status();			// Restituisce vero se la modifica è attivata, falso se il codice è originale
bool Detect_Disable_vertex_colors_status();			// Restituisce vero se la modifica è attivata, falso se il codice è originale
bool Detect_OutputDebugString_status();				// Restituisce vero se la modifica è attiva (il gioco scrive tutte le stringhe di debug)
bool Detect_DebugMenuOverlay_status();				// Restituisce vero se il menu di debug è attivabile con F2, falso se è spento
bool Detect_FixedCameras_status();					// Restituisce vero se le telecamere fisse sono disattivate, falso se il codice è originale
bool Detect_SwimCameraCollisions_status();			// Restituisce vero se le collisioni della swim camera sono ignorate, falso se il codice è originale
// PHOTOMODE
bool Detect_PHOTOMODE_MASTER_status(Pro_Fix_Status Pro_Fix);		// FUNZIONE PRINCIPALE PHOTOMODE. Restituisce vero se la photomode è attiva
bool Detect_FreeCamera_status();					// Restituisce vero se la FreeCamera è modificata, falso se è originale
// FINE PHOTOMODE
bool Detect_Footprints_status();					// Restituisce vero se la modifica è attivata, falso se il codice è originale


void Change_BB_rooms_status();
void Change_Debug_status();
void Change_Hide_camera_blinds_status();
void Change_Disable_vertex_colors_status();
void Change_OutputDebugString_status();
void Change_DebugMenuOverlay_status();
void Change_FixedCameras_status();
void Change_SwimCameraCollisions_status();
// PHOTOMODE
void Change_PHOTOMODE_MASTER_status(Pro_Fix_Status *Pro_Fix);
void Change_FreeCamera_status();
// FINE PHOTOMODE
void Change_Footprints_status();


// GLOBAL VARIABLES
string gAnimPlayFPS_read();
string playTriggerDamageEffectSize_read();
string g_physics_G_read();
string gcamMaximumCameraDistance_read();
string gCamera_CornerShoot_ViewDistance_read();
string gCamera_LookAroundThetaMax_read();
string gCamera_LookAroundThetaMin_read();
string gCamera_LookAroundRhoMax_read();
string gCamera_LookAroundRhoMin_read();
void gconHealthColour_read(int *R, int *G, int *B, int *A);
void gconDamageColour_read(int *R, int *G, int *B, int *A);
void invBgRGB_read(int *R, int *G, int *B, int *A);
string crawl_targetDistance_read();
string stair_targetDistance_read();
string demo_video_timeout_read();
string FOG_SetPlane_Distance_read();
string fxUpdateWaterBuffer_Wave_Height_read();
string dbgMinCameraDistance_read();
string dbgMaxCameraDistance_read();
string gameover_timeout_read();
string swim_targetDistance_read();
string apnea_time_read();

void gAnimPlayFPS_write();
void playTriggerDamageEffectSize_write();
void g_physics_G_write();
void gcamMaximumCameraDistance_write();
void gCamera_CornerShoot_ViewDistance_write();
void gCamera_LookAroundThetaMax_write();
void gCamera_LookAroundThetaMin_write();
void gCamera_LookAroundRhoMax_write();
void gCamera_LookAroundRhoMin_write();
void gconHealthColour_write();
void gconDamageColour_write();
void invBgRGB_write();
void crawl_targetDistance_write();
void stair_targetDistance_write();
void demo_video_timeout_write();
void FOG_SetPlane_Distance_write();
void fxUpdateWaterBuffer_Wave_Height_write();
void dbgMinCameraDistance_write();
void dbgMaxCameraDistance_write();
void gameover_timeout_write();
void swim_targetDistance_write();
void apnea_time_write();