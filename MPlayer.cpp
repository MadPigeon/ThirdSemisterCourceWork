#include "MPlayer.h"

MPlayer :: MPlayer ()
{

}

MPlayer::MPlayer(int player_id, string name, MField * field)
{
	player_ID=player_id;
	Name=name;
	money=1500;
	token=new MUnit(field->return_cells());
	

	//can_move=1;
	
}

MPlayer::~MPlayer(){}

const string & MPlayer::get_name() const
{
	return Name;
}

const int & MPlayer::get_id() const
{
	return player_ID;
}

MUnit & MPlayer:: get_token ()
{
	return *token;
}