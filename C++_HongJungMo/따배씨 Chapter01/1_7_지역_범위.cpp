#include "main.h"
#include "1_7_지역_범위.h"

using namespace std;
void LocalRangeForVariable()
{
	int x(0); // 함수 밖으로 넘어가면 사라져버림
	cout << x << " " << &x << endl; // 0
	{
		//이렇게 괄호 넣기 가능 (영역 구분)
		int x = 2; // 선언 가능
		cout << x << " " << &x << endl; // 2
		{
			x = 3;
			cout << x << " " << &x << endl; // 3 위와 주소 같음
		}
	}
	
	{
		int x = 1; // 선언 가능
		cout << x << " " << &x << endl; // 1
	}
	cout << x << " " << &x << endl; // 0
	//이름이 같아도 서로 다른 변수들 (주소가 다름!)
}