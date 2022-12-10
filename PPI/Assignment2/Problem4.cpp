/*
  Write a program that prompts the user to enter an integer and determines whether or
  not it is divisible by 5 and 6, whether it is divisible by 5 or 6, and whether it is
  divisible by 5 or 6 but not both.

  Created by Ivan Kosiakov on 18 / 11 / 2021
*/

#include <iostream>

using namespace std;

int main()
{
	const int FIRST_DIV = 5, SECOND_DIV = 6;
	int integer;

	cout << "Enter an integer: ";
	cin >> integer;

	//Checking if integer divisible by 5 AND 6
	cout << endl << "Is " << integer << " divisible by " << FIRST_DIV << " and " << SECOND_DIV << "? ";
	if (integer % FIRST_DIV == 0 && integer % SECOND_DIV == 0)
		cout << "Yes" << endl;
	else cout << "No" << endl;

	//Checking if integer divisible by 5 OR 6
	cout << "Is " << integer << " divisible by " << FIRST_DIV << " or " << SECOND_DIV << "? ";
	if (integer % FIRST_DIV == 0 || integer % SECOND_DIV == 0)
		cout << "Yes" << endl;
	else cout << "No" << endl;

	//Checking if integer divisible by 5 AND 6, BUT not both
	cout << "Is " << integer << " divisible by " << FIRST_DIV << " or " << SECOND_DIV << ", but not both? ";
	if ((integer % FIRST_DIV == 0 && integer % SECOND_DIV != 0) || (integer % FIRST_DIV != 0 && integer % SECOND_DIV == 0))
		cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
