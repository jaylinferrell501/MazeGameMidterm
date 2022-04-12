#include "Player.h"

Player::Player()
	:m_Symbol('0')
	, m_PlayerX(1)
	, m_PlayerY(1)
	, m_LastPositionX(2)
	, m_LastPositionY(1)
{
}

void Player::CheckLastPosition()
{
	SetLastY(GetY());
	SetLastX(GetX());
}
