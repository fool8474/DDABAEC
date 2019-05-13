#include "main.h"

using namespace std;

void Dynamically_Allocating_Arrays()
{
	int length;

	cout << "입력하세여 : ";
	cin >> length;

	int *array = new int[length];

	for (int i = 0; i < length; i++)
	{
		array[i] = i * i;
		cout << array[i] << endl;
		cout << (uintptr_t)&array[i] << endl;
	}

	delete [] array;


	// int fixedArray[] = { 1,2,3,4,5 };

	int *arrays = new int[3]{ 1,2,3 };

	delete[] arrays;
	// delete[] fixedArray;
}