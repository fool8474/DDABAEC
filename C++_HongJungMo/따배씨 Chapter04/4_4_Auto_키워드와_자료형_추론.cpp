#include "main.h"

//void sub(auto x, int y){} //auto는 매개변수로는 안된다.
//대신 template를 사용하면 된다.

auto sub(int x, int y) -> int // 이렇게 사용도 가능
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
	//형 추론을 통한 auto(int) 선언

	auto d = 123.0;

	auto c = 1 + 2.0;

	cout << a << endl;
	cout << a + d + c << endl;

	auto result = add(1, 2); // double return

	cout << result << endl;
}
