# 🚀 C++ Space Invaders

A classic **Space Invaders-style arcade game** built from scratch in **C++ using raylib**.

The project focuses on practicing object-oriented programming, game loops, collision detection, real-time input handling, audio, textures, vectors, and file-based high-score persistence.

---

## 🎮 Features

- 👾 Multiple alien types with different score values
- 🚀 Player-controlled spaceship
- 🔫 Player and alien laser projectiles
- 🛡️ Destructible defensive obstacles
- 🛸 Mystery ship that appears periodically
- ❤️ Three lives per game
- 💥 Collision detection between:
  - Lasers and aliens
  - Lasers and obstacles
  - Alien lasers and the spaceship
  - Aliens and obstacles
  - Aliens and the spaceship
  - Player lasers and the mystery ship
- 🏆 Persistent high-score system using `highscore.txt`
- 🎵 Background music and sound effects
- 🔄 Game restart after Game Over
- 🖥️ 60 FPS desktop gameplay

---

## 🕹️ Controls

| Key | Action |
|---|---|
| `←` Left Arrow | Move spaceship left |
| `→` Right Arrow | Move spaceship right |
| `Space` | Fire laser |
| `Enter` | Restart after Game Over |
| `Esc` | Close the game |

---

## 🧰 Tech Stack

- **Language:** C++14
- **Game Library:** raylib
- **Build System:** Make / MinGW Make
- **Compiler:** g++
- **Audio:** OGG
- **Graphics:** PNG
- **Font:** TTF

### Concepts Practiced

- Object-Oriented Programming
- Classes and objects
- Encapsulation
- Constructors and destructors
- Static members
- `std::vector`
- Iterators
- File I/O
- Collision detection
- Game state management
- Real-time game loops
- Resource loading and unloading
- Basic game physics and movement

---

## 📁 Project Structure

```text
shooting-game/
│
├── Font/
│   └── monogram.ttf
│
├── Graphics/
│   ├── alien_1.png
│   ├── alien_2.png
│   ├── alien_3.png
│   ├── mystery.png
│   └── spaceship.png
│
├── Sounds/
│   ├── explosion.ogg
│   ├── laser.ogg
│   └── music.ogg
│
├── src/
│   ├── alien.cpp
│   ├── alien.hpp
│   ├── block.cpp
│   ├── block.hpp
│   ├── game.cpp
│   ├── game.hpp
│   ├── laser.cpp
│   ├── laser.hpp
│   ├── main.cpp
│   ├── mystery.cpp
│   ├── mystery.hpp
│   ├── obstacle.cpp
│   ├── obstacle.hpp
│   ├── spaceship.cpp
│   └── spaceship.hpp
│
├── highscore.txt
├── Makefile
└── README.md
```

---

## ⚙️ Requirements

To build the project from source, you need:

- Windows
- C++ compiler with `g++`
- `mingw32-make`
- raylib
- raylib development files and libraries

This project was developed using the **raylib W64Devkit** environment on Windows.

---

## 🛠️ Setup on Windows

### 1. Install raylib

Install raylib together with the W64Devkit/MinGW development environment.

A typical installation used by this project is:

```text
C:/raylib/
```

The project expects the raylib library at:

```text
C:/raylib/raylib
```

If your raylib installation is somewhere else, change the `RAYLIB_PATH` value in the build command.

---

### 2. Clone the repository

```bash
git clone <your-repository-url>
cd shooting-game
```

Or download the project as a ZIP and extract it.

---

### 3. Build the game

From the project root, run:

```bash
C:/raylib/w64devkit/bin/mingw32-make.exe RAYLIB_PATH=C:/raylib/raylib PROJECT_NAME=game OBJS=src/*.cpp
```

If `mingw32-make` is already available in your PATH, you can use:

```bash
mingw32-make RAYLIB_PATH=C:/raylib/raylib PROJECT_NAME=game OBJS=src/*.cpp
```

For a debug build:

```bash
mingw32-make RAYLIB_PATH=C:/raylib/raylib PROJECT_NAME=game OBJS=src/*.cpp BUILD_MODE=DEBUG
```

---

## ▶️ Running the Game

After a successful build, run:

```bash
./game.exe
```

On Windows, you can also double-click the generated executable.

### Important

The game loads its graphics, sounds, font, and high-score file using relative paths:

```text
Graphics/
Sounds/
Font/
highscore.txt
```

Therefore, **run the executable from the project root directory** so that these files can be found correctly.

---

## 🧠 How the Game Works

The game is organized into several classes, each responsible for a different part of the gameplay.

### `Game`

The central game manager.

It handles:

- Game initialization
- Updating game objects
- Drawing objects
- Alien movement
- Alien shooting
- Collision detection
- Lives
- Score
- High score
- Game Over
- Game reset

### `Spaceship`

Represents the player.

It handles:

- Left/right movement
- Laser firing
- Player position
- Player collision rectangle
- Player-related audio and textures

### `Alien`

Represents the invading enemies.

There are three alien types:

| Alien | Score |
|---|---:|
| Type 1 | 100 |
| Type 2 | 200 |
| Type 3 | 300 |

The aliens move horizontally and move downward when they reach the edge of the play area.

### `Laser`

Represents both player and alien projectiles.

Lasers:

- Move vertically
- Have a direction/speed
- Become inactive when leaving the play area
- Participate in collision detection

### `Obstacle`

Creates the defensive barriers between the player and aliens.

The barriers are constructed from small `Block` objects, allowing individual blocks to be destroyed when hit by lasers.

### `MysteryShip`

A special ship that periodically crosses the screen.

Destroying it gives:

```text
+500 points
```

---

## 🏆 Scoring

| Target | Points |
|---|---:|
| Alien Type 1 | 100 |
| Alien Type 2 | 200 |
| Alien Type 3 | 300 |
| Mystery Ship | 500 |

The highest score is stored in:

```text
highscore.txt
```

When a new high score is achieved, the file is automatically updated.

---

## 🔊 Assets

The project uses custom game assets for:

- Spaceship
- Aliens
- Mystery ship
- Background music
- Laser sound
- Explosion sound
- Arcade-style font

All required assets are included in the repository under:

```text
Graphics/
Sounds/
Font/
```

---

## 🧹 Cleaning the Build

To remove generated build files, use:

```bash
mingw32-make clean
```

> The exact behavior of `clean` depends on the platform and Makefile configuration.

---

## 🚧 Possible Future Improvements

Some ideas for extending the project:

- [ ] Multiple levels
- [ ] Increasing alien speed as the game progresses
- [ ] Increasing difficulty between levels
- [ ] Pause functionality
- [ ] Start menu
- [ ] Settings menu
- [ ] Better particle/explosion effects
- [ ] Power-ups
- [ ] Different weapons
- [ ] Boss enemies
- [ ] Local leaderboard
- [ ] Improved animations
- [ ] Cross-platform build configuration
- [ ] Controller support

---

## 📚 What I Learned

Building this game was a hands-on way to understand how the different pieces of a game fit together.

Some of the biggest areas of learning were:

- Structuring a larger C++ project across multiple files
- Designing classes for individual game entities
- Managing vectors of dynamically changing game objects
- Detecting and resolving collisions
- Handling game state and restart logic
- Working with external assets
- Managing audio and textures
- Persisting data using file I/O
- Building a C++ project using Make and raylib

---

## 👩‍💻 Author

**Pranshi Mittal**

**Linkedin**: www.linkedin.com/in/pranshimittal

Built as a personal C++ game-development project while learning raylib and exploring game development.

---

## 📄 License

This project is intended for learning and personal use.

The project uses raylib and third-party game assets. Please check the respective licenses of any assets or libraries before redistributing the project commercially.
