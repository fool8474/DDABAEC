#include "main.h"

using namespace std;

void my_func(void)
{
	/*
	매개변수에도 void가 들어가는데 얘는 요새는 안 쓰는 추세임
	따라서 void my_func()면 됨.
	*/
}

void What_is_void() {

	//void my_void; // void는 메모리르 차지하지 않아서 선언 안됨
	void *my_void; //주소이기때문에 가능.

	int i = 123; //401호라 가정
	float f = 123.456f; //402호라 가정

	my_void = (void*)&i; // 주소 중 첫 주소의 위치를 가리킴.
	cout << my_void << endl;
	my_void = (void*)&f; // 주소를 표현하는 데이터 양은 동일.
	// 둘다 void*로 casting이 가능하다.
	cout << my_void << endl;
}