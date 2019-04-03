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
	// �� 4�� ������, �Լ��� �Ű������� ������ �����Ͱ� �Ѿ�� �����̴�.
	// ����� 64bit ȯ������ �����ϸ� 8bit�� �Ѿ��. ������ ������ ����..
}

void arrayLecOne()
{
	int student1_score;
	int student2_score;
	int student3_score;
	//�����ϴ�

	int one_student_score; // 1 variable
	int student_scores[5];
	//5���� int �迭

	cout << sizeof(one_student_score) << endl; // 4
	cout << sizeof(student_scores) << endl; // 4*5 = 20

	one_student_score = 100;

	//student_scores = 100; // �̷� �����δ� ������ �ȵ�
	student_scores[0] = 100; // 1st element
	student_scores[1] = 80;  // 2nd
	student_scores[2] = 90;  // 3rd
	student_scores[3] = 50;  // 4th
	student_scores[4] = 0;   // 5th
	//student_scores[5] = 30; // 6th �����ϸ� �ȵȴ�.
	
	float avg = 0.f;

	for (int curStudentScore : student_scores) 
	{
		cout << curStudentScore << "��"  << endl;
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
	// �̷������� ������ ����.

	int my_array[5] = { 1,2,3,4,5 };
	for (int arrayResult : my_array)
	{
		cout << arrayResult << endl;
	}
	
	cout << my_array[JACKJACK] << endl;
	cout << my_array[DASH] << endl;
	// ���� ��õ�ϴ� ����� �ƴ�. ENUM���� ���� ����.

	int studentsScore[NUM_STUDENTS];
	studentsScore[JACKJACK] = 0;
	studentsScore[DASH] = 100;
	studentsScore[VIOLET] = 30;


	// ----------------------------------

	int num_students = 0;
	//cin >> num_students; // ��Ÿ�ӿ� ����. �����غ��� ��
	
	//int student_height[num_students]; // �����Ͽ� ����. ���� ����
	//��ũ�θ� ���� ����, �Ҵ��� �����ϱ� ��. ��õ�ϴ� ����� �ƴ�.

	const int num_teacher = 20; // const ����� �������.
	int teacher_year[num_teacher]; 

	cout << (int)&teacher_year << endl; // �迭�� ������
	cout << (int)&teacher_year[0] << endl; // �迭�� ������
	cout << (int)&teacher_year[1] << endl; // + int size
	cout << (int)&teacher_year[2] << endl; // + int size
	
	// -----------------------------------

	doSomething(my_array); // array�� �Լ��� parameter�� ���� �� �ִ�.
	cout << (int)&my_array << endl; // 5240744
	// �Լ� �Ű������� �� array�� �� array�� �ּҰ� �ٸ���.
	
	cout << "Size in main " << sizeof(my_array) << endl;
	
	

	// ----------------------------

}

