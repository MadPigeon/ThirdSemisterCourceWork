#pragma once
#include "IEvent.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class DogsEvent:public IEvent
{   
	
	IEvent *EventCell;
	vector<string> Event;

public:
	// Должен был возвращать IEvent, но не смог.
	// Скорее всего должен быть заменён конструктором
	vector <string> & execute();
	
	DogsEvent(IEvent *Ev);
	~DogsEvent();
	// Возвращает состояние(None позволяет двигаться дальше)
	void  get_action( vector<string> & Event) ;
};