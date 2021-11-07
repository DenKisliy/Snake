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
	//���������� �����
	int points;
	//���������� ������
	pair<int, int> fruitPosition;
	//�������� ��������� ����� �� ��� X
	deque<int> coordinatesOfSnakeX;
	//�������� ��������� ����� �� ��� Y
	deque<int> coordinatesOfSnakeY;
	//
	bool gameOver;

public:
	DrawWindow();
	~DrawWindow();

	void ShowWindowInformation(int point, pair<int, int> fruitPosition, deque<int> coordinatesOfSnakeX, deque<int> coordinatesOfSnakeY, bool gameOver);

private:
	//��������� ��������
	void SetValues(int point, pair<int, int> fruitPosition, deque<int> coordinatesOfSnakeX, deque<int> coordinatesOfSnakeY);
	//�������� �����
	void DrawMap();
	//�������� ������� ��� ������ ������� ����� 
	void DrawTopOrBottomBorder();
	//�������� ������� ������ �����
	void DrawLeftAndRightBorder();
	//����������� �������� ���� ��� ������ �� �����
	char DrawSnakeAndFruit(pair<int, int> pointPosition);

	//����� �������������� ����������
	void ShowAddInformation();
};

