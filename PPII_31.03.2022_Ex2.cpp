/*
		a) Write a recursive function called locate that takes a sting str(i.e.an array of
	characters), a character chand an integer iand returns the index position of the first
	occurrence of character ch in string str. (The function assumes that there is an
	occurrence of the character at or after the index i in the string str).

		Example:

	cout << locate("hello", 'l', 0);

	should print 2.

		b) Write a non - recursive locate function described as above.

	Made by Ivan Kosiakov on 31 / 03 / 2022
*/
#include <iostream>
#include <cstring>

using namespace std;

int locate(char[], char, int);
int locateNon(char[], char, int);

int main()
{
	char cstring[40], letter, userChoise;
	int startPos = 0;

	cout << "Enter word: ";
	cin >> cstring;

	cout << "Select letter: ";
	cin >> letter;

	cout << "Select recurcive or non-recursive way [a/b]: ";
	cin >> userChoise;

	if (userChoise == 'a')
		cout << "Position is " << locate(cstring, letter, startPos);
	else if (userChoise == 'b')
		cout << "Position is " << locateNon(cstring, letter, startPos);
	else
		cout << "You've entered an invalid number!";

	return 0;
}

int locate(char str[40], char ch, int i) {
	if (str[i] == ch)
		return i;
	else
		return locate(str, ch, i + 1);
}

int locateNon(char str[40], char ch, int i) {
	while (str[i] != ch)
		i++;
	return i;
}