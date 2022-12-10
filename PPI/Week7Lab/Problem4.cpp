#include <iostream>

/*
Write a program that asks the user how many times he/she would like to display on the screen the shape below 
(N is the number of the shape). Make sure that the number that the user will give is a positive 
(i.e. keep asking for a number if the number is negative). Repeat the process until the user enters 0.
*/

using namespace std;

int main()
{
	int times = -1;

	while (times != 0) {
		while (times < 0)
		{
			cout << "Enter a positive number:";
			cin >> times;
			if (times <= 0) {
				cout << "You entered wrong number! Try again!" << endl;
			}
		}

		for (int i = 1; i <= times; i++) {
			cout << "****" << endl
				<< "*" << i << " *" << endl
				<< "****" << endl;
		}

		cout << "Would you like to repeat?" << endl
			<< "[Enter 0 for NO]" << endl;
		cin >> times;
	}

	cout << "Program is stopped!";

	return 0;
}
