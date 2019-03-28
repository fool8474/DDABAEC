#include "main.h"

//void sub(auto x, int y){} //auto�� �Ű������δ� �ȵȴ�.
//��� template�� ����ϸ� �ȴ�.

auto sub(int x, int y) -> int // �̷��� ��뵵 ����
{
	return x - y;
}

auto add(int x, int y)
{
	return x + (double)y; //double return
}

void autoKeyword()
{
	using std::cout;
	using std::endl;

	auto a = 123;
	//�� �߷��� ���� auto(int) ����

	auto d = 123.0;

	auto c = 1 + 2.0;

	cout << a << endl;
	cout << a + d + c << endl;

	auto result = add(1, 2); // double return

	cout << result << endl;
}
