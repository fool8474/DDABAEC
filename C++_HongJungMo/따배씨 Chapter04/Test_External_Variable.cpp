#include "main.h"

namespace Extern_test
{
	extern int e_a = 123; // 초기화를 하여 메모리 할당이 필요.
	extern int e_b = 123; // 이건 호출하는 쪽에서 수를 바꿔보자.

	void doSomething() // 이걸 다른 곳에서 사용하려면?
		//forward declaration을 하자.
	{
		std::cout << "Hello External" << std::endl; 
		std::cout << "In test.cpp file " << Constants::pi << " " << &Constants::pi << std::endl;
	}
}