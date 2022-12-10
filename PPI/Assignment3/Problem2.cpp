/*
Write a program that displays 10 numbers per line, all numbers from 100 to 1000
that are divisible by 5 and 6.

Made by Ivan Kosiakov on 01/01/2022
*/

#include <iostream>

using namespace std;

void main()
{
	const int MAX = 1000, FIRST_DIV = 5, SECOND_DIV = 6;
	int j = 100, counter = 0;

	//This loop is going to count from 100 to 1000
	for (j; j <= MAX; j++) {
		//Checking both conditions for compliance
		if ((j % FIRST_DIV == 0) && (j % SECOND_DIV == 0)) {
			cout << j << " ";

			counter++;

			//I've made a counter that changes the line every 10 digits
			if (counter == 10) {
				cout << endl;
				counter = 0;
			}
		}
	}
}
