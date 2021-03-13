#include <cstring>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class  String
{
	char* buf; // buffer
	int len; // ����

public:
	String(const char* s) { //������(��� ������ ���� )
		len = strlen(s); // �Ű� ���� s�� ���� s == hello / strlen(s) == 5
		buf = new char[len + 1]; //new char[6]
		strcpy(buf, s);
	}

	~String() {
		delete[] buf;
	}

	void display() {
		cout << buf << endl;
	}
};

int main() {
	String hello = "hello";
	hello.display();

	return 0;
}


