#include "main.h"

using namespace std;

void Fixed_width_Integers() {
	std::int16_t i(5); // 2byte짜리 데이터 타입으로 바꿔줌
	std::int8_t myint = 65; //1byte짜리 데이터 타입으로.. 따라서 a가 나옴
	// 근데 이것들은 int가 아니다. short, char로 변경된다.

	cout << myint << endl;

	std::int_fast8_t fi(5);
	// 8bit중에 가장 빠른거.
	std::int_least64_t fl(5);
	// 적어도 8byte를 갖는 데이터 타입
}
