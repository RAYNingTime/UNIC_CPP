/** \file PPII_Ex5_21.02.2022.cpp
* \brief This program prints all characters between selected ones.
* \details This program takes two characters ch1 and ch2 as parameters and prints all
* characters between ch1 and ch2, with a specified number of characters per line.
* \author Ivan Kosiakov
* \version 0.1
* \date 2022-2022
* \copyright University of Nicosia.
*/
#include <iostream>

using namespace std;

bool negativeCheck(int);
void printChars(char, char, int);

/**
*The driver of the program.
*/
void main()
{
	int number;
	char firstSymb, secondSymb;

	do
	{
		cout << "Amount of symbols on line: ";
		cin >> number;
		if (negativeCheck(number) == false)
			cout << "You've entered a negative value try again!" << endl;
	} while (negativeCheck(number) == false);

	do {
		cout << "Enter the first charcter: ";
		cin >> firstSymb;

		cout << "Enter the second charcter: ";
		cin >> secondSymb;
		if (firstSymb == secondSymb || firstSymb > secondSymb)
			cout << "Your symbols are similar or the first one bigger than the second one! Try again!" << endl;
	} while (firstSymb == secondSymb || firstSymb > secondSymb);

	printChars(firstSymb, secondSymb, number);
}

/**
* Function <code>negativeCheck</code>, checks for a negation.
* <BR>
* @param num The number to test for negation.
* @return Returns <code>false</code> if the number is negative,
* <code>true</code> otherwise.
*/
bool negativeCheck(int num) {
	if (num < -1)
		return false;
	return true;
}

/**
* Function <code>printChars</code>, prints all characters between selected ones.
* <BR>
* @param firstSymb This is first character.
* @param secondSymb This is second character.
* @param numberPerLine This is amount of the character on line.
*/
void printChars(char firstSymb, char secondSymb, int numberPerLine)
{
	int counter = 0;
	bool finished = false;
	if (firstSymb + 1 != secondSymb) {
		do {
			firstSymb++;
			cout << firstSymb << " ";
			counter++;

			if (counter == numberPerLine)
			{
				cout << endl;
				counter = 0;
			}

			if (firstSymb + 1 == secondSymb)
				finished = true;
		} while (finished != true);
	}
	else cout << endl << "There are no symbols between these two characters.";
}