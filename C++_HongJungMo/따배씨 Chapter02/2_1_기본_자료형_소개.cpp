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

/*
Auto Ÿ���� �� ����?
�ʱ�ȭ ���Ŀ� ���� �ڵ����� �����Ǵ� ���� ����
�Լ� �Ű������� ��� �ȵǰ�
void addAndPrint(auto x, auto y) // �Ұ���
��ȯ Ÿ�����δ� ����� �� �ִ�.
auto addAndPrint(int x, int y) // ����
�׷��� �̴� �ؼ��� ������ ����� �� �� �ֱ⿡ �ǵ��� ������.

when use auto, and when avoid auto
//good : auto increases readability here
for(auto it = v.begin(); it != v.end(); ++it) //v is some [std] container
{
	  //..
}

//bad : auto decreases readability here
auto obj = ProcessData(someVariables);

auto�� ������(������)���� ���ø� �Լ��� ȣ���� T�� ����� auto�� �߷�.

void Ex3()
{
	std::vector<SomeClass> vec;
	for(std::vector<SomeClass>::iterator it = vec.begin(); it != end(); ++it)
	{
		//something
	}
}

iterator�� ���ϰ� ����.
iterator�� �Ź� �����Ҷ����� �� ������µ�,

void Ex4()
{
	std::vector<SomeClass> vec;
	for(auto it = vec.begin(); it != end(); ++it)
	{
		//something
	}
}

�̷� ������ ����ϸ� ���� �����ϰ� ǥ���� �����ϴ�.

ranged for loop������ ����� �����ѵ�,
void Ex5()
{
	std::vector<SomeClass> vec;
	for(auto it : vec)
	{
		//something
	}
}
�̷� ������ ����ϸ� ������ �����ϰ� ����� �� �ִ�.


==============�� �� �ڼ���...==============

�Ϲ� Ÿ���� �ʱ�ȭ ���� ���� ������ �����Ѵ�.
auto�� �ʱ�ȭ ���� ������ ����� �ȵȴ�.
auto x3; // �ȵ�!

std::function<bool(const std::unique_ptr<Widget>&,
					  const std::unique_ptr<Widget>&)>
		derefUPLess = [](const std::unique_ptr<Widget>& p1,
						 const std::unique_ptr<Widget>& p2)
					   { return *p1 < *p2; };             //��û���� �� ����

   auto derefUPLess = [](const std::unique_ptr<Widget>& p1,
						 const std::unique_ptr<Widget>& p2)
					   { return *p1 < *p2; };             //Ÿ���� auto�� ���� ������ ����

   auto derefUPLess = [](const auto& p1, const auto& p2)
					   { return *p1 < *p2; };           //C++14���� ���� ���� auto�� Ȱ���� �ξ� ������ ����

���⼭ std::function�� �Ϲ�ȭ�� �Լ� ������ ���ø�

auto�� std::function�� ���� �ٸ���?
1. ������ �����ϴ� �޸� �뷮
	std::function�� ��� ������ �Լ� ��ü�� ����ų �� �־�� �ϱ� ������
	��� �Լ��� ��ü���� �ʿ��� �޸� ������ �����ؾ���. ���� �޸𸮰� ���� ��.
2. �ð�
	�Լ� ȣ�� ����ð�, ���� �Լ� ��ü�� ȣ�� ����� ���� �ٸ�.
	std::function ���ø� Ŭ������ �Լ���ü�� ȣ���ϴ� �ð��� ��ü���� �Լ��� Ŭ������ ȣ���ϴ� �ð����� �����ɸ���.
���� auto�� ����
	�ش� �Լ���ü�� ��ü���� Ÿ������ �߷��� ó���ϱ⿡,
	��������� ȣ�� ����ð��� �־� ȿ����.

auto�� ������ �����Ѵ�.
	unsigned sz1 = v.size(); ���� unsigned�� 32��Ʈ Ÿ��, ���� 64��Ʈ ȯ�濡�� �� ���� �ȵ�.
	auto sz2 = v.size(); Ÿ�� �߷��̱⿡, �������� �ذ�ȴ�.

�����丵�� auto�� ������ ����.
	�����丵�� �Լ� ���� Ÿ���� �ٲ�� ȣ�� �������� ���� ���� �޴� Ÿ���� ���������.
	������ ���� �޴� Ÿ���� auto�� ������ ȣ�� �Լ� ���������� �޶����� �������� ����.
*/

