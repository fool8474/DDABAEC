#include "main.h"
#include "2_1_�⺻_�ڷ���_�Ұ�.h"

using namespace std;

void DatatypeIntroduction() {
	bool bValue = false;

	cout << (bValue ? 1 : 0) << endl;

	bValue = true;

	cout << (bValue ? 1 : 0) << endl; // ���� �����ڷ�

	char chValue = 65;

	cout << chValue << endl; // ��� A�� ����

	float fValue = 3.141592f; // float�� f�� �ٿ�
	double dValue = 3.141592; // double�� ������ �ʴ´�.

	cout << fValue << " " << dValue << endl; // �׷��� �������� �ʴ�.

	fValue = 3.141592; // �� ���, Warning�� ���.
	cout << fValue << " " << dValue << endl;

	auto aValue = 3.141592; // auto�� �ڵ����� �����ȴ�! ���¡
	//�� ��� double�� �Ǿ��ִ�.

	//aValue = "hello auto";
	//�̰� �ȵ�.. �̹� double�� �����Ǿ��ֱ� �����ε�

	auto aValue2 = 3.141592f;

	cout << sizeof(aValue) << endl; // �ߴ� 8
	cout << sizeof(aValue2) << endl; // �ߴ� 4
	cout << sizeof(char) << endl; // ��� 1
	// bool�� 1

	int a(123); //direct initialization
	int b{ 123 }; //uniform initialization ��ü����� �߿��ϰ� �ۿ�

	int c(3.14); // ��ȯ�ϸ鼭 ������ �ս��� ���� �� �ִ�~
	//int d{ 4.5 }; // ��� �ƿ� ������ �ȵ�!
	//uniform�� direct���� �����ϴ�.
	// �̷���
	int e((int)3.14); //�䷸�� ���ָ� warning �����
	cout << a << " " << b << " " << c << " " << endl;

	int k, l; //�䷸�� ���ÿ� ������ ������ ���� �ִ�.
	//���� ���� ������ Ÿ�Կ� ���ؼ��� ��..

	int aa, ab, ac = 123; //�̷��� ac�� 123���� �ʱ�ȭ��.
	//����

	int ad = 0, ae = 111, af = 1100;
	//�̷� ������ ������.
	
	int ag(111), ah{ 11 };
	//�̷��Ե�.. ���� ��õ�� �ƴ�.

	//����ϱ� ������ �����ϴ°��� ���� ��
	//1. ������ϱ� ����
	//2. ���߿� refactoring�ϱ� ����.
}