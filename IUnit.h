// �����, ������������� ������. ��� ����� ���� ����, � ����� ���� � �� ����, �� ����� ���� �����.
#pragma once

#include "ICell.h"

class IUnit
{
public:
	virtual const int & get_coords() const = 0;
};
