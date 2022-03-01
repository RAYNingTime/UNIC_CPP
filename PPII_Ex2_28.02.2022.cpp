/*
		Write a function called CalcAverage that takes as parameters an array of doubles and
	the array size as integer, and returns the average of the array (of type double).
	Write a main program to test your function by reading the array from the user (-1 to
	signal end of input). The program should output the array and the average.

	Made by Ivan Kosiakov on 28.02.2022
*/

#include <iostream>

using namespace std;

double calcAverage(double arrayAverage[], int);

int main()
{
	const int SIZE = 1000;
	double arrayAverage[SIZE];
	int i = 0;
	cout << "Enter array of the numbers, -1 to finish: ";

	//Taking values to calculste average until user enters -1
	do {
		cin >> arrayAverage[i];
		i++;
	} while (arrayAverage[i - 1] != -1);

	if (i >= 2)
		cout << "The average of the numbers is " << calcAverage(arrayAverage, i - 1);
	else
		cout << "You didn't enter any numbers! Try again!";

	return 0;
}

//This function is calculating average of the array
double calcAverage(double arrayAverage[], int size) {
	int i = 0;
	double average = 0;

	//Adding all numbers from array into "average" and calculating amount of the numbers
	do {
		average += arrayAverage[i];
		i++;
	} while (arrayAverage[i] != -1);

	//Returning average value
	return average / i;
}