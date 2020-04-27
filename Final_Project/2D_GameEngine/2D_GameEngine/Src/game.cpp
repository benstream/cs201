#include "game.h"
#include "TextureManager.h"
#include "Map.h"
#include "ECS/Components.h"

Map* map;
Manager manager;

SDL_Renderer* Game::renderer = nullptr;

auto& player(manager.addEntity());

Game::Game()
{}
Game::~Game()
{}
void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) // Checks if the library has initialised correctly (SDL2)
	{
		std::cout << "Subsystems Ininitialised!..." << std::endl;

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window)
		{
			std::cout << "Window Created" << std::endl;
		}
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			std::cout << "Renderer Created" << std::endl;
		}
		isRunning = true;
	} 
	map = new Map();
	// ecs implementation
	player.addComponent<PositionComponent>();
	player.addComponent<SpriteComponent>("assets/player.png");
	
}

void Game::handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;

	}
}

void Game::update() // Updates the Entities
{
	manager.refresh();
	manager.update();

	if (player.getComponent<PositionComponent>().x() > 100)
	{
		player.getComponent<SpriteComponent>().setTex("assets/enemy.png");
	}

}

void Game::render() // Handles Rendering 
{
	SDL_RenderClear(renderer);
	map->DrawMap();
	manager.draw();
	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Game Cleaned." << std::endl;
}

