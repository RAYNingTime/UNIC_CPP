/*
		Write a void function that uses pointers to add a single character at the end of an existing
	C-string. The string and the character should be taken as parameters. For example if str
	contains the C-string Hello World the function call addChar(str, ‘!’) should
	change the string str to Hello World!

	Repeat exercise 7 on Exercise Sheet 8 with functions that return a pointer to char.
		Made by Ivan Kosiakov on 15/03/2022
*/
#include <iostream>

using namespace std;

char* addChar(char*, char);

int main()
{
	char sentance[50], * p, letter;

	cout << "Enter your sentance: ";
	cin.getline(sentance, 50);

	cout << "Select letter that you want to add: ";
	cin >> letter;

	p = sentance;

	cout << addChar(p, letter);

	return 0;
}

char* addChar(char* p, char letter) {
	int i;

	for (i = 0; *(p + i) != '\0'; i++);

	*(p + i) = letter;
	*(p + i + 1) = '\0';

	return p;
}
