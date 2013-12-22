#pragma once

#include "IPlayer.h"
#include "IUnit.h"
#include "MEvent.h"
#include "MUnit.h"
#include "MField.h"

using namespace std;

class MPlayer: public IPlayer
{
	string Name;
	//bool can_move;
	int player_ID;
	int money;
	MUnit * token;
public:
	MPlayer();
	MPlayer(int player_id, string name, MField * field);
	~MPlayer();
	const string & get_name() const; 
	const int & get_id() const;
	MUnit & get_token ();
};