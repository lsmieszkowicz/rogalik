#include "gamewindow.h"

GameWindow::GameWindow()
{
    this->width  = 800;
    this->height = 600;
    this->flags  = SDL_WINDOW_RESIZABLE;
    this->gameWindow = SDL_CreateWindow("Rogalik", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                  this->width, this->height, this->flags);

    this->backgroundSurface = SDL_GetWindowSurface(gameWindow);
    this->backgroundColor = SDL_MapRGB(backgroundSurface->format, 0,200,0);

    SDL_FillRect(this->backgroundSurface, &this->backgroundSurface->clip_rect, backgroundColor);
}

