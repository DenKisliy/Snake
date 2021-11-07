#include "Snake.h"

Snake::Snake() {
	snakeLength = 1;
	StartingPosition();
}

Snake::~Snake() {
	coordinatesOfSnakeX.clear();
	coordinatesOfSnakeY.clear();
}

void Snake::StartingPosition() {
	coordinatesOfSnakeX.push_back(Constants::WIDTH / 2);
	coordinatesOfSnakeY.push_back(Constants::HEIGHT / 2);
}

void Snake::IncreaseLength(int startPositionX, int startPositionY) {
	coordinatesOfSnakeX.push_front(startPositionX);
	coordinatesOfSnakeY.push_front(startPositionY);
	snakeLength++;
}

void Snake::ChangeValueForTail(int &beforePreviousValue, int &previousValue, deque<int> &vectorOfValue, int index) {
	beforePreviousValue = vectorOfValue[index];
	vectorOfValue[index] = previousValue;
	previousValue = beforePreviousValue;
}

void Snake::UpdateCoordinatesOfTales(int startPositionX, int startPositionY, bool eatFruit) {
	if (eatFruit) {
		IncreaseLength(startPositionX, startPositionY);
	}
	else {
		if (coordinatesOfSnakeX[0] != startPositionX || coordinatesOfSnakeY[0] != startPositionY) {
			int previousX = coordinatesOfSnakeX[0], previousY = coordinatesOfSnakeY[0];
			int beforePreviousX, beforePreviousY;
			coordinatesOfSnakeX[0] = startPositionX;
			coordinatesOfSnakeY[0] = startPositionY;


			for (int i = 1; i < snakeLength; i++) {
				ChangeValueForTail(beforePreviousX, previousX, coordinatesOfSnakeX, i);

				ChangeValueForTail(beforePreviousY, previousY, coordinatesOfSnakeY, i);
			}
		}
	}
}

deque<int> Snake::GetCoordinatesByX() {
	return coordinatesOfSnakeX;
}

deque<int> Snake::GetCoordinatesByY() {
	return coordinatesOfSnakeY;
}

pair<int, int> Snake::GetHeadPosition() {
	return pair<int, int>(coordinatesOfSnakeX[0], coordinatesOfSnakeY[0]);
}

bool Snake::IsEatTail(int startPositionX, int startPositionY) {
	bool result = false;

	for (int i = 1; i < snakeLength; i++) {
		if (coordinatesOfSnakeX[i] == startPositionX && coordinatesOfSnakeY[i] == startPositionY) {
			result = true;
			break;
		}
	}

	return result;
}
