#pragma once
#include "strategy.h"
#include "Tile.h"

class Appearance : public strategy
{
public:
	Tile ExecuteStrategy(Tile aTile) override;
};

