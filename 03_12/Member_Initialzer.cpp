#include <iostream>
using namespace std;

// �⺻ �����ڰ� ���� ��� ������ �ִ� ���, �ݵ�� ��� �̴ϼȶ������� �ʱ�ȭ�ؾ� ��

struct Point // �⺻������ ����
{
	int _x, _y;
	Point(int x, int y) : _x(x), _y(y) {}
};

class Circle
{
	Point pos;
	int radius;
	const double PI;

public:
	Circle() : pos(0 , 0), radius(0), PI(3.14){}
};

int main() {
	Circle c;
	return 0;
}