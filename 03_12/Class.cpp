// Ŭ������ ����ü�� ������ ����
// ������ ���� �����ڸ� ������
// public: ����/ȣ�⿡ ������ ����
// private: ���� ����ü �Ǵ� Ŭ���� �ȿ����� ����/ȣ�� ����
// protected: ����ü �Ǵ� Ŭ������ �Ļ� ����ü �Ǵ� Ŭ���� �ȿ����� ����/ȣ�� ����

#include<iostream>
using namespace std;

struct Struct
{
public: // ����ü ���δ� �⺻������ pulic
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