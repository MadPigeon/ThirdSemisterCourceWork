#pragma once
#include <vector>

using namespace std;

class Dice
{
	int amount;// количество кубиков
	vector <int> dices;// все кубики
public:
	Dice(int dice_amount); //конструктор, принимающий количество кубиков
	void make_throw();//делает бросок кубика(ов)
	bool equal();// проверка равенства значений на кубике друг другу
	int sum();// возвращает сумму на всех кубиках
	const vector<int> & all_dices() const;// возвращает список всех кубиков
};