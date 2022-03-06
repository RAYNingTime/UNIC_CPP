/*
		Write a program that reads the grades (integers) of 4 exams per students in a class
	of 3 students, and outputs the following statistics: a) the lowest grade b) the highest
	grade and c) the average grade of each student. You should also output the table of
	grades entered.

		Made by Ivan Kosiakov on 06/03/2022
*/

#include <iostream>

using namespace std;

int main()
{
	const int AMOUNT_EXAM = 4, AMOUNT_STUDENTS = 3, MAX_GRADE = 100, MIN_GRADE = 0;
	int studentGrades[AMOUNT_EXAM][AMOUNT_STUDENTS], lowestGrade, highestGrade;
	double average[AMOUNT_STUDENTS] = { 0,0,0 };

	//Filling two-dimesional array
	for (int j = 0; j < AMOUNT_STUDENTS; j++) {
		cout << "Student " << j << ": ";
		for (int i = 0; i < AMOUNT_EXAM; i++) {
			cin >> studentGrades[i][j];

			//Checking for an invalid value and replacing it with correct
			if (studentGrades[i][j] > MAX_GRADE)
				studentGrades[i][j] = MAX_GRADE;
			else
				if (studentGrades[i][j] < MIN_GRADE)
					studentGrades[i][j] = MIN_GRADE;
		}
	}

	lowestGrade = studentGrades[0][0];
	highestGrade = studentGrades[0][0];

	for (int j = 0; j < AMOUNT_STUDENTS; j++) {
		for (int i = 0; i < AMOUNT_EXAM; i++) {
			//Checking for a min value in array
			if (studentGrades[i][j] < lowestGrade)
				lowestGrade = studentGrades[i][j];

			//Checking for a max value in array
			if (studentGrades[i][j] > highestGrade)
				highestGrade = studentGrades[i][j];

			//Adding all grades in three different blocks
			average[j] += studentGrades[i][j];
		}
	}

	cout << endl << "Lowest grade: " << lowestGrade << endl
		<< "Highest grade: " << highestGrade << endl;

	for (int i = 0; i < AMOUNT_STUDENTS; i++)
		cout << "The average grade of student " << i << " is " << average[i] / 4 << endl;

	return 0;
}