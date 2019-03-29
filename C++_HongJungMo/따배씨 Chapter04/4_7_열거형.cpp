#include "main.h"
#include <typeinfo>

int comuptDamage(int weapon_id)
{
	if (weapon_id == 0) //sword
	{
		return 1;
	}

	if (weapon_id == 1)
	{
		return 2;
	}

	// ....

	//programmer 입장에서는 각 id가 뭘 뜻하는지 기억하기 힘듬.
	
}


enum Color // user-defined data types
{
	COLOR_BLACK, //0
	COLOR_RED, //1
	COLOR_BLUE, //2
	COLOR_GREEN, //3
	COLOR_SKYBLUE, //4
}; // semi-column 중요


enum Feeling
{
	HAPPY = -5,
	JOY,
	BLUE = 3,
	TIRED = 3,
}; // 만약 BLUE가 겹쳤었다면? 컴파일 안됨. 

void Introduce_enum()
{
	enum Fruit
	{
		BANANA,
		APPLE,
	};

	Color paint = COLOR_BLACK; // enum을 통해 초기화가 가능
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };
	Feeling notGood{ HAPPY };
	Feeling JOJO{ JOY };
	Feeling sleep(TIRED);

	std::cout << COLOR_BLACK << paint << std::endl;
	std::cout << JOY << " " << BLUE << " " << TIRED << std::endl;

	Color color = COLOR_BLACK;
	Fruit fruit = BANANA;

	// 4_8 enum class
	std::cout << "is color equal to fruit ? ";
	if (color == fruit)
	{
		std::cout << "YES" << std::endl;
	}

	enum class Fruit2
	{
		BANANA,
		APPLE,
	};

	Fruit2 fruit2 = Fruit2::BANANA; // 이런 식으로 해야함.
	//이때는 color == fruit2가 작동하지 않음.
}