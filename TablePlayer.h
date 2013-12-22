#pragma once
#include "IPlayer.h"
#include "TableUnit.h"
#include "TableField.h"
#include <string>
#include <vector>

using namespace std;

class TablePlayer:public IPlayer
{
	TableField *field;
	TableUnit *units;
	int player_ID;
	string Name;
	bool flag;
public:
	TablePlayer();
	TablePlayer(int player_id, string name,TableCell *cells);
	~TablePlayer();
	// Возвращает имя игрока
	const string & get_name() const ;
	const int & get_id() const;
	void make_move(int points);
	bool get_flag();
	bool change_flag();
};