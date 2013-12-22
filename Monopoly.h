#pragma once

#include "MPlayer.h"
#include "IGame.h"
#include "MEvent.h"
#include "MCell.h"
#include <map>

class Monopoly:public IGame
{
	int amount; //���������� �������
	int	numb;//����� ������, ��� ��� �������������� (����� ��������������?)
	MField * field;
	map <int, MPlayer> queue; //������� � �������� (�������)
public:
	Monopoly (); //����������, ��������� ������� (���������� � ����������� MPlayer)
	IPlayer & get_player(); 
    // ������ �����, ������������ �������
	int dice();
    IEvent &move();
	bool can_move();
	void complete_move ();

};