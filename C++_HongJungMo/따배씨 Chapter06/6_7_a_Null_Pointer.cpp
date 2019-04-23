#include <iostream>
#include <cstddef>
#include "main.h"

void null_Pointer()
{
	// Null Pointer
	// �޸𸮰� ���µ� �����ؼ� �����ߴ°� �����ϱ� ����

	double* ptr = 0;
	double* ptr2 = NULL;
	double* ptr3 = nullptr; // modern c++

	if (ptr != nullptr)
	{
		// do something useful
	}

	else
	{
		// do noting with ptr
	}

	// ��� ����.


	doSomethingNullPoint(ptr);
	doSomethingNullPoint(nullptr);

	double d = 123.4;

	doSomethingNullPoint(&d);

	ptr = &d;

	doSomethingNullPoint(ptr);

	std::nullptr_t nptr; // nullptr�ۿ� ���޴´�.
	
}

void doSomethingNullPoint(double *ptr)
{
	if (ptr != nullptr)
	{
		std::cout << *ptr << std::endl;
	}

	else
	{
		std::cout << "Null ptr, do nothing" << std::endl;
	}
}