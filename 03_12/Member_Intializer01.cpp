// 멤버의 초기화는 멤버 이니셜라이저가 아닌 멤버가 놓인 순서대로 초기화되므로 주의해야 함

#include <iostream>
using namespace std;

struct Point
{
	int x, y;
	Point() : y(0), x(y) {} // 멤버 이니셜라이저
};

int main() {
	Point p;

	cout << "x = " << p.x << endl;
	cout << "y = " << p.y << endl;

	return 0;
}
