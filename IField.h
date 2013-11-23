// ����� IField, ��� ���������� ����������(���� ������ ICell).
// ����� ����� ����������� ����������� ������
#pragma once

#include "ICell.h"

class IEvent
{
public:
	// ����������, ���� ������ ������ �����, ���� ����� ������������ � direction(>= ���������� �� ������)
	virtual ICell next(ICell direction, ICell current_unit_position) = 0;
};