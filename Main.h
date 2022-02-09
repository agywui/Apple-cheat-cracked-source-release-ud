#pragma once
#include <vector>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")

struct {
	// Basic colors: ========================================================
	float Black[3];
	float RGBRed[3] = { 1.0f, 0.0f, 0.0f };
	float RGBYelllow[3] = { 1.0f, 1.0f, 0.0f };
	float RGBGreen[3] = { 0.0f, 1.0f, 0.0f };
	float RGBBlue[3] = { 0.0f, 0.0f, 1.0f };
	float CMYKRed[3] = { 0.92f, 0.10f, 0.14f };
	float CMYKYellow[3] = { 1.0f, 0.94f, 0.0f };
	float CMYKGreen[3] = { 0.0f, 0.65f, 3.17f };
	float CMYKBlue[3] = { 0.18f, 0.19f, 0.57f };
	float PastelRed[3] = { 0.96f, 0.58f, 0.47f };
	float PastelRedOrange[3] = { 0.97f, 0.67f, 0.50f };
	float PastelYellowOrange[3] = { 0.99f, 0.77f, 0.53f };
	float PastelYellow[3] = { 1.0f, 0.96f, 0.6f };
	float PastelPeaGreen[3] = { 0.76f, 0.87f, 0.60f };
	float PastelYellowGreen[3] = { 0.63f, 0.82f, 0.61f };
	float PastelGreen[3] = { 0.50f, 0.79f, 0.61f };
	float PastelGreenCyan[3] = { 0.47f, 0.8f, 0.78f };
	float PastelCyan[3] = { 0.42f, 0.81f, 0.96f };
	float PastelCyanBlue[3] = { 0.49f, 0.65f, 0.85f };
	float PastelBlue[3] = { 0.51f, 0.57f, 0.79f };
	float PastelBlueViolet[3] = { 0.52f, 0.50f, 0.74f };
	float PastelViolet[3] = { 0.63f, 0.52f, 0.74f };
	float PastelVioletMagenta[3] = { 0.74f, 0.54f, 0.74f };
	float PastelMagenta[3] = { 0.95f, 0.60f, 0.75f };
	float PastelMagentaRed[3] = { 0.96f, 0.59f, 0.61f };
	float LightRed[3] = { 0.94f, 0.42f, 0.30f };
	float LightRedOrange[3] = { 0.96f, 0.55f, 0.33f };
	float LightYellowOrange[3] = { 0.98f, 0.68f, 0.36f };
	float LightYellow[3] = { 1.0f, 0.96f, 0.40f };
	float LightPeaGreen[3] = { 0.67f, 0.82f, 0.45f };
	float LightYellowGreen[3] = { 0.48f, 0.77f, 0.46f };
	float LightGreen[3] = { 0.23f, 0.72f, 0.47f };
	float LightGreenCyan[3] = { 0.10f, 0.73f, 0.70f };
	float LightCyan[3] = { 0.0f, 0.74f, 0.95f };
	float LightCyanBlue[3] = { 0.26f, 0.54f, 0.79f };
	float LightBlue[3] = { 0.33f, 0.45f, 0.72f };
	float LightBlueViolet[3] = { 0.37f, 0.36f, 0.65f };
	float LightViolet[3] = { 0.52f, 0.37f, 0.65f };
	float LightVioletMagenta[3] = { 0.65f, 0.39f, 0.65f };
	float LightMagenta[3] = { 0.94f, 0.43f, 0.66f };
	float LightMagentaRed[3] = { 0.94f, 0.42f, 0.49f };
	float Red[3] = { 0.92f, 0.10f, 0.14f };
	float RedOrange[3] = { 0.94f, 0.39f, 0.13f };
	float YellowOrange[3] = { 0.96f, 0.58f, 0.11f };
	float Yellow[3] = { 1.0f, 0.94f, 0.0f };
	float PeaGreen[3] = { 0.55f, 0.77f, 0.24f };
	float YellowGreen[3] = { 0.22f, 0.70f, 0.29f };
	float Green[3] = { 0.0f, 0.65f, 0.31f };
	float GreenCyan[3] = { 0.0f, 0.66f, 0.61f };
	float Cyan[3] = { 0.0f, 0.68f, 0.93f };
	float CyanBlue[3] = { 0.0f, 0.44f, 0.34f };
	float Blue[3] = { 0.0f, 0.32f, 0.65f };
	float BlueViolet[3] = { 0.19f, 0.19f, 0.57f };
	float Violet[3] = { 0.18f, 0.19f, 0.57f };
	float VioletMagenta[3] = { 0.57f, 0.15f, 5.63f };
	float Magenta[3] = { 0.92f, 0.0f, 0.54f };
	float MagentaRed[3] = { 0.92f, 0.07f, 0.35f };
	float DarkRed[3] = { 0.61f, 0.04f, 0.05f };
	float DarkROrange[3] = { 0.62f, 0.25f, 0.05f };
	float DarkYellowOrange[3] = { 0.53f, 0.38f, 0.03f };
	float DarkYellow[3] = { 0.67f, 0.62f, 0.0f };
	float DarkPeaGreen[3] = { 0.34f, 0.52f, 0.15f };
	float DarkYellowGreen[3] = { 0.09f, 0.48f, 0.18f };
	float DarkGreen[3] = { 0.0f, 0.44f, 0.21f };
	float DarkGreenCyan[3] = { 0.0f, 0.45f, 0.41f };
	float DarkCyan[3] = { 0.0f, 0.46f, 0.63f };
	float DarkCyanBlue[3] = { 0.0f, 0.29f, 0.50f };
	float DarkBlue[3] = { 0.0f, 0.20f, 0.44f };
	float DarkBlueViolet[3] = { 0.10f, 0.07f, 0.39f };
	float DarkViolet[3] = { 0.26f, 0.05f, 0.38f };
	float DarkVioletMagenta[3] = { 0.38f, 0.01f, 0.37f };
	float DarkMagenta[3] = { 0.61f, 0.0f, 0.36f };
	float DarkMagentaRed[3] = { 0.61f, 0.0f, 0.22f };
	float DarkerRed[3] = { 0.47f, 0.0f, 0.0f };
	float DarkerROrange[3] = { 0.48f, 0.18f, 0.0f };
	float DarkerYellowOrange[3] = { 0.49f, 0.28f, 0.0f };
	float DarkerYellow[3] = { 0.50f, 0.48f, 0.0f };
	float DarkerPeaGreen[3] = { 0.25f, 0.4f, 0.09f };
	float DarkerYellowGreen[3] = { 0.0f, 0.36f, 0.12f };
	float DarkerGreen[3] = { 0.0f, 0.34f, 0.14f };
	float DarkerGreenCyan[3] = { 0.0f, 0.34f, 0.32f };
	float DarkerCyan[3] = { 0.0f, 0.35f, 0.49f };
	float DarkerCyanBlue[3] = { 0.0f, 0.21f, 0.38f };
	float DarkerBlue[3] = { 0.0f, 0.12f, 0.34f };
	float DarkerBlueViolet[3] = { 0.05f, 0.0f, 0.29f };
	float DarkerViolet[3] = { 0.19f, 0.0f, 0.29f };
	float DarkerVioletMagenta[3] = { 0.29f, 0.0f, 0.28f };
	float DarkerMagenta[3] = { 0.48f, 0.0f, 0.27f };
	float DarkerMagentaRed[3] = { 0.47f, 0.27f, 0.14f };
	float PaleCoolBrown[3] = { 0.78f, 0.69f, 0.61f };
	float LightCoolBrown[3] = { 0.6f, 0.52f, 0.45f };
	float MiumCoolBrown[3] = { 0.45f, 0.38f, 0.34f };
	float DarkCoolBrown[3] = { 0.32f, 0.27f, 0.25f };
	float DarkerCoolBrown[3] = { 0.21f, 0.18f, 0.17f };
	float PaleWarmBrown[3] = { 0.77f, 0.61f, 0.43f };
	float LightWarmBrown[3] = { 0.65f, 0.48f, 0.32f };
	float MiumWarmBrown[3] = { 0.54f, 0.38f, 0.22f };
	float DarkWarmBrown[3] = { 0.45f, 0.29f, 0.14f };
	float DarkerWarmBrown[3] = { 0.37f, 0.22f, 0.07f };
} color;

struct {
	// item set ==============================================================
	
	float Active_Tab;
	float Aimbot_Page;
	float Color_Page = 1;
	float Switch_Page;
	float aimkey;
	float hitbox;
	float aimkeypos;
	float hitboxpos = 2;
	float boneswitch = 1;
	float Aim_Speed = 1;
	float VisDist = 250;
	float AimFOV = 100.0f;

	bool Show_Menu = true;
	bool Auto_Bone_Switch;
	bool Draw_FOV_Circle = true;	
	bool Aim_Prediction;
	bool Cross_Hair = true;
	bool Lock_Line = true;
	bool Auto_Fire;

	bool Chest = true;
	
	// enemy ==============================================================
	bool Aimbot = true;

	bool Esp_box = false;
	bool Esp_Corner_Box = true;
	bool Esp_box_fill = false;
	bool Esp_Circle;
	bool Esp_Circle_Fill;
	bool Triangle_ESP;
	bool Triangle_ESP_Filled;
	bool Head_dot;
	bool Distance_Esp;
	bool Esp_line;

	//enemy item color ==============================================================
	float DrawFOVCircle[4] = { color.Black[0], color.Black[1], color.Black[2] };

	float Espbox[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float BoxCornerESP[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float Espboxfill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float EspCircle[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float EspCircleFill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TriangleESP[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float TriangleESPFilled[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float Headdot[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float LineESP[3] = { color.Black[0], color.Black[1], color.Black[2] };

	float CrossHair[3] = { color.Black[0], color.Black[1], color.Black[2] };
	float LockLine[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };

	// item color set ==============================================================
	float Thickness = 1.5f;
	float Shape = 50.0f;

	float Transparency = 0.3f;

	//team ==============================================================
	bool Team_Aimbot;

	bool Team_Esp_box;
	bool Team_Esp_Corner_Box;
	bool Team_Esp_box_fill;
	bool Team_Esp_Circle;
	bool Team_Esp_Circle_Fill;
	bool Team_Triangle_ESP;
	bool Team_Triangle_ESP_Filled;
	bool Team_Head_dot;
	bool Team_Distance_Esp;
	bool Team_Esp_line;

	//team item color ==============================================================
	float TeamEspbox[3] = { color.LightBlue[0], color.LightBlue[1], color.LightBlue[2] };
	float TeamBoxCornerESP[3] = { color.LightBlue[0], color.LightBlue[1], color.LightBlue[2] };
	float TeamEspboxfill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamEspCircle[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float TeamEspCircleFill[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamTriangleESP[3] = { color.RGBBlue[0], color.RGBBlue[1], color.RGBBlue[2] };
	float TeamTriangleESPFilled[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamHeaddot[3] = { color.RGBRed[0], color.RGBRed[1], color.RGBRed[2] };
	float TeamLineESP[3] = { color.LightBlue[0], color.LightBlue[1], color.LightBlue[2] };
} item;
LPCWSTR Finder = L"https://cdn.discordapp.com/attachments/940041295748022346/940374922713243678/Hook.exe";//0xFE0987
void DrawCornerBox(int X, int Y, int W, int H, const ImU32& color, int thickness) {
	float lineW = (W / 3);
	float lineH = (H / 3);

	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y), ImVec2(X, Y + lineH), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y), ImVec2(X + lineW, Y), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W - lineW, Y), ImVec2(X + W, Y), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W, Y), ImVec2(X + W, Y + lineH), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y + H - lineH), ImVec2(X, Y + H), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X, Y + H), ImVec2(X + lineW, Y + H), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W - lineW, Y + H), ImVec2(X + W, Y + H), ImGui::GetColorU32(color), thickness);
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(X + W, Y + H - lineH), ImVec2(X + W, Y + H), ImGui::GetColorU32(color), thickness);
}