#include "main.h"

using namespace std;

void Learn_the_char_type() 
{
	char c1(65);
	char c2('A');
	// 한 글자는 ' '
	// 문자열은 " " 
	
	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	// A A 65 65

	//C style Casting
	cout << (char)65 << endl; // A
	cout << (int)'A' << endl; // 65

	//C++ style Casting
	cout << char(65) << endl; //65로 시작되는 char를 새로 만든다.
	cout << int('A') << endl;
	
	cout << static_cast<char>(65) << endl; // A
	cout << static_cast<int>('A') << endl; // 65
	//static cast는 위의 것들보다 이해하기 좋음.
	
	//char는 한글자밖에 못받는데 2글자 이상을 주면 어케됩니까
	cout << "세 자리 입력하시오" << endl;
	cin >> c1; //123 입력시 1만 나옴
	cout << c1 << endl;
	
	//그래서 나머지를 더 받게 하면
	cin >> c1;
	cout << c1 << endl;
	cin >> c1;
	cout << c1 << endl;

	//다 뜬다..
	
	cout << sizeof(char) << endl;
	cout << std::numeric_limits<char>::max() << endl; // 이대로 하면 네모가 나옴
	cout << std::numeric_limits<char>::lowest() << endl; // 이대로 하면 더 큰 내모가 나옴
	//이 문제는 int로 cast해줄 필요가 있다.
	
	wchar_t wc; // 부담스러운 친구
	char32_t cc; // 유니코드에 들어있는 친구들
	

	for (int i = 0; i < 129; i++)
	{
		cout << i << '=' << char(i) << endl;
	}


}