#include <iostream>
using namespace std;

//열거자는 암묵적으로 정수 타입과 호환됨
//정수 타입을 열거 타입으로 변환하려면 명시젹 변환을 사용해야 함
enum Color{RED, GREEN, BLUE};

int main() {
	int c1 = RED; // 암시적 변환
	switch (c1)
	{
		case Color::RED: cout << "RED" << endl; break; // 실행
		case Color::GREEN: cout << "GREEN" << endl; break;
		case Color::BLUE: cout << "BLUE" << endl; break;
	}

	Color c2;
	c2 = (Color)0; // 명시적 변환
	switch (c2) {
		case Color::RED: cout << "RED" << endl; break; //실행
		case Color::GREEN: cout << "GREEN" << endl; break;
		case Color::BLUE: cout << "BLUE" << endl; break;
	}
	cout << c2 << endl;
	
	return 0;
}