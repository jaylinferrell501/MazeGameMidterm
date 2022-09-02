#pragma once
#include "Tile.h"

class strategy
{
public:
	virtual Tile ExecuteStrategy(Tile aTile) = 0;
};

