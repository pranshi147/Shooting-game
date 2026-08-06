#pragma once
#include <raylib.h>
#include "laser.hpp"
#include <vector>

class Spaceship{
    private:
        Texture2D image;
        Vector2 position;
        double lastFireTime;
    public:
        Spaceship();
        ~Spaceship();
        void Draw();
        void MoveRight();
        void MoveLeft();
        void FireLaser();
        Rectangle getRect();
        std::vector<Laser> lasers;
};