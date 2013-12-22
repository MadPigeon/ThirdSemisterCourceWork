#pragma once//
#include "IUnit.h"
#include "MCell.h"
#include <vector>

class MUnit: public IUnit
{
	MCell * stay_here;//����� �������� ������, �� ������� �����
public:
	MUnit(vector <MCell>  cells);//������ ����� ������
	const ICell & get_coords() const;//�������� ������� ���������� �����
	MCell * current_cell(vector <MCell> cells, int move);
};