#include <iostream>
#include <raylib.h>

int main()
{
	std::cout << "Hello\n";

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(800, 450, "my first game");

	while (!WindowShouldClose()) {
		
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Congradulation! You have created your first window",190,200,20,RED);

		EndDrawing();

	}
	CloseWindow();

	return 0;
}	