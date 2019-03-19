#include <iostream>
#include "main.h"

void helloWorld() {
	std::cout << "hello World" << std::endl;
}

// 구성 Debug Win32 : Debug, x86으로 빌드
/*
.cpp : cpp파일
vcxpoj : 프로젝트의 정보를 담고 있다.  ~를 빌드 해라.
Debug 폴더
obj(oo : 리눅스) : 여러개의 source파일들이 각각 obj로 생성됨.
obj가 여러개 있으면 링크시키고 실행파일을 만든다.
그 실행파일은 솔루션에서 지정해주는 Debug폴더 안에 exe파일로 생성된다.
실행법 : Start Without Debug (Ctrl + F5)

visual studio용 cmd를 사용하여 실행할수도 있다.
이때는 Debug 안의 exe파일로 불러오면 된다.

빌드 - 솔루션 정리를 통해 Debug 내역을 정리할 수 있음.

Release는 Debug하면서 실행이 안됨.
뭐가 다를까?
두개의 exe파일 사이즈가 다르다. Debug로 할때는 Debug할때 필요한 정보들이 같이 들어있어 사이즈가 크고
release는 사용자 배포용이기에, 속도도 빠르고 정보도 최소화되어있다.

x86은 메모리 제한이 있다
x64는 메모리 사용이 많다 최근꺼는 다들 이걸 사용하고 그냥 이걸 사용하는 편이 마음이 편함
*/
