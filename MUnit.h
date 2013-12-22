#pragma once//
#include "IUnit.h"
#include "MCell.h"
#include <vector>

class MUnit: public IUnit
{
	MCell * stay_here;//фишка содержит клетку, на которой стоит
public:
	MUnit(vector <MCell>  cells);//создаём фишку игрока
	const ICell & get_coords() const;//получаем текущие координаты фишки
	MCell * current_cell(vector <MCell> cells, int move);
};