#include "main.h"

using namespace std;

void doSSomething(const int& x)
{
	cout << x << endl;
}

void reference_and_const()
{
	int x = 5;
	int &ref_x = x;
	
	const int y = 5;
	const int &ref_x3 = x;
	const int &ref_2 = ref_x;

	const int &ref_x2 = 3 + 4;
	//�ּҵ� �����ǰ� ������� �ִ�.
	
	int a = 1;
	doSSomething(a);
	doSSomething(1);
	doSSomething(a+3);
	doSSomething(3*4); // ���۷����� �Լ� parameter�� ����ϸ� ���� ���ϴ�!
}