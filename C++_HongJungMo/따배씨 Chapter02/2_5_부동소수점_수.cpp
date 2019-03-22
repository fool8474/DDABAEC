// 3.141592, 3�� ����, �� �Ʒ��� �Ҽ�
// ��ǻ�ʹ� �ε��Ҽ����� ����Ѵ�.
// floating point numbers. float, �յ� ���ٴϸ鼭 ���ڸ� �ٲ۴�.

/*
float - 4����Ʈ
double - 8����Ʈ
long double - 8����Ʈ ,12����Ʈ, 16����Ʈ
������ - float�� ���� ���. �������� �δ㽺���� ����.
*/

/*
��ȣ ����     ����
0    00000111 1100000000000000000000000
+    1+2+4=7  0.5+0.25 = 0.75
*/

#include "main.h"
#include <limits>
#include <iomanip>
#include <cmath>

using namespace std;
void Float_point_numbers() {
	float f(3.141592f); // 3.14 = 31.4 * 0.1

	double d(3.141592);
	long double ld(3.141592);

	cout << sizeof(f) << endl; //4
	cout << sizeof(d) << endl; //8
	cout << sizeof(ld) << endl; //8
	cout << numeric_limits<float>::max() << endl; //3.40282e+38
	cout << numeric_limits<double>::max() << endl; //1.79769e+308
	cout << numeric_limits<long double>::max() << endl; //1.79769e+308
	cout << numeric_limits<float>::min() << endl; //1.17549e-38
	cout << numeric_limits<double>::min() << endl; //2.22057e-308
	cout << numeric_limits<long double>::min() << endl; //2.22057e-308
	cout << numeric_limits<float>::lowest() << endl; //-3.40282e+38
	cout << numeric_limits<double>::lowest() << endl; //-1.79769e+308
	cout << numeric_limits<long double>::lowest() << endl; //-1.79769e+308

	cout << 31.4e-1 << endl; //3.14
	cout << 31.4e1 << endl; //314

	// �ε��Ҽ��� ����Ҷ� ����� �ߴ��� ����

	/*
	****************************
	*                          *
	*      ��  ��  ��  ��      *
	*                          *
	****************************
	*/
	cout << 1.0 / 3.0 << endl; //0.33333 �޺κ��� ����?
	// iomanip�� ���� ��°��� �����غ���.
	cout << std::setprecision(16) << endl;
	cout << 1.0 / 3.0 << endl; //16�ڸ����� ǥ����.

	float ff(123456789.0f); // 10 significent digits

	cout << ff << endl; // 123456792 ????
	double dd(0.1);
	cout << std::setprecision(17) << endl;
	cout << dd << endl; // 0.100000000001
	
	double d2(1.0); // 1
	double d1(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	// 0.99999999999999989
	cout << d1 << endl;
	cout << d2 << endl;
	

	//

	double zero = 0.0;
	double posinf = 5.0 / zero;

	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << " " << std::isinf(nan) << endl; //inf
	cout << neginf << " " << std::isinf(nan) << endl; //-inf
	cout << nan << " " << std::isnan(nan) << endl; //-nan(ind)
	//�̷��� ������ �ȵǴµ�..
	//isnan�� ���� nan���� �Ǻ�
	//isinf�� �ִ�.

	
}

