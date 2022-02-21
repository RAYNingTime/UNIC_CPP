/** \file PPII_Ex2_17.02.2022.cpp
* \brief This program separetes numbers with spaces.
* \details This program takes an integer, stores its digits into an array, and then prints the array with spaces separating the digits.
* \author Ivan Kosiakov
* \version 0.1
* \date 2022-2022
* \copyright University of Nicosia.
*/

#include <iostream>

using namespace std;

void separateNumber(int);

/**
*The driver of the program.
*@return Returns 0.
*/

int main()
{
	int number;

	cout << "Enter a number: ";
	cin >> number;

	cout << "The number with spaces is: ";
	separateNumber(number);
}

/**
* Function <code>separateNumber</code>, separates digits of the number.
* <BR>
* @param number The number that should be separated.
*/

void separateNumber(int number) {
	int digit, copy = number, counter = 0, digitsOneByOne[1000];
	if (number > 9) {
		do {
			number = number / 10;
			counter++;
		} while (number / 10 != 0);
	}
	number = copy;

	for (int i = 0; i <= counter; i++) {
		digit = number % 10;
		number = number / 10;
		digitsOneByOne[i] = digit;
	}

	for (int i = counter; i >= 0; i--)
		cout << " " << digitsOneByOne[i] << " ";
}