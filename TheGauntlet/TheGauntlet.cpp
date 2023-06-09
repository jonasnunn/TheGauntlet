#include <iostream>
#include <Windows.h>
#include  "Game.h"
using namespace std;

#define WIDTH 100
#define HEIGHT 25

// Hides the curson to make the screen look better.
void HideCursor()
{
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 100;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

int main()
{
    srand(time(0));
    HideCursor();
    Game g(WIDTH, HEIGHT); // Call the game function constuctor with the width and height to be used.
    g.runGame(); // Calls the game method that runs the game.
}