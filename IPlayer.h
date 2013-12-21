// ����� IPlayer, �������� ���������� � ������ � �������������� �� ������ �������
#pragma once

#include <string>
#include <vector>

using namespace std;

class IPlayer
{
	int player_ID;
	string Name;
public:
	IPlayer();
	IPlayer(int player_id, string name);
	// ���������� ��� ������
	virtual const string & get_name() const = 0;
	virtual const int & get_id() const = 0;
};