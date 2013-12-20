// ‘ишка, принадлежаща€ игроку. ќна может быть одна, а может быть и не одна, по этому есть класс.
#pragma once

#include "ICell.h"

class IUnit
{
public:
	virtual const int & get_coords() const = 0;
};
