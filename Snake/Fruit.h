#include <string>

#include "Const.h"

using namespace std;

class Fruit
{
private:
	int x;
	int y;

public:
	//��������� ������� ��� �������� ������
	pair<int, int> CreateFruit();
	//��������� ������� ������
	pair<int, int> GetFruitPosition();

private: 
	//�������� ������� ������
	void CreatePosition();
};

