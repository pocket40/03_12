//소멸자(Destructor)
//소멸자의 이름은 클래스의 이름과 같고생성자와의 구분을 위해 이름 앞에 ~기호를 사용함
//소멸자는 반환 타입이 없으며 반환 타입이 없음을 명시하는 void도 사용할 수 없음
//소멸자는 클래스에서 오직 하나만 존재하며 오버로딩될 수 없음
//소멸자를 추가하지 않으면 컴파일러가 자동으로 추가함

//객체가 메모리에서 삭제될 때, 자동으로 호출함
#include <iostream>
using namespace std;

struct Rect
{
	~Rect() { cout << "~Rect()" << endl; } // 소멸자
};

class Circle
{
public:
	~Circle() { cout << "~Circle()" << endl; } // 소멸자
};

int main() {
	Rect rect;
	Circle circle;

	return 0;
}