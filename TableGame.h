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
	// ѕоказывает, какой игрок ходит
	IPlayer &get_player() ;
	// Ѕросок кости, производимый игроком
	IEvent &move() ;
	// ћожно ли ходить(нужно ли просить пользовател€ бросить кубик в начале хода)
	bool can_move();
	
};