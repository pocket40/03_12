#include <iostream>
using namespace std;

// 사용자가 생성자를 추가하지 않으며 컴파일러가 자동으로 추가하는데 이를 기본 생성자라고 함
// 기본 생성자는 형식 인자가 하나도 없으며 생성자 내부에도 하는 일이 없음
// 사용자가 생성자를 오버로딩하면 컴파일러는 기본 생성자를 추가하지 않음

class Point
{
	int _x, _y;
public:
	Point(int x, int y) {
		_x = x;
		_y = y;
	}
};

int main() {
	//Point p1; //기본 생성자 호출 // ERROR  
	Point p2(1, 1); //오버로딩된 생성자 호출

	return 0;
}