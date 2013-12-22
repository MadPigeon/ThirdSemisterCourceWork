#include "Dice.h"
#include <time.h>

using namespace std;

Dice::Dice(int dice_amount)
{
	amount = dice_amount;
}
void Dice::make_throw()
{
	srand(abs(time(0)));
	for (int i = 0; i < amount; i++)
	{
		dices[i] = rand()%6 + 1;
	}
}
bool Dice::equal()
{
	bool equals = false;
	if (dices.size()>0 && amount > 1)
	{
		equals = true;
		for (int i = 0; i < amount - 1; i++)
		{
			if (dices[i] != dices[i+1])
				equals = false;
		}
	}
	return equals;
}
int Dice::sum()
{
	int i, sum=0;
	if (dices.size()>0)
	for (i = 0; i < amount; i++)
	{
		sum+=dices[i];
	}
	return sum;
}
const vector<int> & Dice::all_dices() const{return dices;}