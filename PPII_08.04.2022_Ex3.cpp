/*
		Write a void recursive function that takes an integer as parameter and prints the digits
	of the integer separated by spaces. For example: PrintInt(234) should display 2 3 4.

	Made by Ivan Kosiakov on 08/04/2022
*/
#include <iostream>

using namespace std;
void printInt(int);

int main()
{
	int number;

	cout << "Enter the number: ";
	cin >> number;

	printInt(number);

	return 0;
}

void printInt(int number) {
	int digit;

	if (number < 10 && number >= 0)
		cout << number << " ";
	else if (number > 10) {
		printInt(number / 10);
		digit = number % 10;
		cout << digit << " ";
	}
}
