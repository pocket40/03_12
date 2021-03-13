//생성자 내에서 멤버 변수의 할당은 초기화가 아닌 대입
//멤버 변수를 초기화하려면 멤버 이니셜라이저를 사용해야 함

#include <iostream>
using namespace std;

class Circle {
	int x, y;
	int radius;
	const double PI;

public:
	Circle() : PI(3.14) { //멤버 이니셜라이저
		x = 0;  // 멤버 변수
		y = 0;
		radius = 0;
	}
};

int main() {
	Circle c;
	return 0;
}

