//C++ ������ ���� Ÿ���� ������ ������ Ÿ������ ó����
//���� Ÿ���� ��ü���� �� Ÿ���� �����ڸ� ���� �����ϹǷ� ���� �ڵ�� ������

#include <iostream>
using namespace std;

enum Color {RED, GREEN, BLUE};

void draw_color(Color color) {
	switch (color)
	{
	case RED: cout << "RED" << endl;
		break;
	case GREEN: cout << "GREEN" << endl;
		break;
	case BLUE:cout << "BLUR" << endl;
		break;
	default:
		break;
	}

}

int main() {
	//draw_color(0);

	return 0;
}