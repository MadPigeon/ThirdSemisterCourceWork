#pragma once
#include "SpaceField.h"
#include "SpaceCell.h"
#include "SpacePlayer.h"
#include "IUnit.h"

class SpaceUnit: public IUnit
{
	int cell_id;
public:
	SpaceUnit(int spawn_id);
	const int & get_coords() const;
};