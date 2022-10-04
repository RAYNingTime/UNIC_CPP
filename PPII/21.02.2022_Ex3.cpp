/** \file PPII_Ex3_21.02.2022.cpp
* \brief This program calculates sum of digits in integer.
* \details This program computes the sum of digits in an integer.
* \author Ivan Kosiakov
* \version 0.1
* \date 2022-2022
* \copyright University of Nicosia.
*/
#include <iostream>

using namespace std;

bool negativeCheck(int);
int sumDigits(long);

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

	cout << "The sum of numbers is " << sumDigits(number);
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
* Function <code>sumDigits</code>, calculates sum of digits in integer.
* <BR>
* @param num The number to be summed.
* @return Returns summed number.
*/
int sumDigits(long number)
{
	int sumOfNum = 0, digit;
	do
	{
		digit = number % 10;
		number = number / 10;
		sumOfNum = digit + sumOfNum;
	} while (number != 0);

	return sumOfNum;
}