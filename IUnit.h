// ����� IUnit, ������ ���������� ��� ������ IPlayer � �������� �������� �� �������� ���� ����������.
#pragma once

class IUnit
{
};
#include "ICell.h"

class IUnit
{
	virtual const ICell get_coords() = 0;
};
