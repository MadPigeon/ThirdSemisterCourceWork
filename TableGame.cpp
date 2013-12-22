#include "TableGame.h"
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

TableGame::TableGame()
{
	fields=new TableField();
	srand(time(0)); 
	i=1;
	string name;
	int n;
	cout<<"введите количество игроков"<<endl;
	cin>>n;
	cout<<"введите имя игрока"<<endl;
	cin>>name;
	for(int i=1;i<=n;i++)
	{
	players.push_back(*(new TablePlayer(i,name,&(fields->return_cells())[0])));
	}

}

IPlayer & TableGame::get_player()
{
	i++;
	return players[i];
}

IEvent & TableGame::move()
{
 int dice=1+(rand() % 5);
 return *(new TableEvent(0));
}

bool TableGame::can_move()
{
	TablePlayer & user_=dynamic_cast<TablePlayer &>(get_player());
	

	/*TablePlayer *user=(&get_player());
	
	if(user->get_flag()==0)
	{
		(&get_player())->(change_flag());
		return false;
	}*/
	
	return true; 
}

