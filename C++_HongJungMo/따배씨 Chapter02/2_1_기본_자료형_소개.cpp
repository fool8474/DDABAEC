#include "main.h"
#include "2_1_기본_자료형_소개.h"

using namespace std;

void DatatypeIntroduction() {
	bool bValue = false;

	cout << (bValue ? 1 : 0) << endl;

	bValue = true;

	cout << (bValue ? 1 : 0) << endl; // 삼항 연산자로

	char chValue = 65;

	cout << chValue << endl; // 요건 A로 나옴

	float fValue = 3.141592f; // float는 f를 붙여
	double dValue = 3.141592; // double은 붙이지 않는다.

	cout << fValue << " " << dValue << endl; // 그렇게 정밀하지 않다.

	fValue = 3.141592; // 뺄 경우, Warning이 뜬다.
	cout << fValue << " " << dValue << endl;

	auto aValue = 3.141592; // auto는 자동으로 결정된다! 어메징
	//이 경우 double로 되어있다.

	//aValue = "hello auto";
	//이건 안돼.. 이미 double로 결정되어있기 때문인듯

	auto aValue2 = 3.141592f;

	cout << sizeof(aValue) << endl; // 야는 8
	cout << sizeof(aValue2) << endl; // 야는 4
	cout << sizeof(char) << endl; // 얘는 1
	// bool은 1

	int a(123); //direct initialization
	int b{ 123 }; //uniform initialization 객체지향시 중요하게 작용

	int c(3.14); // 변환하면서 데이터 손실이 있을 수 있다~
	//int d{ 4.5 }; // 얘는 아예 실행이 안됨!
	//uniform이 direct보다 엄격하다.
	// 이럴땐
	int e((int)3.14); //요렇게 해주면 warning 사라짐
	cout << a << " " << b << " " << c << " " << endl;

	int k, l; //요렇게 동시에 여러개 선언할 수도 있다.
	//물론 같은 데이터 타입에 대해서만 함..

	int aa, ab, ac = 123; //이러면 ac만 123으로 초기화됨.
	//따라서

	int ad = 0, ae = 111, af = 1100;
	//이런 식으로 해주자.
	
	int ag(111), ah{ 11 };
	//이렇게도.. 별로 추천은 아님.

	//사용하기 직전에 선언하는것이 좋은 점
	//1. 디버깅하기 좋다
	//2. 나중에 refactoring하기 좋다.
}