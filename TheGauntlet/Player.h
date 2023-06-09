#pragma once
class Player
{

private:
	int playerX;
	int playerY;

public:

	Player() : playerX(50), playerY(12) {} // Default Constuctor starts player in middle of screen.

	Player(int startX, int startY) // Non currently used, allows the player to start at a specfied spot.
	{
		playerX = startX;
		playerY = startY;
	}
	
	int GetY()
	{
		return playerY;
	}
	int GetX() 
	{
		return playerX;
	}
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

};

