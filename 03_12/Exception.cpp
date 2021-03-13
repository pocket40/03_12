#include <iostream>
using namespace std;

// C언어는 함수의 리턴은 연산 결과와 오류 코드가 혼재되어 있음
// c++ 언어는 연산 결과와 오류 코드를 분리하기 위해 예외라는 기능을 제공함

int divide(int num, int div) {
	if (div == 0)
		throw "divied: divied by zero";//thow 키워드를 사용하여 예외를 발생시킬 수 있음
	return num / div;
}

int main() {

	//try~catch 키워드를 사용하여 예외를 반드시 처리해야 함
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