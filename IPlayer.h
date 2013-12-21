// Класс IPlayer, хранящий информацию о юнитах и воздействующие на игрока эффекты
#pragma once

#include <string>
#include <vector>

using namespace std;

class IPlayer
{
	int player_ID;
	string Name;
public:
	IPlayer();
	IPlayer(int player_id, string name);
	// Возвращает имя игрока
	virtual const string & get_name() const = 0;
	virtual const int & get_id() const = 0;
};