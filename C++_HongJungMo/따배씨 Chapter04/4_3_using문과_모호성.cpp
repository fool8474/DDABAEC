#include "main.h"

namespace AAA
{
	int my_var(10);
}

namespace BBB
{
	int my_var(20);
}

void IsUsingIsGood()
{
	//using namespace std::cout; // �̰� �ƴ϶�..
	using std::cout; //�̷���.
	using std::endl;

	//using namespace AAA;
	//using namespace BBB;
	//�̷��� my_var�� ȣ���� ���δ�

	{
		using namespace AAA;
		cout << my_var << endl;
	}

	{
		using namespace BBB;
		cout << my_var << endl;
	}

	// �̷��� �ϸ� �ȴ�.

	// using namespace�� ������ ���� �������� ���.
}
