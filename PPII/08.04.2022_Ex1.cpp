/*
	Write a recursive palindrome function (using the algorithm described on slide 31).

	Example of thinking recursively:
	Palindrome problem

		Considering writing a recursive palindrome function.

		A string is a palindrome if it reads the same from the left and
		from the right.

		This problem can be divided into two subproblems:

		Check whether the first and last characters of the string are
		equal.

		Ignore these two characters and check whether the rest of the
		substring is a palindrome. (The second problem is the same as
		the original problem with a smaller size).

	There are two base cases:
		1. The two end characters are not the same, in which case the
		string not a palindrome
		2. The string size is 0 or 1, in which case the string is a palindrome

	Made by Ivan Kosiakov on 08/04/2022
*/
#include <iostream>
#include <cstring>

using namespace std;

bool palindrome(char[], int, int);

int main()
{
	char number[50];

	cout << "Enter number to check if it's palindrome: ";
	cin >> number;

	if (palindrome(number, 0, strlen(number) - 1) == true)
		cout << "This is palindrome number!";
	else cout << "This is not palindrome number!";

	return 0;
}
bool palindrome(char number[50], int beginning, int end) {
	if (number[beginning] != number[end])
		return false;
	else if (end - beginning == 0 || end - beginning == 1)
		return true;
	else {
		beginning++;
		end--;
		palindrome(number, beginning, end);
	}
}
