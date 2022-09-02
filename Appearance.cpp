#include "Appearance.h"

#include <iostream>

Tile Appearance::ExecuteStrategy(Tile aTile)
{
	const int tilePicker = rand() % 12;
	if (tilePicker == 1)
	{
		aTile = aTile.Tiles("BombTile.txt");
	}
	else if (tilePicker == 2)
	{
		aTile = aTile.Tiles("MoneyTile.txt");
	}
	else if (tilePicker == 3)
	{
		aTile = aTile.Tiles("MimicTile.txt");
	}
	else
	{
		aTile = aTile.Tiles("FloorTile.txt");
	}

	return aTile;
}

