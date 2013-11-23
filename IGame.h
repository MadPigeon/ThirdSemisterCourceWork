// Класс IGame, контейнер, содержащий игроков и меняющий их со сменой хода
#pragma once

#include "IEvent.h"
#include "IPlayer.h"

class IGame
{
public:
	// Показывает, какой игрок ходит
	virtual IPlayer get_player() = 0;
	// Бросок кости, производимый игроком
	virtual IEvent dice() = 0;
};