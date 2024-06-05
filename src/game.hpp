#pragma once
#include <SDL2/SDL.h>

class Game {
private:
  SDL_Window *window = NULL;
  SDL_Surface *screenSurface = NULL;

public:
	Game() {
    init();
    printf("Game init\n");
	}

	void draw();
	void init();
};
