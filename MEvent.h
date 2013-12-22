#pragma once

#include "IEvent.h"
#include <map>
#include <string>

using namespace std;

class MEvent: public IEvent
{
	int id; //тип события
	string type;
	map <int,string> chance_;
	map <int,string> communitychest;
	int index;//номер карточки Общественная Казна
	int i;// номер карточки Шанс
	
public:
	
	MEvent(int cell_id);
	MEvent();
   
    void execute();
    
    IEvent * get_action();
	
	MEvent * get_chance(int id);
	MEvent * get_com_chest(int id);
	string return_type();
};