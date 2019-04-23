#include <iostream>
#include <typeinfo>

struct exStruct
{
	int a, b, c, d;
};

void Tsukaikata_Of_Pointer()
{
	using namespace std;

	int x = 5;

	// 지역변수 = 스택
	// 동적 할당 메모리 = 힙
	
	cout << x << endl;
	cout << &x << endl; // address of operator
	cout << (int)& x << endl; // 10진수

	// de-reference operator (*)
	// pointer는 reference의 일종
	
	/*
	de-reference는 포인터가 '저 주소에 가면 이 데이터가 있어요' 라고
	간접적으로 가리키기만 하는 것에 대해서
	'그럼 거기에 뭐가 있는지 내가 들여다볼께'라며
	직접적으로 접근하겠다는 의미
	*/

	cout << &x << endl; // 주소
	cout << *(&x) << endl; // 주소를 들여다보기

	// 포인터는 메모리 주소를 담는 변수이다.
	
	cout << "----------여기부터 포인터----------" << endl;

	int y = 6;

	typedef int* pint; // 이렇게도 쓸 수 있지만.. (2중, 3중으로 쓸때)
	int *ptr_x = &x; // 보통 이렇게 쓴다.
	pint pint_ptr_x = &x, pint_ptr_y = &y;

	int* ptr_ex = &x, * ptr_ey = &y; // 이렇게 양쪽다 붙여줘야 함.

	cout << ptr_x << endl;
	cout << *ptr_x << endl; // int*로 선언됐으므로 int타입으로 가져온다.
	
	double d = 1.0;

	double* ptr_d = &d;

	cout << ptr_d << endl;
	cout << *ptr_d << endl; // 다양한 데이터타입에 대해서도 쓸 수 있다.

	cout << "----------Using TypeInfo---------"<< endl;

	cout << typeid(&x).name() << endl; // int * __ptr64
	cout << typeid(&d).name() << endl; // double * __ptr64
	cout << typeid(ptr_x).name() << endl; // int * __ptr64
	cout << typeid(ptr_d).name() << endl; // double * __ptr64
	cout << typeid(*ptr_x).name() << endl; // int
	cout << typeid(*ptr_d).name() << endl; // double


	cout << "----------Point Size-----------" << endl;
	// 포인트는 모든 타입에 대해서 사이즈가 같다.

	cout << sizeof(x) << endl; // 4
	cout << sizeof(d) << endl; // 8
	cout << sizeof(&x) << endl; // if x86 : 4 x64 : 8
	cout << sizeof(&d) << endl; // if x86 : 4 x64 : 8
	// 더 많은 메모리를 저장하기 위해 x64로 가면 pointer가 8byte가 된다.

	exStruct ss;
	exStruct* ptr_ss;

	cout << sizeof(ss) << endl; // 16bytes
	cout << sizeof(ptr_ss) << endl; // 8bytes
}

int* doSomething(int* ptr_a) // 이런 것도 있다..
{
	return nullptr;
}