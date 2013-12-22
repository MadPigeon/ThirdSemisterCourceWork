#pragma once
#include <iostream>
#include "ICell.h"
#include <vector>
#include <string>
#include "TableEvent.h"
using namespace std;

class TableCell:public ICell
{
	int id_number;
	vector <int> directions;
	vector <string> event_text;
	TableEvent events;
public:
	void add_direction(int direction);
	TableCell(int number, int next);
	TableCell();
	~TableCell();
	// ������ ������� ������, � ������� ����� ������� ���
	const vector <int> &get_directions() const;
	int get_numb_cell ();

};