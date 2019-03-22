#include "main.h"
#include <bitset>

using namespace std;
void Bitwise_operator() 
{
	cout << std::bitset<8>(5) << endl;
	cout << std::bitset<8>(12) << endl;
	cout << std::bitset<8>(5|12) << endl;
	cout << std::bitset<8>(5&12) << endl;
	cout << std::bitset<8>(5^12) << endl;
	cout << std::bitset<8>(6 >> 2) << endl;
	cout << (6 >> 2) << endl; // 18
	cout << (5|12) << endl; // 13
	cout << (5&12) << endl; // 4
	cout << (5 ^ 12) << endl; // 9

	// 0110 : 6
	// 0110 >> 2 : 1
	// 5 : 0101
	//12 : 1100

	//5|12 :  1101
	//5&12 :  0100
	//5^12 :  1001
}