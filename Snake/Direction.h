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
	//тип направления
	Constants::ENUM_DIRECTION direction;

	//позиция головы змеи по оси Х и Y
	int directionByX, directionByY;

public:
	Direction(Constants::ENUM_DIRECTION direction, int directionByX, int directionByY);
	~Direction();

	//ввод направления змейки
	void InputDirection();

	//возщает тип направления змеи
	Constants::ENUM_DIRECTION GetDirection();

	//возщает значение на которое сдвинулась змейка по оси Х
	int GetDirectionByX();
	//возщает значение на которое сдвинулась змейка по оси Y
	int GetDirectionByY();

private: 
	//изменяеет движение змеи взависимости выбраного направления
	void ChangeSnakePosition();
};
