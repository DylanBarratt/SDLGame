#include "input.hpp"
#include <stdio.h>

void Input::handleInput(SDL_Event &e) {
  switch (e.type) {
  case SDL_QUIT:
    exit(0);
    break;

  case SDL_KEYDOWN:
    printf("Key press detected: %s\n", SDL_GetKeyName( e.key.keysym.sym ));
    break;

  case SDL_KEYUP:
    printf("Key release detected\n");
    break;

  default:
    break;
  }
}
