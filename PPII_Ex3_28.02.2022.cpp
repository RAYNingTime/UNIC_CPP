/*
		a) Write a function called Count that takes as parameters an integer array a1, and
	integer num, and returns the number of times num appears in the array a. You should
	assume that there is a -1 at the end of the array.

		b) Use your function Count above (i.e. call it) to write a function called IsMember
	that takes as parameters an integer array s1 (assumed to be terminated by -1) and an
	integer x and returns true (i.e. 1) if x appears anywhere in the array.
	Write a main program to test the function Count using a user defined array.

	Made by Ivan Kosiakov on 28.02.2022
*/

#include <iostream>

using namespace std;

int count(int[], int);
bool isMember(int[], int);

int main()
{
	const int SIZE = 1000, MAX = 9, MIN = 0;
	int arrayCheck[SIZE], i = 0, num;

	cout << "Enter array of the numbers, -1 to finish: ";

	//Entering values for the array
	do {
		cin >> arrayCheck[i];
		i++;
	} while (arrayCheck[i - 1] != -1);

	//Taking number that should be found
	do {
		cout << "Enter a num (0 to 9): ";
		cin >> num;

		if (num > MAX || num < MIN)
			cout << "You've entered an invalid number! Try again!" << endl;
	} while (num > MAX || num < MIN);

	if (i >= 2)
		if (isMember(arrayCheck, num) == true)
			cout << "Number " << num << " is the member of the array";
		else
			cout << "Number " << num << " is not the member of the array";
	else cout << "You didn't enter any numbers in the array! Try again!";

	return 0;
}
//Function is counting how many times number is in the array
int count(int a1[], int num) {
	int i = 0, counter = 0;
	do {
		if (a1[i] == num)
			counter++;
		i++;
	} while (a1[i] != -1);

	return counter;
}

//Function checking if number is in the array
bool isMember(int s1[], int x) {
	if (count(s1, x) >= 1)
		return true;
	return false;
}