#include "main.h"
#include "1_4_입출력 스트림과의 첫 만남 cin,cout.h"

using namespace std;
//이것을 통해 std를 생략 가능.

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

	//\가 붙은 경우 기능으로 해석이 된다.
	//\n : new line
	//\t : tab
	
	cout << "asdasd" << endl;
	// using namespace를 통해 std 생략

	cout << "\a";
	//\a : audio, alarm


	//-------------- input--------------

	int a;
	cin >> a;
	cout << "your input is " << a << endl;

	// 이때 어마어마하게 큰 숫자를 넣으면 overflow가 일어남
	// 100000000000000000000 >> int가 가질 수 있는 가장 큰 숫자 2147483647이 입력됨

}
