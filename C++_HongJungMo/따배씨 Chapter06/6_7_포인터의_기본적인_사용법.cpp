#include <iostream>
#include <typeinfo>

struct exStruct
{
	int a, b, c, d;
};

void Tsukaikata_Of_Pointer()
{
	using namespace std;

	int x = 5;

	// �������� = ����
	// ���� �Ҵ� �޸� = ��
	
	cout << x << endl;
	cout << &x << endl; // address of operator
	cout << (int)& x << endl; // 10����

	// de-reference operator (*)
	// pointer�� reference�� ����
	
	/*
	de-reference�� �����Ͱ� '�� �ּҿ� ���� �� �����Ͱ� �־��' ���
	���������� ����Ű�⸸ �ϴ� �Ϳ� ���ؼ�
	'�׷� �ű⿡ ���� �ִ��� ���� �鿩�ٺ���'���
	���������� �����ϰڴٴ� �ǹ�
	*/

	cout << &x << endl; // �ּ�
	cout << *(&x) << endl; // �ּҸ� �鿩�ٺ���

	// �����ʹ� �޸� �ּҸ� ��� �����̴�.
	
	cout << "----------������� ������----------" << endl;

	int y = 6;

	typedef int* pint; // �̷��Ե� �� �� ������.. (2��, 3������ ����)
	int *ptr_x = &x; // ���� �̷��� ����.
	pint pint_ptr_x = &x, pint_ptr_y = &y;

	int* ptr_ex = &x, * ptr_ey = &y; // �̷��� ���ʴ� �ٿ���� ��.

	cout << ptr_x << endl;
	cout << *ptr_x << endl; // int*�� ��������Ƿ� intŸ������ �����´�.
	
	double d = 1.0;

	double* ptr_d = &d;

	cout << ptr_d << endl;
	cout << *ptr_d << endl; // �پ��� ������Ÿ�Կ� ���ؼ��� �� �� �ִ�.

	cout << "----------Using TypeInfo---------"<< endl;

	cout << typeid(&x).name() << endl; // int * __ptr64
	cout << typeid(&d).name() << endl; // double * __ptr64
	cout << typeid(ptr_x).name() << endl; // int * __ptr64
	cout << typeid(ptr_d).name() << endl; // double * __ptr64
	cout << typeid(*ptr_x).name() << endl; // int
	cout << typeid(*ptr_d).name() << endl; // double


	cout << "----------Point Size-----------" << endl;
	// ����Ʈ�� ��� Ÿ�Կ� ���ؼ� ����� ����.

	cout << sizeof(x) << endl; // 4
	cout << sizeof(d) << endl; // 8
	cout << sizeof(&x) << endl; // if x86 : 4 x64 : 8
	cout << sizeof(&d) << endl; // if x86 : 4 x64 : 8
	// �� ���� �޸𸮸� �����ϱ� ���� x64�� ���� pointer�� 8byte�� �ȴ�.

	exStruct ss;
	exStruct* ptr_ss;

	cout << sizeof(ss) << endl; // 16bytes
	cout << sizeof(ptr_ss) << endl; // 8bytes
}

int* doSomething(int* ptr_a) // �̷� �͵� �ִ�..
{
	return nullptr;
}