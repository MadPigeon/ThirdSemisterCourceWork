#include <iostream>
#include "TableCell.h"
#include <vector>
using namespace std;

TableCell::TableCell(){}
TableCell::TableCell(int number, int next)
{
	id_number = number;
	directions.push_back(next);
	int code;
	switch (number)
	{
	case 3:case 15: case 25:
		event_text.push_back("пропуск хода");
	    code = 1;
		break;
	case 6: case 14: case 22:
		event_text.push_back("повторный ход");
		code = 2;
		break;
	case 5: case 19: case 26:
		event_text.push_back("перенос назад");
		code = -3;
		break;
	case 9: case 23: case 18:
		event_text.push_back("перенос вперед");
		code = 3;
		break;
	case 28:
		event_text.push_back("вернитесь на старт");
		code = 4;
		break;
	}
	events=*(new TableEvent(code));
}
TableCell::~TableCell(){}

void TableCell::add_direction(int dir)
{
	directions.push_back(dir);
}

const vector <int> & TableCell::get_directions() const
{
	return directions;
}

int TableCell::get_numb_cell()
{
	return id_number;
}
