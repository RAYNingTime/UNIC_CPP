/*
		a) Construct a class named Employee that can be used to represent an employee of a
	company. Each employee is defined by an integer ID number, a pay rate, and the
	maximum number of hours the employee should work each week. The services
	(functions) provided by the class should be: the ability to enter data for a new
	employee, the ability to display data for an employee. (Your class should include two
	constructors: one with parameters and one without parameters).
	
		b) Include the class definition above in a program that declares two objects of type
	Employee: emp1 and emp2 (using a different constructor for each one), and asks the
	user to enter the required data for each of the two employees and then diplays the data
	of each one.

		Made by Ivan Kosiakov on 14/04/2022
*/

#include <iostream>

using namespace std;

class employee {
public:
	employee();
	void enterData(int, int, int);
	void displayData();
private:
	int employeeId;
	int payRate;
	int maxHours;
};

employee::employee() {
	employeeId = 0;
	payRate = 0;
	maxHours = 0;
}

void employee::enterData(int id, int rate, int hours) {
	employeeId = id;
	payRate = rate;
	maxHours = hours;
}

void employee::displayData() {
	cout << endl << "Employee ID: " << employeeId << endl
		<< "Pay rate: " << payRate << endl
		<< "Maximum number of hours: " << maxHours << endl;
}

int main()
{
	const int AMOUNT_EMPLOYEE = 2;
	int id, payRate, maxHours;
	employee emp1, emp2;

	for (int i = 0; i < AMOUNT_EMPLOYEE; i++) {
		
		cout << endl << "Enter data for the " << i + 1 << " employee:" << endl
			<< "ID: ";
		cin >> id;
		cout << "Pay rate: ";
		cin >> payRate;
		cout << "Max hours: ";
		cin >> maxHours;
		
		switch (i)
		{
		case 0: 
			emp1.enterData(id, payRate, maxHours);
			break;
		case 1:
			emp2.enterData(id, payRate, maxHours);
			break;
		}
	}

	cout << endl << "Information about first employee: ";
	emp1.displayData();

	cout << endl << "Information about second employee: ";
	emp2.displayData();

	return 0;
}