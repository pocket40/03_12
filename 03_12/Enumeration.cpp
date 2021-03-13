//C++ 에서의 열거 타입은 별도의 독립된 타입으로 처림됨
//열거 타입의 객체에는 그 타입의 열거자만 대입 가능하므로 다음 코드는 에러임

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