#include <string>
#include "main.h"

using namespace std;

void Introduce_String()
{
	const char my_strs[] = "Hello, World";
	//한 글자를 나열, 기본 제공
	const string my_hello = "Hello, World";
	//프로그래머들 편하라고.. 사용자 정의 자료형같은 느낌

	cout << my_hello << endl;

	string my_ID = "123"; // 정수로써 연산이 되지 않는다.
	
	
	cout << "Your name ? : ";
	string name;
	cin >> name;
	cout << "Your age ? : ";
	string age;
	cin >> age;
	cout << name << " " << age << endl;
	
	std::getline(std::cin, age); // \n을 받아버림.

	string kkk;
	std::getline(std::cin, kkk);
	cout << kkk << endl;	

	string getMethods("lengthMethodTest");

	cout << getMethods.length() << endl;
}