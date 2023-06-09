#include "Input.h"

// Gets the input from the user.
void Input::getInput()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'w':
			dir = UP;
			break;
		case 'a':
			dir = LEFT;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'd':
			dir = RIGHT;
			break;
		default:
			break;
		}
	}
}

// Moves the player around based on the input.
void Input::movePlayer(Player& player)
{
	switch (dir)
	{
	case UP:
		player.moveUp();
		break;
	case LEFT:
		player.moveLeft();
		break;
	case DOWN:
		player.moveDown();
		break;
	case RIGHT:
		player.moveRight();
		break;
	default:
		break;
	}
}
