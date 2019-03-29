#include "main.h"
#include <cstdlib>
#include <ctime>
#include <random>

unsigned int PRNG()
{
	static unsigned int seed = 5523;

	seed = 8253729 * seed + 2396403;

	return seed % 32768; //���� ó�� ���̴� seed Number�� ��ȯ
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);
	// 1���� Random���� ������.

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

void Random_device()
{
	std::random_device rd;
	std::mt19937 mesenne(rd()); //create a mesenne twister
	std::uniform_int_distribution<> dice(1, 6); //1~6����
	
	for (int count = 1; count <= 20; count++)
	{
		std::cout << dice(mesenne) << std::endl; // �����⸦ ���� ������ �ٸ� ���� �������� ����.
	}

}

void Create_random()
{
	using namespace std;

	std::srand(5323); // seed�� �������ش�.

	for (int count = 1; count <= 100; count++)
	{
		if (count % 5 == 0) cout << endl;

		cout << std::rand() << "\t"; // ���� ���ڰ� ��� ����. seed�� �����Ǿ� �ֱ� ������.
	}

	cout << endl;

	std::srand(static_cast<unsigned int>(std::time(0))); // seed�� �Ź� �޶���.
	
	for (int count = 1; count <= 100; count++)
	{
		if (count % 5 == 0) cout << endl;

		cout << std::rand() << "\t"; // �ٸ� ���ڰ� ���´�.
	}

	// random number�� ����� ���α׷��� ������Ҷ� seed�� ������Ű�°��� ����.
	
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




