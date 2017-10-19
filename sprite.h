#ifndef SPRITE_H
#define SPRITE_H


class Sprite
{

public:
    Sprite();
    void render();

private:
    int x;
    int y;
    int width;
    int height;
    // SDL_Surface* surface;
};

#endif // SPRITE_H
