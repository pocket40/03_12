//�ڽ��� Ÿ���� ���� ���ڷ� �ϴ� �����ڸ� ���� �����ڶ�� ��
//��ü�� ���縦 �����ϱ� ���� ������
//����ڰ� ���縦 �����ڸ� �������� ���� ���, �����Ϸ��� �ڵ����� �����ϴµ� �̸� �⺻ ���� �����ڶ�� ��	

#include <iostream>
using namespace std;

class Int32 {
	int _val;

public:
	Int32(int val = 0) :_val(val) {
		cout << "Int32(" << val << ")" << endl;
	}

	//�⺻ ���� ������
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