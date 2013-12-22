#include "TableUnit.h"
#include <vector>

using namespace std;

TableUnit::TableUnit(TableCell *cells)
{
	step_chip=cells;
}

const ICell &TableUnit::get_coords()//положение фишки
{

	return *step_chip;

}

void TableUnit::step_unit (TableCell *step_next)//следующее положение фишки
{
  step_chip=step_next;

}

TableCell* TableUnit::get_cell()
{
	return step_chip;

}