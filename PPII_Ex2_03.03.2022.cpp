/*
		Counting occurrences: Re-write the program given in slide 13 (Topic C-Strings)
	using a function: Write a function called Count which takes as parameters a string
	and one character and returns the number of times the character occurs in the string.
	Write a program to test your function with user-defined data.

		Made by Ivan Kosiakov on 03/03/2022
*/

#include <iostream>

int countLetter(char[], char);

using namespace std;

int main()
{
	char word[15], symb;
	cout << "Type in a word: ";
	cin >> word;
	cout << "Select your character: ";
	cin >> symb;

	if (countLetter(word, symb) == 1)
		cout << "The letter " << symb << " appears 1 time" << endl;
	else
		cout << "The letter " << symb << " appears " << countLetter(word, symb) << " times" << endl;
	return 0;
}

int countLetter(char word[15], char symb) {
	int counter = 0;

	//Checking word letter by letter and if it founds the required one, count it
	for (int i = 0; word[i] != '\0'; i++)
		if (word[i] == symb)
			counter++;

	return counter;
}