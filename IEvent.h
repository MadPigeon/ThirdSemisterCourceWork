// ����� IEvent, ��������, ������� ���������� ������������ � ������� ����
#pragma once


class IEvent
{

public:
	// ��������������� ���������� ��������
	virtual void execute() = 0;
// ��������� �������� ��������� �������� �� ������-���� ������
	virtual IEvent * get_action() =0;
};