#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace Constants
{
	//высота поля
	const int HEIGHT(20);
	//ширина поля
	const int WIDTH(20);

	//типы направления
	enum ENUM_DIRECTION
	{
		RIGHT,
		LEFT,
		UP,
		DOWN,
		STOP
	};
	//Скорость движения змеи
	const int SLEEP_TIME(500);
	//Символ отображения границ
	const char BORDER = ('#');
	//Символ отображения головы змеи
	const char SNAKE_HEAD = ('O');
	//Символ отображения хвоста змеи
	const char TAIL = ('o');
	//Символ отображения фрукта
	const char FRUIT = ('F');
}
#endif