#pragma once
#include "spritesheet.hpp"

class Entity {
private:
	Spritesheet spritesheet;

public:
	Entity(); // TODO: take an image string and set spritesheet
	~Entity();
};
