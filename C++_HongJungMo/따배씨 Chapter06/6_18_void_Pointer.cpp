#include "main.h"

using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR,
};

void void_Pointers()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void *ptr = nullptr;

	ptr = &i;
	ptr = &c; // 문제들이 없다!
	ptr = &f;
	// 다만 뭐가 들어갔는지 알 방법이 없음.

	//cout << ptr + 1 << endl; // 몇 byte를 더해야 하는지 모르기에 안됨

	cout << &f << " " << ptr << endl; // 잘 들어감!
	// cout << *ptr << endl; // de-referencing이 안된다. 뭘 넣었는지 모르니까.

	cout << *static_cast<float*>(ptr) << endl; // 이렇게 해서 써야함!

	// 그럼 왜 이렇게 쓰냐
	// 다형성을 부여하기 위해 어쩔 수 없이..

	Type type = FLOAT;

	if (type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;

	if (type == INT)
		cout << *static_cast<int*>(ptr) << endl;
	// 예전엔 이렇게 했는데 이제는 이렇게 안해도 됨 나중에 알려줌.
}
