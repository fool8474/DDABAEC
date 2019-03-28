#include "main.h"

void Type_conversion()
{
	using std::cout;
	using std::endl;

	int a = 123.0; // 암시적 형 변환
	int b = (int)123.0;

	float c = 1.0f;
	double d = c; // numeric promotion

	//numeric conversion
	double dd = 3;
	short s = 2;

	// 큰 것을 작은것으로, 못 들어가는 부분이 있을 것.
	int i = 30000;
	char cc = i; // 담을 수 없다.
	int ii = 8;
	char cc2 = ii;

	cout << typeid(a).name() << endl; //typeid를 통해 형 확인

	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
	
	cout << static_cast<int>(cc) << endl; // 48 : 엉뚱한 숫자.
	cout << static_cast<int>(cc2) << endl; // 제대로 나옴.
	
	//이상한 실수를 하지 마라.

	cout << 5u - 10u << endl;
	cout << 5u - 10 << endl; // 둘다 4294967291
	
	// int, unsigned int, long, unsigned long, long long ,unsigned long long, float ,double, long double
	// 우선순위가 int가 가장 낮고 long double이 가장 높다.
	// 따라서 발생하는 문제. unsigned int > int 우선순위
}