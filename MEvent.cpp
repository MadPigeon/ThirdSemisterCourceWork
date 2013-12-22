#include "MEvent.h"
#include <algorithm>
using namespace std;
MEvent::MEvent(){}
MEvent::MEvent(int cell_id)
{
	id=cell_id;
	type="";
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
	int SIZE = sizeof(arr) / sizeof(*arr);
	//получаем рандомом ключи для очереди карточек, т. е. тасуем карточки
    std::random_shuffle(arr, arr + SIZE );

	//при получении первой карточки станет 0
		index=-1;
		//карточки Общественной Казны
		communitychest[arr[0]]="Наступило Рождество. Вы получаете 100.\n";
		communitychest[arr[1]]="Ошибка банка в вашу пользу. Вы получаете 200.\n";
		communitychest[arr[2]]="Вы получаете 45 от продажи акций.\n";
		communitychest[arr[3]]="Вы попали в больницу и заплатили 100.\n";
		communitychest[arr[4]]="Вам понадобился врач. Заплатили 50.\n";
		communitychest[arr[5]]="Вы получили 100 в наследство.\n";
		communitychest[arr[6]]="Вы заплатили школьное такси 150.\n";
		communitychest[arr[7]]="Идите на поле ВПЕРЁД. Вы получаете 200.\n";
		communitychest[arr[8]]="Карточка освобождения из тюрьмы. Её можно продать или использовать позже.\n";
		communitychest[arr[9]]="Вы получили 25 за подработку.\n";
		communitychest[arr[10]]="Вы получили второе место на конкурсе красоты. Вам заплатили 10.\n";
		communitychest[arr[11]]="Отправляйтесь в тюрьму. Вы не проходите поле ВПЕРЁД на пути к тюрьме.\n";
		communitychest[arr[12]]="Настало время получить страховку. Зарабатываете 100.\n";
		communitychest[arr[13]]="Получите по 50 с каждого игрока.\n";
		communitychest[arr[14]]="Возмещение подоходного налога. Получите 20.\n";
		//community_chest[arr[15]]="Вы арестованы за несанкционированные строительные работы.\n Заплатите 40 за каждый дом и по 115 за отель.";

		i=-1;
		//Карточки Шанса
		chance_[arr[0]]="Карточка освобождения из тюрьмы. Её можно продать или использовать позже.\n";
		chance_[arr[1]]="Вы заплатили школьное такси 150.\n";
		chance_[arr[2]]="Идите на поле ВПЕРЁД. Вы получаете 200.\n";
		chance_[arr[3]]="Наступило Рождество. Вы получаете 100.\n";
		chance_[arr[4]]="Отправляйтесь в тюрьму. Вы не проходите поле ВПЕРЁД на пути к тюрьме.\n";
		chance_[arr[5]]="Вы заплатили 12 - налог в пользу бедных.\n";
		chance_[arr[6]]="Вернитесь на три клетки.\n";
		chance_[arr[7]]="Вы заплатили 15 в качестве штрафа за неправильную парковку\n";
		chance_[arr[8]]="Вы сделали капитальный ремонт в каждом здании.\n Заплатили 25 за каждый дом и по 100 за отели.\n";
		chance_[arr[9]]="Отправляйтесь на Иллинойс-авеню и получите 200, если проходите поле ВПЕРЁД.\n";
		chance_[arr[10]]="Вы оплатили 150 за здания и погашение кредита.\n";
		chance_[arr[11]]="Отправляйтесь на площадь Св. Чарльза и получите 200, если проходите поле ВПЕРЁД\n";
		chance_[arr[12]]="Пройдите до конца линии.\n";
		chance_[arr[13]]="Банк выплатил дивиденты в размере 50.\n";
		chance_[arr[14]]="Отправляйтесь на близжайшую железную дорогу и получите 200, если проходите поле ВПЕРЁД.\n";
		//chance[arr[15]]="Вы арестованы за несанкционированные строительные работы.\n Заплатите 40 за каждый дом и по 115 за отель.\n";

}
void MEvent::execute ()
{
	//???????
}
IEvent * MEvent:: get_action ()
{
	switch (id)
	{
		
		case(2):case(17):case(33):
			this->get_com_chest(id);
			break;
		case(7):case(22):case(36):
			this->get_chance(id);
			break;
		case(5):case(15):case(25):case(35):
			type="Railroad";
			break;
		case (12):case (28):
			type="";
			break;	
		case (10):case(20):
			type="";
			break;
		case (4):case(38):
			type="";
			break;
		case(0):
			type="";
			break;
		case(30):
			type="Jail";
			break;
		case(1):case(3):case(6):case(8):case(9):case(11):case(13):case(14):case(16):case(18):case(19):case(21):case(23):case(24):case(26):case(27):case(29):
			type="";
			break;
	}
	return this;
}
MEvent * MEvent::get_chance(int id)
{
	if (i==16)
	{
		i=1;
	}
	else
	{
		i++;
	}
	MEvent * action = new MEvent();
	action->type=chance_[i];
	action->id=id;
	return action;
}
MEvent * MEvent::get_com_chest(int id)
{
	if (index==16)
	{
		index=1;
	}
	else
	{
		index++;
	}
	MEvent * action = new MEvent();
	action->type=communitychest[i];
	action->id=id;
	return action;
}
string MEvent::return_type()
{
	return type;
}