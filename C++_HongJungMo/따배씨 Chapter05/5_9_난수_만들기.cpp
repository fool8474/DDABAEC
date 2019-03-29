#include "main.h"
#include <cstdlib>
#include <ctime>
#include <random>

unsigned int PRNG()
{
	static unsigned int seed = 5523;

	seed = 8253729 * seed + 2396403;

	return seed % 32768; //난수 처럼 보이는 seed Number를 반환
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);
	// 1에서 Random수로 나눠줌.

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

void Random_device()
{
	std::random_device rd;
	std::mt19937 mesenne(rd()); //create a mesenne twister
	std::uniform_int_distribution<> dice(1, 6); //1~6사이
	
	for (int count = 1; count <= 20; count++)
	{
		std::cout << dice(mesenne) << std::endl; // 생성기를 통해 분포가 다른 랜덤 변수들을 만듬.
	}

}

void Create_random()
{
	using namespace std;

	std::srand(5323); // seed를 설정해준다.

	for (int count = 1; count <= 100; count++)
	{
		if (count % 5 == 0) cout << endl;

		cout << std::rand() << "\t"; // 같은 숫자가 계속 나옴. seed가 고정되어 있기 때문에.
	}

	cout << endl;

	std::srand(static_cast<unsigned int>(std::time(0))); // seed가 매번 달라짐.
	
	for (int count = 1; count <= 100; count++)
	{
		if (count % 5 == 0) cout << endl;

		cout << std::rand() << "\t"; // 다른 숫자가 나온다.
	}

	// random number를 사용한 프로그램을 디버깅할때 seed를 고정시키는것이 좋다.
	
	cout << endl;

	for (int count = 1; count <= 100; count++)
	{
		if (count % 5 == 0) cout << endl;

		cout << getRandomNumber(5,8) << "\t"; // 5~8.
	}

	cout << endl;

	for (int count = 1; count <= 100; count++)
	{
		if (count % 5 == 0) cout << endl;

		cout << rand() % 4 + 10 << "\t"; // 10~13
	}
}




