#include "main.h"
#include "1_7_����_����.h"

using namespace std;
void LocalRangeForVariable()
{
	int x(0); // �Լ� ������ �Ѿ�� ���������
	cout << x << " " << &x << endl; // 0
	{
		//�̷��� ��ȣ �ֱ� ���� (���� ����)
		int x = 2; // ���� ����
		cout << x << " " << &x << endl; // 2
		{
			x = 3;
			cout << x << " " << &x << endl; // 3 ���� �ּ� ����
		}
	}
	
	{
		int x = 1; // ���� ����
		cout << x << " " << &x << endl; // 1
	}
	cout << x << " " << &x << endl; // 0
	//�̸��� ���Ƶ� ���� �ٸ� ������ (�ּҰ� �ٸ�!)
}