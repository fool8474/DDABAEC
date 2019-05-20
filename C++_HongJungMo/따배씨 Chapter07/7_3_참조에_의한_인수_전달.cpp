#include "main.h"
#include <cmath>

using namespace std;

void printElement(int (&arr)[4])
{
	// array를 보내야 할 때는 언제나 클래스 혹은 벡터를 만들어 보냈다고 함.
	// 이렇게 배열로 하지는 않음.
	// 아니면 포인터로.
}

void fooo(const int &x)
{
	// 이렇게 하면 값으로 줄 수 있다. (사실 const라서 주소를 사용)
}

void addOne(int &y)
{
	cout << y << " " << &y << endl;
	y = y + 1; // reference 전달
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
	// 모두 주소가 같다.

	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos); // sin과 cos 주소에 대입됨.

	cout << sin << " " << cos << endl;


	fooo(6);

	cout << "포인터에 대한 레퍼런스" << endl;

	int * ptr = &x;
	cout << ptr << " " << &ptr << endl; // clclcl에서 나오는 ptr과 같다.
	clclcl(ptr);

	int arr[]{ 1,2,3,4 };

	printElement(arr);
}


