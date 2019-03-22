#include "main.h"
#include "MY_CONSTANTS.h"
#define PRICE_PER_ITEM 30

using namespace std;

void printNumber(const int& my_number) 
{
	// my_number�� �ٲ��� ���� ������
	// �׷� ���ʿ� const�� ����������.
	cout << my_number << endl;
}

void Symbolic_constant() 
{
	const double gravity{ 9.8 }; //�߷��� �������� �ʱ� �ٶ�
	
	//gravity = 1.2; // �ٲ��� ���Ѵ�.
	//�ٲٴ� ����� ������ �ٲ��� ����

	float const gravvity{ 9.8f };
	//�տ��� �ڿ��� �� ���� �� ����.

	//�ٲܼ� ���� �ִϱ� ó�� �����Ҷ� ���� �����.

	printNumber(30);
	printNumber(10);
	printNumber(25);

	int number;
	number = 11;

	const int complie_type_number(123); //compile�Ҷ� ��� ����
	const int special_number(number); //runtime�Ҷ� ��� ����

	number = 123;
	cout << number << " " << special_number << endl;
	//special_number�� number�� �ٲ�ٰ� �ٲ��� ����.

	constexpr int my_const(123);
	//constexpr int my_runtime_const(number); // ��Ÿ�Ӷ� �����ϴ°ǵ� constexpr�� �����Ƿ� compile�Ҷ� �����ϴ°� �ƴϴϱ� ���� �߻�

	int num_item = 123;
	int price = num_item * PRICE_PER_ITEM;
	//C++�� ��ũ�θ� �̷������� ���� ����.
	//1. ������� �����.
	//2. define�� ��ü�� ������ ��ħ. �� ������ �ʹ� �о� ������ ������� ����.
	//���� const�� �������.
	
	//const�� �׳� �ۼ��ϱ⵵ �ϰ�, �빮�ڷ� �ϱ⵵ �ϰ�, �ٸ��� ���̱⵵ �ϰ� ��,, �����ο� ��

	double radius = 3.33;
	double circumference = 2.0 * radius * constants::pi;
	//�̶� ������Ϸ� ������ ������� �ٸ������� ������ ������ ��.
	cout << circumference;
}

