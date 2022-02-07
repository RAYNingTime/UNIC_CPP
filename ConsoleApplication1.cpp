#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//This function is calculating the sum of two numbers
double sumTwoNumbers(double, double);

//This function is calculating the area of a circle
double areaOfCircle(double);

//This function is calculating the circumference of a circle
double circumference(double);

//This function is calculating the price including vat
double priceIncludingVAT(double, int);

//This function is checking for a negative value
bool negativeCheck(double);

void main()
{
	int choise;
	bool exit = false;
	double firstNum, secondNum, radius, price, vat;

	cout << setw(10) << "MENU" << endl
		<< "1. Sum two numbers" << endl
		<< "2. Calculate area of a circle" << endl
		<< "3. Calculate circumference of a circle" << endl
		<< "4. Calculate price with VAT" << endl
		<< "5. Exit" << endl;

	do {
		cin >> choise;

		//User selecting a menu option
		switch (choise)
		{
		case 1: {
			cout << "Enter two numbers: " << endl;
			cin >> firstNum >> secondNum;
			cout << "Sum of " << firstNum << " and " << secondNum << " is " << sumTwoNumbers(firstNum, secondNum) << endl << endl;
			break;
		}
		case 2: {
			do {
				cout << "Enter radius of a circle: " << endl;
				cin >> radius;
			} while (negativeCheck(radius) == true);

			cout << "Area of the circle with radius " << radius << " is " << areaOfCircle(radius) << endl << endl;
			break;
		}
		case 3: {
			do {
				cout << "Enter radius of a circle: " << endl;
				cin >> radius;
			} while (negativeCheck(radius) == true);

			cout << "Circumference of the circle with radius " << radius << " is " << circumference(radius) << endl << endl;
			break;
		}
		case 4: {
			do {
				cout << "Enter price: " << endl;
				cin >> price;

				cout << "Enter VAT: " << endl;
				cin >> vat;
			} while (negativeCheck(price) == true || negativeCheck(vat) == true);

			cout << "Price including VAT (" << vat << "%) is " << priceIncludingVAT(price, vat) << endl << endl;
			break;
		}
		case 5: {
			exit = true;
			cout << endl << "Goodbye!";
			break;
		}
		default:
			cout << "ERROR. You entered an invalid number! Try again! " << endl << endl;
			break;
		}
	} while (exit == false);
}

double sumTwoNumbers(double firstNum, double secondNum) {
	return firstNum + secondNum;
}

// M_PI ~ 3.14 so via formula area = pi * r * r
double areaOfCircle(double radius) {
	return M_PI * pow(radius, 2);
}

//Formula is circumference = pi * (r + r)
double circumference(double radius) {
	return M_PI * (radius + radius);
}

//Formula is price = price + (price * vat / 100)
double priceIncludingVAT(double price, int vat) {
	return price + (price * vat / 100);
}

bool negativeCheck(double number) {
	bool negative = false;

	if (number < 0) {
		negative = true;
		cout << "You entered a negative value! Try again!" << endl << endl;
	}

	return negative;
}