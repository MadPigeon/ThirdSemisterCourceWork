#include "MUnit.h"
#include "MField.h"
#include <vector>

MUnit:: MUnit(vector <MCell>  cells)
{
	stay_here=&cells[0];	
}

const ICell & MUnit:: get_coords() const
{
	
	return *stay_here;
}

MCell * MUnit:: current_cell(vector <MCell> cells, int move)
{
	int id;
	id=stay_here->get_id();
	stay_here=&cells[id+move];
	return stay_here;
}