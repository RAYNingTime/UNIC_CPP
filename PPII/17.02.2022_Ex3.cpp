/** \file PPII_Ex3_17.02.2022.cpp
* \brief This program compaires two list of the arrays.
* \details This program reads two lists of positive integers from the user (-1 to finish) and gives an appropriate comment if the two lists are identical.
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
	int firstArray[SIZE], secondArray[SIZE], i = 0, firstCounter = 0, secondCounter = 0;
	bool identical = true;

	//Input for first list
	cout << "Enter list 1 (-1 to finish): ";
	do {
		//Negative check (lower than -1)
		do {
			cin >> firstArray[i];

			if (negativeCheck(firstArray[i]) == false)
				cout << endl << "You've entered a negative value! Try again!" << endl
				<< "Enter positive number in the array: ";
		} while (negativeCheck(firstArray[i]) == false);
		firstCounter++;
		i++;
	} while (firstArray[i - 1] != -1);
	i = 0;

	//Input for second list
	cout << "Enter list 2 (-1 to finish): ";
	do {
		//Negative check (lower than -1)
		do {
			cin >> secondArray[i];

			if (negativeCheck(secondArray[i]) == false)
				cout << endl << "You've entered a negative value! Try again!" << endl
				<< "Enter positive number in the array: ";
		} while (negativeCheck(secondArray[i]) == false);
		secondCounter++;
		i++;
	} while (secondArray[i - 1] != -1);

	//Comparing two arrays
	if (firstCounter == secondCounter)
	{
		for (int j = 0; j < i; j++)
			if (firstArray[j] != secondArray[j])
				identical = false;
	}
	else identical = false;

	//Result of comparing
	if (identical == true)
		cout << endl << "The two lists are identical.";
	else cout << endl << "The two lists are not identical.";
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
