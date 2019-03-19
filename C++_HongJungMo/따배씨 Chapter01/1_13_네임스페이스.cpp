#include "main.h"

using namespace std;

namespace MySpace1
{
	int doSomething2(int a, int b);
	int doSomething2(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	int doSomething2(int a, int b);
	int doSomething2(int a, int b)
	{
		return a - b;
	}
}

int doSomething2(int a, int b)
{
	return a * b;
}

void WhatIsNamespace() 
{
	MySpace1::doSomething2(3, 4); // 번거롭다
	cout << MySpace1::doSomething2(3, 4) << endl; // 7
	cout << doSomething2(3, 4) << endl; // 12

	using namespace MySpace2; //이를 통해 myspace2를 쓰지 않아도 사용 가능.
	//cout << doSomething2(5, 6) << endl; // 근데 이건 이름이 같아서 문제가 발생한다.
}