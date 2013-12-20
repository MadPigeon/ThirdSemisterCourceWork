#pragma once
#include <iostream>
#include <vector>

#include "ICell.h"

using namespace std;

class SpaceCell
{
	int _id, _x, _y;
	//содержит id клеток, в которые можно шагнуть из клетки, в которой находимся сейчас
	vector <int> move_id;
	SpaceCell *cell;
public:
	SpaceCell();
	SpaceCell(int id, int x, int y);
	~SpaceCell();
	int get_id();
	vector <int> get_coords();
	//Добавляет в move_id направления для хода
	vector <int> possible_directions();
	// id это номер клетки, в которую можно шагнуть из клетки, в которой находимся сейчас
	void ad_direction(int id);
	void del_direction(int id);
};