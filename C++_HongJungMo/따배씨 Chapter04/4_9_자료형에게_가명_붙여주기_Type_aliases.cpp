#include "main.h"
#include <vector>
#include <cstdint>

void Type_aliases()
{
	typedef double distance_t;
	// 내가 distance_t를 쓸때는 double를 거리라는 개념으로 쓸테다
	std::int8_t i(97);
	// 이거랑 같은 느낌

	double my_distance = 33.333;
	distance_t home2work = 33.333;
	// 컴파일러 입장에선 같다.

	if (my_distance == home2work) 
	{
		std::cout << "equal" << std::endl;
	}

	using namespace std;
	vector<pair<string, int>> pairlist;
	//이건 뭘까? 너무 복잡해서 뭔지 직관적이지 않다.
	
	typedef vector<pair<string, int>> pairlist_t;

	pairlist_t pairlist1;
	pairlist_t pairlist2;
	//이렇게 하는 방법도 있고

	using pairlist_t = vector<pair<string, int>>;
	//이렇게 컴파일러에게 이렇게 쓰겠다 알려주는 방법도 있음.
}