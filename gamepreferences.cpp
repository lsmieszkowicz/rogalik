#include "gamepreferences.h"

GamePreferences::GamePreferences()
{
    this->running = true;
}

bool GamePreferences::isRunning()
{
    return running;
}
