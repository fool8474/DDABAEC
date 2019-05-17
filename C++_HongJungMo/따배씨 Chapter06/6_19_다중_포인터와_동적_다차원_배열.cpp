#include "main.h"

using namespace std;

void pp_and_dynamic_multiDem_Array()
{
	int * ptr = nullptr;
	int **ptrptr = nullptr;

	int value = 5;

	ptr = &value;

	ptrptr = &ptr;

	cout << ptr << " " << *ptr << " " << &ptr << endl; // 주소, 값, (포인터)주소
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl; // (포인터)주소, 주소, (포인터포인터)주소 
	cout << **ptrptr << endl; // 값

	int ***ppptr, ****pppptr;
	// 이런 것도 있으나 이런걸 쓸 일이 있을까..

	cout << "2중 포인터를 이용한 동적 2차원 배열" << endl;

	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
	};

	int * r1 = new int[col] {1, 2, 3, 4, 5};
	int * r2 = new int[col] {6, 7, 8, 9, 10};
	int * r3 = new int[col] {11, 12, 13, 14, 15};

	int **rows = new int*[row] {r1, r2, r3};
	
	// print all elements
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << rows[r][c] << " ";
		}
		cout << endl;
	}

	cout << "2중 포인터 배열 선언 및 값 복사" << endl;

	int **matrix = new int*[row];

	for (int r = 0; r < row; ++r)
	{
		matrix[r] = new int[col];
	}

	// print all elements
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			matrix[r][c] = s2da[r][c];
			cout << rows[r][c] << " ";
		}
		cout << endl;
	}

	// delete
	for (int r = 0; r < row; r++)
	{
		delete[] matrix[r];
	}

	delete[] matrix;
	delete[] r1;
	delete[] r2;
	delete[] r3;
	delete[] rows;

}