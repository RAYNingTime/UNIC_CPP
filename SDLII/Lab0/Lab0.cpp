/*
		Create an Empty C++ project in Visual Studio. Your program will have 4
	functions in addition to main. In main the program presents a menu to the
	user with 5 choices. Choice 1 - 4 calls one of the 4 functions while the 5th
	choice exits the program.

	Made by Ivan Kosiakov on 17/02/2022
*/

#include <iostream>
#include <iomanip>

using namespace std;

//This function is calculating the sum of two numbers
double sumTwoNumbers(double, double);

//This function is calculating the area of a circle
double areaOfCircle(double radius);

//This function is calculating the circumference of a circle
double circumference(double radius);

//This function is calculating the price including vat
double priceIncludingVAT(double, int);

//This function is checking for a negative value
bool negativeCheck(double number);

int main()
{
	int choise, vat;
	bool exit = false;
	double firstNum, secondNum, radius, price;

	cout << setw(10) << "MENU" << endl
		<< "1. Sum two numbers" << endl
		<< "2. Calculate area of a circle" << endl
		<< "3. Calculate circumference of a circle" << endl
		<< "4. Calculate price with VAT" << endl
		<< "5. Exit" << endl;

	do {
		cout << "Enter your choose: ";
		cin >> choise;

		//User selecting a menu option
		switch (choise)
		{
		case 1: {
			cout << "Enter two numbers: ";
			cin >> firstNum >> secondNum;
			cout << endl << "Sum of " << firstNum << " and " << secondNum << " is " << sumTwoNumbers(firstNum, secondNum) << endl << endl;
			break;
		}
		case 2: {
			do {
				cout << "Enter radius of a circle: ";
				cin >> radius;
			} while (negativeCheck(radius) == true);

			cout << endl << "Area of the circle with radius " << radius << " is " << areaOfCircle(radius) << endl << endl;
			break;
		}
		case 3: {
			do {
				cout << "Enter radius of a circle: ";
				cin >> radius;
			} while (negativeCheck(radius) == true);

			cout << endl << "Circumference of the circle with radius " << radius << " is " << circumference(radius) << endl << endl;
			break;
		}
		case 4: {
			do {
				cout << "Enter price: ";
				cin >> price;

				cout << "Enter VAT: ";
				cin >> vat;
			} while (negativeCheck(price) == true || negativeCheck(vat) == true);

			cout << endl << "Price including VAT (" << vat << "%) is " << priceIncludingVAT(price, vat) << endl << endl;
			break;
		}
		case 5: {
			exit = true;
			cout << endl << "Goodbye!";
			break;
		}
		default:
			cout << endl << "ERROR. You entered an invalid number! Try again! " << endl << endl;
			break;
		}
	} while (exit == false);
}

double sumTwoNumbers(double firstNum, double secondNum) {
	return firstNum + secondNum;
}

double areaOfCircle(double radius)
{
	const double pi = 3.14;

	return pi * radius * radius;
}

//Formula is circumference = pi * (r + r)
double circumference(double radius)
{
	const double pi = 3.14;

	return pi * (radius + radius);
}

//Formula is price = price + (price * vat / 100)
double priceIncludingVAT(double price, int vat) {
	return price + (price * vat / 100);
}

// Fuction to make a check for a negative value
bool negativeCheck(double number) {
	bool negative = false;

	if (number < 0) {
		negative = true;
		cout << "You entered a negative value! Try again!" << endl << endl;
	}

	return negative;
}
