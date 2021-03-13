// ���ڿ�(String)
//���ڿ� ó���� ���� ���ο� Ÿ���� ������
//C++ ���� �����ϴ� ���ڿ� Ÿ���� �⺻(built-in) Ÿ���� �ƴ϶� ����� ����(user-define)Ÿ����

#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
	//C
	char s1[] = "hello";// char���Ŀ� ���ڿ� ����
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
