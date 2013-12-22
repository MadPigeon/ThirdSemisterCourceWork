// ����� IGame, ���������, ���������� ������� � �������� �� �� ������ ����
#pragma once

#include "IEvent.h"
#include "IPlayer.h"

class IGame
{
public:
	// ����������, ����� ����� �����
	virtual IPlayer & get_player() = 0;
	// ������ �����, ������������ �������
	virtual IEvent & move() = 0;
	// ����� �� ������(����� �� ������� ������������ ������� ����� � ������ ����)
	virtual bool can_move() = 0;
};