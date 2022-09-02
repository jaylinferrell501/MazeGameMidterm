#pragma once
#include "BehaviorStrategy.h"
#include "GameBoard.h"
#include "Player.h"

class GamePad
{
private:
	BehaviorStrategy* mBehaviorStrategy;
public:
	static int Controller(Player* pPlayer, GameBoard* pGBoard, Tile floorTile, Tile exitTile, Tile mimicTile, Tile BombTile, Tile moneyTile, Tile surpriseTile);
	static void PlayerInfo(Player* pPlayer);
};

