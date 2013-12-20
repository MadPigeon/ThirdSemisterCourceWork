#pragma once

#include "IField.h"
#include "SpaceCell.h"

class SpaceField: public IField
{
	int size;
	//ћассив клеток обозначенных с помощью id
	SpaceCell *arr;
	//ћассив клеток обозначенных с помощью координат
	SpaceCell **cell;
	vector <int> obstacle_id;
	vector <int> labyrinth_id;
	//ƒает возможность перемещени€ между двум€ клетками(втора€ клетка выбираетс€ в зависимости от направлени€)
	void course_direction(SpaceCell &from, char direction);
	//¬озвращает направление, в котором будут св€зыватьс€ клетки
	char every_direction(int direction_numb);
	//ѕолучить клетку по координатам
	SpaceCell coords_to_cell(int x, int y);
	//ѕолучить клетку по id
	SpaceCell id_to_cell(int id);
	void obstacles_id();
	//”дал€ет св€зи с клетками €вл€ющимис€ преп€тстви€ми
	void clear_direction_id();
	void labyrinths_id();
	//ƒобавл€ет напрвлени€ возможного хода дл€ клеток лабиринта
	void labyrinth_directions();
public:
	SpaceField();
	~SpaceField();
	SpaceCell spawn_location(int location);
};
