// ����� �ʱ�ȭ�� ��� �̴ϼȶ������� �ƴ� ����� ���� ������� �ʱ�ȭ�ǹǷ� �����ؾ� ��

#include <iostream>
using namespace std;

struct Point
{
	int x, y;
	Point() : y(0), x(y) {} // ��� �̴ϼȶ�����
};

int main() {
	Point p;

	cout << "x = " << p.x << endl;
	cout << "y = " << p.y << endl;

	return 0;
}
