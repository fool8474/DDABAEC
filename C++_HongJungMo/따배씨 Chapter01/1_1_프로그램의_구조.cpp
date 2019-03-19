#include "main.h" // # : 전처리기.
/*
	프로그램의 최소단위 : 함수
	빈칸과 빈줄은 컴파일러가 무시한다
	세미콜론 하란말이야 파이썬이 아니다 이말이야

*/

void program_structure() {
	1 + 1; // 완전한 문장
	3 * 4; // 이것들은 expression이다.
	
	int x = 2; // 정수형 변수 x에 2를 넣음 (Integer)
	int y = x + 3; // 2 + 3 = 5

	std::cout << y << std::endl; // cout는 출력, endl는 엔터
	//std는 namespace

	std::cout << 1 + 2 << std::endl;

	//iostream과 같은 library는 VS 깔면 딸려오는 친구들
	//나중에 라이브러리 만들수도..

}