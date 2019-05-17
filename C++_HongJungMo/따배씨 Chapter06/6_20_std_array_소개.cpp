#include "main.h"
#include <array>

using namespace std;

void printLength(const array<int, 5>& my_array)
{
	cout << my_array.size() << endl;
}

void printArray(const array<int, 5>& my_array)
{
	for (auto &element : my_array)
	{
		cout << element << " ";
	}

	cout << endl;
}

void std_array_Introduce()
{
	int array[5] = { 1,2,3,4,5 };

	std::array<int, 5> my_arr = { 1,2,3,4,5 };
	// �Ȱ��� �۵�
	//std::array<int> my_arr = { 1,2,3,4,5 }; // �̰� �ȵ�!

	my_arr = { 0,1,2,3,4 };
	my_arr = { 0,1,2, };

	cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl; // at�� ���� �߻��� ����ó���� �Ǿ� ������. ���� ����.
	
	cout << my_arr.size() << endl;

	printLength(my_arr);


	my_arr = { 1,21,11,52,0 };
	
	printArray(my_arr);

	std::sort(my_arr.begin(), my_arr.end()); //sort
	printArray(my_arr);
	std::sort(my_arr.rbegin(), my_arr.rend()); //reverse sort
	printArray(my_arr);
}