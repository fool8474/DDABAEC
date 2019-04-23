#include "main.h"

using namespace std;

int getInt()
{
	while (true)
	{
		cout << "Enter a integer number: ";
		int x;
		cin >> x;
		if (std::cin.fail()) // �̻��ϰ� ���ͼ� �����ϸ�
		{
			std::cin.clear(); // ���۸� ����
			std::cin.ignore(32767, '\n'); // ������ ����
			cout << "Invalid number, please try again" << endl;
		}

		else
		{
			std::cin.ignore(32767, '\n'); //���ۿ� �� ���� �͵� ����!
			return x;
		}
	}
}

char getOperator()
{
	char op;

	while (true)
	{
		cout << "Enter an operator (+,-) : ";

		cin >> op;
		std::cin.ignore(32767, '\n'); //���ۿ� �� ���� �͵� ����!
		
		if (op == '+' || op == '-')
			return op;
		else
			cout << "Invalid operator, please try again" << endl;
	}
}

void printResult(int x, char op, int y)
{
	if (op == '+') cout << x + y << endl;
	else if (op == '-') cout << x - y << endl;
	else 
	{
		cout << "Invalid operator" << endl;
	}
}

void More_use_std_cin()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);
	//�ΰ��� �ִ� ��� : ������ ��
	//���ۿ� �ְ� �ϳ��� �������� �����̱⿡.
}

