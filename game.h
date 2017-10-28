#ifndef GAME_H
#define GAME_H

#include "gamepreferences.h"
#include "gamewindow.h"
#include <SDL2/SDL.h>


class Game
{
public:
    Game();
    ~Game();
    void handleEvents();
    void renderAll();
    void run();

private:
    GamePreferences* gamePreferences;
    GameWindow*      gameWindow;
};

#endif // GAME_H
