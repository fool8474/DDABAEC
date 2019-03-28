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
	//using namespace std::cout; // 이게 아니라..
	using std::cout; //이렇게.
	using std::endl;

	//using namespace AAA;
	//using namespace BBB;
	//이러면 my_var의 호출이 꼬인다

	{
		using namespace AAA;
		cout << my_var << endl;
	}

	{
		using namespace BBB;
		cout << my_var << endl;
	}

	// 이렇게 하면 된다.

	// using namespace는 가급적 적은 범위에서 써라.
}
