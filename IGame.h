// ����� IGame, ���������, ���������� ������� � �������� �� �� ������ ����
#pragma once

#include "IEvent.h"
#include "IPlayer.h"

class IGame
{
public:
	// ����������, ����� ����� �����
	virtual IPlayer get_player() = 0;
	// ������ �����, ������������ �������
	virtual IEvent dice() = 0;
};