#pragma once

#include "MPlayer.h"
#include "IGame.h"
#include "MEvent.h"
#include "MCell.h"
#include <map>

class Monopoly:public IGame
{
	int amount; //количество игроков
	int	numb;//номер игрока, чей ход осуществляется (будет осуществляться?)
	MField * field;
	map <int, MPlayer> queue; //таблица с игроками (очередь)
public:
	Monopoly (); //констуктор, создающий игроков (обращается к констуктору MPlayer)
	IPlayer & get_player(); 
    // Бросок кости, производимый игроком
	int dice();
    IEvent &move();
	bool can_move();
	void complete_move ();

};