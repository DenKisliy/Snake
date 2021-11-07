#include <iostream>
#include <conio.h>
#include <iomanip>

#include "Interface.h"
#include "Const.h"

using namespace std;

int main()
{
	cout << "To start the game, select one of the directions where the snake will begin to move." << endl
		<<"Up: w;" << endl 
		<<"Down: s" << endl
		<<"right: d" << endl
		<<"Left: a " << endl;
	Interface interfaceObj;
	Constants::ENUM_DIRECTION direction = Constants::STOP;
	while (direction == Constants::STOP) {
		if (_kbhit()) {
			switch (_getch())
			{
			case 'a':
				direction = Constants::LEFT;
				interfaceObj.StartGame(direction);
				break;
			case 'd':
				direction = Constants::RIGHT;
				interfaceObj.StartGame(direction);
				break;
			case 'w':
				direction = Constants::UP;
				interfaceObj.StartGame(direction);
				break;
			case 's':
				direction = Constants::DOWN;
				interfaceObj.StartGame(direction);
				break;
			}
		}
	}
	system("pause");
	return 0;
}
