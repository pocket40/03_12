#include <iostream>
using namespace std;

//생성자의 이름은 클래스의 이름과 동일해야 함
//반환 타입이 없으며 반환 타입이 없음을 명시하는 void도 사용할 수 없음
//생성자도 일종의 함수이므로 오버로딩이 가능함
//객체가 생성될 때 자동으로 호출되며 객체를 초기화할 때 사용함
struct Rect
{
	Rect() { cout << "Rect()" << endl; } //생성자
};

class Circle
{
public:
	Circle() { cout << "Circle()" << endl; } // 생성자

	int main() {
		Rect rect;
		Circle circle;

		return 0;
	}
};