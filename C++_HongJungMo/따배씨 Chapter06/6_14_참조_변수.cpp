#include "main.h"

using namespace std;

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

void doSomething(int n)
{
	n = 10; // �̰��� �ּҰ� �ٸ���
	cout << "In doSomething " << n << endl; // 10
}

void doSomethingWithReference(int &n)
{
	n = 10; // �̰��� �ּҰ� ����.
	cout << "In doSomething " << n << endl; // 10
}

void printElements(const int(&arr)[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

void reference_variable()
{
	int value = 5;

	int *ptr = nullptr;
	ptr = &value;

	int &ref = value; // ref�� value�� ���� �޸��ΰ� ó�� �۵�
	cout << ref << endl;

	ref = 10;
	cout << value << " " << ref << endl; // ����

	cout << &value << endl; // �� �ּҰ� ��� ����
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl; // '������' ��ü�� �ּҸ� �ٸ�
	
	// int &ref; 
	// �ݵ�� ���� ��� �ʱ�ȭ�Ǿ�� ��. 

	// �ʱ�ȭ�� ������. const�� �ֵ� ������ �� �� ����.
	
	int value1 = 5;
	int value2 = 10;

	int &ref1 = value1;
	cout << ref1 << endl;

	ref1 = value2;

	cout << ref1 << endl;

	int n = 5;
	cout << n << endl; // 5

	doSomething(n);

	cout << n << endl; // 5
	
	doSomethingWithReference(n);

	cout << n << endl; // 10

	cout << "--------------�迭--------------" << endl;

	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };

	printElements(arr);
	
	Other ot;
	ot.st.v1 = 1.0; // Ÿ������ �����! �ܿ�⵵ �����!

	int &v1 = ot.st.v1;
	v1 = 1; // �̷��� �ϸ� ���ϴ�.


}