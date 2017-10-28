#include "game.h"
#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

Game::Game()
{
    this->gamePreferences = new GamePreferences();
    this->gameWindow = new GameWindow();
    SDL_Init(SDL_INIT_EVERYTHING);
}

Game::~Game()
{
    SDL_Quit();
}

void Game::run()
{
    while(this->gamePreferences->isRunning())
    {

    }
}

void Game::handleEvents()
{
    cout << "Handling events" << endl;
}

void Game::renderAll()
{
    cout << "Rendering all objects" << endl;
}
