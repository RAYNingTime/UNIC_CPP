/** \file PPII_Ex4_21.02.2022.cpp
* \brief This program rotates a number.
* \details This program displays an integer in reverse order.
* \author Ivan Kosiakov
* \version 0.1
* \date 2022-2022
* \copyright University of Nicosia.
*/
#include <iostream>

using namespace std;

bool negativeCheck(int);
void reversedNumber(int);

/**
*The driver of the program.
*/
void main()
{
	int number;

	do
	{
		cout << "Please enter the number: ";
		cin >> number;
		if (negativeCheck(number) == false)
			cout << "You've entered a negative value try again!" << endl;
	} while (negativeCheck(number) == false);

	cout << "Reversed number is: ";
	reversedNumber(number);
}

/**
* Function <code>negativeCheck</code>, checks for a negation.
* <BR>
* @param num The number to test for negation.
* @return Returns <code>false</code> if the number is negative,
* <code>true</code> otherwise.
*/
bool negativeCheck(int num) {
	if (num < -1)
		return false;
	return true;
}

/**
* Function <code>sumDigits</code>, returns reversed number.
* <BR>
* @param num The number to be reversed.
*/
void reversedNumber(int number)
{
	int reversedNum = 0, digit;

	while (number != 0)
	{
		digit = number % 10;
		number = number / 10;

		reversedNum = reversedNum * 10;
		reversedNum = digit + reversedNum;
	}

	cout << reversedNum;
}