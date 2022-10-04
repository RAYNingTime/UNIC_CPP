/** \file PPII_Ex1_21.02.2022.cpp
* \brief This program calculates factorial.
* \details This program takes a number n as a parameter and returns the factorial of that number.
* \author Ivan Kosiakov
* \version 0.1
* \date 2022-2022
* \copyright University of Nicosia.
*/
#include <iostream>

using namespace std;

bool negativeCheck(int);
int factorial(int);

/**
*The driver of the program.
* @return Returns 0.
*/
void main()
{
	int number;

	cout << "Enter positive number: ";
	//Negative check
	do {
		cin >> number;

		if (negativeCheck(number) == false)
			cout << "You've entered a negative value! Try again!" << endl
			<< "Enter positive number: ";
	} while (negativeCheck(number) == false);

	cout << "Factorial of " << number << " is " << factorial(number);
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
* Function <code>factorial</code>, calculates factorial.
* <BR>
* @param num The number that should be calculated.
* @return Returns calculated factorial.
*/
int factorial(int number)
{
	int factorialCalc = 1;

	for (int i = 1; i <= number; i++)
	{
		factorialCalc = i * factorialCalc;
	}
	return factorialCalc;
}