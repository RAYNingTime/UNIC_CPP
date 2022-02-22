/** \file PPII_Ex2_21.02.2022.cpp
* \brief This program calculates power.
* \details This program takes as parameters one double x and one integer n and returns the value of x raised to the power n.
* \author Ivan Kosiakov
* \version 0.1
* \date 2022-2022
* \copyright University of Nicosia.
*/
#include <iostream>

using namespace std;

bool negativeCheck(int);
double power(double, int);

/**
*The driver of the program.
*/
void main()
{
	double number;
	int powerOfNum;

	cout << "Please enter the number: ";
	cin >> number;

	do
	{
		cout << "Please enter the power of the number: ";
		cin >> powerOfNum;

		if (negativeCheck(powerOfNum) == false)
			cout << "You've entered a negative value try again!" << endl;
	} while (negativeCheck(powerOfNum) == false);

	cout << "Your number (" << number << ") in power of " << powerOfNum << " is " << power(number, powerOfNum);
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
* Function <code>power</code>, calculates power of the number.
* <BR>
* @param num The number that should be powered.
* @return Returns calculated number.
*/
double power(double number, int power)
{
	double answer = 1;
	for (int i = 0; i < power; i++)
	{
		answer = number * answer;
	}

	return answer;
}