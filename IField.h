// Класс IField, где содержатся координаты(туча клеток ICell).
// также здесь учитывается направление клеток
#pragma once

#include <vector>

#include "ICell.h"

class IField
{
public:
	// Показывает, куда должна встать фишка, если игрок направляется в direction(>= расстоянию на кубике)
	virtual vector <ICell> possible_directions(ICell current_unit_position) = 0;
};