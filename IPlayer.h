// ����� IPlayer, �������� ���������� � ������ � �������������� �� ������ �������
#pragma once

#include <string>
#include <vector>

using namespace std;

class IPlayer
{
public:
	// ���������� ������ �������������� �������� ����� ������� ������
	virtual const vector<IEvent> & get_event_list() const = 0;
	// ���������� ��� ������
	virtual const string & get_name() const = 0;
};