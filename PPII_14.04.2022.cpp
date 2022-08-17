/*
		a) Construct a class named Student consisting of a student id (string), an array of 5
	floating-point grades, and an integer representing the total number of grades entered.
	The constructor should initialize the numerical data members to zero. Included in the
	class should be member functions to: (i) enter the student ID number, (ii) enter a
	single test grade and update the total number of grades entered, (iii) display all the
	data of the student, and (iv) compute and display the average grade along with the
	student ID.
	
		b) Include the class constructed above within the context of a complete program.
	Your program should declare one object of type Student and accept and display
	data for this object in order to test all the member functions.
	
		Made by Ivan Kosiakov on 14/04/2022
*/

#include <iostream>

using namespace std;
int menu();

class student {
public:
	student();
	void enterStudentID(char[]);
	void enterGrade(int);
	void displayData();
	void averageGrade();
private:
	char studentID[50];
	float allGrades[5];
	int totalGrades;
};

student::student() {
	studentID[0] = '\0';
	for (int i = 0; i < 5; i++)
		allGrades[i] = 0.0;
	totalGrades = 0;
}

void student::enterStudentID(char id[]) {
	int i;
	for (i = 0; id[i] != '\0'; i++) {
		studentID[i] = id[i];
	}
	studentID[i + 1] = '\0';
}

void student::enterGrade(int grade) {
	if (totalGrades < 5) {
		allGrades[totalGrades] = grade;
		totalGrades++;
	}
	else 
		cout << "You've entered max amount of grades!" << endl;
}

void student::displayData() {
	cout << "Student ID: ";

	for (int i = 0; studentID[i+1] != '\0'; i++)
		cout << studentID[i];

	cout << endl << "Grades: ";

	for (int i = 0; i < totalGrades; i++)
		cout << allGrades[i] << " ";

	cout << endl;
}

void student::averageGrade() {
	double average = 0;

	if (totalGrades == 0)
		cout << "You didn't enter any grades! Try again!" << endl;
	else {
		for (int i = 0; i < totalGrades; i++)
			average += allGrades[i];

		average = average / totalGrades;

		cout << "Average grade of the student with ID ";

		for (int i = 0; studentID[i+1] != '\0'; i++)
			cout << studentID[i];

		cout << " is " << average;
	}
}

int main()
{
	int answer, grade;
	char studentID[50];
	student studentInfo;
	do {
		answer = menu();

		switch (answer)
		{
		case 1: { 
			cout << "Enter student ID: ";
			cin >> studentID;
			studentInfo.enterStudentID(studentID);
			break; 
		}
		case 2: {
			cout << "Enter student grade: ";
			cin >> grade;
			studentInfo.enterGrade(grade);
			break;
		}
		case 3: studentInfo.displayData();
			break;

		case 4: studentInfo.averageGrade();
			break;

		case 5: cout << endl << "Bye!";
		}

	} while (answer != 5);


	return 0;
}

int menu() {
	int answer;

	cout << endl << endl << "----MENU----" << endl
		<< "1) Enter Student ID " << endl
		<< "2) Enter Grade of the student " << endl
		<< "3) Display all the data " << endl
		<< "4) Calculate average grade of the student" << endl
		<< "5) Exit" << endl << endl;

	do {
		cin >> answer;
	} while (answer < 1 || answer > 5);

	return answer;
}
