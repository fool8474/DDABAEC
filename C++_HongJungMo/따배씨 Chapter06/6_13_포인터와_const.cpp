#include "main.h"

using namespace std;

void Pointer_and_const()
{
	const int value = 5;
	// int *ptr = &value; // �ȵ�!
	
	const int *ptr = &value; // ��!
	// *ptr = 6; // �ȵ�!

	cout << *ptr << endl; // ��!
	
	int value1 = 5;
	const int *ptr = &value;

	int value2 = 6;
	ptr = &value2; // �̰� �ȴ�. ptr�� �� �ּҰ��� �ٲٴ°� ���ϴ°� �ƴ�.
	// ������ �ִ� �ּҰ��� ���� �ٲٴ°� �ȵȴٴ� ��.

	// *ptr = 8; // ���� �̰� �ȵ�

	int value4 = 5;
	int *const ptr2 = &value4;
	
	*ptr2 = 10;
	cout << *ptr2 << endl;
	
	int value3 = 8;
	//ptr2 = &value3; // �̰� �ȴ� �޸� ���� �ٲܼ� ����.


	int value5 = 5;
	const int *ptr3 = &value5;
	int *const ptr4 = &value5;
	const int *const ptr5 = &value5; // ���� �ּҵ� �ٲ� �� ����.

}