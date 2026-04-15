#include <iostream>
#include <raylib.h>

#include <imgui.h>
#include <rlImGui.h>

int main()
{
	std::cout << "Hello\n";

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(800, 450, "my first game");

	rlImGuiSetup(true);

	while (!WindowShouldClose()) {
		
		BeginDrawing();
		ClearBackground(RAYWHITE);
		rlImGuiBegin();
		DrawText("Congradulation! You have created your first window",190,200,20,RED);

		ImGui::Begin("TEST");
		ImGui::Text("hello");
		ImGui::Button("button");
		ImGui::ShowDemoWindow();

		ImGui::End();

		rlImGuiEnd();
		EndDrawing();

	}

	rlImGuiShutdown();
	CloseWindow();

	return 0;
}	