/*
		Write a void function that uses pointers to delete a single character from the end of a Cstring.
	The function takes as parameter the C-string

	Repeat exercise 8 on Exercise Sheet 8 with functions that return a pointer to char.

		Made by Ivan Kosiakov on 22/03/2022
*/
#include <iostream>

using namespace std;

char* removeChar(char*);

int main()
{
	char sentance[50], * p;

	cout << "Enter your sentance: ";
	cin.getline(sentance, 50);

	p = sentance;

	cout << removeChar(p);

	return 0;
}

char* removeChar(char* p) {
	int i;

	for (i = 0; *(p + i) != '\0'; i++);

	*(p + i - 1) = '\0';

	return p;
}