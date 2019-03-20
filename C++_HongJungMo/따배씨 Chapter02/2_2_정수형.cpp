#include "main.h"

// longlong �̶��͵� �ִ�. C99/C++11 type, 8����Ʈ

using namespace std;
void The_Integers() {
	
	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl; // 2 bytes = 2 * 8 bits = 16 bits
	// short�� ǥ�� ������ ���� 2 ^ 16
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	//2 4 4 8

	cout << sizeof(short) << endl; // 2��. 2*8�� ������� bit�� ���� ����
	cout << std::pow(2, sizeof(short) * 8 - 1) << endl; // 32768
	// signed�� ǥ���ϱ� ���� -1�� ����. ��ȣ�� �ֳ� ����. 
	cout << std::numeric_limits<short>::max() << endl; //32767
	cout << std::numeric_limits<short>::min() << endl; //-32768
	cout << std::numeric_limits<short>::lowest() << endl; //-32768
	cout << std::pow(2, sizeof(long) * 8) << endl; // 2^64
	
	s = std::numeric_limits<short>::max();
	s += 1;

	cout << s << endl; // -32768 overflow

	s = std::numeric_limits<short>::min();
	s -= 1;

	cout << " " << s << endl; // 32767 overflow

	unsigned int usi_I = -1;
	cout << usi_I << endl; // 4294967295 unsigned int overflow 

}