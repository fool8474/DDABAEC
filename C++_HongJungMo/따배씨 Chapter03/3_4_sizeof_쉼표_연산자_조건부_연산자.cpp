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

	// z = (++x, ++y)��
	++x;
	++y;
	int zz = y;
	//�� ����

	//���ǻ���

	int aa = 1, b = 10; //�̰� comma operator�� �Ƴ�, �׳� ���� ��ȣ
	int zzz;

	zzz = aa, b;
	// ,�� =���� �켱������ ����. ���� a�� ��, 1�� �ȴ�.
	zzz = (aa, b);
	// �̷��� b�� ��.


	// ���Ǻ� ������ (arithmetic if)
	bool onSale = true;
	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;

	const int pricee = (onSale == true) ? 10 : 100;
	// true�� 10, false�� 100


}