#include "main.h"

using namespace std;

void new_and_delete()
{
	/*
		정수, 정적 배열은 밖으로 나가면 없어지는데
		동적 할당 친구들은 밖으로 남아있다.
	*/

	// int array[1000000]; // 디버깅 하면 메모리 할당이 안되서 오류가 남.
	// stack에 들어가는데 이건 용량이 작다.

	int * ptr = new int; // 메모리를 받아오고 그 주소를 알려준다.
	
	*ptr = 7; // int var, var = 7;
	// 배열 동적 할당을 하게 되면 여러가지 장점이 생기게 된다.

	int * ptr2 = new int{ 7 };

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;
	// 만약 delete를 안하게 되면 줬다는 걸 기억하고 있게 되어,
	// 종료됨과 동시에 자동으로 반납하게 된다.
	
	ptr = nullptr; // 이 포인터에는 쓸모있는 주소가 없다!

	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	

	int * ptr5 = new (std::nothrow) int{ 7 }; // 실패하면 nullptr이 대입됨.

	if (ptr5)
	{
		cout << ptr5 << endl;
	} // 안_전

	else
	{
		cout << "Could not allocate memory" << endl;
	}

	cout << "----------- 흔히 할 수 있는 실수 ------------" << endl;
	
	int *ptr3 = ptr;

	delete ptr;
	ptr = nullptr;
	ptr3 = nullptr; // 요렇게 해줘야함 ㅜㅜ


	cout << "----------- 메모리 누수 ------------" << endl;

//#define MEMORY_LEAK

#ifdef MEMORY_LEAK

	while (true)
	{
		int * ptr4 = new int; // 이래 하지마요 지우는 걸 깜빡하면 문제가 생김
		cout << ptr4 << endl;


	} // 메모리가 무한히 올라가게 된다. 

#endif // MEMORY_LEAK



	


}