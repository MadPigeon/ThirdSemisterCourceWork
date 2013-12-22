#include <iostream>
#include "TableEvent.h"
#include "TableGame.h"
#include "TableUnit.h"
using namespace std;

TableEvent::TableEvent(){}
TableEvent::TableEvent(int m)
{
	//1 пропуск хода
	
	//2 повторный ход
	
	//3 перенос на другую клетку
	code=m;
}

TableEvent::~TableEvent() {}

void TableEvent::execute()
{/*
	switch(code)
	{
	case 1:
		bool flag=0;
		break;

	case 2:
		TablePlayer.get_id;
		break;
	
	case 3:
		complete_move(3,TableCell *unit);
		break;
	case -3:
		TableField.complete_move;
		break;
	case 4:
		TableUnit.step_unit;
		break;*/
	/*}*/
}


IEvent *TableEvent::get_action()
{
	return (new TableEvent());
}