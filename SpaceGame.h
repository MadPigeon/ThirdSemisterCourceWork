#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include "SpaceField.h"
#include "IGame.h"
#include "SpacePlayer.h"

using namespace std;

class SpaceGame//: public IGame
{
	SpacePlayer * player;
	void show_field();
	SpaceField *field;
public:
	SpaceGame();
	~SpaceGame();
	//IPlayer get_player();
	int dice_throw();
	//bool can_move();
};