#include "game.h"
#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

Game::Game()
{
    this->gamePreferences = new GamePreferences();
    SDL_Init(SDL_INIT_EVERYTHING);
}

Game::~Game()
{
    SDL_Quit();
}

void Game::run()
{
    cout << "Running game" << endl;
}

void Game::handleEvents()
{
    cout << "Handling events" << endl;
}

void Game::renderAll()
{
    cout << "Rendering all objects" << endl;
}
