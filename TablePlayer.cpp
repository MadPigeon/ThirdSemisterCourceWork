#include <string>
#include <vector>
#include "TablePlayer.h"

using namespace std;

TablePlayer::TablePlayer(): Name("Default_Name"), player_ID(666){}

TablePlayer::TablePlayer(int player_id, string name,TableCell *cells): player_ID(player_id), Name(name)
{
  units=(new TableUnit(cells));//начальное положение фишки
  
  flag=1;
}

TablePlayer::~TablePlayer(){}

const string & TablePlayer::get_name() const
{
  return Name;
}

const int & TablePlayer::get_id() const
{
	return player_ID;
}

void TablePlayer::make_move(int points)//ход, движение фишки
{
	field->complete_move(points,units->get_cell());
}

bool TablePlayer::get_flag()
{
	return flag;
}

bool TablePlayer::change_flag()
{
	return 1;
}