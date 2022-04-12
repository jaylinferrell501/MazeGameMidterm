#pragma once
#include "Enemy.h"
#include "Player.h"

class GameBoard
{
private:
	char m_Board[10][20]; // 2d Array
	char m_FogOfWar[10][20];
	int m_Length;
	int m_Width;

public:
	GameBoard();
	void DrawMaze(Player* pPlayer, Enemy* pEnemy1, Enemy* pEnemy2);
	void UpdateMaze(Player* pPlayer, Enemy* pEnemy, Enemy* pEnemy2);
	int GetWidth() const { return m_Width; }
	int GetLength() const { return m_Length; }
	void SetWidth(int newWidth);
	void SetLength(int newLength);

	char GetBoardPosition(int x, int y) const { return m_Board[y][x]; }
};

