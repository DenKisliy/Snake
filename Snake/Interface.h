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
	//����
	int points;
	//�������� �� ����
	bool gameOver;

public:
	//����������� ������
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
	//������ ������ ����
	void StartGame(Constants::ENUM_DIRECTION direction);

private:
	//��������� ����
	//void DrawWindow();
	//������� ����
	void AddPoint();
	//�������� ����
	int GetPoints();
	//����� ������� ����
	void ChangeSnakePosition();
	//�������� ���� ���� ����� �� ������� ����
	void CheckPosition(int directionByX, int directionByY);
	//���������� ��� ���������� ����
	void GameOver();
	//�������� ������� ��� ������ � ������� �����������
	void CreateDirectionObject(Constants::ENUM_DIRECTION direction);
};

