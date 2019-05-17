#include "main.h"

using namespace std;

struct Person
{
	int age;
	double weight;
};

void Members_Selection_Operators()
{
	Person person;
	person.age = 5; // member selection operator
	person.weight = 30;

	Person &ref = person;
	ref.age = 15;

	Person *ptr = &person;
	ptr->age = 30;
	(*ptr).age = 20;

	Person &ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl; // 똑같다
	cout << &ref2 << endl; // 똑같다

	// pointer일때는 ->
	// reference일때는 .
}