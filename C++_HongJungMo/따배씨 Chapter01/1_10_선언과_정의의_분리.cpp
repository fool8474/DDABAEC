#include "main.h"

using namespace std;


int add(int a, int b);
void add(int a, int b, int c);
int multiply(int a, int b);
int subtract(int a, int b);
//forward declaration
//���� ��ŷ, ���Ƿ� �̵��� ����Ͽ� �����ϰ� �̵�����.
//Alt + F12, F12

void DeclarationAndDefinition()
{
	cout << add(1, 2) << endl;
	cout << multiply(2, 3) << endl;
	cout << subtract(3, 4) << endl;
	//�䷸�� �ϸ� add�� ã�� ���ؼ� ���� �߻�
	//�ֳĸ� �����Ϸ��� ���������� �б� ����
	//�׷��ٰ� �Լ��� ���� �ø��� �ȵ�!

	//�׷��� ���°� add�� ���Ǳ� ���� �˷��ָ� �ȴ�.
	//������ ����, �Ʒ��� ����
}

int add(int a, int b)
{
	return a + b;
}

void add(int a, int b, int c) { cout << a+b+c << endl; }
// ���� ª�ٰ� �̷��� ������!

int multiply(int a, int b) 
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}
//definition
