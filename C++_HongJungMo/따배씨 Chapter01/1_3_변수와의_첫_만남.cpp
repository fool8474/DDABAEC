#include "main.h"

/*
객체
변수 : 숫자 대신 문자로 된 이름을 붙여준다.
L-values
R-values
초기화
대입
초기화를 안 했을때의 문제점
*/

// 따라해보자

void first_meet_with_variable() {

	// 메모리에 있는 어떤 공간을 가리키는 x는 123인 값을 가지고 있다.
	//int x = 123; // 대입
	//initialization
	int x(123); // 이렇게 하기도 한다

	std::cout << x << std::endl;
	std::cout << &x << std::endl; // 메모리에서 어떤 주소를 갖는가를 보여준다.

	// ------------ LValue RValue --------------
	x = 245;
	// LValue = x, RValue = 245
	// assignment

	x = x + 2;
	
}
//Release 모드에서는 x가 초기화가 안되도 0으로 초기화된다. 가장 기본적인 값을 준다.
//의도하지 않은 상황이 발생할 수 있으므로 아주아주 무서운 기능이다.
//따라서 변수는 언제나 초기화 할 수 있도록 하자.
//다시 말하자면 예측할 수 없는 상황을 만들지 말라고!
