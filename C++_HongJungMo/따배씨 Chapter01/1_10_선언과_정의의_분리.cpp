#include "main.h"

using namespace std;


int add(int a, int b);
void add(int a, int b, int c);
int multiply(int a, int b);
int subtract(int a, int b);
//forward declaration
//정의 피킹, 정의로 이동을 사용하여 유용하게 이동하자.
//Alt + F12, F12

void DeclarationAndDefinition()
{
	cout << add(1, 2) << endl;
	cout << multiply(2, 3) << endl;
	cout << subtract(3, 4) << endl;
	//요렇게 하면 add를 찾질 못해서 오류 발생
	//왜냐면 컴파일러는 순차적으로 읽기 때문
	//그렇다고 함수를 위로 올리면 안돼!

	//그럴때 쓰는게 add가 사용되기 전에 알려주면 된다.
	//위에는 선언, 아래는 정의
}

int add(int a, int b)
{
	return a + b;
}

void add(int a, int b, int c) { cout << a+b+c << endl; }
// 절대 짧다고 이렇게 하지마!

int multiply(int a, int b) 
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}
//definition
