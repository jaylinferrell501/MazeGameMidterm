#pragma once
class Player
{
protected:
	char m_Symbol;
	int m_PlayerX;
	int m_PlayerY;
	int m_LastPositionX;
	int m_LastPositionY;
public:
	Player();
	char GetSymbol() { return m_Symbol; }
	int GetX() { return m_PlayerX; }
	int GetY() { return m_PlayerY; }
	void SetX(int newX) { m_PlayerX = newX; }
	void SetY(int newY) { m_PlayerY = newY; }

	int GetLastX() { return m_LastPositionX; }
	int GetLastY() { return m_LastPositionY; }
	void SetLastX(int LastX) { m_LastPositionX = LastX; }
	void SetLastY(int LastY) { m_LastPositionY = LastY; }
	void CheckLastPosition();
};

