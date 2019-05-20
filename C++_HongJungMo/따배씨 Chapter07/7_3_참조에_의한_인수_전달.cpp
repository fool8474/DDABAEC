#include "main.h"
#include <cmath>

using namespace std;

void printElement(int (&arr)[4])
{
	// array�� ������ �� ���� ������ Ŭ���� Ȥ�� ���͸� ����� ���´ٰ� ��.
	// �̷��� �迭�� ������ ����.
	// �ƴϸ� �����ͷ�.
}

void fooo(const int &x)
{
	// �̷��� �ϸ� ������ �� �� �ִ�. (��� const�� �ּҸ� ���)
}

void addOne(int &y)
{
	cout << y << " " << &y << endl;
	y = y + 1; // reference ����
}

void getSinCos(const double& degree, double &sin_out, double &cos_out)
{
	static const double pi = 3.141592;
	const double radians = degree * pi / 180.0;

	sin_out = sin(radians);
	cos_out = cos(radians);
}

typedef int * pint;
void clclcl(pint &ptr)
{
	// (int*) &ptr == int *&ptr
	cout << ptr << " " << &ptr << endl;
}

void Call_by_Reference()
{
	int x = 5;

	cout << x << " " << &x << endl;
	addOne(x);
	cout << x << " " << &x << endl;
	// ��� �ּҰ� ����.

	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos); // sin�� cos �ּҿ� ���Ե�.

	cout << sin << " " << cos << endl;


	fooo(6);

	cout << "�����Ϳ� ���� ���۷���" << endl;

	int * ptr = &x;
	cout << ptr << " " << &ptr << endl; // clclcl���� ������ ptr�� ����.
	clclcl(ptr);

	int arr[]{ 1,2,3,4 };

	printElement(arr);
}


