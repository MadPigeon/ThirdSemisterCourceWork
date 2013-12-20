#include <iostream>
#include <vector>

#include "SpaceUnit.h"

using namespace std;

SpaceUnit::SpaceUnit(int spawn_id): cell_id(spawn_id){}
const int & SpaceUnit::get_coords() const
{
	return cell_id;
}