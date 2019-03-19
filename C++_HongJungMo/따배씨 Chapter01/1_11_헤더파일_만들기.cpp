#include "main.h"
#include "1_11_헤더파일_만들기.h"
//이렇게 includer해주면 add2를 사용할 수 있다.

//#include <iostream>은 왜 꺾쇠에 h가 없을까

using namespace std;

int add2(int a, int b)
{
	return a + b;
}

void MakeHeaderFile()
{
	
}

/*
cpp File들을 만들어 비슷한 기능들을 head로 묶는다.
한번 쪼개놓은 것은 다른곳에서 다시 사용하고 싶다.
따라서 Header File을 만든다.

윈도우 디렉터리에서 위치를 옮겼을 경우 솔루션에서도 이를 설정해줘야 함.
그렇지 않으면 파일을 찾질 못함.
*/