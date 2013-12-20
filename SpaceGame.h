#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include "SpacePlayer.h"
#include "IGame.h"


using namespace std;

class SpaceGame: public IGame
{
	IPlayer get_player();
public:
	SpaceGame();
	~SpaceGame();
	int dice_throw();
	bool can_move();
};