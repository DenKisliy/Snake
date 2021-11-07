#include "Const.h"
#include <string>
#include <deque>

using namespace std;
class Snake
{
private:
	//Длина змеи
	int snakeLength;
	//значения координат змеии по оси X
	deque<int> coordinatesOfSnakeX;
	//значения координат змеии по оси Y
	deque<int> coordinatesOfSnakeY;
	int maxLength;

public:
	Snake();
	~Snake();

public:
	//увелечение длены змеи при сьедании фрукта
	void IncreaseLength(int startPositionX, int startPositionY);
	//получения значений координат змеи по оси X
	deque<int> GetCoordinatesByX();
	//получения значений координат змеи по оси Y
	deque<int> GetCoordinatesByY();

	//получения значений координат головы змеи
	pair<int, int> GetHeadPosition();

	//обновления координат змеи при движении
	void UpdateCoordinatesOfTales(int startPositionX, int startPositionY, bool eatFruit);

	//проверка был ли укушен хвост
	bool IsEatTail(int startPositionX, int startPositionY);

private:
	//добавление начальной позиции змеи
	void StartingPosition();
	//обновления значений координат по оси при движении
	void ChangeValueForTail(int& beforePreviousValue, int& previousValue, deque<int>& vectorOfValue, int index);
};

