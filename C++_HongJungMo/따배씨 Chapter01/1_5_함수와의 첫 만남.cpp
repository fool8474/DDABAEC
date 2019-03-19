#include "main.h"

using namespace std;

void first_meet_with_function() {
	cout << 1 + 2 << endl;
	cout << 2 + 3 << endl;
	cout << 3 + 4 << endl;
	//치기 너무 귀찮은 상황

	cout << addTwoNumbers(1, 2) << endl;
	cout << addTwoNumbers(2, 3) << endl;
	cout << addTwoNumbers(3, 4) << endl;
	//요렇게 간단하게 표현이 가능

	cout << mulTwoNumbers(1.5, 2) << endl;
	cout << mulTwoNumbers(1.3, 2.4) << endl;
	cout << mulTwoNumbers(1, 2) << endl;

	helloPrint();
	helloPrint();
	helloPrint();
	helloPrint();
	helloPrint();
}

int addTwoNumbers(int num_a, int num_b) {

	int sum = num_a + num_b;
	return sum;
	// return과 제목 옆의 type이 같아야 함. 
}

// 이번엔 곱하기를 해보자

double mulTwoNumbers(double a, double b) {
	return a * b;
}

// right click + rename =  한번에 모두의 이름을 바꾼다.


//debug 방법 : f5 실행, f11을 통해 하나하나 들어가자
//중단점이 설정되어있어야 한다 (line표시 숫자의 왼쪽을 클릭)
//이때 함수가 있으면 함수 안쪽으로도 들어간다
//sum을 유심히 보면 쓰레기값이 있다가 대입이 되면 정상적인 값이 된다.

void helloPrint() {
	cout << "hello World!" << endl;
}
//입력도, 반환도 없다 (void).

//함수도 함수를 부를 수 있다. 
//이건 first_meet_with_function함수를 보면 안쪽에서
//계속 함수를 부르는 걸 보고 파악 가능.
