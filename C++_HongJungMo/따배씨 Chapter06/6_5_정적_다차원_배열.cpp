#include "main.h"

using namespace std;
void statical_multi_dimension_array()
{
	const int num_rows = 3;
	const int num_columns = 5;

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_columns; col++)
		{
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		}
		cout << endl;
	}

	cout << endl;
	
	// 2차원 배열은 아니지만 아무튼 2차원을 출력하는 2중 for문

	int array[num_rows][num_columns]; //row-major <-> column-major

	array[0][0] = 1;
	array[0][1] = 2;
	// 하나하나 넣는 하드코딩

	int array2[num_rows][num_columns] = { 
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};
	// 직접적으로 넣는 다른 방법

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_columns; col++)
		{
			cout << '[' << array2[row][col] << ']' << '\t';
		}
		cout << endl;
	}

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_columns; col++)
		{
			cout << '[' << (int)&array2[row][col] << ']' << '\t';
		} // 형태는 2차원이지만 메모리적으로는 1차원이다!!!
		cout << endl;
	}

	
}