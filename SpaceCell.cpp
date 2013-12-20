#include "SpaceCell.h"

SpaceCell::SpaceCell()
{
}

SpaceCell::SpaceCell(int id, int x, int y)
{
	_id = id;
	_x = x;
	_y = y;
}

SpaceCell::~SpaceCell()
{

}

void SpaceCell::ad_direction(int id)
{
	move_id.push_back(id);
}

int SpaceCell::get_id()
{
	return _id;
}

vector <int> SpaceCell::get_coords()
{
	vector <int> coords;
	coords.push_back(_x);
	coords.push_back(_y);
	return coords;
}

vector <int> SpaceCell::possible_directions()
{
	return move_id;
}

void SpaceCell::del_direction(int directions_id)
{
	int move_id_size = move_id.size();
	for(int i = 0; i < move_id_size; i++)
	{
		if(move_id[i] == directions_id)
		{
			move_id.erase(move_id.begin()+i);
			i +=5;//Для выхода из цикла
		}
	}
}