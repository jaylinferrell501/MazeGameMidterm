#pragma once
#include <string>

class Tile
{
	char mTile;
	std::string mTileType;

	
public:
	Tile() = default;
	Tile(char tile, std::string tileType);
	Tile Tiles(const char* fileName) const;
	char GetTile() const { return mTile; }
	std::string GetTileType() { return mTileType; }
	void SetTileType(std::string aTileType) { mTileType = aTileType; }
	void SetTile(char aTile) { mTile = aTile; }
};

