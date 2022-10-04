/*
		Write a void recursive function that takes an integer as parameter and prints it in
	reverse. For example: PrintRev(234) should display 432.

	Made by Ivan Kosiakov on 08/04/2022
*/
#include <iostream>

using namespace std;
void printRev(int);

int main()
{
	int number;

	cout << "Enter the number: ";
	cin >> number;

	printRev(number);

	return 0;
}

void printRev(int number) {
	int digit;

	if (number < 10 && number >= 0)
		cout << number << " ";
	else if (number > 10) {
		digit = number % 10;
		cout << digit;
		printRev(number / 10);
	}
}
