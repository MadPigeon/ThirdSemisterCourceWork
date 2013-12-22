#pragma once
#include "IUnit.h"
#include "ICell.h"
#include "TableCell.h"
using namespace std;


class TableUnit:public IUnit
{
	TableCell *step_chip;//фишка принадлежащ€€ игроку

public:
	void step_unit (TableCell *step_next);
	TableUnit( TableCell *cells);
	~TableUnit();
	const ICell & get_coords();
	TableCell *get_cell();
};