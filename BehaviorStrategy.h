#pragma once
#include "Player.h"
#include "strategy.h"

class BehaviorStrategy : public strategy
{
	bool mFloorTriggered = false;
	bool mMimicTriggered = false;
	bool mBombTriggered = false;
	bool mMoneyTriggered = false;
	bool mSupriseTriggered = false;
	
public:
	Player* m_pPlayer;
	Tile ExecuteStrategy(Tile aTile) override;
	void SetFloorTriggered(bool triggered) { mFloorTriggered = triggered; }
	void SetMimicTriggered(bool triggered) { mMimicTriggered = triggered; }
	void SetBombTriggered(bool triggered) { mBombTriggered = triggered; }
	void SetMoneyTriggered(bool triggered) { mMoneyTriggered = triggered; }
	void SetSupriseTriggered(bool triggered) { mSupriseTriggered = triggered; }
};

