#include "main.h"

namespace Extern_test
{
	extern int e_a = 123; // �ʱ�ȭ�� �Ͽ� �޸� �Ҵ��� �ʿ�.
	extern int e_b = 123; // �̰� ȣ���ϴ� �ʿ��� ���� �ٲ㺸��.

	void doSomething() // �̰� �ٸ� ������ ����Ϸ���?
		//forward declaration�� ����.
	{
		std::cout << "Hello External" << std::endl; 
		std::cout << "In test.cpp file " << Constants::pi << " " << &Constants::pi << std::endl;
	}
}