#include "game.hpp"

#include <stdio.h>

void Game::init() {
  if (SDL_Init(SDL_INIT_VIDEO) == -1) {
    printf("SDL could not be initialised: %s \n", SDL_GetError());
    exit(-1);
  }

  window =
      SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED,
                       SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
  if (window == NULL) {
    printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
    exit(-1);
  }

  screenSurface = SDL_GetWindowSurface(window);
}

void Game::gameLoop() {
  while (true) {
    while (SDL_PollEvent(&event)) {
      gameInput.handleInput(event);
    }

		update();
    drawAllEntities();
  }
}

void Game::drawAllEntities() {
  // Fill the surface white
  SDL_FillRect(screenSurface, NULL,
               SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

  // Update the surface
  SDL_UpdateWindowSurface(window);
}
