#include <iostream>
using namespace std;

// C���� �Լ��� ������ ���� ����� ���� �ڵ尡 ȥ��Ǿ� ����
// c++ ���� ���� ����� ���� �ڵ带 �и��ϱ� ���� ���ܶ�� ����� ������

int divide(int num, int div) {
	if (div == 0)
		throw "divied: divied by zero";//thow Ű���带 ����Ͽ� ���ܸ� �߻���ų �� ����
	return num / div;
}

int main() {

	//try~catch Ű���带 ����Ͽ� ���ܸ� �ݵ�� ó���ؾ� ��
	try
	{
		int q = divide(1, -4); //num==4, div==0
		printf("%d\n", q);
	}
	catch (const char* msg)
	{
		int f = 1;
		fprintf(stderr, "%s\n", msg);
	}

	return 0;
}