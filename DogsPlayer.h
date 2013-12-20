#pragma once;
#include"IPlayer.h";
#include <string>

using namespace std;
class DogsPlayer:public IPlayer
{
	int id_order;
	string id_player;
public:
	DogsPlayer(string id_player,int id_order);
	~DogsPlayer();
	const string & get_name() const;
};