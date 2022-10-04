/*
		a) Define a single structure data type suitable for a Car structure to hold the following
	information: Car number, miles driven and gallons used.
		b) Using the data type declared above, write program that interactively accepts these
	data into an array of 5 structures. Once the data have been entered, the program
	should create a report listing each car number and the miles per gallon achieved by
	the car.

	Made by Ivan Kosiakov on 10/03/2022
*/

#include <iostream>
using namespace std;

struct car
{
	char carNumber[20];
	double milesDriven;
	double gallonsUsed;
};

void main()
{
	const int MAX_CARS = 5;
	car userCar[MAX_CARS];

	for (int i = 0; i < MAX_CARS; i++) {
		cout << "Enter number of the " << i + 1 << " car: ";
		cin >> userCar[i].carNumber;

		cout << "Enter miles driven: ";
		cin >> userCar[i].milesDriven;

		cout << "Enter gallons used: ";
		cin >> userCar[i].gallonsUsed;
	}

	for (int i = 0; i < MAX_CARS; i++) {
		cout << "Number of the " << i + 1 << " car: " << userCar[i].carNumber << endl;

		cout << "Miles per gallon: " << userCar[i].milesDriven / userCar[i].gallonsUsed << endl << endl;
	}
}
