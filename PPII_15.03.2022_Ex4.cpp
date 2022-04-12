/*
		Write a void function that uses pointers to add a single character at the end of an existing
	C-string. The string and the character should be taken as parameters. For example if str
	contains the C-string Hello World the function call addChar(str, ‘!’) should
	change the string str to Hello World!

		Made by Ivan Kosiakov on 15/03/2022
*/
#include <iostream>

using namespace std;

void addChar(char*, char);

int main()
{
	char word[50], * p, letter;

	cout << "Enter your word: ";
	cin.getline(word, 50);

	cout << "Select letter that you want to add: ";
	cin >> letter;

	p = word;

	addChar(p, letter);

	cout << p;

	return 0;
}

void addChar(char* p, char letter) {
	int counter;

	for (int i = 0; *(p + i) != '\0'; i++)
		if (*(p + i + 1) == '\0') {
			counter = i + 1;
		}

	*(p + counter) = letter;
	*(p + counter + 1) = '\0';
}