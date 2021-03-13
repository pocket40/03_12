//C++ ����� �⺻ ���� ��å�� ���� ������

#include <cstring>
#include <iostream>
using namespace std;

class String
{
	char* buf;
	int len;

public:
	String(const char* str) {
		len = strlen(str);
		buf = new char[len + 1];
		strcpy(buf, str);
	}

	//���� ���� ��å�� �⺻ ���� ������
	//String(const String& o) : buf(o.buf), len(o.len){}

	~String() { delete[] buf; }

	void print() { cout << buf << endl; }
};

int main() {
	{
		String s1 = "hello";
		String s2 = s1;
	} // Runtime Error
	getchar();

	return 0;
}