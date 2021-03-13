#include <cstring>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class  String
{
	char* buf; // buffer
	int len; // 길이

public:
	String(const char* s) { //생성자(상수 포인터 변수 )
		len = strlen(s); // 매개 변수 s의 길이 s == hello / strlen(s) == 5
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


