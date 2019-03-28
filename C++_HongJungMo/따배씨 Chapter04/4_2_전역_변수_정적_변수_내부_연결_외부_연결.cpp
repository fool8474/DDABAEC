#include "main.h"

using namespace std;

int g_a = 1; // global�� g_�ν� ���� external linkage
static int g_b = 1; // �ٸ� cpp���Ͽ��� ������ �ȵȴ�. internal linkage
//const int g_x; // ����
const int g_y(1); // ���ο��� ��� ����
extern const int g_ey(1); // �ܺο��� ��� ����


//forward declaration
namespace Extern_test
{
	extern int e_a;
	//extern int e_b = 456; // �ȵ�! ������ ���ǵȴٰ�.
	void doSomething(); //��򰡿� �����ϴ� doSomething�� ã��.
	//extern void doSomething();���� extern�� �������ִ� ��.
}

namespace LEC4_2
{
	void doSomething()
	{
		static int s_a = 1; // static : �޸𸮰� ������

		++s_a;

		cout << s_a << endl;
	}
}

void Static_variable()
{
	LEC4_2::doSomething(); //2
	LEC4_2::doSomething(); //3
	LEC4_2::doSomething(); //4
	LEC4_2::doSomething(); //5
	// �����ڴ� debug�Ҷ� �ַ� ���. �� �� �� �Լ��� ȣ��Ǿ�����.
	// ��ü���� �߽ɿ����� static�� �ʿ伺�� �׷��� ��ε��� ����..
}

void Global_variable()
{
	/*
	���������� �ּ������� �������
	*/
}

void Linkage() 
{
	// ���� �� ��ü�� �ǹ��ϴ� ���ӽ�
	// internal linkage : ���� cpp �ȿ����� �������� �۵��� ex) g_a
	// external linkage : namespace Extern_test ����
	Extern_test::doSomething();
	Extern_test::doSomething();
	Extern_test::doSomething();
}
void Glob_Stat_Intern()
{
	Static_variable();
	Global_variable();
	Linkage();
	
	cout << Extern_test::e_a << endl;
	//cout << Extern_test::e_b << endl;

	ConstantsHeader();
}

void ConstantsHeader() 
{
	std::cout << "In main.cpp file " << Constants::pi << " " << &Constants::pi << std::endl;
	// main�� test�� ���� ��� Constants�κ��� ������ ����� �ּҰ� �ٸ���.
	// �׷��� header�� cpp�� ����, header�ʿ��� ����, cpp�ʿ��� �ʱ�ȭ�� �����ָ�
	// �� ������ �������.
}