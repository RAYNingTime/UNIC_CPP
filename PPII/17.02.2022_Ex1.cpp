/** \file PPII_Ex1_17.02.2022.cpp
* \brief This program copies numbers into an array of another.
* \details This program copies the numbers into another array until the user enters -1, and then outputs that array.
* \author Ivan Kosiakov
* \version 0.1
* \date 2022-2022
* \copyright University of Nicosia.
*/

#include <iostream>

using namespace std;

bool negativeCheck(int);

/**
*The driver of the program.
*/
void main()
{
	const int SIZE = 1000;
	int inputArray[SIZE], copyArray[SIZE], i = 0;

	do {
		cout << "Enter positive number in the array: ";

		//Negative check (lower than -1)
		do {
			cin >> inputArray[i];

			if (negativeCheck(inputArray[i]) == false)
				cout << "You've entered a negative value! Try again!" << endl
				<< "Enter positive number in the array: ";
		} while (negativeCheck(inputArray[i]) == false);

		//Copying to the second array
		copyArray[i] = inputArray[i];
		i++;
	} while (inputArray[i - 1] != -1);

	cout << endl << endl << "Copy of this array is: ";

	for (int j = 0; j < i - 1; j++)
		cout << copyArray[j] << " ";
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
