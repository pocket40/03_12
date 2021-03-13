#include <iostream>
using namespace std;

int main() {
	try
	{
		while (true)
			// enw 연산자의 경우, 오류가 발생하면 널이 아닌 예외를 발생시킴
			int* ptr = new int[4095];
	}
	catch (bad_alloc& e)
	{
		
		cout << "new: " << e.what() << endl; // e.what() bad_allocation
	}

	return 0;
}