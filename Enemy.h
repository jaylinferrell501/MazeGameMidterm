#pragma once
#include "Player.h"

class Enemy : public Player
{private:

public:
	Enemy();
	void setEnemySymbol(char symbol);
	void Warp(int x, int y);
};

