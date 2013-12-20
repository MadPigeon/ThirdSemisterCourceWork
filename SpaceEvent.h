#pragma once
#include "SpaceField.h"
#include "IEvent.h"
#include "SpacePlayer.h"
#include "SpaceGame.h"

#include <iostream>
using namespace std;

class SpaceEvent
{
	SpacePlayer *player;
public:
	IEvent & get_action();
	SpaceEvent buy_car();
	bool get_registation();
	
};