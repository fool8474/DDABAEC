#include <string>
#include "main.h"

using namespace std;

void Introduce_String()
{
	const char my_strs[] = "Hello, World";
	//�� ���ڸ� ����, �⺻ ����
	const string my_hello = "Hello, World";
	//���α׷��ӵ� ���϶��.. ����� ���� �ڷ������� ����

	cout << my_hello << endl;

	string my_ID = "123"; // �����ν� ������ ���� �ʴ´�.
	
	
	cout << "Your name ? : ";
	string name;
	cin >> name;
	cout << "Your age ? : ";
	string age;
	cin >> age;
	cout << name << " " << age << endl;
	
	std::getline(std::cin, age); // \n�� �޾ƹ���.

	string kkk;
	std::getline(std::cin, kkk);
	cout << kkk << endl;	

	string getMethods("lengthMethodTest");

	cout << getMethods.length() << endl;
}