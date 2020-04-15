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
	game = new Game();
	game->init("Bengine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1920, 1080, false);
	while (game->running()) // Loop for game running
	{
		game->handleEvents();
		game->update();
		game->render();
	}
	game->clean();
	
	return 0;

}