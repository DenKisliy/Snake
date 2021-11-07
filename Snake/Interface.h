#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <windows.h>
#include <deque>

#include "Fruit.h"
#include "Snake.h"
#include "Direction.h"
#include "DrawWindow.h"

using namespace std;

class Interface
{
private: 
	//очки
	int points;
	//окончена ли игра
	bool gameOver;

public:
	//направление змейки
	Constants::ENUM_DIRECTION direction;

private:
	Fruit* fruit;
	Snake* snake;
	Direction* directionObj;
	DrawWindow* drawWindow;

public:
	Interface();
	~Interface();

public:
	//запуск начала игры
	void StartGame(Constants::ENUM_DIRECTION direction);

private:
	//отрисовка окна
	//void DrawWindow();
	//добвить очко
	void AddPoint();
	//получить очки
	int GetPoints();
	//Смена позиции змеи
	void ChangeSnakePosition();
	//Проверка если змея вышла за граници поля
	void CheckPosition(int directionByX, int directionByY);
	//Информация при завершении игры
	void GameOver();
	//Создание объекта для работы с классом направлений
	void CreateDirectionObject(Constants::ENUM_DIRECTION direction);
};

