// MazeGameMidterm.cpp
// Jaylin Ferrell

#include <iostream>
#include <conio.h>
#include "Player.h"
#include "GameBoard.h"
#include "GamePad.h"
#include <ctime>

#include "UI.h"

int main()
{
    srand(time(nullptr));

#pragma region Setting
    Tile GameBoardTiles;
    Tile Floor = GameBoardTiles.Tiles("FloorTile.txt");
    Tile Money = GameBoardTiles.Tiles("MoneyTile.txt");
    Tile Mimic = GameBoardTiles.Tiles("MimicTile.txt");
    Tile Exit = GameBoardTiles.Tiles("ExitTile.txt");
    Tile Bomb = GameBoardTiles.Tiles("BombTile.txt");
    Tile Surprise = GameBoardTiles.Tiles("Surprise.txt");

    GameBoard BombGame;
    GamePad gamePad;
    Player player;
    UI playerUi;
#pragma endregion
    playerUi.PrintUi(&player);
    BombGame.MakeMap(&player, GameBoardTiles);
    BombGame.DrawMap(&player, Floor, Mimic, Bomb);
    const char input = _getch();
    while (input != 'q')
    {
        
	    constexpr int win = 2;
	    constexpr int lose = 1;
	    int controller = GamePad::Controller(&player, &BombGame,Floor,Exit,Mimic,Bomb,Money,Surprise);
        if (player.GetHealth() == 0)
        {
            controller = lose;
        }
        system("CLS");
        if (controller == lose)
        {
            std::cout << "YOU DIED" << std::endl;
            break;
        }
        else if (controller == win)
        {
            std::cout << "YOU WIN $$$$$$$" << std::endl;
            std::cout << "Your final score is " << player.GetScore() << std::endl;

            std::cout << "                                 _       " << std::endl;
            std::cout << "                                | |      " << std::endl;
            std::cout << "  ___ ___  _ __   __ _ _ __ __ _| |_ ___ " << std::endl;
            std::cout << " / __/ _ \| '_ \ / _` | '__/ _` | __/ __|" << std::endl;
            std::cout << "| (_| (_) | | | | (_| | | | (_| | |_\__  "<< std::endl;

            break;
        }
        playerUi.PrintUi(&player);
        BombGame.DrawMap(&player, Floor, Mimic, Bomb);

    }

    return 0;
}


