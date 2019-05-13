#include "main.h"

using namespace std;

struct MyStruct
{
	int array[5] = { 9,7,5,3,1 };
};

//void printArray(int array[])
void printArray(int *array)
{
	cout << sizeof(array) << endl; // point variagble size

	*array = 100;
}

void printArrays(int *array, int size)
{
	int *ptr = array;

	for (int i = 0; i < size; i++)
	{
		cout << *(ptr) << " ";
		ptr += 1;
	}

	cout << endl;
}

void doSomethingWithMyStruct(MyStruct ms)
{
	cout << sizeof(ms.array) << endl;
}

void Pointer_and_Static_Array()
{

	int array[5] = { 9,7,5,3,1 };
	cout << array[0] << " " << array[1] << endl;
	cout << array << endl; // address of zero index
	cout << &(array[0]) << endl; // same as array address 
	
	cout << *array << endl; // 9

	char name[] = "ASDJKL";
	cout << *name << endl; // A
	
	int *ptr = array;
	cout << ptr << endl; // address of zero index
	cout << *ptr << endl; // 9

	cout << sizeof(array) << endl; // 5*4 20
	cout << sizeof(ptr) << endl; // point variable size

	printArray(array);

	cout << array[0] << " " << *array << endl; // 100 100

	printArrays(array, sizeof(array)/sizeof(int));

	MyStruct ms;

	cout << ms.array[0] << endl; // 9

	cout << sizeof(ms.array) << endl; // 20

	doSomethingWithMyStruct(ms); // 20
	
}