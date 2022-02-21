/** \file PPII_Ex5_17.02.2022.cpp
* \brief This program reverses an array.
* \details This program reads a sequence of positive integers from the user (-1 to signal end of input), stores the numbers in an array
* and then creates a new array to store the numbers in reverse order. The program should output the two arrays.
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
	int inputArray[SIZE], reversedArray[SIZE], i = 0, border;

	cout << "Please enter a sequence of positive integers(-1 to finish) :" << endl;
	do {
		//Negative check (lower than -1)
		do {
			cin >> inputArray[i];

			if (negativeCheck(inputArray[i]) == false)
				cout << "You've entered a negative value! Try again!" << endl
				<< "Enter positive number in the array: ";
		} while (negativeCheck(inputArray[i]) == false);

		i++;
	} while (inputArray[i - 1] != -1);
	i--;
	border = i;

	//Insert data into array in reverse order
	for (int j = 0; j <= border; j++) {
		reversedArray[j] = inputArray[i];
		i--;
	}

	//Checking for the correct number of digits inside the array ( not 0 )
	if (border > 0) {
		cout << "You have entered " << border << " integers." << endl
			<< "Initial array:";

		for (int j = 0; j < border; j++)
			cout << " " << inputArray[j] << " ";

		cout << endl << "Reversed array:";

		for (int j = 1; j <= border; j++)
			cout << " " << reversedArray[j] << " ";
	}
	else cout << "You've entered invalid amount of numbers!";
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