#pragma once

#include <vector>
#include "IField.h"
#include "DogsCell.h"

using namespace std;


class DogsField:public IField
{
	vector <DogsCell> cells;


public:
	DogsField();
	// Показывает, куда должна встать фишка, если игрок направляется в direction(>= расстоянию на кубике)
	vector <DogsCell> possible_directions(DogsCell current_unit_position);

};