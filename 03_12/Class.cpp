// 클래스는 구조체와 동일한 개념
// 다음의 접근 지정자를 제공함
// public: 접근/호출에 제한이 없음
// private: 오직 구조체 또는 클래스 안에서만 접근/호출 가능
// protected: 구조체 또는 클래스와 파생 구조체 또는 클래스 안에서만 접근/호출 가능

#include<iostream>
using namespace std;

struct Struct
{
public: // 구조체 내부는 기본적으로 pulic
	void foo() { cout << "foo()" << endl; }

private:
	void hoo() { cout << "goo()" << endl; }

protected:
	void goo() { cout << "hoo()" << endl; }
};

class Class
{
public:
	void foo() { cout << "foo()" << endl; }

private:
	void goo() { cout << "goo()" << endl; }

protected:

	void hoo() { cout << "hoo()" << endl; }
};
	
int main() {
	Struct o1;
	o1.foo();

	//o1.goo(); //ERROR

	//o1.hoo(); //ERROR

	Class o2;
	o2.foo();
	//o2.goo(); //ERROR
	//o2.hoo(); //ERROR
}