#include "Direction.h"

Direction::Direction(Constants::ENUM_DIRECTION direction, int directionByX, int directionByY) {
	this->direction = direction;
	this->directionByX = directionByX;
	this->directionByY = directionByY;
}

Direction::~Direction() {

}

void Direction::InputDirection() {
	if (_kbhit()) {
		switch (_getch())
		{
		case 'a':
			direction = Constants::LEFT;
			break;
		case 'd':
			direction = Constants::RIGHT;
			break;
		case 'w':
			direction = Constants::UP;
			break;
		case 's':
			direction = Constants::DOWN;
			break;
		}
		
	}
	ChangeSnakePosition();
}

void Direction::ChangeSnakePosition() {
	switch (direction)
	{
	case Constants::RIGHT:
		directionByX++;
		break;
	case Constants::LEFT:
		directionByX--;
		break;
	case Constants::UP:
		directionByY--;
		break;
	case Constants::DOWN:
		directionByY++;
		break;
	}
}

Constants::ENUM_DIRECTION Direction::GetDirection() {
	return direction;
}

int Direction::GetDirectionByX() {
	return directionByX;
}

int Direction::GetDirectionByY() {
	return directionByY;
}