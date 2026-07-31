#include <raylib.h> 
#include "game.hpp"
#include "obstacle.hpp"

int main() 
{
    Color grey = {29, 29, 27, 255};
    int windowWidth= 750;
    int windowHeight= 700;

    InitWindow(windowWidth, windowHeight, "C++ Space Invaders");
    SetTargetFPS(60);

    Game game;
    Obstacle obstacle= Obstacle({100,100});

    while(WindowShouldClose()==false){

        game.HandleInput();
        game.Update();
        BeginDrawing();
        ClearBackground(grey); 
        game.Draw();
        obstacle.Draw();
        EndDrawing();  
    }

    CloseWindow();
}