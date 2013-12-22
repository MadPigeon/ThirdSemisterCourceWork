#pragma once
#include <vector>

using namespace std;

class Dice
{
	int amount;// ���������� �������
	vector <int> dices;// ��� ������
public:
	Dice(int dice_amount); //�����������, ����������� ���������� �������
	void make_throw();//������ ������ ������(��)
	bool equal();// �������� ��������� �������� �� ������ ���� �����
	int sum();// ���������� ����� �� ���� �������
	const vector<int> & all_dices() const;// ���������� ������ ���� �������
};