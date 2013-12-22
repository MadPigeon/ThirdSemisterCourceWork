#include "time.h"
#include "Monopoly.h"
#include "MPlayer.h"
#include <iostream>

using namespace std;
Monopoly::Monopoly ()//заполняем очередь
{
	field = new MField();
	cout<<"Enter number of players"<<endl;
	cin>>amount;
	//ограничение на количество?
	for(int i=1;i<=amount;i++)
	{
		string name;
		cout<<"Enter name:"<<endl;
		cin>>name;
		MPlayer *current; //сущность игрок
		current = new MPlayer(i,name,field);
		queue[i]=*current;
	}
	numb=1;//игра начинается с первого игрока
}

IPlayer & Monopoly:: get_player () 
{
	numb++;
	return queue[numb];
}

int Monopoly :: dice()
{
	return 4;
}

IEvent & Monopoly:: move()
{
	int dice, dice2, sum;
	srand(time(NULL));
	dice=1+rand()%5;
	sum=dice;
	dice2=1+rand()%5;
	sum+=dice2;
	MCell * check_jail = (queue[0].get_token()).current_cell(field->return_cells(),0);
	if (check_jail->get_id()==30)
	{
		if (dice==dice2)
		{
			cout<<"Выпал дубль. Вы вышли из тюрьмы."<<endl;
			srand(time(NULL));
			dice=1+rand()%5;
			sum=dice;
			dice2=1+rand()%5;
			sum+=dice2;
			MCell * event_cell = (queue[0].get_token()).current_cell(field->return_cells(),sum);
			return event_cell->get_event();
		}
		else 
		{
				cout<<"Побег не удался."<<endl;
				///???? return here
		}

	}
	else
	{
		if (dice==dice2)
		{
			cout<<"Выпал дубль. Повторный ход."<<endl;
			numb--;//игрок будет ходить повторно
		}
	
		MCell * event_cell = (queue[0].get_token()).current_cell(field->return_cells(),sum);
		return event_cell->get_event();
	}
}


void Monopoly :: complete_move()
{
	try{
		MEvent & event_=dynamic_cast<MEvent &>(move());
	} catch (...){}
	
}


bool Monopoly :: can_move()
{
	return 1; //в Монополии бросать кубики можно всегда
}