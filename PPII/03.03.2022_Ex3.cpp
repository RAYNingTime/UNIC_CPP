/*
		Palindromes: a) Write a program which reads a word and checks if it is a palindrome
	by outputting the appropriate message: This is a palindrome accordingly. A
	word is a palindrome if the letters spell the same message when written both forward
	and backward. For example: madam, anna, bob, noon are palindromes.

		b) Re-write the above exercise with a function: Write a function called IsPalindrome
	which takes as a parameter a string and returns true (i.e. 1) if the string is a
	palindrome. Write a main program to test your function with a user-defined string.

		Made by Ivan Kosiakov on 03/03/2022
*/

#include <iostream>

using namespace std;

bool isPalindrome(char[]);

int main()
{
	char word[15];

	cout << "Enter word to check if it palindrome: ";
	cin >> word;

	if (isPalindrome(word) == true)
		cout << "This word is a palindrome!";
	else
		cout << "This word is NOT a palindome!";

	return 0;
}

bool isPalindrome(char word[15]) {
	int counter = 0;

	for (int i = 0; word[i] != '\0'; i++)
		counter++;

	for (int i = 0; i < counter / 2; i++)
		if (word[i] != word[counter - i - 1])
			return false;

	return true;
}