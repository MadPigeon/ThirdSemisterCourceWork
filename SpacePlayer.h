#pragma once
#include "IPlayer.h"
#include "SpaceUnit.h"
#include "SpaceGame.h"
#include "IEvent.h"
using namespace std;

class SpacePlayer: public IPlayer
{
	string _name;
	int _id,// идентификационный номер игрока
		credits, //внутриигровая валюта
		provision, //запас провизии
		animal_cages;// количество свободных клеток для животных
	bool registration,//наличие регистрации
		license,//права
		quarantine,//карантинная карта
		car;//машина
	SpaceUnit * unit;
public:
	SpacePlayer();
	SpacePlayer(int id, string name);
	~SpacePlayer();
	
	
	
	const int & get_credits() const;
	bool add_credits(int to_add);
	void add_provision(int to_add);
	void set_registration(bool val);
	const bool & has_registration() const;
	void set_license(bool val);
	const bool & has_license() const;
	void set_quarantine_card(bool val);
	const bool & has_quarantine_card() const;
	void set_car(bool val);
	const bool & has_car() const;
	/*надо над этим ещё подумать
	int get_animal_cages();*/
	/*скорее всего это будет Event
	bool hunting();*/
};