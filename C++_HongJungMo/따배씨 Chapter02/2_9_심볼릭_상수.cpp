#include "main.h"
#include "MY_CONSTANTS.h"
#define PRICE_PER_ITEM 30

using namespace std;

void printNumber(const int& my_number) 
{
	// my_number를 바꾸지 않지 않을까
	// 그럼 이쪽에 const를 선언해주자.
	cout << my_number << endl;
}

void Symbolic_constant() 
{
	const double gravity{ 9.8 }; //중력은 수정되지 않길 바람
	
	//gravity = 1.2; // 바꾸지 못한다.
	//바꾸는 방법은 있으나 바꾸지 말자

	float const gravvity{ 9.8f };
	//앞에든 뒤에든 다 붙일 수 있음.

	//바꿀수 없는 애니까 처음 정의할때 값도 줘야함.

	printNumber(30);
	printNumber(10);
	printNumber(25);

	int number;
	number = 11;

	const int complie_type_number(123); //compile할때 상수 결정
	const int special_number(number); //runtime할때 상수 결정

	number = 123;
	cout << number << " " << special_number << endl;
	//special_number는 number가 바뀐다고 바뀌지 않음.

	constexpr int my_const(123);
	//constexpr int my_runtime_const(number); // 런타임때 결정하는건데 constexpr을 썻으므로 compile할때 결정하는게 아니니까 오류 발생

	int num_item = 123;
	int price = num_item * PRICE_PER_ITEM;
	//C++은 매크로를 이런식으로 쓰지 않음.
	//1. 디버깅이 힘들다.
	//2. define은 전체에 영향을 끼침. 그 범위가 너무 넓어 가급적 사용하지 않음.
	//따라서 const를 사용하자.
	
	//const는 그냥 작성하기도 하고, 대문자로 하기도 하고, 다른걸 붙이기도 하고 뭐,, 자유로운 편

	double radius = 3.33;
	double circumference = 2.0 * radius * constants::pi;
	//이때 헤더파일로 정의한 상수들은 다른곳에서 재사용이 가능할 것.
	cout << circumference;
}

