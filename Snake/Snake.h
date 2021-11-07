#include "Const.h"
#include <string>
#include <deque>

using namespace std;
class Snake
{
private:
	//����� ����
	int snakeLength;
	//�������� ��������� ����� �� ��� X
	deque<int> coordinatesOfSnakeX;
	//�������� ��������� ����� �� ��� Y
	deque<int> coordinatesOfSnakeY;
	int maxLength;

public:
	Snake();
	~Snake();

public:
	//���������� ����� ���� ��� �������� ������
	void IncreaseLength(int startPositionX, int startPositionY);
	//��������� �������� ��������� ���� �� ��� X
	deque<int> GetCoordinatesByX();
	//��������� �������� ��������� ���� �� ��� Y
	deque<int> GetCoordinatesByY();

	//��������� �������� ��������� ������ ����
	pair<int, int> GetHeadPosition();

	//���������� ��������� ���� ��� ��������
	void UpdateCoordinatesOfTales(int startPositionX, int startPositionY, bool eatFruit);

	//�������� ��� �� ������ �����
	bool IsEatTail(int startPositionX, int startPositionY);

private:
	//���������� ��������� ������� ����
	void StartingPosition();
	//���������� �������� ��������� �� ��� ��� ��������
	void ChangeValueForTail(int& beforePreviousValue, int& previousValue, deque<int>& vectorOfValue, int index);
};

