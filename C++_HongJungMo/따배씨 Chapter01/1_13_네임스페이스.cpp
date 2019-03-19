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
	MySpace1::doSomething2(3, 4); // ���ŷӴ�
	cout << MySpace1::doSomething2(3, 4) << endl; // 7
	cout << doSomething2(3, 4) << endl; // 12

	using namespace MySpace2; //�̸� ���� myspace2�� ���� �ʾƵ� ��� ����.
	//cout << doSomething2(5, 6) << endl; // �ٵ� �̰� �̸��� ���Ƽ� ������ �߻��Ѵ�.
}