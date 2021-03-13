#include <iostream>
using namespace std;

// 기본 생성자가 없는 멤버 변수가 있는 경우, 반드시 멤버 이니셜라이저로 초기화해야 함

struct Point // 기본생성자 없음
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