#include "BehaviorStrategy.h"

Tile BehaviorStrategy::ExecuteStrategy(Tile aTile)
{
	if(mFloorTriggered && aTile.GetTileType() =="Floor")
	{
		aTile.SetTile('.');
		mFloorTriggered = false;
	}
	else if (mMimicTriggered && aTile.GetTileType() == "Mimic")
	{
		aTile.SetTile('#');
		mMimicTriggered = false;
	}
	else if (mBombTriggered && aTile.GetTileType() == "Bomb")
	{
		aTile.SetTile('#');
		mBombTriggered = false;
	}
	else if (mMoneyTriggered && aTile.GetTileType() == "Money")
	{
		aTile.SetTile('.');
		mMoneyTriggered = false;
	}
	return aTile;
}
