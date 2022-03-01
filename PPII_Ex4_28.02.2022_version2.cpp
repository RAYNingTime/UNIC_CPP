/*
		Use the function swap (shown on slide 57 on Functions-Revision, pass-by-reference)
	to write a void function called Reverse that takes as parameters an integer array a1
	and the array size (as integer n) and reverses the array a1 so that its last element
	becomes first, its second-to-last becomes its second etc. (NOTE: This function alters
	the array a1. You should not use any other array to store the reversed version).
	Write a main program to test your function by printing the array before the call to
	Reverse and after. (You need not use user defined array here. You can hard-code the
	input array in the main program using some initializers).

	Made by Ivan Kosiakov on 28.02.2022
*/

#include <iostream>

using namespace std;

void swap(int&, int&);
void reverce(int[], int);

int main()
{
	const int SIZE = 9;
	int arraySwap[SIZE] = { 0,1,2,3,4,5,6,7,8 };

	//Showing array before swap
	cout << "Array is: ";
	for (int i = 0; i < SIZE; i++)
		cout << arraySwap[i] << " ";

	reverce(arraySwap, SIZE - 1);

	//Showing array after swap
	cout << endl << "Reversed array is: ";
	for (int i = 0; i < SIZE; i++)
		cout << arraySwap[i] << " ";

	return 0;
}

//This function swaps all array in opposite side
void reverce(int a1[], int n)
{
	int step = 0;
	bool finish = false;
	do {
		swap(a1[step], a1[n - step]);
		step++;
		if (step == n - step || step + 1 == n - step)
			finish = true;
	} while (finish == false);
}

//Function from example
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}