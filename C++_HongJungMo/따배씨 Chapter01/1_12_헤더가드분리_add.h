#pragma once
//pragma once가 헤더가드이다.
//왜 필요한가?
//헤더가드가 있으면 이렇게 몸체가 있어도 문제가 없다.

#ifndef MY_ADD // if not definded
#define MY_ADD // define this

int add(int a, int b)
{
	return a + b;
}

void doSomeThing()
{
	add(1, 2);
}

#endif // 이 구문이 번거롭기에 #pragma once로 한번에 다 해준다.
