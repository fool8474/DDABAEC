#include "main.h"

using namespace std;

void my_func(void)
{
	/*
	�Ű��������� void�� ���µ� ��� ����� �� ���� �߼���
	���� void my_func()�� ��.
	*/
}

void What_is_void() {

	//void my_void; // void�� �޸𸮸� �������� �ʾƼ� ���� �ȵ�
	void *my_void; //�ּ��̱⶧���� ����.

	int i = 123; //401ȣ�� ����
	float f = 123.456f; //402ȣ�� ����

	my_void = (void*)&i; // �ּ� �� ù �ּ��� ��ġ�� ����Ŵ.
	cout << my_void << endl;
	my_void = (void*)&f; // �ּҸ� ǥ���ϴ� ������ ���� ����.
	// �Ѵ� void*�� casting�� �����ϴ�.
	cout << my_void << endl;
}