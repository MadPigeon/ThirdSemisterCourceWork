#pragma once

#include "ICell.h"

class IUnit
{
public:
	virtual const ICell & get_coords() const = 0;
};