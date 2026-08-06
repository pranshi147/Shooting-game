#pragma once
#include <raylib.h>

class MysteryShip{
    private:
        Vector2 position;
        Texture2D image;
        int speed;
    public:
        MysteryShip();
        ~MysteryShip();
        void Update();
        void Draw();
        void Spawn();
        Rectangle getRect();
        bool alive;
};