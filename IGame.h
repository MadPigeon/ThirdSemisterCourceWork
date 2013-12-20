//  ласс IGame, контейнер, содержащий игроков и мен€ющий их со сменой хода
#pragma once

#include "IEvent.h"
#include "IPlayer.h"

class IGame
{
public:
	// ѕоказывает, какой игрок ходит
	virtual IPlayer & get_player() = 0;
	// Ѕросок кости, производимый игроком
	virtual IEvent & move() = 0;
	// ћожно ли ходить(нужно ли просить пользовател€ бросить кубик в начале хода)
	virtual bool can_move() = 0;
};