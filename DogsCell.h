#pragma once
#include <iostream>
#include <vector>
#include "ICell.h"
#include <vector>

using namespace std;

class DogsCell:public ICell
{
	int number_id;
	std::vector <int> direction;

public:
	void add_direction(int direction);
	DogsCell(int current_cell,int path); 

	DogsCell(*IEvent);//конструктор клетки
	void TableEvent(int number);
	virtual const vector <int> & get_directions() const;
	const int & get_number();
};