#include "Game.h"

// Initializes the needed variables and contains the main game loop.
void Game::runGame()
{
	Player player;
	Input input;
	Enemy enemies[50];
	bool run = true;

	// Main game loop 
	while (run)
	{
		input.getInput(); //Get the key pressed by the user.
		input.movePlayer(player); //Moves the player according to the key pressed.
		for (int i = 0; i < 50; i++)
		{
			enemies[i].movement();
		}
		drawGame(player, enemies); //Draws all of the game elements.
		checkCollison(player, enemies); // Check if the player has hit something.
		updateScore();
		Sleep(30);
		system("cls");
	}
}

// Updates the score everytime the player survies another frame.
void Game::updateScore()
{
	score += 5;
	if (score > highScore)
	{
		highScore = score;
	}
}
// Check to see if an enemy is present at the passed in x and y values.
bool Game::isEnemyPresent(int x, int y, Enemy(&e)[50])
{
	for (int i = 0; i < 50; i++)
	{
		if (e[i].GetX() == x && e[i].GetY() == y)
			return true;
	}
	return false;
}

// Checks to see if the player has collided with the wall or an enemy.
void Game::checkCollison(Player& p, Enemy(&e)[50])
{
	// Check for collision with enemy
	if (isEnemyPresent(p.GetX(), p.GetY(), e))
	{
		cout << "\nYOU LOSE";
		score = 0;
		Sleep(3000);
	}
	// Check for collison with walls
	if (p.GetX() == 0 || p.GetX() == width - 1 || p.GetY() == -1 || p.GetY() == height)
	{
		cout << "\nYOU LOSE";
		score = 0;
		Sleep(3000);
	}

}

// Draw everything
void Game::drawGame(Player& p, Enemy(&e)[50])
{
	// Print the top of the arena
	for (int i = 0; i < width; i++)
	{
		cout << "#";
	}

	cout << "   Score: " << score << endl;

	// Print the main part of the board, the player and enimies
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1)
			{
				cout << "#";
			}
			else if (j == p.GetX() && i == p.GetY())
			{
				cout << "O";
			}
			else if (isEnemyPresent(j, i, e))
			{
				cout << "X";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	// Print the bottom of the arena
	for (int i = 0; i < width; i++)
	{
		cout << "#";
	}
	cout << " High Score: " << highScore << endl;
}
