// �����, ������������� ������. ��� ����� ���� ����, � ����� ���� � �� ����, �� ����� ���� �����.
#pragma once

#include "ICell.h"

class IUnit
{
	virtual const ICell & get_coords() = 0;
};