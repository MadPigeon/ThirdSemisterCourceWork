#include "MField.h"
#include <algorithm>
MField::MField()
{
	
	int n=40;
	MCell *generate;
	generate=new MCell(0);
	cells.push_back(*generate);
	for(int i=1;i<=n;i++)
	{
		generate = new MCell(i);	
		cells.push_back(*generate);	
	}
	
	

}


ICell * MField :: numb_cell(int number)
{
	return &cells[number];
}

vector <ICell*> MField :: possible_directions(ICell* current_unit_position)
{
	vector <ICell*> pos_dir;
	pos_dir.push_back(numb_cell(current_unit_position->get_directions()[0]));
	return pos_dir;
}

vector <MCell>  MField:: return_cells ()
{
	return cells;
}


