#include <iostream>
using namespace std;

int main() {
	try
	{
		while (true)
			// enw �������� ���, ������ �߻��ϸ� ���� �ƴ� ���ܸ� �߻���Ŵ
			int* ptr = new int[4095];
	}
	catch (bad_alloc& e)
	{
		
		cout << "new: " << e.what() << endl; // e.what() bad_allocation
	}

	return 0;
}