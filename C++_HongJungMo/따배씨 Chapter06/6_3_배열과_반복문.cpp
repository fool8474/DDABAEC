#include "main.h"

using namespace std;

void Array_and_repeater()
{
	int scores[] = { 84,92,11,13,15 };

	const int num_students = sizeof(scores) / sizeof(int);
	
	int max_score = 0;
	int total_score = 0;

	for (int i = 0; i < num_students; i++) // 이렇게 돌아라
	{
		total_score += scores[i];
		if (max_score < scores[i]) max_score = scores[i];
	} 

	double avg_score = static_cast<double>(total_score) / num_students;

	cout << max_score << " " << avg_score << " " << endl;
}