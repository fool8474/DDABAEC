#include "main.h"

using namespace std;

int g_a = 1; // global을 g_로써 구분 external linkage
static int g_b = 1; // 다른 cpp파일에서 접근이 안된다. internal linkage
//const int g_x; // 못씀
const int g_y(1); // 내부에서 사용 가능
extern const int g_ey(1); // 외부에서 사용 가능


//forward declaration
namespace Extern_test
{
	extern int e_a;
	//extern int e_b = 456; // 안됨! 여러번 정의된다고.
	void doSomething(); //어딘가에 존재하는 doSomething을 찾음.
	//extern void doSomething();에서 extern이 생략되있는 것.
}

namespace LEC4_2
{
	void doSomething()
	{
		static int s_a = 1; // static : 메모리가 정적임

		++s_a;

		cout << s_a << endl;
	}
}

void Static_variable()
{
	LEC4_2::doSomething(); //2
	LEC4_2::doSomething(); //3
	LEC4_2::doSomething(); //4
	LEC4_2::doSomething(); //5
	// 강의자는 debug할때 주로 사용. 몇 번 씩 함수가 호출되었는지.
	// 객체지향 중심에서는 static의 필요성이 그렇게 대두되지 않음..
}

void Global_variable()
{
	/*
	전역변수는 최소한으로 사용하자
	*/
}

void Linkage() 
{
	// 연결 그 자체를 의미하는 뉘앙스
	// internal linkage : 개별 cpp 안에서만 전역으로 작동함 ex) g_a
	// external linkage : namespace Extern_test 참고
	Extern_test::doSomething();
	Extern_test::doSomething();
	Extern_test::doSomething();
}
void Glob_Stat_Intern()
{
	Static_variable();
	Global_variable();
	Linkage();
	
	cout << Extern_test::e_a << endl;
	//cout << Extern_test::e_b << endl;

	ConstantsHeader();
}

void ConstantsHeader() 
{
	std::cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << std::endl;
	// main과 test쪽 동일 헤더 Constants로부터 가져온 상수의 주소가 다르다.
	// 그러나 header와 cpp로 나눠, header쪽에선 선언만, cpp쪽에선 초기화도 시켜주면
	// 이 문제가 사라진다.
}