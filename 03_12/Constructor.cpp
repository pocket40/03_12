#include <iostream>
using namespace std;

//�������� �̸��� Ŭ������ �̸��� �����ؾ� ��
//��ȯ Ÿ���� ������ ��ȯ Ÿ���� ������ ����ϴ� void�� ����� �� ����
//�����ڵ� ������ �Լ��̹Ƿ� �����ε��� ������
//��ü�� ������ �� �ڵ����� ȣ��Ǹ� ��ü�� �ʱ�ȭ�� �� �����
struct Rect
{
	Rect() { cout << "Rect()" << endl; } //������
};

class Circle
{
public:
	Circle() { cout << "Circle()" << endl; } // ������

	int main() {
		Rect rect;
		Circle circle;

		return 0;
	}
};