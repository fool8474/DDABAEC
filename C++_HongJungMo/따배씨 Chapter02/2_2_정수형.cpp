#include "main.h"

// longlong 이란것도 있다. C99/C++11 type, 8바이트

using namespace std;
void The_Integers() {
	
	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl; // 2 bytes = 2 * 8 bits = 16 bits
	// short로 표현 가능한 것은 2 ^ 16
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	//2 4 4 8

	cout << sizeof(short) << endl; // 2임. 2*8을 해줘야함 bit로 세기 때문
	cout << std::pow(2, sizeof(short) * 8 - 1) << endl; // 32768
	// signed를 표현하기 위해 -1를 해줌. 부호가 있냐 없냐. 
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