/* Suppose that the tuition for a university is $10,000 this year (year 1) and increases
	5% every year. Write a program that computes the tuition in x years from now, with
	x being a number given by the user. In addition, the program should compute the
	total cost of y years’ worth of tuition starting from now, with y being a number given
	by the user. Finally, the program should display the tuition for x years along with the
	total tuition cost at the end of each year. Your program will terminate when the user
	enters 0.

  Made by Ivan Kosiakov on 01/01/2022
*/

#include <iostream>
#include <iomanip>

using namespace std;

void menu();
void selector(int);
void firstChoice();
void secondChoice();
void thirdChoice();

bool negativeCheck(int);

int main()
{
	int answer;

	menu();

	do {
		cout << endl << "Enter your choise: ";
		cin >> answer;
		selector(answer);
	} while (answer != 0);
	return 0;
}

//This function contains the menu for a program
void menu() {
	cout << "Welcome to the tuition calculator!" << endl
		<< endl << "1 Compute the yearly tuition in x years from today" << endl
		<< "2 Compute the total tuition cost for y years from today" << endl
		<< "3 Compute yearly tuition and total tuition cost at the end of each year, for x years" << endl
		<< "0 Quit program " << endl;
}

//This function contains menu selections
void selector(int choise) {
	switch (choise)
	{
	case 1:
		firstChoice();
		break;

	case 2:
		secondChoice();
		break;

	case 3:
		thirdChoice();
		break;

		//This choice contains the exit from the program
	case 0:
		cout << "Goodbye!";
		break;

		//Raises an error if the number is entered incorrectly
	default:
		cout << "You entered invalid number. Try again!";
		break;
	}
}

//This function compute the yearly tuition in x years from today
void firstChoice() {
	const double INCREASING_PROCENT = 0.05;
	int amountOfYears, calculatedPrice = 10000;

	do {
		cout << "You want to know the yearly tuition in how many years from today? ";
		cin >> amountOfYears;
	} while (negativeCheck(amountOfYears) == false);

	for (int i = 1; i <= amountOfYears; i++)
		calculatedPrice += calculatedPrice * INCREASING_PROCENT;

	cout << "The yearly tuition after " << amountOfYears << " years from today will be " << calculatedPrice << endl;
}

//This function compute the total tuition cost for y years from today
void secondChoice() {
	const double INCREASING_PROCENT = 0.05;
	int amountOfYears, calculatedPrice = 0, tuitionForYear = 10000;

	do {
		cout << "You want to know the total tuition cost after how many years from today? ";
		cin >> amountOfYears;
	} while (negativeCheck(amountOfYears) == false);

	for (int i = 1; i <= amountOfYears; i++) {
		calculatedPrice += tuitionForYear;
		tuitionForYear += tuitionForYear * INCREASING_PROCENT;
	}

	cout << "The total tuition cost after " << amountOfYears << " years from today will be " << calculatedPrice << endl;
}

//This fucntion compute yearly tuition and total tuition cost at the end of each year, for x years
void thirdChoice() {
	const double INCREASING_PROCENT = 0.05;
	int amountOfYears, calculatedPrice = 0, tuitionForYear = 10000;

	do {
		cout << "How many years you want to consider starting from today? ";
		cin >> amountOfYears;
	} while (negativeCheck(amountOfYears) == false);

	cout << endl << "Year" << setw(15) << "Tuition" << setw(44) << "Total Tuition Cost at the End of Year" << endl;

	for (int i = 1; i <= amountOfYears; i++) {
		calculatedPrice += tuitionForYear;

		cout << i << setw(16) << tuitionForYear << setw(14) << calculatedPrice << endl;

		tuitionForYear += tuitionForYear * INCREASING_PROCENT;
	}
}

//This fucntion checks for a negative value
bool negativeCheck(int number) {
	if (number <= 0) {
		cout << "You entered invalid number. Try again!" << endl << endl;
		return false;
	}
	else return true;
}
