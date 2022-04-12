#include "GamePad.h"

#include <conio.h>
#include <iostream>


int GamePad::Controller(Player* pPlayer, GameBoard* pGBoard, Enemy* pEnemy1, Enemy* pEnemy2)
{
	char keyPressed = _getch();
	if (keyPressed == 'd')
	{
		pEnemy1->Warp(1 + rand() % 10, 3);
		pEnemy2->Warp(7 + rand() % 12, 8);

		if(pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()) == '.' || pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()) == '_')
		{
			pPlayer->SetX(pPlayer->GetX() + 1);
			pGBoard->SetWidth(pGBoard->GetWidth() + 1);
		}
		else if (pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()) == '^')
		{
			return 1;
		}
		else if (pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()) == '$')
		{
			return 2;
		}
	}
	if (keyPressed == 's')
	{
		pEnemy1->Warp(1 + rand() % 10, 3);
		pEnemy2->Warp(7 + rand() % 12, 8);

		if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() + 1) == '.' || pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()) == '_')
		{
			pPlayer->SetY(pPlayer->GetY() + 1);
			pGBoard->SetLength(pGBoard->GetLength() + 1);
		}
		else if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() + 1) == '^')
		{
			return 1;
		}
		
	}
	if (keyPressed == 'w')
	{
		pEnemy1->Warp(1 + rand() % 8, 3);
		pEnemy2->Warp(7 + rand() % 12, 8);

		if (pGBoard->GetBoardPosition(pPlayer->GetX() , pPlayer->GetY() - 1) == '.' || pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()) == '_')
		{
			pPlayer->SetY(pPlayer->GetY() - 1);
			pGBoard->SetLength(pGBoard->GetLength() - 1);
		}
		else if (pGBoard->GetBoardPosition(pPlayer->GetX(), pPlayer->GetY() - 1) == '^')
		{
			return 1;
		}
		
	}
	if (keyPressed == 'a')
	{
		pEnemy1->Warp(1 + rand() % 10, 3);
		pEnemy2->Warp(7 + rand() % 12, 8);
		
		if (pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()) == '.' || pGBoard->GetBoardPosition(pPlayer->GetX() + 1, pPlayer->GetY()) == '_')
		{
			pPlayer->SetX(pPlayer->GetX() - 1);
			pGBoard->SetWidth(pGBoard->GetWidth() - 1);
		}
		else if (pGBoard->GetBoardPosition(pPlayer->GetX() - 1, pPlayer->GetY()) == '^')
		{
			return 1;
		}
		
	}
	return 0;
}
