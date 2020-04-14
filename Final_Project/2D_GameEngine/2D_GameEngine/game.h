#pragma once
#include "SDL.h"
#include <iostream>

class Game // Defines the Game Class
{
public:
	Game();
	~Game();
	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

	void handleEvents(); // Handles Events
	void update(); // Updates objects
	void render(); // Handles Rendering
	void clean(); // Cleans
	bool running() { return isRunning; } // Checks if game is running 

private:
	int cnt = 0;
	bool isRunning;
	SDL_Window* window;
	SDL_Renderer* renderer;
};

