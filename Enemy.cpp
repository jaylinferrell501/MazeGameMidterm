#include "Enemy.h"

Enemy::Enemy()
{
	m_Symbol = '^';
}

// Thinking AHead
void Enemy::setEnemySymbol(char symbol)
{
	m_Symbol = symbol;
}

void Enemy::Warp(int x, int y)
{
	SetLastY(GetY());
	SetLastX(GetX());
	SetY(y);
	SetX(x);
}
