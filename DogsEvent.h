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
	// ������ ��� ���������� IEvent, �� �� ����.
	// ������ ����� ������ ���� ������ �������������
	vector <string> & execute();
	
	DogsEvent(IEvent *Ev);
	~DogsEvent();
	// ���������� ���������(None ��������� ��������� ������)
	void  get_action( vector<string> & Event) ;
};