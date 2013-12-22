#pragma once

#include <vector>
#include "IField.h"
#include "MCell.h"

using namespace std;

class MField: public IField
{
	vector <MCell> cells;
	
public:
	MField();
	
	ICell * numb_cell (int number);
	// ����������, ���� ������ ������ �����, ���� ����� ������������ � direction(>= ���������� �� ������)
	vector <ICell*> possible_directions(ICell* current_unit_position);
	vector <MCell>  return_cells ();
	
};