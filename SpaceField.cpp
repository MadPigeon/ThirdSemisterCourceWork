#include "SpaceField.h"

SpaceField::SpaceField()
{
	int id = 0;
	size = 12;
	int i , j;
	cell = new SpaceCell*[size]; 
	for(i = 0; i < size; i++)
	{
		cell[i] = new SpaceCell [size];
	}

	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j ++)
		{
			arr[id] = cell[i][j];
			SpaceCell cell = *new SpaceCell(id++, i, j);
		}
	}
	int direction_numb = 1;
	char course;
	for(i = 0; i < 12; i++)
	{
		for(j < 11; j = 0; j--)
		{
			course = every_direction(direction_numb);
			course_direction(cell[i][j],course);
		}
	}
	direction_numb = 2;
	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 11; j++)
		{
			course = every_direction(direction_numb);
			course_direction(cell[i][j],course);
		}
	}
	direction_numb = 3;
	for(i < 11; i = 0; i--)
	{
		for(j = 0; j < 12; j++)
		{
			course = every_direction(direction_numb);
			course_direction(cell[i][j],course);
		}
	}
	direction_numb = 4;
	for(i = 0; i < 12 ; i++)
	{
		for(j = 0; j < 12; j++)
		{
			course = every_direction(direction_numb);
			course_direction(cell[i][j],course);
		}
	}
	SpaceField::obstacles_id();
	SpaceField::clear_direction_id();
}

void SpaceField::course_direction(SpaceCell &from, char direction)
{
	vector <int> coords = from.get_coords();
	switch(direction)
	{	
		case 'u': coords[1]--;
			break;
		case 'd': coords[1]++;
			break;
		case 'l': coords[0]--;
			break;
		case 'r': coords[0]++;
			break;	
	}
	from.ad_direction(coords_to_cell(coords[0],coords[1]).get_id());
}

SpaceCell SpaceField::coords_to_cell(int x, int y)
{
	return cell[x][y];
}

SpaceCell SpaceField::id_to_cell(int id)
{
	return arr[id];
}

char SpaceField::every_direction(int direction_numb)
{	
	if(direction_numb == 1)
	{			
		return 'u';		
	}
	if(direction_numb == 2)
	{
		return 'd';
	}
	if(direction_numb == 3)
	{
		return 'l';
	}
	if(direction_numb == 4)
	{
		return 'r';
	}
}

void SpaceField::obstacles_id()
{
	//Клетки препятствий
	obstacle_id.push_back(7);
	obstacle_id.push_back(21);
	obstacle_id.push_back(33);
	obstacle_id.push_back(27);
	obstacle_id.push_back(36);
	obstacle_id.push_back(37);
	obstacle_id.push_back(49);
	obstacle_id.push_back(92);
	obstacle_id.push_back(93);
	obstacle_id.push_back(97);
	obstacle_id.push_back(98);
	obstacle_id.push_back(122);
	obstacle_id.push_back(123);
	obstacle_id.push_back(124);
	obstacle_id.push_back(112);
	obstacle_id.push_back(116);
	obstacle_id.push_back(128);
	//Клетки лабиринта
	obstacle_id.push_back(52);
	obstacle_id.push_back(53);
	obstacle_id.push_back(54);
	obstacle_id.push_back(55);
	obstacle_id.push_back(64);
	obstacle_id.push_back(65);
	obstacle_id.push_back(66);
	obstacle_id.push_back(67);
	obstacle_id.push_back(76);
	obstacle_id.push_back(77);
	obstacle_id.push_back(78);
	obstacle_id.push_back(79);
	obstacle_id.push_back(88);
	obstacle_id.push_back(89);
	obstacle_id.push_back(90);
	obstacle_id.push_back(91);
}

void SpaceField::clear_direction_id()
{
	int obstacle_id_size = obstacle_id.size();
	vector <int> directions;
	for(int i = 0; i < obstacle_id_size; i++)
	{
		directions = arr[obstacle_id[i]].possible_directions();
		for(int j = 0; j < directions.size(); j++ )
		{
			arr[directions[j]].del_direction(obstacle_id[i]);
		}
	}
}

void SpaceField::labyrinths_id()
{
	labyrinth_id.push_back(43);
	labyrinth_id.push_back(55);
	labyrinth_id.push_back(67);
	labyrinth_id.push_back(66);
	labyrinth_id.push_back(54);
	labyrinth_id.push_back(53);
	labyrinth_id.push_back(52);
	labyrinth_id.push_back(64);
	labyrinth_id.push_back(65);
	labyrinth_id.push_back(77);
	labyrinth_id.push_back(76);
	labyrinth_id.push_back(88);
	labyrinth_id.push_back(89);
	labyrinth_id.push_back(90);
	labyrinth_id.push_back(78);
	labyrinth_id.push_back(79);
	labyrinth_id.push_back(91);
	labyrinth_id.push_back(103);
}

void SpaceField::labyrinth_directions()
{
	int labyrinth_size = labyrinth_id.size();
	for(int i = 0; i < labyrinth_size - 1; i++)
	{
		arr[labyrinth_id[i]].ad_direction(labyrinth_id[i+1]);
	}

}

SpaceCell SpaceField::spawn_location(int spawn_id)
{
	int location_id [6]= {6,24,35,95,108,136};
	return arr[location_id[spawn_id - 1]];
}

SpaceEvent SpaceField::key_location()
{
	vector <int> events = events_id;


}

void SpaceField::event_cell_list()
{
	events_id.push_back(1);
	events_id.push_back(2);
	events_id.push_back(10);
	events_id.push_back(17);
	events_id.push_back(45);
	events_id.push_back(48);
	events_id.push_back(81);
	events_id.push_back(86);
	events_id.push_back(106);
	events_id.push_back(107);
	events_id.push_back(130);
	events_id.push_back(131);
	events_id.push_back(142);
	events_id.push_back(143);
	events_id.push_back(132);
	events_id.push_back(133);
	events_id.push_back(138);
	events_id.push_back(139);
}