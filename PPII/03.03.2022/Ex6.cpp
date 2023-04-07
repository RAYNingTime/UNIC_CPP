/*
		Merge: Write a program to merge the contents of two given words, so that letters are
	taken alternatively from one word and then from the other. The program should create
	a string with those letters and display it on the screen. (When strings are of unequal
	lengths then the remaining letters of the longest string are appended at the end).

		Made by Ivan Kosiakov on 03/03/2022
*/

#include <iostream>

using namespace std;

int main()
{
	const int MAX_SYMB = 1500;
	char firstWord[MAX_SYMB], secondWord[MAX_SYMB], mergeWord[MAX_SYMB];
	int firstCounter = 0, secondCounter = 0, firstWordPos = 0, secondWordPos = 0;

	cout << "Enter the first word: ";
	cin >> firstWord;

	cout << "Enter the second word: ";
	cin >> secondWord;

	for (int i = 0; firstWord[i] != '\0'; i++)
		firstCounter++;

	for (int i = 0; secondWord[i] != '\0'; i++)
		secondCounter++;

	if (firstCounter > secondCounter) {
		for (int i = 0; i <= firstCounter + secondCounter; i++) {
			mergeWord[i] = firstWord[firstWordPos];
			firstWordPos++;

			if (secondWord[secondWordPos] != '\0') {
				i++;
				mergeWord[i] = secondWord[secondWordPos];
				secondWordPos++;
			}
		}
	}
	else {
		for (int i = 0; i <= firstCounter + secondCounter; i++) {
			if (firstWord[firstWordPos] != '\0') {
				mergeWord[i] = firstWord[firstWordPos];
				i++;
				firstWordPos++;
			}
			mergeWord[i] = secondWord[secondWordPos];
			secondWordPos++;
		}
	}

	for (int i = 0; i <= firstCounter + secondCounter; i++)
		cout << mergeWord[i];

	return 0;
}
