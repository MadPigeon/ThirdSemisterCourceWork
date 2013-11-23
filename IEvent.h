// ����� IEvent, ��������, ������� ���������� ������������ � ������� ����
#pragma once

class IEvent
{
public:
	// ������ ��� ���������� IEvent, �� �� ����.
	// ������ ����� ������ ���� ������ �������������
	virtual void execute() = 0;
	// ���������� ���������(None ��������� ��������� ������)
	virtual const IEvent & get_action() const = 0;
};