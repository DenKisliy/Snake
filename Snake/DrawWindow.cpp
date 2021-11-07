#include "DrawWindow.h"

DrawWindow::DrawWindow() {

}

DrawWindow::~DrawWindow() {
}

void DrawWindow::ShowWindowInformation(int points, pair<int, int> fruitPosition, deque<int> coordinatesOfSnakeX, deque<int> coordinatesOfSnakeY, bool gameOver) {
	SetValues(points, fruitPosition, coordinatesOfSnakeX, coordinatesOfSnakeY);
	if (!gameOver) {
		system("cls");
		DrawMap();
		ShowAddInformation();
	}
}

void DrawWindow::SetValues(int points, pair<int, int> fruitPosition, deque<int> coordinatesOfSnakeX, deque<int> coordinatesOfSnakeY) {
	this->points = points;
	this->fruitPosition = fruitPosition;
	this->coordinatesOfSnakeX = coordinatesOfSnakeX;
	this->coordinatesOfSnakeY = coordinatesOfSnakeY;
	this->gameOver = gameOver;
}

void DrawWindow::DrawMap() {
	DrawTopOrBottomBorder();
	DrawLeftAndRightBorder();
	DrawTopOrBottomBorder();
}

void DrawWindow::DrawTopOrBottomBorder() {
	for (int i = 0; i < Constants::WIDTH; i++) {
		cout << Constants::BORDER;
	}
	cout << endl;
}

void DrawWindow::DrawLeftAndRightBorder() {
	for (int i = 0; i < Constants::HEIGHT; i++) {
		for (int j = 0; j < Constants::WIDTH; j++) {
			char showElement = (j == 0 || j == Constants::WIDTH - 1) ? Constants::BORDER : DrawSnakeAndFruit(pair <int, int>(j, i));
			cout << showElement;
		}
		cout << endl;
	}
}

char DrawWindow::DrawSnakeAndFruit(pair <int, int> pointPosition) {
	char element = (fruitPosition.first == pointPosition.first && fruitPosition.second == pointPosition.second) ? (Constants::FRUIT) : (' ');

	if (coordinatesOfSnakeX[0] == pointPosition.first && coordinatesOfSnakeY[0] == pointPosition.second) {
		element = Constants::SNAKE_HEAD;
		return element;
	}

	for (int i = 1; i < coordinatesOfSnakeX.size(); i++)
	{
		if (coordinatesOfSnakeX[i] == pointPosition.first && coordinatesOfSnakeY[i] == pointPosition.second) {
			element = Constants::TAIL;
			return element;
		}
	}
	return element;

}

void DrawWindow::ShowAddInformation() {
	cout << "Points: " << points * 10 << endl;
}