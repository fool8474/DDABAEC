#include "main.h"

using namespace std;

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

void doSomething(int n)
{
	n = 10; // 이것은 주소가 다르다
	cout << "In doSomething " << n << endl; // 10
}

void doSomethingWithReference(int &n)
{
	n = 10; // 이것은 주소가 같다.
	cout << "In doSomething " << n << endl; // 10
}

void printElements(const int(&arr)[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void reference_variable()
{
	int value = 5;

	int *ptr = nullptr;
	ptr = &value;

	int &ref = value; // ref가 value와 같은 메모리인것 처럼 작동
	cout << ref << endl;

	ref = 10;
	cout << value << " " << ref << endl; // 같음

	cout << &value << endl; // 세 주소가 모두 같다
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl; // '포인터' 자체의 주소만 다름
	
	// int &ref; 
	// 반드시 정의 즉시 초기화되어야 함. 

	// 초기화도 변수로. const인 애도 가져다 쓸 수 없다.
	
	int value1 = 5;
	int value2 = 10;

	int &ref1 = value1;
	cout << ref1 << endl;

	ref1 = value2;

	cout << ref1 << endl;

	int n = 5;
	cout << n << endl; // 5

	doSomething(n);

	cout << n << endl; // 5
	
	doSomethingWithReference(n);

	cout << n << endl; // 10

	cout << "--------------배열--------------" << endl;

	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };

	printElements(arr);
	
	Other ot;
	ot.st.v1 = 1.0; // 타이핑이 힘들어! 외우기도 힘들어!

	int &v1 = ot.st.v1;
	v1 = 1; // 이렇게 하면 편하다.


}