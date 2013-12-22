// Класс ICell, может содержать перемещение на другую клетку или другой IEvent
#pragma once

#include <vector>

using namespace std;

class ICell
{
public:
	// Список номеров клеток, в которые можно сделать шаг
	virtual const vector <int> & get_directions() const = 0;
};