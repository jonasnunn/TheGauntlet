#pragma once
#include <cstdlib>
#include <ctime>
using namespace std;
class Enemy
{
private:
	int enemyX;
	int enemyY;
	bool right = true;
	bool up = false;

public:

	Enemy() // Place the enemies at random spots on the screen.
	{
		enemyX = rand() % 100;
		enemyY = rand() % 25;
	}
	Enemy(int startX, int startY) // Not currently used but would allow enemies to be placed at set starting spots.
	{
		enemyX = startX;
		enemyY = startY;
	}
	
	// This controles the enemies movement around the screen. 
    // They will switch directions if they hit a wall.
	void movement();

	int GetY()
	{
		return enemyY;
	}
	int GetX()
	{
		return enemyX;
	}
	void moveUp()
	{
		enemyY--;
	}
	void moveDown()
	{
		enemyY++;
	}
	void moveLeft()
	{
		enemyX--;
	}
	void moveRight()
	{
		enemyX++;
	}
};

