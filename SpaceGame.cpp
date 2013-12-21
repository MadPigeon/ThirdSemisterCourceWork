#include "SpaceGame.h"

void SpaceGame::show_field()
{

}
SpaceGame::SpaceGame()
{
	player = new SpacePlayer();
	
}

SpaceGame::~SpaceGame()
{
}
/*IPlayer SpaceGame::get_player()
{
	return *player;
}*/
int SpaceGame::dice_throw()
{
	int point;
	srand(time(0));
	point = 1+rand()%5;
	return point;
}