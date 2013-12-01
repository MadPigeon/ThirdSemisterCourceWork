// ����� IField, ��� ���������� ����������(���� ������ ICell).
// ����� ����� ����������� ����������� ������
#pragma once

#include <vector>

#include "ICell.h"

class IField
{
public:
	// ����������, ���� ������ ������ �����, ���� ����� ������������ � direction(>= ���������� �� ������)
	virtual vector <ICell> possible_directions(ICell current_unit_position) = 0;
};