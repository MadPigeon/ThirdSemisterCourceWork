#include "TableField.h"
#include <iostream>
#include <vector>

using namespace std;

ICell * TableField::number_to_cell(int number)
{
	return &cells[number];
}

TableField::TableField()
{
	int number = 30, i;
	for (i = 0; i < number; i++)
	{
		cells.push_back(*(new TableCell(i, i+1)));
	}
	cells.push_back(*(new TableCell(number, number)));
}

TableField::~TableField()
{
	cout << "Поле уничтожено" << endl;
}

vector <ICell*> TableField::possible_directions(ICell* curr)
{
	vector <ICell *> result;
	result.push_back(number_to_cell(curr->get_directions()[0]));
	return result;
}

TableCell &TableField::complete_move(int points,TableCell *unit)
{

	int curr_pos=unit->get_numb_cell();

	int res=curr_pos+points;

	if(res<cells.size())
	{
		return cells[res];
	}

	return cells[2*cells.size()-res];
}

vector <TableCell> TableField::return_cells()
{
	return cells;
}
