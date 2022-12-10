/*
	A pentagonal number is defined as n(3n-1)/2 for n=1, 2, …, and so on. The first few
	numbers are 1,5,12, 22, …Write the following function that returns a pentagonal
	number:

		int getPentagonalNumber(int n)

	Write a test program that displays the first 100 pentagonal numbers with 10
	numbers on each line.

	Made by Ivan Kosiakov on 01/01/2022
*/

#include <iostream>
#include <iomanip>

using namespace std;

int getPentagonalNumber(int);

int main()
{
	const int MAX_ON_LINE = 10, AMOUNT_OF_LINES = 10;
	int n = 1;

	//These two loops are diplaying the first 100 pentagonal numbers with 10 numbers on each line
	for (int i = 1; i <= AMOUNT_OF_LINES; i++) {
		for (int j = 1; j <= MAX_ON_LINE; j++) {
			cout << setw(6) << getPentagonalNumber(n) << " ";
			n++;
		}
		cout << endl;
	}
}

//This function returns a pentagonal number to a main program
int getPentagonalNumber(int number) {
	int pentagonalNumber;

	pentagonalNumber = (number * (3 * number - 1)) / 2;

	return pentagonalNumber;
}
