#include <iostream>
using namespace std;

// ������ ������ ���, �̸� �浹�� ���ɼ��� �������Ƿ� ������ ���ӽ����̽� �ȿ� �ִ� ���� ����
namespace edit
{
	enum Color { RED, GREEN, BLUE};
	void changeFontColor(Color color) {
		cout << "changeFondColor()" << endl;
	}
}

namespace paint
{
	enum Color {RED, GREEN, BLUE};
	void drawColor(Color color) {
		cout << "drawColor()" << endl;
	}
}

int main() {
	edit::changeFontColor(edit::RED);
	//edit::changeFontColor(paint::BLUE);// ERROR

	paint::drawColor(paint::BLUE);
	//paint::drawColor(edit::BLUE); // ERROR

	return 0;
}