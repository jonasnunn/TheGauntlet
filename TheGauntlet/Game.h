#pragma once
#include <iostream>
#include <Windows.h>
#include "Game.h"
#include "Input.h"
#include "Player.h"
#include "Enemy.h"

using namespace std;

class Game
{
private: 
	int width;
	int height;
	int score = 0;
	int highScore = 0;

public:
	Game(int w, int h) : width(w), height(h) {};

	// Initializes the needed variables and contains the main game loop.
	void runGame();

	// Updates the score everytime the player survies another frame.
	void updateScore();

	// Check to see if an enemy is present at the passed in x and y values.
	bool isEnemyPresent(int x, int y, Enemy(&e)[50]);

	// Checks to see if the player has collided with the wall or an enemy.
	void checkCollison(Player& p, Enemy(&e)[50]);

	// Draw everything
	void drawGame(Player& p, Enemy (&e)[50]);

};