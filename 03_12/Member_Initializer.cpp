//������ ������ ��� ������ �Ҵ��� �ʱ�ȭ�� �ƴ� ����
//��� ������ �ʱ�ȭ�Ϸ��� ��� �̴ϼȶ������� ����ؾ� ��

#include <iostream>
using namespace std;

class Circle {
	int x, y;
	int radius;
	const double PI;

public:
	Circle() : PI(3.14) { //��� �̴ϼȶ�����
		x = 0;  // ��� ����
		y = 0;
		radius = 0;
	}
};

int main() {
	Circle c;
	return 0;
}

