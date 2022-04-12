#include "GameBoard.h"

#include <iostream>

#include "Enemy.h"
#include "Player.h"

GameBoard::GameBoard()
	:m_Board{ {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
		      {'#','.','.','.','.','.','.','.','.','#','#','#','#','#','#','#','#','#','#','#'},
		      {'#','.','#','#','#','#','#','.','#','#','.','.','.','.','.','#','#','#','#','#'},
		      {'#','.','.','.','.','.','.','.','.','.','.','#','#','#','.','#','#','#','#','#'},
		      {'#','#','#','#','.','#','#','.','#','#','.','#','#','#','.','#','#','#','#','#'},
		      {'#','#','#','#','.','#','#','.','#','#','.','.','.','.','.','.','#','.','$','#'},
		      {'#','#','#','#','.','#','#','.','#','#','#','#','#','#','#','#','#','.','#','#'},
		      {'#','#','#','#','.','#','#','.','#','#','#','#','#','#','#','#','#','.','#','#'},
		      {'#','#','#','#','.','#','#','.','.','.','.','.','.','.','.','.','.','.','#','#'},
		      {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}}

	,m_FogOfWar{ {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
				 {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
			     {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
			     {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
				 {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
				 {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
				 {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
				 {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
				 {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
				 {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}, }
	,m_Length(4)
	,m_Width(4)
{
}

void GameBoard::DrawMaze(Player* pPlayer, Enemy* pEnemy1, Enemy* pEnemy2)
{
	UpdateMaze(pPlayer, pEnemy1, pEnemy2);
	
	for (int i = 0; i < m_Length; i++)
	{
		for(int j = 0; j < m_Width; j++)
		{
			std::cout << m_Board[i][j];
		}
		std::cout << "" << std::endl;
	}

	pPlayer->CheckLastPosition();
	pEnemy1->CheckLastPosition();
	
}

void GameBoard::UpdateMaze(Player* pPlayer, Enemy* pEnemy1, Enemy* pEnemy2)
{
	if (pPlayer->GetY() == pPlayer->GetLastY() && pPlayer->GetX() == pPlayer->GetLastX())
	{
		m_Board[pPlayer->GetY()][pPlayer->GetX()] = pPlayer->GetSymbol();
	}
	else
	{
		m_Board[pPlayer->GetY()][pPlayer->GetX()] = pPlayer->GetSymbol();
		m_Board[pPlayer->GetLastY()][pPlayer->GetLastX()] = '.';
	}

	if (pEnemy1->GetY() == pEnemy1->GetLastY() && pEnemy1->GetX() == pEnemy1->GetLastX())
	{
		m_Board[pEnemy1->GetY()][pEnemy1->GetX()] = pEnemy1->GetSymbol();
	}
	else
	{
		m_Board[pEnemy1->GetY()][pEnemy1->GetX()] = pEnemy1->GetSymbol();
		m_Board[pEnemy1->GetLastY()][pEnemy1->GetLastX()] = '.';
	}

	if (pEnemy2->GetY() == pEnemy2->GetLastY() && pEnemy2->GetX() == pEnemy2->GetLastX())
	{
		m_Board[pEnemy2->GetY()][pEnemy2->GetX()] = pEnemy2->GetSymbol();
	}
	else
	{
		m_Board[pEnemy2->GetY()][pEnemy2->GetX()] = pEnemy2->GetSymbol();
		m_Board[pEnemy2->GetLastY()][pEnemy2->GetLastX()] = '.';
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



