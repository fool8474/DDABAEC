#include "main.h"

using namespace std;

void Pointer_and_const()
{
	const int value = 5;
	// int *ptr = &value; // 안돼!
	
	const int *ptr = &value; // 돼!
	// *ptr = 6; // 안돼!

	cout << *ptr << endl; // 돼!
	
	int value1 = 5;
	const int *ptr = &value;

	int value2 = 6;
	ptr = &value2; // 이건 된다. ptr에 들어간 주소값을 바꾸는걸 못하는게 아님.
	// 가지고 있는 주소값의 값을 바꾸는게 안된다는 것.

	// *ptr = 8; // 역시 이건 안돼

	int value4 = 5;
	int *const ptr2 = &value4;
	
	*ptr2 = 10;
	cout << *ptr2 << endl;
	
	int value3 = 8;
	//ptr2 = &value3; // 이건 안대 메모리 값을 바꿀수 없다.


	int value5 = 5;
	const int *ptr3 = &value5;
	int *const ptr4 = &value5;
	const int *const ptr5 = &value5; // 값도 주소도 바꿀 수 없다.

}