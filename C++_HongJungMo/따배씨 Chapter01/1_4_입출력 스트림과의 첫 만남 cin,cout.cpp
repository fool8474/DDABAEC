#include "main.h"
#include "1_4_����� ��Ʈ������ ù ���� cin,cout.h"

using namespace std;
//�̰��� ���� std�� ���� ����.

void first_meet_with_IO_Stream() {
	std::cout << "hello Stream" << std::endl; // output Operator
	//hello Stream

	int x = 1024;
	std::cout << "x is " << x << std::endl;
	//x is 1024
	
	std::cout << "abc" << "\t" << "def" << std::endl;
	//abc	def
	std::cout << "ab" << "\t" << "cdef" << std::endl;
	//ab	cdef

	//\�� ���� ��� ������� �ؼ��� �ȴ�.
	//\n : new line
	//\t : tab
	
	cout << "asdasd" << endl;
	// using namespace�� ���� std ����

	cout << "\a";
	//\a : audio, alarm


	//-------------- input--------------

	int a;
	cin >> a;
	cout << "your input is " << a << endl;

	// �̶� ���ϰ� ū ���ڸ� ������ overflow�� �Ͼ
	// 100000000000000000000 >> int�� ���� �� �ִ� ���� ū ���� 2147483647�� �Էµ�

}
