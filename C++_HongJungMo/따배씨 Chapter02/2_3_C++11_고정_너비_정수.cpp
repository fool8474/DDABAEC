#include "main.h"

using namespace std;

void Fixed_width_Integers() {
	std::int16_t i(5); // 2byte¥�� ������ Ÿ������ �ٲ���
	std::int8_t myint = 65; //1byte¥�� ������ Ÿ������.. ���� a�� ����
	// �ٵ� �̰͵��� int�� �ƴϴ�. short, char�� ����ȴ�.

	cout << myint << endl;

	std::int_fast8_t fi(5);
	// 8bit�߿� ���� ������.
	std::int_least64_t fl(5);
	// ��� 8byte�� ���� ������ Ÿ��
}
