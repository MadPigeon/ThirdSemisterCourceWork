#pragma once
#include <iostream>
#include <vector>

#include "ICell.h"

using namespace std;

class SpaceCell
{
	int _id, _x, _y;
	//�������� id ������, � ������� ����� ������� �� ������, � ������� ��������� ������
	vector <int> move_id;
	SpaceCell *cell;
public:
	SpaceCell();
	SpaceCell(int id, int x, int y);
	~SpaceCell();
	int get_id();
	vector <int> get_coords();
	//��������� � move_id ����������� ��� ����
	vector <int> possible_directions();
	// id ��� ����� ������, � ������� ����� ������� �� ������, � ������� ��������� ������
	void ad_direction(int id);
	void del_direction(int id);
};