#include "main.h"
#include <algorithm>
#include <vector>

using namespace std;

void for_each()
{
	int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	//for each를 써서 해보자

	for (int number : fibonacci)
		cout << number << " ";
	cout << endl;

	//change array values
	for (int number : fibonacci)
		number = 10;
	
	for (int number : fibonacci)
		cout << number << " ";
	cout << endl;
	//바뀌지 않음!

	for (auto& number : fibonacci)
		number *= 10;

	for (const auto number : fibonacci)
		cout << number << " ";
	cout << endl;


	int max_number = std::numeric_limits<int>::lowest();

	fibonacci[5] = 1000;

	for (const auto& number : fibonacci)
		max_number = std::max(max_number, number);

	cout << max_number << endl;

	vector<int> fibonacciVec = { 0,1,1,2,300,5,8,13,21,34,55,89 };
	// 동적 할당을 아주 편하게!
	
}