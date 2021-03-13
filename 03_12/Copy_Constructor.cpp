//자신의 타입을 형식 인자로 하는 생성자를 복사 생성자라고 함
//객체의 복사를 지원하기 위해 제공됨
//사용자가 복사를 생성자를 정의하지 않을 경우, 컴파일러가 자동으로 정의하는데 이를 기본 복사 생성자라고 함	

#include <iostream>
using namespace std;

class Int32 {
	int _val;

public:
	Int32(int val = 0) :_val(val) {
		cout << "Int32(" << val << ")" << endl;
	}

	//기본 복사 생성자
	Int32(const Int32& o) :_val(o._val) {
		cout << "Int32(Int32(" << o._val << "))" << endl;
	}

	void print() { cout << _val << endl; }
};

int main() {
	int i = 10;
	int j = i;

	Int32 i32 = 10;
	Int32 j32 = i32;

	return 0;
}