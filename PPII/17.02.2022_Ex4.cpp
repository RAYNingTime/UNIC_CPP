/** \file PPII_Ex4_17.02.2022.cpp
* \brief This program calculates average of the numbers.
* \details This program reads a sequence of positive doubles into an array (-1 to finish) and outputs the array that was read along with the averages.
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
	double doubleArray[1000], sum = 1;
	int i = 0;

	//Input for first list
	cout << "Enter double list (-1 to finish): ";
	do {
		//Negative check (lower than -1)
		do {
			cin >> doubleArray[i];

			if (negativeCheck(doubleArray[i]) == false)
				cout << endl << "You've entered a negative value! Try again!" << endl
				<< "Enter positive number in the array: ";
		} while (negativeCheck(doubleArray[i]) == false);
		sum += doubleArray[i];
		i++;
	} while (doubleArray[i - 1] != -1);
	if (i != 1) {
		cout << "Double array list: ";
		for (int j = 0; j < i - 1; j++)
			cout << doubleArray[j] << " ";

		cout << endl << "Average is " << sum / (i - 1);
	}
	else cout << endl << "You didn't enter any numbers!";
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