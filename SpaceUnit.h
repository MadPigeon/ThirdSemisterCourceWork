#pragma once
#include "SpaceCell.h"
#include "IUnit.h"

class SpaceUnit: public IUnit
{
	int cell_id;
public:
	SpaceUnit();
	SpaceUnit(int spawn_id);
	const int & get_coords() const;
};