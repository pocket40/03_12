#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1 = "hello";
	s1 += ",world";
	cout << s1 << endl;

	cout << s1.length() << endl; // s1 배열 의 길이

	string s2 = "hello, world";
	if (s2 == s1)
		cout << "same" << endl;
	else
		cout << "not same" << endl;

	for (int i = 0; i < s2.length(); i++) // s2.length == 11 0~11까지 출력
		cout << s2[i] << ' '; // ' ' 한개씩 출력할때마다 띄어쓰기
	cout << endl; //  cout << endl; 줄바꿈

	return 0;

}