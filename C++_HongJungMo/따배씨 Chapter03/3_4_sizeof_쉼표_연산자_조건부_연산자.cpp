#include "main.h"

using namespace std;

void Sizeof_Comma_Operator()
{
	//sizeof
	float a;

	cout << sizeof(float) << endl; // 4
	cout << sizeof(a) << endl; // 4

	//comma operator

	int x = 3;
	int y = 10;
	int z = (++x, ++y);

	cout << x << " " << y << " " << z << endl;
	cout << z << endl;

	// z = (++x, ++y)는
	++x;
	++y;
	int zz = y;
	//와 같다

	//주의사항

	int aa = 1, b = 10; //이건 comma operator가 아냐, 그냥 구분 기호
	int zzz;

	zzz = aa, b;
	// ,는 =보다 우선순위가 낮다. 따라서 a가 들어가, 1이 된다.
	zzz = (aa, b);
	// 이러면 b가 들어감.


	// 조건부 연산자 (arithmetic if)
	bool onSale = true;
	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;

	const int pricee = (onSale == true) ? 10 : 100;
	// true면 10, false면 100


}