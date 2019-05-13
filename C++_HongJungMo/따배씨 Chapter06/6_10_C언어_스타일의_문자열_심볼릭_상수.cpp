#include "main.h"

using namespace std;

const char* getName()
{
	return "Jack Jack";
}

void C_Lang_Style_Symbolic_Constant()
{
	char name[] = "Jack jack";

	// char *name = "Jack jack"; // �̰� �ȵȴ�! 
	// �����ʹ� �޸��� �ּҸ� ����Ű�°��� ��, �ӽ� �����͸� �ִ°� �ƴϴ�.
	const char *name2 = "Jack Jack"; // �̰� �ȴ�! ��ȣ���� ���ó�� ���
	const char *name3 = "Jack Jack";

	cout << (uintptr_t)name2 << endl;
	cout << (uintptr_t)name3 << endl;
	// const�� ���� �ֵ��� ������ �����Ͱ� �����ϸ� �ּҵ� ����.

	const char *name4 = getName();
	cout << (uintptr_t)name4 << endl;
	// �굵 ����!


	// ���� �������� Ư��
	cout << name4 << endl; // Jack Jack
	// ������ �����ʹ� Cstyle�� ������ �迭�� ���ɼ��� ���� �����Ͽ�
	// null char�� ���� �� ���� �� ����Ѵ�.

	char c = 'Q';
	cout << &c << endl; // �̻��Ѱ� ���´�!
	// c�� �ּҰ� ���ϱ� (pointer) ��� ���ڿ��ΰ� �Ͽ�, 
	// �� ��������� null�� ���ö����� ����Ͽ��µ� �� ���� char�̴�
	// �̻��ϰ� �Ǿ���� ��.


}