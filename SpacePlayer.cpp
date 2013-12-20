#include "SpacePlayer.h"

SpacePlayer::SpacePlayer():_id(666+rand()%200-100),_name("Default"),credits(0),provision(20),animal_cages(0),registration(false),license(false),quarantine(false)
{
	unit = new SpaceUnit(7);
}
SpacePlayer::SpacePlayer(int id, string name):_id(id),_name(name),credits(0),provision(20),animal_cages(0),registration(false),license(false),quarantine(false){}
SpacePlayer::~SpacePlayer(){delete unit;}

bool SpacePlayer::add_credits(int to_add)
{
	if (credits + to_add >= 0)
	{
		credits += to_add;
		return true;// операция удалась
	}
	return false;//вы банкрот, снимать нечего, покупка не удалась
}
void SpacePlayer::add_provision(int to_add)
{
	if (provision + to_add >= 0)
	{
		provision += to_add;
	}
	else
	{		
		/*вы переноситесь в больницу с голодным обмороком, Event*/		
	}
}
void SpacePlayer::set_registration(bool val){ registration = val;}
void SpacePlayer::set_quarantine_card(bool val){ quarantine = val;}
void SpacePlayer::set_license(bool val){ license= val;}
void SpacePlayer::set_car(bool val){ car= val;}
const int & SpacePlayer::get_credits() const {return credits;}
const bool & SpacePlayer::has_license() const {return license;}
const bool & SpacePlayer::has_quarantine_card() const {return quarantine;}
const bool & SpacePlayer::has_registration() const {return registration;}
const bool & SpacePlayer::has_car() const {return car;}