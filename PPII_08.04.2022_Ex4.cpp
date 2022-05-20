/*
		Write a recursive function that returns the sum of the digits of the integer. For
	example: SumDigits(234) should return 9.

	Made by Ivan Kosiakov on 08/04/2022
*/
#include <iostream>

using namespace std;

int SumDigits(int);

int main()
{
	int number;

	cout << "Enter the number: ";
	cin >> number;

	cout << "Sum of all digits: " << SumDigits(number);

	return 0;
}

int SumDigits(int number) {
	int sum = 0;

	if (number == 0)
		return 0;
	else {
		sum = number % 10 + SumDigits(number / 10);
		return sum;
	}
}