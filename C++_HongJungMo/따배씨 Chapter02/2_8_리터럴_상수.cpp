#include "main.h"

using namespace std;
void Literal_constants()
{
	float pi = 3.14f; // 숫자를 적어서 표현 : literal constant
	const float ppi = 3.141592f; // symbolic constant
	//int i = -12345u; // 이러는 것 보다 cast로 명확하게 표현하자
	//애초에 오류가 뜬다.
	//u l ul lu f ll .... 대부분은 f나 l만 붙인다.

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 3.0e-11;

	//Decimal = 0~9
	//Octal = 0~7
	//Hexa = 0~F
	
	int x = 012; // 이거 10됨. 왜냐면 8+2라서.. 0붙여서 Octal이되버림.
	x = 0xF; // 15
	cout << x << endl;

	// 0011 1010 1111 1111보다
	// 3AFF가 읽기 쉽다.
	// 그래서 2진수가 아닌 16진수로 표현하는 경우가 많음.

	x = 0b1010;
	cout << x << endl;
	//2진수, 8 + 2

	x = 0b1'010;
	//이런 경우에는 컴파일러가 '를 무시해준다.
	
	x = 0b1011'1111'1010;
	cout << x << endl;
	
	int num_items = 123;
	int price = num_items * 10;
	//10이 반복되서 사용되는거라면? 심볼릭 상수를 사용하자.

	const int price_per_item = 10;
	price = num_items * price_per_item;
}