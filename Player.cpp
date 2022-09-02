#include "Player.h"

Player::Player()

	: m_Symbol('@')
	,mHealth(10)
	,mScore(2000)
	,mMoveCount(0)
	,mMoney(0)
	,mMimicDetectorRange(8)
	, m_PlayerX(0)
	, m_PlayerY(0)
	, m_LastPositionX(1)
	, m_LastPositionY(0)
{
}

void Player::CheckLastPosition()
{
	SetLastY(GetY());
	SetLastX(GetX());
}
