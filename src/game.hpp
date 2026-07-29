#pragma once
#include "spaceship.hpp"

class Game{
    private:
        Spaceship spaceship;
        void DeleteInactiveLasers();
    public:
        Game();
        ~Game();
        void Draw();
        void Update();
        void HandleInput();
};