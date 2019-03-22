#include "main.h"

using namespace std;
void Literal_constants()
{
	float pi = 3.14f; // ���ڸ� ��� ǥ�� : literal constant
	const float ppi = 3.141592f; // symbolic constant
	//int i = -12345u; // �̷��� �� ���� cast�� ��Ȯ�ϰ� ǥ������
	//���ʿ� ������ ���.
	//u l ul lu f ll .... ��κ��� f�� l�� ���δ�.

	unsigned int n = 5u;
	long n2 = 5L;
	double d = 3.0e-11;

	//Decimal = 0~9
	//Octal = 0~7
	//Hexa = 0~F
	
	int x = 012; // �̰� 10��. �ֳĸ� 8+2��.. 0�ٿ��� Octal�̵ǹ���.
	x = 0xF; // 15
	cout << x << endl;

	// 0011 1010 1111 1111����
	// 3AFF�� �б� ����.
	// �׷��� 2������ �ƴ� 16������ ǥ���ϴ� ��찡 ����.

	x = 0b1010;
	cout << x << endl;
	//2����, 8 + 2

	x = 0b1'010;
	//�̷� ��쿡�� �����Ϸ��� '�� �������ش�.
	
	x = 0b1011'1111'1010;
	cout << x << endl;
	
	int num_items = 123;
	int price = num_items * 10;
	//10�� �ݺ��Ǽ� ���Ǵ°Ŷ��? �ɺ��� ����� �������.

	const int price_per_item = 10;
	price = num_items * price_per_item;
}