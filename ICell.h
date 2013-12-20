// Класс ICell, может содержать перемещение на другую клетку или другой IEvent
#pragma once
#include <vector>
using namespace std;

class ICell
{
public:
	//Показывает куда из данной клетки может всать фишка
	virtual vector <int> possible_directions();
};