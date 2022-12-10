//
//	Week 10 Lab Exercise 3
//
//Created by Ivan Kosiakov on 01 / 12 / 2021

#include <iostream>
#include <iomanip>

using namespace std;

void print_pyramid(int);

int main()
{
	int height;

	cout << " This program prints a 'pyramid' shape of" << endl
		<< " a specified height on the screen." << endl << endl
		<< " How high would you like the pyramid?: ";

	//Checking for negative value
	do {
		cin >> height;

		if (height < 0)
			cout << "You entered negative value! Try again." << endl;
	} while (height < 0);

	print_pyramid(height);

	return 0;
}

//Function that shows pyramid
void print_pyramid(int height) {
	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= height - i; j++)
			cout << " ";

		for (int j = 0; j < 2 * i; j++)
			cout << "*";

		cout << endl;
	}
}
