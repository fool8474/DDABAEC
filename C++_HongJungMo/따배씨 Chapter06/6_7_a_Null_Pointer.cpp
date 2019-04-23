#include <iostream>
#include <cstddef>
#include "main.h"

void null_Pointer()
{
	// Null Pointer
	// 메모리가 없는데 접근해서 오류뜨는걸 방지하기 위해

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

	// 모두 같다.


	doSomethingNullPoint(ptr);
	doSomethingNullPoint(nullptr);

	double d = 123.4;

	doSomethingNullPoint(&d);

	ptr = &d;

	doSomethingNullPoint(ptr);

	std::nullptr_t nptr; // nullptr밖에 못받는다.
	
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