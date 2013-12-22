#pragma once
#include "IEvent.h"
#include <iostream>
#include <vector>

using namespace std;

class TableEvent:public IEvent
{   

	int code;	
public:
	TableEvent(int);
	TableEvent();
	~TableEvent();
	void execute();
	// Позволяет получить следующее действие из какого-либо списка
	IEvent *get_action();
};