/*
  Write a program that prompts the user to enter three numbers and displays them in
  an ascending order and also in a descending order

  Created by Ivan Kosiakov on 18 / 11 / 2021
*/

#include <iostream>

using namespace std;

int main()
{
	bool made = false;
	double firstDigit, secondDigit, thirdDigit, temp;

	cout << "Enter 3 numbers: ";
	cin >> firstDigit >> secondDigit >> thirdDigit;

	//Loop for sort variables in ascending order
	while (made == false) {
		if (firstDigit <= secondDigit) {
			temp = firstDigit;
			firstDigit = secondDigit;
			secondDigit = temp;
		}

		if (secondDigit <= thirdDigit) {
			temp = secondDigit;
			secondDigit = thirdDigit;
			thirdDigit = temp;
		}

		if (thirdDigit <= firstDigit) {
			temp = thirdDigit;
			thirdDigit = firstDigit;
			firstDigit = temp;
		}

		if (firstDigit <= secondDigit && secondDigit <= thirdDigit) {
			cout << endl << "Ascending order: " << firstDigit << " " << secondDigit << " " << thirdDigit << endl;
			made = true;
		}
	}

	cout << "Descending order: " << thirdDigit << " " << secondDigit << " " << firstDigit;

	return 0;
}
