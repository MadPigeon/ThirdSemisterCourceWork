// Класс IField, где содержатся координаты(туча клеток ICell).
// также здесь учитывается направление клеток
#pragma once

#include "ICell.h"

class IEvent
{
public:
	// Показывает, куда должна встать фишка, если игрок направляется в direction(>= расстоянию на кубике)
	virtual ICell next(ICell direction, ICell current_unit_position) = 0;
};