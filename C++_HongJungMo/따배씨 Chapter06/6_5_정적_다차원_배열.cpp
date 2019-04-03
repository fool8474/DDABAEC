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
	
	// 2���� �迭�� �ƴ����� �ƹ�ư 2������ ����ϴ� 2�� for��

	int array[num_rows][num_columns]; //row-major <-> column-major

	array[0][0] = 1;
	array[0][1] = 2;
	// �ϳ��ϳ� �ִ� �ϵ��ڵ�

	int array2[num_rows][num_columns] = { 
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};
	// ���������� �ִ� �ٸ� ���

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
		} // ���´� 2���������� �޸������δ� 1�����̴�!!!
		cout << endl;
	}

	
}