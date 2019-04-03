#include "main.h"
#include <cstring>

using namespace std;
void C_style_array_string()
{
	char myString[] = "string";
	// 7개짜리 문자 (6+\0);

	for (int i = 0; i < 7; ++i)
	{
		cout << (int)myString[i] << endl;
	} //마지막에 0이 찍혀있다. 이는 마지막이라는 것을 뜻하는 \0이 배치되어 있기 때문.

	cout << sizeof(myString) / sizeof(myString[0]) << endl;

	char myString2[255]; // 좀 여유롭게 메모리를 주자.
	cin >> myString2;
	cout << myString2 << endl;

	myString2[0] = 'A'; // 배열과 같은 느낌으로도 처리가 가능하다.

	cout << myString2 << endl; 

	myString2[4] = '\0'; // 뒤의 것이 잘린다. 이는 \0(NULL)이 나오면 출력을 중단하기 때문.

	cout << myString2 << endl;

	//cin할 때 빈칸이 들어가면 안된다. 그때는 cin.getline을 사용해주자

	char myString3[255];
	cin.getline(myString3, 255);
	cout << myString3 << endl;
	
	int ix = 0;
	while (true)
	{
		if (myString2[ix] == '\0') break; // 종료문자 만나면 ㅃㅃ

		cout << myString2[ix] << " " << (int)myString2[ix] << endl;
		++ix;
	}
	// while문을 활용한 myString 출력
}

void C_style_array_string2()
{
	char source[] = "Copy this!";
	char dest[50]; // 만약 copy할 크기가 할당한 메모리보다 더 크면 오류

	strcpy_s(dest, 50, source); 
	// array들이 포인터로 들어가 const가 들어간 source쪽은 건드리지 않고
	// dest에 집어넣는다.
	// 최대 복사할 사이즈 50

	cout << source << endl;
	cout << dest << endl;

	//strcat() 뒤에 문자 붙여주기
	//strcmp() 두개 비교하기 같으면 0 return, 따라서 if문 쓸때는
	if (strcmp(source, dest) == 0)
	{
		cout << "同じ！" << endl;
	}
	
	strcat_s(dest, source);

	cout << source << endl;
	cout << dest << endl; // copy this가 2개나!

}