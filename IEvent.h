// Класс IEvent, действие, которое определяет происходящее в течении хода
#pragma once


class IEvent
{

public:
	// Непосредственно выполнение действия
	virtual void execute() = 0;
// Позволяет получить следующее действие из какого-либо списка
	virtual IEvent * get_action() =0;
};