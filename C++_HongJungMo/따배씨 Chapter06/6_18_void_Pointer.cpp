#include "main.h"

using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR,
};

void void_Pointers()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void *ptr = nullptr;

	ptr = &i;
	ptr = &c; // �������� ����!
	ptr = &f;
	// �ٸ� ���� ������ �� ����� ����.

	//cout << ptr + 1 << endl; // �� byte�� ���ؾ� �ϴ��� �𸣱⿡ �ȵ�

	cout << &f << " " << ptr << endl; // �� ��!
	// cout << *ptr << endl; // de-referencing�� �ȵȴ�. �� �־����� �𸣴ϱ�.

	cout << *static_cast<float*>(ptr) << endl; // �̷��� �ؼ� �����!

	// �׷� �� �̷��� ����
	// �������� �ο��ϱ� ���� ��¿ �� ����..

	Type type = FLOAT;

	if (type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;

	if (type == INT)
		cout << *static_cast<int*>(ptr) << endl;
	// ������ �̷��� �ߴµ� ������ �̷��� ���ص� �� ���߿� �˷���.
}
