/*
		Write a void function that uses pointers to delete a single character from the end of a Cstring.
	The function takes as parameter the C-string.

		Made by Ivan Kosiakov on 15/03/2022
*/
#include <iostream>

using namespace std;

void removeChar(char*);

int main()
{
	char word[50], * p;

	cout << "Enter your word: ";
	cin.getline(word, 50);

	p = word;

	removeChar(p);

	cout << p;

	return 0;
}

void removeChar(char* p) {
	int counter;

	for (int i = 0; *(p + i) != '\0'; i++)
		if (*(p + i + 1) == '\0') {
			counter = i + 1;
		}

	*(p + counter - 1) = '\0';
}