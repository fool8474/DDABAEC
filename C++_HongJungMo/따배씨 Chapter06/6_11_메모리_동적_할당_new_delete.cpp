#include "main.h"

using namespace std;

void new_and_delete()
{
	/*
		����, ���� �迭�� ������ ������ �������µ�
		���� �Ҵ� ģ������ ������ �����ִ�.
	*/

	// int array[1000000]; // ����� �ϸ� �޸� �Ҵ��� �ȵǼ� ������ ��.
	// stack�� ���µ� �̰� �뷮�� �۴�.

	int * ptr = new int; // �޸𸮸� �޾ƿ��� �� �ּҸ� �˷��ش�.
	
	*ptr = 7; // int var, var = 7;
	// �迭 ���� �Ҵ��� �ϰ� �Ǹ� �������� ������ ����� �ȴ�.

	int * ptr2 = new int{ 7 };

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;
	// ���� delete�� ���ϰ� �Ǹ� ��ٴ� �� ����ϰ� �ְ� �Ǿ�,
	// ����ʰ� ���ÿ� �ڵ����� �ݳ��ϰ� �ȴ�.
	
	ptr = nullptr; // �� �����Ϳ��� �����ִ� �ּҰ� ����!

	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	

	int * ptr5 = new (std::nothrow) int{ 7 }; // �����ϸ� nullptr�� ���Ե�.

	if (ptr5)
	{
		cout << ptr5 << endl;
	} // ��_��

	else
	{
		cout << "Could not allocate memory" << endl;
	}

	cout << "----------- ���� �� �� �ִ� �Ǽ� ------------" << endl;
	
	int *ptr3 = ptr;

	delete ptr;
	ptr = nullptr;
	ptr3 = nullptr; // �䷸�� ������� �̤�


	cout << "----------- �޸� ���� ------------" << endl;

//#define MEMORY_LEAK

#ifdef MEMORY_LEAK

	while (true)
	{
		int * ptr4 = new int; // �̷� �������� ����� �� �����ϸ� ������ ����
		cout << ptr4 << endl;


	} // �޸𸮰� ������ �ö󰡰� �ȴ�. 

#endif // MEMORY_LEAK



	


}