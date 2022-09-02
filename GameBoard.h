#pragma once
#include "Appearance.h"
#include "BehaviorStrategy.h"
#include "Player.h"

class GameBoard
{
private:
	Tile m_Board[20][40]; // 2d Array
	Tile mTile;
	int m_Length;
	int m_Width;
	char test = '#';
	Appearance mTileAppearance;
	BehaviorStrategy mTileBehavior;

public:
	GameBoard();
	void MakeMap(Player* pPlayer, Tile& aTile);
	void DrawMap(Player* pPlayer, const Tile& floorTile, const Tile& mimicTile, const Tile& BombTile);
	void UpdateMap(const Player* pPlayer, const Tile& floorTile, const Tile& mimicTile, const Tile& BombTile);
	int GetWidth() const { return m_Width; }
	int GetLength() const { return m_Length; }
	void SetBoardPosition(Tile tile, int x, int y) { m_Board[y][x] = tile; }
	void SetWidth(int newWidth);
	void SetLength(int newLength);

	Tile GetBoardPosition(int x, int y) const { return m_Board[y][x]; }
};

