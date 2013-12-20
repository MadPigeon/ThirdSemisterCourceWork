#pragma once
#include "IPlayer.h"
#include "SpaceCell.h"
#include "SpaceGame.h"
#include "IEvent.h"
using namespace std;

class SpacePlayer: public IPlayer
{
	int credits, provision, animal_cages;
	vector <int> move_directions;
	int point;
	
public:
	SpacePlayer(int credits, int provision, int animal_cages);
	~SpacePlayer();
	
	/*Получение игровых денег( в банке и за продажу животных)
	int get_credits();
	//Получение лицензии на авто
	bool get_license();
	bool get_registration();
	bool get_carantine_card();
	int get_animal_cages();
	int get_provision();
	bool hunting();*/
};