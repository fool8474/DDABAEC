#include "main.h"

using namespace std;

void Cal_Of_Pointer_and_Array_Indexing()
{
	int value = 7;
	int *ptr = &value;

	cout << uintptr_t(ptr - 1) << endl; // 10柳 林家
	cout << uintptr_t(ptr) << endl; // 10柳 林家
	cout << uintptr_t(ptr + 1) << endl; // 10柳 林家
	cout << uintptr_t(ptr + 2) << endl; // 10柳 林家
	// 4究 歹秦柳促.

	int array[] = { 9,7,5,3,1 };
	cout << array[0] << " " << (uintptr_t)&array[0] << endl; // 9, 林家
	cout << array[1] << " " << (uintptr_t)&array[1] << endl;
	cout << array[2] << " " << (uintptr_t)&array[2] << endl;
	cout << array[3] << " " << (uintptr_t)&array[3] << endl; // 1, 林家

	int *ptr2 = array;

	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr2 + i) << " " << (uintptr_t)(ptr2 + i) << endl;
	}

	cout << "------------咯扁何畔 巩磊凯------------" << endl;

	char name[] = "jack jack";
	const int n_name = sizeof(name) / sizeof(name[0]);
	
	char *ptr3 = name;
	for (int i = 0; i < n_name; i++)
	{
		cout << *(name + i); // jack jack 
	}

	cout << endl;

	for (int i = 0; i < n_name; i++)
	{
		cout << *(ptr3 + i); // jack jack
	}

	cout << endl;

	while (true)
	{
		cout << *(ptr3++);

		if (*(ptr3) == '\0')
			break;
	}

	cout << endl;
}