#include "Fruit.h"

void Fruit::CreatePosition() {
	x = rand() % Constants::WIDTH;
	y = rand() % Constants::HEIGHT;
}

pair<int, int> Fruit::CreateFruit() {
	CreatePosition();

	return pair<int, int>(x, y);
}

pair<int, int> Fruit::GetFruitPosition() {
	return pair<int, int>(x, y);
}