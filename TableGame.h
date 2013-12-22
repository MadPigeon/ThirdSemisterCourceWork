#pragma once
#include "IGame.h"
#include "TablePlayer.h"
#include "TableEvent.h"
#include <vector>

using namespace std;

class TableGame:public IGame
{
	int i;
	vector <TablePlayer> players;
	TableField *fields;

public:
	TableGame();
	~TableGame();
	// ����������, ����� ����� �����
	IPlayer &get_player() ;
	// ������ �����, ������������ �������
	IEvent &move() ;
	// ����� �� ������(����� �� ������� ������������ ������� ����� � ������ ����)
	bool can_move();
	
};