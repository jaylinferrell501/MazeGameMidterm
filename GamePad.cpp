#include "GamePad.h"

#include <conio.h>
#include <iostream>


int GamePad::Controller(Player* pPlayer, GameBoard* pGBoard, Tile floorTile, Tile exitTile, Tile mimicTile, Tile BombTile, Tile moneyTile, Tile surpriseTile)
{
	

	const char keyPressed = _getch();
	if (keyPressed == 'd')
	{
		PlayerInfo(pPlayer);
		if (pPlayer->GetX() + 1 <= 39)
		{
			if (pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()).GetTileType() == floorTile.GetTileType())
			{
				pPlayer->SetX(pPlayer->GetX() + 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()).GetTileType() == mimicTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()).GetTile() == mimicTile.GetTile())
			{
				pPlayer->SetHealth(pPlayer->GetHealth() - 2);
				pPlayer->SetScore(pPlayer->GetScore() - 20);
				pPlayer->SetX(pPlayer->GetX() + 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()).GetTileType() == BombTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()).GetTile() == BombTile.GetTile())
			{
				pPlayer->SetHealth(pPlayer->GetHealth() - 2);
				pPlayer->SetScore(pPlayer->GetScore() - 20);
				pPlayer->SetX(pPlayer->GetX() + 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()).GetTileType() == moneyTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()).GetTile() == moneyTile.GetTile())
			{
				pPlayer->SetScore(pPlayer->GetScore() + rand() % 400);
				pPlayer->SetMoney(pPlayer->GetMoney() + rand() % 150);
				pPlayer->SetX(pPlayer->GetX() + 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()).GetTileType() == exitTile.GetTileType())
			{
				return 2;
			}
		}
		
	}
	else if (keyPressed == 's')
	{
		PlayerInfo(pPlayer);
		if (pPlayer->GetY() + 1 <= 19)
		{
			if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() + 1).GetTileType() == floorTile.GetTileType())
			{
				pPlayer->SetY(pPlayer->GetY() + 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() + 1).GetTileType() == mimicTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() + 1).GetTile() == mimicTile.GetTile())
			{
				pPlayer->SetHealth(pPlayer->GetHealth() - 2);
				pPlayer->SetScore(pPlayer->GetScore() - 20);
				pPlayer->SetY(pPlayer->GetY() + 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() + 1).GetTileType() == BombTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() + 1).GetTile() == BombTile.GetTile())
			{
				pPlayer->SetHealth(pPlayer->GetHealth() - 2);
				pPlayer->SetScore(pPlayer->GetScore() - 20);
				pPlayer->SetY(pPlayer->GetY() + 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() + 1).GetTileType() == moneyTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() + 1).GetTile() == moneyTile.GetTile())
			{
				pPlayer->SetScore(pPlayer->GetScore() + rand() % 400);
				pPlayer->SetMoney(pPlayer->GetMoney() + rand() % 150);
				pPlayer->SetY(pPlayer->GetY() + 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() + 1).GetTileType() == exitTile.GetTileType())
			{
				return 2;
			}
		}
	}
	else if (keyPressed == 'w')
	{
		PlayerInfo(pPlayer);
		if (pPlayer->GetY() - 1 >= 0)
		{
			if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() - 1).GetTileType() == floorTile.GetTileType())
			{
				pPlayer->SetY(pPlayer->GetY() - 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() - 1).GetTileType() == mimicTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() - 1).GetTile() == mimicTile.GetTile())
			{
				pPlayer->SetHealth(pPlayer->GetHealth() - 2);
				pPlayer->SetScore(pPlayer->GetScore() - 20);
				pPlayer->SetY(pPlayer->GetY() - 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() - 1).GetTileType() == BombTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() - 1).GetTile() == BombTile.GetTile())
			{
				pPlayer->SetHealth(pPlayer->GetHealth() - 2);
				pPlayer->SetScore(pPlayer->GetScore() - 20);
				pPlayer->SetY(pPlayer->GetY() - 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() - 1).GetTileType() == moneyTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() - 1).GetTile() == moneyTile.GetTile())
			{
				pPlayer->SetScore(pPlayer->GetScore() + rand() % 400);
				pPlayer->SetMoney(pPlayer->GetMoney() + rand() % 150);
				pPlayer->SetY(pPlayer->GetY() - 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()).GetTileType() == exitTile.GetTileType())
			{
				return 2;
			}
		}
	}
	else if (keyPressed == 'a')
	{
		PlayerInfo(pPlayer);
		if (pPlayer->GetX() - 1 >= 0)
		{
			if (pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()).GetTileType() == floorTile.GetTileType())
			{
				pPlayer->SetX(pPlayer->GetX() - 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()).GetTileType() == mimicTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()).GetTile() == mimicTile.GetTile())
			{
				pPlayer->SetHealth(pPlayer->GetHealth() - 2);
				pPlayer->SetScore(pPlayer->GetScore() - 20);
				pPlayer->SetX(pPlayer->GetX() - 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()).GetTileType() == BombTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()).GetTile() == BombTile.GetTile())
			{
				pPlayer->SetHealth(pPlayer->GetHealth() - 2);
				pPlayer->SetScore(pPlayer->GetScore() - 20);
				pPlayer->SetX(pPlayer->GetX() - 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()).GetTileType() == moneyTile.GetTileType() && pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()).GetTile() == moneyTile.GetTile())
			{
				pPlayer->SetScore(pPlayer->GetScore() + rand() % 400);
				pPlayer->SetMoney(pPlayer->GetMoney() + rand() % 150);
				pPlayer->SetX(pPlayer->GetX() - 1);
			}
			else if (pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()).GetTileType() == exitTile.GetTileType())
			{
				return 2;
			}
		}
		
		
	}
	else if (keyPressed == 'e')
	{
		for (int RangeX = -1; RangeX <= 1; RangeX++)
		{
			for (int RangeY = -1; RangeY <= 1; RangeY++)
			{
				if (pPlayer->GetX() + RangeX >= 0 && pPlayer->GetY() + RangeY >= 0 && pPlayer->GetX() + RangeX <= 39 && pPlayer->GetY() + RangeY <= 19)
				{
					if (pGBoard->GetBoardPosition(pPlayer->GetX() + RangeX, pPlayer->GetY() + RangeY).GetTileType() == mimicTile.GetTileType())
					{
						pGBoard->SetBoardPosition(BombTile, RangeX + pPlayer->GetX(), RangeY + pPlayer->GetY());
					}
					else if (pGBoard->GetBoardPosition(pPlayer->GetX() + RangeX, pPlayer->GetY() + RangeY).GetTileType() == surpriseTile.GetTileType())
					{
						pGBoard->SetBoardPosition(moneyTile, RangeX + pPlayer->GetX(), RangeY + pPlayer->GetY());
					}
				}

				
			}
		}
	}
	return 0;
}

void GamePad::PlayerInfo(Player* pPlayer)
{
	pPlayer->SetMoveCount(pPlayer->GetMoveCount() + 1);
	pPlayer->SetScore(pPlayer->GetScore() - 10);
}
