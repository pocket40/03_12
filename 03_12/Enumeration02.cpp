#include <iostream>
using namespace std;

// 열거자 많아질 경우, 이름 충돌의 가능성이 높아지므로 가급적 네임스페이스 안에 넣는 것이 좋음
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