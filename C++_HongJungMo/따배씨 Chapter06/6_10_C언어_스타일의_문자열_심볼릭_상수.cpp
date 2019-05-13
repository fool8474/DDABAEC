#include "main.h"

using namespace std;

const char* getName()
{
	return "Jack Jack";
}

void C_Lang_Style_Symbolic_Constant()
{
	char name[] = "Jack jack";

	// char *name = "Jack jack"; // 이건 안된다! 
	// 포인터는 메모리의 주소를 가리키는것일 뿐, 임시 데이터를 넣는게 아니다.
	const char *name2 = "Jack Jack"; // 이건 된다! 기호적인 상수처럼 사용
	const char *name3 = "Jack Jack";

	cout << (uintptr_t)name2 << endl;
	cout << (uintptr_t)name3 << endl;
	// const가 붙은 애들은 완전히 데이터가 동일하면 주소도 같다.

	const char *name4 = getName();
	cout << (uintptr_t)name4 << endl;
	// 얘도 같다!


	// 문자 포인터의 특성
	cout << name4 << endl; // Jack Jack
	// 문자의 포인터는 Cstyle의 문자의 배열일 가능성이 높다 가정하여
	// null char를 만날 때 까지 쭉 출력한다.

	char c = 'Q';
	cout << &c << endl; // 이상한게 나온다!
	// c에 주소가 들어가니까 (pointer) 얘는 문자열인가 하여, 
	// 쭉 출력헀더니 null이 나올때까지 출력하였는데 얜 단일 char이니
	// 이상하게 되어버린 것.


}