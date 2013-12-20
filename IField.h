// ����� IField, ��� ���������� ����������(���� ������ ICell).
// ����� ����� ����������� ����������� ������
#pragma once

#include <vector>

#include "ICell.h"

using namespace std;

class IField
{
public:
	// ����������, ���� ������ ������ �����, ���� ����� ������������ � direction(>= ���������� �� ������)
	virtual vector <ICell *> possible_directions(ICell current_unit_position) = 0;
};