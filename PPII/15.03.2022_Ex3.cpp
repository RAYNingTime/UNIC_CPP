/*
		Use pointers to write a void function named remove() that deletes all occurrences of a
	character from a C-string. The function should use two parameters: the C-string and the
	character to be removed. For example if str contains the C-string Happy Holidays, the
	function call remove(str, ‘H’) should change the string str to appy olidays.
	Test your function.

		Made by Ivan Kosiakov on 15/03/2022
*/

#include <iostream>

using namespace std;

void remove(char*, char);

int main()
{
	char word[50], * p, letter;

	cout << "Enter your word: ";
	cin.getline(word, 50);

	cout << "Select letter that you want to remove: ";
	cin >> letter;

	p = word;

	remove(p, letter);

	cout << p;

	return 0;
}

void remove(char* p, char letter) {
	int counter = 0;

	for (int i = 0; *(p + i) != '\0'; i++)
		if (*(p + i) != letter) {
			*(p + counter) = *(p + i);
			counter++;
		}
	*(p + counter) = '\0';
}