#include <iostream>
using namespace std;

//�����ڴ� �Ϲ������� ���� Ÿ�԰� ȣȯ��
//���� Ÿ���� ���� Ÿ������ ��ȯ�Ϸ��� ��à� ��ȯ�� ����ؾ� ��
enum Color{RED, GREEN, BLUE};

int main() {
	int c1 = RED; // �Ͻ��� ��ȯ
	switch (c1)
	{
		case Color::RED: cout << "RED" << endl; break; // ����
		case Color::GREEN: cout << "GREEN" << endl; break;
		case Color::BLUE: cout << "BLUE" << endl; break;
	}

	Color c2;
	c2 = (Color)0; // ����� ��ȯ
	switch (c2) {
		case Color::RED: cout << "RED" << endl; break; //����
		case Color::GREEN: cout << "GREEN" << endl; break;
		case Color::BLUE: cout << "BLUE" << endl; break;
	}
	cout << c2 << endl;
	
	return 0;
}