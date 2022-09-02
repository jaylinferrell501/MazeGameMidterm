#include "GameBoard.h"

#include <conio.h>
#include <iostream>
#include<fstream>
#include "Player.h"

GameBoard::GameBoard()
	:m_Length(20)
	,m_Width(40)
{
}

void GameBoard::MakeMap(Player* pPlayer, Tile& aTile)
{
	const Tile Exit = aTile.Tiles("ExitTile.txt");
	const Tile Surprise = aTile.Tiles("Surprise.txt");
	const int x = rand() % 40;
	const int y = rand() % 20;

	for (int i = 0; i < m_Length; i++)
	{
		for(int j = 0; j < m_Width; j++)
		{
			m_Board[i][j] = mTileAppearance.ExecuteStrategy(aTile);
		}
	}
	m_Board[19][39] = Exit;
	m_Board[y][x] = Surprise;
}

void GameBoard::DrawMap(Player* pPlayer, const Tile& floorTile, const Tile& mimicTile, const Tile& BombTile)
{
	UpdateMap(pPlayer, floorTile, mimicTile, BombTile);
	for (int i = 0; i < m_Length; i++)
	{
		for (int j = 0; j < m_Width; j++)
		{
			std::cout << m_Board[i][j].GetTile();
		}
		std::cout << "" << std::endl;
	}
	pPlayer->CheckLastPosition();
}

void GameBoard::UpdateMap(const Player* pPlayer, const Tile& floorTile, const Tile& mimicTile, const Tile& BombTile)
{
	if (pPlayer->GetY() == pPlayer->GetLastY() && pPlayer->GetX() == pPlayer->GetLastX())
	{
		m_Board[pPlayer->GetY()][pPlayer->GetX()].SetTile(pPlayer->GetSymbol());
	}
	else
	{
		m_Board[pPlayer->GetY()][pPlayer->GetX()].SetTile(pPlayer->GetSymbol());

		if (m_Board[pPlayer->GetLastY()][pPlayer->GetLastX()].GetTileType() == "Mimic")
		{
			mTileBehavior.SetMimicTriggered(true);
			m_Board[pPlayer->GetLastY()][pPlayer->GetLastX()] = mTileBehavior.ExecuteStrategy(mimicTile);
		}

		else if (m_Board[pPlayer->GetLastY()][pPlayer->GetLastX()].GetTileType() == "Mimic")
		{
			mTileBehavior.SetMimicTriggered(true);
			m_Board[pPlayer->GetLastY()][pPlayer->GetLastX()] = mTileBehavior.ExecuteStrategy(mimicTile);
		}

		else if(m_Board[pPlayer->GetLastY()][pPlayer->GetLastX()].GetTileType() == "Bomb")
		{
			mTileBehavior.SetBombTriggered(true);
			m_Board[pPlayer->GetLastY()][pPlayer->GetLastX()] = mTileBehavior.ExecuteStrategy(BombTile);
		}
		else if (m_Board[pPlayer->GetLastY()][pPlayer->GetLastX()].GetTileType() == "Money")
		{
			mTileBehavior.SetMoneyTriggered(true);
			m_Board[pPlayer->GetLastY()][pPlayer->GetLastX()] = mTileBehavior.ExecuteStrategy(floorTile);
		}
		else
		{
			mTileBehavior.SetFloorTriggered(true);
			m_Board[pPlayer->GetLastY()][pPlayer->GetLastX()] = mTileBehavior.ExecuteStrategy(floorTile);
		}
		

	}
	
}

void GameBoard::SetWidth(int newWidth)
{
	m_Width = newWidth;
}

void GameBoard::SetLength(int newLength)
{
	m_Length = newLength;
}



