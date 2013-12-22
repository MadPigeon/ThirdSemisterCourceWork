#pragma once

#include <iostream>
#include "MEvent.h"
#include "ICell.h"
#include <vector>
#include <string>

class MCell: public ICell
{
	//bool free;//���� �� ������ ���������� ���������, ����������, ����������� �� ��� ����-������	
	//vector<string> event_text;//��������� � �������
	
	int id_number;
	MEvent  event_;
	vector <int>  directions;
public:
	//void add_direction(int direction);
	MCell(int number);
	const vector <int> & get_directions() const;
	int get_id ();
	MEvent & get_event ();
	
};