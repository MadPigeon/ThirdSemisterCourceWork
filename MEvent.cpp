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
	//�������� �������� ����� ��� ������� ��������, �. �. ������ ��������
    std::random_shuffle(arr, arr + SIZE );

	//��� ��������� ������ �������� ������ 0
		index=-1;
		//�������� ������������ �����
		communitychest[arr[0]]="��������� ���������. �� ��������� 100.\n";
		communitychest[arr[1]]="������ ����� � ���� ������. �� ��������� 200.\n";
		communitychest[arr[2]]="�� ��������� 45 �� ������� �����.\n";
		communitychest[arr[3]]="�� ������ � �������� � ��������� 100.\n";
		communitychest[arr[4]]="��� ����������� ����. ��������� 50.\n";
		communitychest[arr[5]]="�� �������� 100 � ����������.\n";
		communitychest[arr[6]]="�� ��������� �������� ����� 150.\n";
		communitychest[arr[7]]="����� �� ���� ���Ш�. �� ��������� 200.\n";
		communitychest[arr[8]]="�������� ������������ �� ������. Ÿ ����� ������� ��� ������������ �����.\n";
		communitychest[arr[9]]="�� �������� 25 �� ����������.\n";
		communitychest[arr[10]]="�� �������� ������ ����� �� �������� �������. ��� ��������� 10.\n";
		communitychest[arr[11]]="������������� � ������. �� �� ��������� ���� ���Ш� �� ���� � ������.\n";
		communitychest[arr[12]]="������� ����� �������� ���������. ������������� 100.\n";
		communitychest[arr[13]]="�������� �� 50 � ������� ������.\n";
		communitychest[arr[14]]="���������� ����������� ������. �������� 20.\n";
		//community_chest[arr[15]]="�� ���������� �� ������������������� ������������ ������.\n ��������� 40 �� ������ ��� � �� 115 �� �����.";

		i=-1;
		//�������� �����
		chance_[arr[0]]="�������� ������������ �� ������. Ÿ ����� ������� ��� ������������ �����.\n";
		chance_[arr[1]]="�� ��������� �������� ����� 150.\n";
		chance_[arr[2]]="����� �� ���� ���Ш�. �� ��������� 200.\n";
		chance_[arr[3]]="��������� ���������. �� ��������� 100.\n";
		chance_[arr[4]]="������������� � ������. �� �� ��������� ���� ���Ш� �� ���� � ������.\n";
		chance_[arr[5]]="�� ��������� 12 - ����� � ������ ������.\n";
		chance_[arr[6]]="��������� �� ��� ������.\n";
		chance_[arr[7]]="�� ��������� 15 � �������� ������ �� ������������ ��������\n";
		chance_[arr[8]]="�� ������� ����������� ������ � ������ ������.\n ��������� 25 �� ������ ��� � �� 100 �� �����.\n";
		chance_[arr[9]]="������������� �� ��������-����� � �������� 200, ���� ��������� ���� ���Ш�.\n";
		chance_[arr[10]]="�� �������� 150 �� ������ � ��������� �������.\n";
		chance_[arr[11]]="������������� �� ������� ��. ������� � �������� 200, ���� ��������� ���� ���Ш�\n";
		chance_[arr[12]]="�������� �� ����� �����.\n";
		chance_[arr[13]]="���� �������� ��������� � ������� 50.\n";
		chance_[arr[14]]="������������� �� ���������� �������� ������ � �������� 200, ���� ��������� ���� ���Ш�.\n";
		//chance[arr[15]]="�� ���������� �� ������������������� ������������ ������.\n ��������� 40 �� ������ ��� � �� 115 �� �����.\n";

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