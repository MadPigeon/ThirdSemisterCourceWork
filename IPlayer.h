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
	IPlayer(int player_id, string name){};
	IPlayer(){};
	// ���������� ��� ������
	virtual const string & get_name() const { return "";};
	virtual const int & get_id() const { return 0;};
};


