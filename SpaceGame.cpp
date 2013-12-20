#include "SpaceGame.h"

SpaceGame::SpaceGame()
{
}

SpaceGame::~SpaceGame()
{
}

int SpaceGame::dice_throw()
{
	int point;
	srand(time(0));
	point = 1+rand()%5;
	return point;
}

IPlayer SpaceGame::get_player()
{

}