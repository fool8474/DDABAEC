#include "main.h"

void Type_conversion()
{
	using std::cout;
	using std::endl;

	int a = 123.0; // �Ͻ��� �� ��ȯ
	int b = (int)123.0;

	float c = 1.0f;
	double d = c; // numeric promotion

	//numeric conversion
	double dd = 3;
	short s = 2;

	// ū ���� ����������, �� ���� �κ��� ���� ��.
	int i = 30000;
	char cc = i; // ���� �� ����.
	int ii = 8;
	char cc2 = ii;

	cout << typeid(a).name() << endl; //typeid�� ���� �� Ȯ��

	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
	
	cout << static_cast<int>(cc) << endl; // 48 : ������ ����.
	cout << static_cast<int>(cc2) << endl; // ����� ����.
	
	//�̻��� �Ǽ��� ���� ����.

	cout << 5u - 10u << endl;
	cout << 5u - 10 << endl; // �Ѵ� 4294967291
	
	// int, unsigned int, long, unsigned long, long long ,unsigned long long, float ,double, long double
	// �켱������ int�� ���� ���� long double�� ���� ����.
	// ���� �߻��ϴ� ����. unsigned int > int �켱����
}