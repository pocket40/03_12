#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1 = "hello";
	s1 += ",world";
	cout << s1 << endl;

	cout << s1.length() << endl; // s1 �迭 �� ����

	string s2 = "hello, world";
	if (s2 == s1)
		cout << "same" << endl;
	else
		cout << "not same" << endl;

	for (int i = 0; i < s2.length(); i++) // s2.length == 11 0~11���� ���
		cout << s2[i] << ' '; // ' ' �Ѱ��� ����Ҷ����� ����
	cout << endl; //  cout << endl; �ٹٲ�

	return 0;

}