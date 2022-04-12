#pragma once
#include "GameBoard.h"
#include "Player.h"

class GamePad
{
private:

public:
	int Controller(Player* pPlayer, GameBoard* pGBoard, Enemy* pEnemy1, Enemy* pEnemy2);
};

