// Класс IPlayer, хранящий информацию о юнитах и воздействующие на игрока эффекты
#pragma once

#include <string>
#include <vector>

using namespace std;

class IPlayer
{
public:
	// Возвращает список воздействующих эффектов перед броском кубика
	virtual const vector<IEvent> & get_event_list() const = 0;
	// Возвращает имя игрока
	virtual const string & get_name() const = 0;
};