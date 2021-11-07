#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <windows.h>
#include <deque>

#include "Const.h"

using namespace std;

class DrawWindow
{
private:
	//количество очков
	int points;
	//координаты фрукта
	pair<int, int> fruitPosition;
	//значения координат змеии по оси X
	deque<int> coordinatesOfSnakeX;
	//значения координат змеии по оси Y
	deque<int> coordinatesOfSnakeY;
	//
	bool gameOver;

public:
	DrawWindow();
	~DrawWindow();

	void ShowWindowInformation(int point, pair<int, int> fruitPosition, deque<int> coordinatesOfSnakeX, deque<int> coordinatesOfSnakeY, bool gameOver);

private:
	//присвоить значения
	void SetValues(int point, pair<int, int> fruitPosition, deque<int> coordinatesOfSnakeX, deque<int> coordinatesOfSnakeY);
	//орисовка карты
	void DrawMap();
	//орисовка верхней или нижней границы карты 
	void DrawTopOrBottomBorder();
	//орисовка боковых границ карты
	void DrawLeftAndRightBorder();
	//Отображения елемента змеи или фрукта на карте
	char DrawSnakeAndFruit(pair<int, int> pointPosition);

	//Вывод дополнительной информации
	void ShowAddInformation();
};

