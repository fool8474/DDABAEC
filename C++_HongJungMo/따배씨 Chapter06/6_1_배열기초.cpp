#include "main.h"

using namespace std;

#define NUM_STUDENT 100000

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACKJACK,	  // 0
	DASH,		  // 1
	VIOLET,		  // 2
	NUM_STUDENTS, // 3
};

void doSomething(int students_scores[20])
{
	cout << (int)&students_scores << endl; // 5240352
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in doSomething " << sizeof(students_scores) << endl; // 4
	// 왜 4가 나오냐, 함수에 매개변수로 갈때는 포인터가 넘어가기 때문이다.
	// 참고로 64bit 환경으로 실행하면 8bit로 넘어간다. 공간에 여유가 생김..
}

void arrayLecOne()
{
	int student1_score;
	int student2_score;
	int student3_score;
	//불편하다

	int one_student_score; // 1 variable
	int student_scores[5];
	//5개의 int 배열

	cout << sizeof(one_student_score) << endl; // 4
	cout << sizeof(student_scores) << endl; // 4*5 = 20

	one_student_score = 100;

	//student_scores = 100; // 이런 식으로는 접근이 안됨
	student_scores[0] = 100; // 1st element
	student_scores[1] = 80;  // 2nd
	student_scores[2] = 90;  // 3rd
	student_scores[3] = 50;  // 4th
	student_scores[4] = 0;   // 5th
	//student_scores[5] = 30; // 6th 접근하면 안된다.
	
	float avg = 0.f;

	for (int curStudentScore : student_scores) 
	{
		cout << curStudentScore << "점"  << endl;
		avg += curStudentScore;
	}

	avg /= (sizeof(student_scores) / sizeof(int));

	cout << avg << endl;


	// -------------------------------------

	cout << sizeof(Rectangle) << endl; // 8
	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl; // 80

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;
	// 이런식으로 접근이 가능.

	int my_array[5] = { 1,2,3,4,5 };
	for (int arrayResult : my_array)
	{
		cout << arrayResult << endl;
	}
	
	cout << my_array[JACKJACK] << endl;
	cout << my_array[DASH] << endl;
	// 별로 추천하는 방법은 아님. ENUM으로 접근 가능.

	int studentsScore[NUM_STUDENTS];
	studentsScore[JACKJACK] = 0;
	studentsScore[DASH] = 100;
	studentsScore[VIOLET] = 30;


	// ----------------------------------

	int num_students = 0;
	//cin >> num_students; // 런타임에 결정. 실행해봐야 암
	
	//int student_height[num_students]; // 컴파일에 결정. 따라서 오류
	//매크로를 통해 선언, 할당이 가능하긴 함. 추천하는 방법은 아님.

	const int num_teacher = 20; // const 상수를 사용하자.
	int teacher_year[num_teacher]; 

	cout << (int)&teacher_year << endl; // 배열의 시작점
	cout << (int)&teacher_year[0] << endl; // 배열의 시작점
	cout << (int)&teacher_year[1] << endl; // + int size
	cout << (int)&teacher_year[2] << endl; // + int size
	
	// -----------------------------------

	doSomething(my_array); // array를 함수의 parameter로 넣을 수 있다.
	cout << (int)&my_array << endl; // 5240744
	// 함수 매개변수로 간 array와 이 array는 주소가 다르다.
	
	cout << "Size in main " << sizeof(my_array) << endl;
	
	

	// ----------------------------

}

