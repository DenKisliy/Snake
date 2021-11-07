#include <string>

#include "Const.h"

using namespace std;

class Fruit
{
private:
	int x;
	int y;

public:
	//возращает позицию при создании фрукта
	pair<int, int> CreateFruit();
	//возращает позицию фрукта
	pair<int, int> GetFruitPosition();

private: 
	//создание позиции фрукта
	void CreatePosition();
};

