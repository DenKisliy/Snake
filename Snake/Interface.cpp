#include "Interface.h"

Interface::Interface()
{
	points = 0;
	this->direction = direction;
	gameOver = false;

	fruit = new Fruit();
	snake = new Snake();
	drawWindow = new DrawWindow();

	fruit->CreateFruit();
}

Interface::~Interface()
{
	delete fruit;
	delete snake;
	delete drawWindow;

}

void Interface::AddPoint() {
	++points;
}

int Interface::GetPoints() {
	return points;
}

void Interface::ChangeSnakePosition() {
	int directionByX = directionObj->GetDirectionByX(),
		directionByY = directionObj->GetDirectionByY();
	CheckPosition(directionByX, directionByY);
	if (!gameOver) {
		pair<int, int> fruitPosition = fruit->GetFruitPosition();
		bool eatFruit = (fruitPosition.first == directionByX && fruitPosition.second == directionByY);
		snake->UpdateCoordinatesOfTales(directionByX, directionByY, eatFruit);
		if (snake->IsEatTail(directionByX, directionByY)) {
			gameOver = true;
			GameOver();
		}
		if (eatFruit) {
			AddPoint();
			fruit->CreateFruit();
		}
	}

}

void Interface::CheckPosition(int directionByX, int directionByY) {
	if (directionByX == Constants::WIDTH - 1  || directionByX == 0 ||
		directionByY == Constants::HEIGHT || directionByY < 0) {
		gameOver = true;
		GameOver();
	}
}

void Interface::StartGame(Constants::ENUM_DIRECTION direction) {
	CreateDirectionObject(direction);
	while (!gameOver) {
		thread t1(&DrawWindow::ShowWindowInformation, drawWindow, GetPoints(),
			fruit->GetFruitPosition(),
			snake->GetCoordinatesByX(),
			snake->GetCoordinatesByY(),
			gameOver);
		Sleep(Constants::SLEEP_TIME);
		directionObj->InputDirection();
		ChangeSnakePosition();
		t1.join();
	}
}

void Interface::GameOver() {
	system("cls");
	cout << "Game over!!!" << endl;
	cout << "Our points: " << points * 10 << endl;
}

void Interface::CreateDirectionObject(Constants::ENUM_DIRECTION direction) {
	this->direction = direction;
	pair<int, int> head = snake->GetHeadPosition();
	directionObj = new Direction(direction, head.first, head.second);
}