#include "main.h"

using namespace std;

void first_meet_with_function() {
	cout << 1 + 2 << endl;
	cout << 2 + 3 << endl;
	cout << 3 + 4 << endl;
	//ġ�� �ʹ� ������ ��Ȳ

	cout << addTwoNumbers(1, 2) << endl;
	cout << addTwoNumbers(2, 3) << endl;
	cout << addTwoNumbers(3, 4) << endl;
	//�䷸�� �����ϰ� ǥ���� ����

	cout << mulTwoNumbers(1.5, 2) << endl;
	cout << mulTwoNumbers(1.3, 2.4) << endl;
	cout << mulTwoNumbers(1, 2) << endl;

	helloPrint();
	helloPrint();
	helloPrint();
	helloPrint();
	helloPrint();
}

int addTwoNumbers(int num_a, int num_b) {

	int sum = num_a + num_b;
	return sum;
	// return�� ���� ���� type�� ���ƾ� ��. 
}

// �̹��� ���ϱ⸦ �غ���

double mulTwoNumbers(double a, double b) {
	return a * b;
}

// right click + rename =  �ѹ��� ����� �̸��� �ٲ۴�.


//debug ��� : f5 ����, f11�� ���� �ϳ��ϳ� ����
//�ߴ����� �����Ǿ��־�� �Ѵ� (lineǥ�� ������ ������ Ŭ��)
//�̶� �Լ��� ������ �Լ� �������ε� ����
//sum�� ������ ���� �����Ⱚ�� �ִٰ� ������ �Ǹ� �������� ���� �ȴ�.

void helloPrint() {
	cout << "hello World!" << endl;
}
//�Էµ�, ��ȯ�� ���� (void).

//�Լ��� �Լ��� �θ� �� �ִ�. 
//�̰� first_meet_with_function�Լ��� ���� ���ʿ���
//��� �Լ��� �θ��� �� ���� �ľ� ����.
