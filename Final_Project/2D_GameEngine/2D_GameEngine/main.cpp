/*
Benjamin Stream - The Finale
NAMETBD
CS201 Jon Genetii
*/
#include "SDL.h"
#include "iostream"
#include "game.h"




Game* game = nullptr;

int main(int argc, char* argv[])
{
	const int FPS = 60; // 60fps Master Race submit sub 60 FPS systems.
	const int frameDelay = 1000 / FPS;
	Uint32 frameStart; // Massive Integer 
	int frameTime;

	game = new Game();
	game->init("Bengine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1920, 1080, false);
	while (game->running()) // Loop for game running
	{
		frameStart = SDL_GetTicks();
		game->handleEvents();
		game->update();
		game->render();

		frameTime = SDL_GetTicks() - frameStart;

		if (frameDelay > frameTime) // Checks if the game is running too fast and corrects the difference.
		{
			SDL_Delay(frameDelay - frameTime);
		}
	}
	game->clean();
	
	return 0;

}