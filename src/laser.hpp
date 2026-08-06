#pragma once
#include <raylib.h>

class Laser{
    private:
        Vector2 position;
        int speed;
    public:
        Laser(Vector2 position, int speed);
        void Update();
        void Draw();
        bool active;
        Rectangle getRect();
};