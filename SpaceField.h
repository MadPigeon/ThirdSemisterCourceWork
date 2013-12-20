#pragma once

#include "IField.h"
#include "SpaceCell.h"

class SpaceField: public IField
{
	int size;
	//������ ������ ������������ � ������� id
	SpaceCell *arr;
	//������ ������ ������������ � ������� ���������
	SpaceCell **cell;
	vector <int> obstacle_id;
	vector <int> labyrinth_id;
	//���� ����������� ����������� ����� ����� ��������(������ ������ ���������� � ����������� �� �����������)
	void course_direction(SpaceCell &from, char direction);
	//���������� �����������, � ������� ����� ����������� ������
	char every_direction(int direction_numb);
	//�������� ������ �� �����������
	SpaceCell coords_to_cell(int x, int y);
	//�������� ������ �� id
	SpaceCell id_to_cell(int id);
	void obstacles_id();
	//������� ����� � �������� ����������� �������������
	void clear_direction_id();
	void labyrinths_id();
	//��������� ���������� ���������� ���� ��� ������ ���������
	void labyrinth_directions();
public:
	SpaceField();
	~SpaceField();
	SpaceCell spawn_location(int location);
};
