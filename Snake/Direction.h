#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <thread>

#include "Const.h"

class Direction
{
private:
	//��� �����������
	Constants::ENUM_DIRECTION direction;

	//������� ������ ���� �� ��� � � Y
	int directionByX, directionByY;

public:
	Direction(Constants::ENUM_DIRECTION direction, int directionByX, int directionByY);
	~Direction();

	//���� ����������� ������
	void InputDirection();

	//������� ��� ����������� ����
	Constants::ENUM_DIRECTION GetDirection();

	//������� �������� �� ������� ���������� ������ �� ��� �
	int GetDirectionByX();
	//������� �������� �� ������� ���������� ������ �� ��� Y
	int GetDirectionByY();

private: 
	//��������� �������� ���� ������������ ��������� �����������
	void ChangeSnakePosition();
};
