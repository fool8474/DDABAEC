#include "main.h"
#include <vector>
#include <cstdint>

void Type_aliases()
{
	typedef double distance_t;
	// ���� distance_t�� ������ double�� �Ÿ���� �������� ���״�
	std::int8_t i(97);
	// �̰Ŷ� ���� ����

	double my_distance = 33.333;
	distance_t home2work = 33.333;
	// �����Ϸ� ���忡�� ����.

	if (my_distance == home2work) 
	{
		std::cout << "equal" << std::endl;
	}

	using namespace std;
	vector<pair<string, int>> pairlist;
	//�̰� ����? �ʹ� �����ؼ� ���� ���������� �ʴ�.
	
	typedef vector<pair<string, int>> pairlist_t;

	pairlist_t pairlist1;
	pairlist_t pairlist2;
	//�̷��� �ϴ� ����� �ְ�

	using pairlist_t = vector<pair<string, int>>;
	//�̷��� �����Ϸ����� �̷��� ���ڴ� �˷��ִ� ����� ����.
}