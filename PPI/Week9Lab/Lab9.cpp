//
//	Week 9 Lab Exercise
//
//Created by Ivan Kosiakov on 24 / 11 / 2021

#include <iostream>

using namespace std;

void dollarLine(int);
void dollarSquare(int);
void customLine(int);
void customSquare(int);

int main()
{
	bool end = false, next = true;
	int answer, number;

	//While loop gonna work until user enteres 0
	while (end == false) {
		cout << endl << "Menu" << endl
			<< "1. Display a line $" << endl
			<< "2. Display a square $" << endl
			<< "3. Display a line with user selected symbol" << endl
			<< "4. Display a square with user selected symbol" << endl
			<< "0. EXIT" << endl;

		cin >> answer;

		switch (answer)
		{
			//Case for line of $
		case 1: {
			cout << "Enter amount of digits in your line: ";
			cin >> number;

			dollarLine(number);

			break;
		}

			  //Case for square of $
		case 2: {
			cout << "Enter side of your square: ";
			cin >> number;

			dollarSquare(number);

			break;
		}

			  //Case for line of custom symbols
		case 3: {
			cout << "Enter amount of digits in your line: ";
			cin >> number;

			customLine(number);

			break;
		}

			  //Case for square of custom symbols
		case 4: {
			cout << "Enter amount of digits in your line: ";
			cin >> number;

			customSquare(number);

			break;
		}

			  //Case for exit from menu
		case 0: {
			cout << "Thank you. Bye!" << endl;

			//End of the loop 'while'
			end = true;

			break;
		}

			  //Case for invalid numbers
		default: {
			cout << "You entered wrong value!" << endl
				<< "Try again." << endl;
		}
		}
	}
	return 0;
}

//Function that displays line of $
void dollarLine(int amount) {
	for (int i = 1; i <= amount; i++)
		cout << "$";
	cout << endl;
}

//The function that displays square of $
void dollarSquare(int amount) {
	for (int i = 1; i <= amount; i++) {
		for (int j = 1; j <= amount; j++)
			cout << "$";
		cout << endl;
	}
	cout << endl;
}

//The function that displays line of custom symbols
void customLine(int amount) {
	char symbol;
	cout << "What symbol would you like to use? ";
	cin >> symbol;

	for (int i = 1; i <= amount; i++)
		cout << symbol;
	cout << endl;
}

//The function that displays square of custom symbols
void customSquare(int amount) {
	char symbol;
	cout << "What symbol would you like to use? ";
	cin >> symbol;

	for (int i = 1; i <= amount; i++) {
		for (int j = 1; j <= amount; j++)
			cout << symbol;
		cout << endl;
	}
	cout << endl;
}
