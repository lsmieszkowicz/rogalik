#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include<SDL2/SDL.h>

class GameWindow
{

public:
    GameWindow();

private:
    int width;
    int height;
    int flags;
    Uint32 backgroundColor;
    SDL_Window* gameWindow;
    SDL_Surface* backgroundSurface;

};

#endif // GAMEWINDOW_H
