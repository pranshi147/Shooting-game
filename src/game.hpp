#pragma once
#include "spaceship.hpp"
#include "obstacle.hpp"
#include "alien.hpp"
#include "mystery.hpp"

class Game{
    private:
        Spaceship spaceship;
        void DeleteInactiveLasers();
        std::vector<Obstacle> obstacles;
        std::vector<Alien> aliens;
        std::vector<Obstacle> CreateObstacles();
        std::vector<Alien> CreateAliens();
        void MoveAliens();
        void MoveDownAliens(int distance);
        void AlienShootLaser();
        void CheckForCollisions();
        int aliensDirection;
        std::vector<Laser> alienLasers;
        constexpr static float alienLaserShootInterval=0.35;
        float timeLastAlienFired;
        MysteryShip mysteryship;
        float mysteryShipSpawnInterval;
        float timeLastSpawn; 
        void GameOver();
        void Reset();
        void InitGame();
     public:
        Game();
        ~Game();
        void Draw();
        void Update();
        void HandleInput();
        bool run;
        int lives;
};