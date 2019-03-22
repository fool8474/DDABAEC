#include "main.h"

using namespace std;

void boolean_and_if()
{

	bool b1 = true; // copy initialization
	bool b2(false); // direct
	bool b3{ true }; // uniform

	b3 = false;

	cout << std::noboolalpha << endl; // true를 1로 표현
	cout << std::boolalpha << endl; // true를 true로 표현

	cout << b3 << endl; // 0
	cout << b1 << endl; // 1
	cout << !true << endl; // 0

	if (true && 1)
		cout << "this is true " << endl;
	else
		cout << "this is false " << endl;

	if (false || 0)
		cout << "this is true " << endl;
	else
		cout << "this is false " << endl;


	Is_this_number_even_or_odd();
	Is_this_number_even_or_odd();
}

void Is_this_number_even_or_odd()
{
	int n;
	cin >> n;

	if (n % 2 == 0)
	{
		cout << " 짝수 " << endl;
	}

	else
	{
		cout << " 홀수 " << endl;
	}
}
