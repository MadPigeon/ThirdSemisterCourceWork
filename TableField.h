#pragma once

#include <vector>
#include "IField.h"
#include "TableCell.h"

using namespace std;


class TableField:public IField
{
	vector <TableCell> cells;
	vector <TableCell> result;

	ICell * number_to_cell(int number);
	public:
		
		TableField();
		~TableField();
	// ����������, ���� ������ ������ �����, ���� ����� ������������ � direction(>= ���������� �� ������)
		vector <ICell*> possible_directions(ICell* current_unit_position);
		vector<TableCell> return_cells();
		TableCell &complete_move(int points,TableCell *unit);//����������� �����
};
































