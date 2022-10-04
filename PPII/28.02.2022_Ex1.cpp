/*
		Write a void function called CopyArray that takes two arrays of integers as
	parameters, called source and destination, and copies the elements from the array
	source into the array destination. You should assume that there is a -1 at the end of
	the array source. Write a main program to test your function with a user defined array
	(-1 to signal end of input). The program should output both arrays.

	Made by Ivan Kosiakov on 28.02.2022
*/

#include <iostream>

using namespace std;

void copyArray(int source[], int destination[]);

int main()
{
	const int SIZE = 1000;
	int source[SIZE], destination[SIZE], i = 0;
	cout << "Enter array of the numbers, -1 to finish: ";

	//Taking values until the user enters a -1
	do {
		cin >> source[i];
		i++;
	} while (source[i - 1] != -1);

	copyArray(source, destination);
	if (i >= 2) {
		cout << "Copied array: ";

		//Showing the second array
		for (int j = 0; j < i - 1; j++)
			cout << destination[j] << " ";
	}
	else cout << "You didn't enter any numbers! Try again!";

	return 0;
}

//This function is copying values from  the first array to the second one
void copyArray(int source[], int destination[]) {
	int i = 0;
	do {
		destination[i] = source[i];
		i++;
	} while (source[i] != -1);
}