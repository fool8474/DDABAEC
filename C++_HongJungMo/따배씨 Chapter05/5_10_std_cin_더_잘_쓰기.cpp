#include "main.h"

using namespace std;

int getInt()
{
	while (true)
	{
		cout << "Enter a integer number: ";
		int x;
		cin >> x;
		if (std::cin.fail()) // 이상하게 들어와서 실패하면
		{
			std::cin.clear(); // 버퍼를 비우고
			std::cin.ignore(32767, '\n'); // 나머지 무시
			cout << "Invalid number, please try again" << endl;
		}

		else
		{
			std::cin.ignore(32767, '\n'); //버퍼에 더 들어온 것들 무시!
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
		std::cin.ignore(32767, '\n'); //버퍼에 더 들어온 것들 무시!
		
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
	//두개씩 넣는 경우 : 난리가 남
	//버퍼에 넣고 하나씩 꺼내가는 느낌이기에.
}

