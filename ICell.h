// ����� ICell, ����� ��������� ����������� �� ������ ������ ��� ������ IEvent
#pragma once
#include <vector>
using namespace std;

class ICell
{
public:
	//���������� ���� �� ������ ������ ����� ����� �����
	virtual vector <int> possible_directions();
};