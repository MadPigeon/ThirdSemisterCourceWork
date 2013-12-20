#pragma once
#include "SpaceField.h"
#include "SpaceCell.h"
#include "SpacePlayer.h"
#include "IUnit.h"

class SpaceUnit: public IUnit
{
	SpaceCell *unit_cell;
	SpaceField *field;
	SpacePlayer *player;
	vector <int> spawn_coords;
public:
	SpaceUnit(int spawn_id);
};