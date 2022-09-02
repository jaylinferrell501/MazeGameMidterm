#pragma once
#include "Tile.h"

class Player
{
protected:
	char m_Symbol;
	int mHealth;
	int mScore;
	int mMoveCount;
	int mMoney;
	int mMimicDetectorRange;
	int m_PlayerX;
	int m_PlayerY;
	int m_LastPositionX;
	int m_LastPositionY;
public:
	Player();
	char GetSymbol() const { return m_Symbol; }
	int GetX() const { return m_PlayerX; }
	int GetY() const { return m_PlayerY; }
	int GetMimicDetectorRange() const { return mMimicDetectorRange; }
	void SetX(int newX) { m_PlayerX = newX; }
	void SetY(int newY) { m_PlayerY = newY; }
	int GetMoney() { return  mMoney; }
	void SetMoney(int money) { mMoney = money; }
	int GetHealth() const { return mHealth; }
	void SetHealth(int health) { mHealth = health; }
	int GetMoveCount() const { return mMoveCount; }
	int GetScore() const { return mScore; }
	int GetMoney() const { return mMoney; }
	void SetMoveCount(int count) { mMoveCount = count; }
	void SetScore(int score) { mScore = score; }

	int GetLastX() const { return m_LastPositionX; }
	int GetLastY() const { return m_LastPositionY; }
	void SetLastX(int LastX) { m_LastPositionX = LastX; }
	void SetLastY(int LastY) { m_LastPositionY = LastY; }
	void CheckLastPosition();
};

