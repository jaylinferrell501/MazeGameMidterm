// MazeGameMidterm.cpp
// Jaylin Ferrell

#include <iostream>
#include <conio.h>
#include "Player.h"
#include "GameBoard.h"
#include "GamePad.h"
#include <time.h>

int main()
{
    srand(time(nullptr));
    
    
#pragma region Setting
    GameBoard MazeGame;
    GamePad gamePad;

    Player player;

    Enemy enemy1;
    enemy1.SetY(3);
    enemy1.SetX(4);

    Enemy enemy2;
    enemy2.SetY(8);
    enemy2.SetX(7);
#pragma endregion
    MazeGame.DrawMaze(&player, &enemy1, &enemy2);
    const char input = _getch();

    while (input != 'q')
    {
	    constexpr int win = 2;
	    constexpr int lose = 1;
	    const int controller = gamePad.Controller(&player, &MazeGame, &enemy1, &enemy2);
        system("CLS");
        if (controller == lose)
        {
            std::cout << "YOU DIED" << std::endl;
            break;
        }
        else if (controller == win)
        {
            std::cout << "YOU WIN $$$$$$$" << std::endl;
            break;
        }
        MazeGame.DrawMaze(&player, &enemy1, &enemy2);
    }

    return 0;
}


