// 문자열(String)
//문자열 처리를 위한 새로운 타입을 제공함
//C++ 언어에서 제공하는 문자열 타입은 기본(built-in) 타입이 아니라 사용자 정의(user-define)타입임

#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
	//C
	char s1[] = "hello";// char형식에 문자열 삽입
	printf("%s\n", s1);

	int i;
	for (i = 0; i < strlen(s1); i++)
		printf("%c", s1[i]);
	printf("\n");

	//C++
	string s2 = "world";
	cout << s2 << endl;
	printf("%s\n", s2.c_str()); // printf("%s\n", s2);

	for (i = 0; i < s2.size(); i++) 
		cout << s2[i];
	cout << endl;

	printf("strlen(s1) : %d\n", strlen(s1));
	printf("s2.size() : %d\n", s2.size());

	return 0;



}
