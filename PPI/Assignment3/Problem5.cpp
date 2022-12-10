/*
	Write the following function to return the reverse of an integer number:

		int reverse(int number)

	For example, reverse(3456) returns 6543. Write a test program that prompts the
	user to enter an integer and displays its reversal.

	Made by Ivan Kosiakov on 01/01/2022
*/

#include <iostream>

using namespace std;

int reverse(int);
bool negativeCheck(int);

void main()
{
	int number;

	do {
		cout << "Enter integer number: ";
		cin >> number;
	} while (negativeCheck(number) == false);

	cout << "Reversed number is " << reverse(number);
}

//This function is checking number for a negation
bool negativeCheck(int number) {
	bool negativeCheck;

	if (number < 0) {
		cout << "You entered negative value!" << endl
			<< "Try again!" << endl << endl;
		negativeCheck = false;
	}
	else
		negativeCheck = true;

	return negativeCheck;
}

//This function is returning the reverse of an integer number
int reverse(int number) {
	int amountOfDigits = 0, digit, reversedNumber = 0, saveNumber = number;

	//This loop is counting amount of digits in the integer
	while (number >= 10) {
		amountOfDigits++;
		number = number / 10;
	}

	number = saveNumber;

	//This loop is replacing digits in reverse order
	for (int i = amountOfDigits; i >= 0; i--) {
		digit = number % 10;
		reversedNumber += digit * pow(10, i);
		number = number / 10;
	}

	return reversedNumber;
}
