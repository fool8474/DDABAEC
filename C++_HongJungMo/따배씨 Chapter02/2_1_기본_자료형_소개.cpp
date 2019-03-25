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

/*
Auto 타입을 왜 쓸까?
초기화 형식에 맞춰 자동으로 결정되는 변수 형식
함수 매개변수로 사용 안되고
void addAndPrint(auto x, auto y) // 불가능
반환 타입으로는 사용할 수 있다.
auto addAndPrint(int x, int y) // 가능
그러나 이는 해석의 오류를 만들어 낼 수 있기에 되도록 피하자.

when use auto, and when avoid auto
//good : auto increases readability here
for(auto it = v.begin(); it != v.end(); ++it) //v is some [std] container
{
	  //..
}

//bad : auto decreases readability here
auto obj = ProcessData(someVariables);

auto는 내부적(개념적)으로 템플릿 함수를 호출해 T의 결과를 auto로 추론.

void Ex3()
{
	std::vector<SomeClass> vec;
	for(std::vector<SomeClass>::iterator it = vec.begin(); it != end(); ++it)
	{
		//something
	}
}

iterator를 편하게 쓰자.
iterator는 매번 선언할때마다 참 힘들었는데,

void Ex4()
{
	std::vector<SomeClass> vec;
	for(auto it = vec.begin(); it != end(); ++it)
	{
		//something
	}
}

이런 식으로 사용하면 아주 간단하게 표현이 가능하다.

ranged for loop에서도 사용이 가능한데,
void Ex5()
{
	std::vector<SomeClass> vec;
	for(auto it : vec)
	{
		//something
	}
}
이런 식으로 사용하면 굉장히 간단하게 사용할 수 있다.


==============좀 더 자세히...==============

일반 타입은 초기화 하지 않은 변수를 선언한다.
auto는 초기화 하지 않으면 사용이 안된다.
auto x3; // 안돼!

std::function<bool(const std::unique_ptr<Widget>&,
					  const std::unique_ptr<Widget>&)>
		derefUPLess = [](const std::unique_ptr<Widget>& p1,
						 const std::unique_ptr<Widget>& p2)
					   { return *p1 < *p2; };             //엄청나게 긴 선언

   auto derefUPLess = [](const std::unique_ptr<Widget>& p1,
						 const std::unique_ptr<Widget>& p2)
					   { return *p1 < *p2; };             //타입을 auto로 변경 간결한 선언

   auto derefUPLess = [](const auto& p1, const auto& p2)
					   { return *p1 < *p2; };           //C++14부터 람다 인자 auto를 활용한 훨씬 간결한 선언

여기서 std::function은 일반화된 함수 포인터 템플릿

auto와 std::function은 뭐가 다르지?
1. 변수가 차지하는 메모리 용량
	std::function은 모든 종류의 함수 객체를 가르킬 수 있어야 하기 때문에
	모든 함수형 객체에게 필요한 메모리 공간을 마련해야함. 따라서 메모리가 많이 듬.
2. 시간
	함수 호출 수행시간, 여러 함수 객체의 호출 방식이 서로 다름.
	std::function 템플릿 클래스인 함수객체를 호출하는 시간이 구체적인 함수의 클로저를 호출하는 시간보다 오래걸린다.
따라서 auto를 쓰면
	해당 함수객체의 구체적인 타입으로 추론해 처리하기에,
	저장공간과 호출 수행시간에 있어 효과적.

auto는 포팅을 쉽게한다.
	unsigned sz1 = v.size(); 에서 unsigned는 32비트 타입, 따라서 64비트 환경에서 잘 동작 안됨.
	auto sz2 = v.size(); 타입 추론이기에, 문제없이 해결된다.

리팩토링시 auto로 받으면 좋다.
	리팩토링시 함수 리턴 타입이 바뀌면 호출 영역에서 리턴 값을 받는 타입을 조정해줘야.
	리턴한 값을 받는 타입을 auto로 지정시 호출 함수 리턴형식이 달라져도 문제없이 동작.
*/

