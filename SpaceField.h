#pragma once
#include <iostream>
#include "IField.h"
#include "SpaceCell.h"
#include "SpaceEvent.h"
#include "SpacePlayer.h"
using namespace std;

class SpaceField: public IField
{
	int size;
	//������ ������ ������������ � ������� id
	SpaceCell *arr;
	//������ ������ ������������ � ������� ���������
	SpaceCell **cell;
	SpaceEvent event_obj;
	vector <int> obstacle_id;
	vector <int> labyrinth_id;
	vector <int> events_id;
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
	void event_cell_list();
	
public:
	SpaceField();
	~SpaceField();
	void key_location(int unit_id);
	vector <SpaceCell > possible_directions(SpaceCell current_unit_position);
	
	SpaceCell spawn_location(int location);
};
