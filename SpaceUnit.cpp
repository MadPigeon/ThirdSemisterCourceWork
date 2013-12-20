#include <iostream>
#include <vector>

#include "SpaceUnit.h"

using namespace std;

SpaceUnit::SpaceUnit(int spawn_id)
{
	unit_cell = &field->spawn_location(spawn_id);
}
