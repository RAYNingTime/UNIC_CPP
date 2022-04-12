/*
		Use pointers to write a void function named remove() that deletes all occurrences of a
	character from a C-string. The function should use two parameters: the C-string and the
	character to be removed. For example if str contains the C-string Happy Holidays, the
	function call remove(str, ‘H’) should change the string str to appy olidays.
	Test your function.

		Repeat exercise 6 on Exercise Sheet 8 with functions that return a pointer to char.

		Made by Ivan Kosiakov on 15/03/2022
*/

#include <iostream>

using namespace std;

char* remove(char*, char);

int main()
{
	char sentance[50], * p, letter;

	cout << "Enter your sentance: ";
	cin.getline(sentance, 50);

	cout << "Select letter that you want to remove: ";
	cin >> letter;

	p = sentance;

	cout << remove(p, letter);

	return 0;
}

char* remove(char* p, char letter) {
	int counter = 0;

	char* result = new char[50];

	for (int i = 0; *(p + i) != '\0'; i++)
		if (*(p + i) != letter) {
			*(result + counter) = *(p + i);
			counter++;
		}
	*(result + counter) = '\0';

	return result;
}