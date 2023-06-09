#include "Enemy.h"

// This controles the enimes movement arounf the screen. 
// They will switch directions if they hit a wall.
void Enemy::movement()
{
	if (enemyX == 98)
	{
		right = false;
	}
	if (enemyX == 1)
	{
		right = true;
	}
	if (enemyY == 25)
	{
		up = true;
	}
	if (enemyY == 1)
	{
		up = false;
	}
	if (right)
	{
		moveRight();
	}
	else
	{
		moveLeft();
	}
	if (up)
	{
		moveUp();
	}
	else
	{
		moveDown();
	}
}
