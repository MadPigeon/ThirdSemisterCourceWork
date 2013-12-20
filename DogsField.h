#pragma once

#include <vector>
#include "IField.h"
#include "DogsCell.h"

using namespace std;


class DogsField:public IField
{
	vector <DogsCell> cells;


public:
	DogsField();
	// ����������, ���� ������ ������ �����, ���� ����� ������������ � direction(>= ���������� �� ������)
	vector <DogsCell> possible_directions(DogsCell current_unit_position);

};