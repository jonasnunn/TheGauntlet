#pragma once
#include <Windows.h>
#include <conio.h>
#include "Player.h"

class Input
{
private:
	enum direction { STOP = 0, UP, DOWN, LEFT, RIGHT };
	direction dir;

public:
	Input() : dir(STOP) {};
	
	// Gets the input from the user.
	void getInput();

	// Moves the player around based on the input.
	void movePlayer(Player& player);
};