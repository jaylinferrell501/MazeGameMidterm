#include "Tile.h"
#include<fstream>
#include <iostream>
#include <string>

Tile::Tile(char tile, std::string tileType)
	:mTile(tile)
	, mTileType(tileType)

{
}

Tile Tile::Tiles(const char* fileName) const
{
	std::ifstream tileFile(fileName);
	Tile NewTile;
	if (tileFile.is_open())
	{
		std::string fileLine;
		getline(tileFile, fileLine);
		NewTile.SetTileType(fileLine);
		std::string nextLine;
		getline(tileFile, nextLine);
		NewTile.SetTile(nextLine[0]);
		
		tileFile.close();
	}
	return NewTile;
}
