/*
Counting letters: Use pointer arithmetic to write a program that reads a word and a
letter from the user and counts the number of times the letter occurred in the string. The
program should output the index position(s) where it found the letter, as well as print the
number of times it found it.

Made by Ivan Kosiakov on 15/03/2022
*/

#include <iostream>

using namespace std;

void main()
{
	char word[50], * p, letter;
	int counter = 0;

	cout << "Enter a word: ";
	cin >> word;

	cout << "Enter a letter: ";
	cin >> letter;

	p = &word[0];

	cout << "Letter found at index position(s) ";

	for (int i = 0; word[i] != '\0'; i++) {
		if (*(p + i) == letter) {
			if (counter == 0)
				cout << i;
			else cout << ", " << i;

			counter++;
		}
	}

	if (counter == 1)
		cout << endl << "Letter found 1 time.";
	else
		cout << endl << "Letter found " << counter << " times.";
}