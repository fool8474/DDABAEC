#include "main.h"

using namespace std;

void foo(int * ptr)
{
	cout << ptr << " " << &ptr << endl;

	*ptr = 10;
}

void foo2(const int * ptr)
{
	cout << ptr << " " << &ptr << endl;

	//*ptr = 10;
}

void foo3(int * arr, int length)
{
	for(int i = 0; i < length; ++i)
	{
		cout << arr[i] << endl;
	}
	arr[0] = 1.0;
	// C½ºÅ¸ÀÏ
}

void Passing_Argument_By_Address()
{
	int value = 5;
	cout << value << " " << &value << endl;

	foo(&value);
	
	int arr[]{ 1,2,3,4,5 };
	foo3(arr, 5);
	
}