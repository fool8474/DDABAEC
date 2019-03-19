
#include "main.h"
#include <algorithm>
using namespace std;

#define MY_NUMBER 9
// 매크로 실제로는 사용하지 않는다.. 별로..
#define STRINGSTRING "Hello, world"
// 요걸 만나면 교체를 해준다 이 말
#define MAX(a,b) ((a>b) ? a : b)
// 둘 중에 큰거를 출력하게, 이런건 많이쓴대요
// 근데 요새는 컴퓨터가 빠르다보니 굳이 쓰진 않음.

#define MIN(a,b) (((a)<(b)) ? (a) : (b))
// 이렇게 엄청 괄호를 싸서 구분하기도 한다.

#define LIKE_APPLE
// 정의를 해준다. 아래에서 사용
// 얘는 영향범위가 해당 cpp파일만 된다. 
// 따라서 이걸 다른 곳에서 사용하면
// 오렌지가 나올것.


void MeetWithPreprocessor() 
{
	cout << MY_NUMBER << endl;
	cout << MAX(1, 2) << endl;
	cout << MIN(1, 2) << endl;

	cout << std::max(1 + 3, 2) << endl; //알고리즘에서 가져옴

#ifdef LIKE_APPLE
	cout << "Apple Apple " << endl;
#endif

#ifndef  LIKE_APPLE
	cout << "orange orange" << endl;
#endif // ! LIKE_APPLE 선언이 되어있으니까 흐리게 나옴.
}

//멀티플랫폼 소프트웨어를 개발시 정신없이 사용하게 된다.
