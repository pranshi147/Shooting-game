#pragma once
#include "spaceship.hpp"

class Game{
    private:
        Spaceship spaceship;

    public:
        Game();
        ~Game();
        void Draw();
        void Update();
        void HandleInput();
};