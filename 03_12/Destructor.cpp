//�Ҹ���(Destructor)
//�Ҹ����� �̸��� Ŭ������ �̸��� ��������ڿ��� ������ ���� �̸� �տ� ~��ȣ�� �����
//�Ҹ��ڴ� ��ȯ Ÿ���� ������ ��ȯ Ÿ���� ������ ����ϴ� void�� ����� �� ����
//�Ҹ��ڴ� Ŭ�������� ���� �ϳ��� �����ϸ� �����ε��� �� ����
//�Ҹ��ڸ� �߰����� ������ �����Ϸ��� �ڵ����� �߰���

//��ü�� �޸𸮿��� ������ ��, �ڵ����� ȣ����
#include <iostream>
using namespace std;

struct Rect
{
	~Rect() { cout << "~Rect()" << endl; } // �Ҹ���
};

class Circle
{
public:
	~Circle() { cout << "~Circle()" << endl; } // �Ҹ���
};

int main() {
	Rect rect;
	Circle circle;

	return 0;
}