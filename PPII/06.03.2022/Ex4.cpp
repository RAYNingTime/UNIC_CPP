/*
		Convert ex. 1 above so that your program uses functions to calculate the statistics
	as follows:

		a) Write a function called minimum that takes as parameters a twodimensional array
	called grades and two integers for the number of rows and columns, and
	returns the minimum element in the array.

		b) Write a function called maximum that takes as parameters a two-dimensional
	array called grades and two integers for the number of rows and
	columns, and returns the maximum element in the array.

		c) Write a function called average that takes as parameters a onedimensional
	array and the array size as integer and returns the average.
	Made by Ivan Kosiakov on 06/03/2022
*/

#include <iostream>

using namespace std;

int minimum(int[4][3], int, int);
int maximum(int[4][3], int, int);
double average(int[4], int);

int main()
{
	const int AMOUNT_EXAM = 4, AMOUNT_STUDENTS = 3, MAX_GRADE = 100, MIN_GRADE = 0;
	int studentGrades[AMOUNT_EXAM][AMOUNT_STUDENTS];

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

	cout << endl << "Lowest grade: " << minimum(studentGrades, AMOUNT_STUDENTS, AMOUNT_EXAM) << endl
		<< "Highest grade: " << maximum(studentGrades, AMOUNT_STUDENTS, AMOUNT_EXAM) << endl;

	for (int i = 0; i < AMOUNT_STUDENTS; i++)
		cout << "The average grade of student " << i << " is " << average(studentGrades[i], AMOUNT_EXAM) << endl;

	return 0;
}

//This function calculates a minimal value in the array
int minimum(int studentGrades[4][3], int AMOUNT_STUDENTS, int AMOUNT_EXAM) {
	int lowestGrade = studentGrades[0][0];

	for (int j = 0; j < AMOUNT_STUDENTS; j++) {
		for (int i = 0; i < AMOUNT_EXAM; i++) {
			//Checking for a min value in array
			if (studentGrades[i][j] < lowestGrade)
				lowestGrade = studentGrades[i][j];
		}
	}
	return lowestGrade;
}

//This function calculates a maximal value in the array
int maximum(int studentGrades[4][3], int AMOUNT_STUDENTS, int AMOUNT_EXAM) {
	int highestGrade = studentGrades[0][0];

	for (int j = 0; j < AMOUNT_STUDENTS; j++) {
		for (int i = 0; i < AMOUNT_EXAM; i++) {
			//Checking for a max value in array
			if (studentGrades[i][j] > highestGrade)
				highestGrade = studentGrades[i][j];
		}
	}
	return highestGrade;
}

//This function calculates an average in the array
double average(int studentGrades[4], int AMOUNT_EXAM) {
	double average = 0.0;

	for (int i = 0; i < AMOUNT_EXAM; i++)
		average += studentGrades[i];

	return average / 4;
}
