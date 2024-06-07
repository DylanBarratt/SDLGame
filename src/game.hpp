#pragma once
#include "input.hpp"

#include <SDL2/SDL.h>

class Game {
private:
  SDL_Window *window = NULL;
  SDL_Surface *screenSurface = NULL;
  SDL_Event event;
  Input gameInput;

  void init();

public:
  Game() {
    init();
    printf("Game init\n");
  }

  ~Game() {
    // Properly shutdown SDL on program exit
    atexit(SDL_Quit);
  }

  void update();
	void gameLoop();
  void drawAllEntities();
};
