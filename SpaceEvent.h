#pragma once
#include "IEvent.h"

class SpaceEvent//: public IEvent
{
	int action_type;
public:
	SpaceEvent();
	SpaceEvent(int action_type);
	//const IEvent & get_action() const;
	void execute();
};