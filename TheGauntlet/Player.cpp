#include "Player.h"

void Player::moveUp() //Moves the player up one line on the screen.
{
	playerY--;
}

void Player::moveDown() //Moves the player down one line on the screen.
{
	playerY++;
}

void Player::moveLeft() //Moves the player left one line on the screen.
{
	playerX--;
}

void Player::moveRight() //Moves the player right one line on the screen.
{
	playerX++;
}
