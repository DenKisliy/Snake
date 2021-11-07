#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace Constants
{
	//������ ����
	const int HEIGHT(20);
	//������ ����
	const int WIDTH(20);

	//���� �����������
	enum ENUM_DIRECTION
	{
		RIGHT,
		LEFT,
		UP,
		DOWN,
		STOP
	};
	//�������� �������� ����
	const int SLEEP_TIME(500);
	//������ ����������� ������
	const char BORDER = ('#');
	//������ ����������� ������ ����
	const char SNAKE_HEAD = ('O');
	//������ ����������� ������ ����
	const char TAIL = ('o');
	//������ ����������� ������
	const char FRUIT = ('F');
}
#endif