#include "DogsCell.h"

using namespace std;

DogsCell::DogsCell(int current_cell,int path)
{
	number_id = current_cell;
	direction.push_back(path);
}

void DogsCell::add_direction(int dir)
{
	direction.push_back(dir);
}

const std::vector <int> & DogsCell::get_directions()const
{
	return direction;
}
const int & DogsCell::get_number()
{
	return number_id;
}