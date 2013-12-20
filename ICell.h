// ����� ICell, ����� ��������� ����������� �� ������ ������ ��� ������ IEvent
#pragma once

#include <vector>

using namespace std;

class ICell
{
public:
	// ������ ������� ������, � ������� ����� ������� ���
	virtual const vector <int> & get_directions() const = 0;
};