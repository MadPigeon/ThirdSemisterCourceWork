// ����� IPlayer, �������� ���������� � ������ � �������������� �� ������ �������
#pragma once

#include <string>
#include <vector>

using namespace std;

class IPlayer
{
public:
	// ���������� ��� ������
	virtual const string & get_name() const = 0;
};