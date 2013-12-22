#include "MCell.h"

MCell::MCell(int number)
{
	id_number = number;
	directions.push_back(number);//направление к следующей клетке
	//free=0;
	
	event_ = *(new MEvent(number));
}
const vector <int> & MCell::get_directions() const
{
	return directions;
}
int MCell::get_id ()
{
	return id_number;
}
MEvent & MCell::get_event ()
{
	return event_;
}