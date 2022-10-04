/*
		The greatest common divisor(gcd) of two integers pand q is the largest integer that
	divides both(e.g.gcd of 18 and 12 is 6).An algorithm to compute the greatest
	common divisor of two integers pand q is the following : Let r be the remainder of p
	divided by q.If r is 0, then q is the greatest common divisor.Otherwise, set p equal
	to q, then q equal to r, and repeat the process.

	a) Write a recursive function that implements the above algorithm.
	b) Write a non-recursive function that implements the above algorithm

		Made by Ivan Kosiakov on 31/03/2022
*/

#include <iostream>

using namespace std;

int gcdRecursive(int, int);
int gcdNonRecursive(int, int);

int main()
{
	int firstNum, secondNum;
	char  userChoise;

	cout << "Enter two numbers: ";
	cin >> firstNum >> secondNum;

	cout << "Select recurcive or non-recursive way [a/b]: ";
	cin >> userChoise;

	if (userChoise == 'a')
		cout << "The greatest commond divisor is " << gcdRecursive(firstNum, secondNum);
	else if (userChoise == 'b')
		cout << "The greatest commond divisor is " << gcdNonRecursive(firstNum, secondNum);
	else
		cout << "You've entered an invalid number!";

	return 0;
}

int gcdRecursive(int p, int q) {
	int r = p % q;

	if (r == 0)
		return q;
	else
		return gcdRecursive(q, r);
}

int gcdNonRecursive(int p, int q) {
	int r;

	do {
		r = p % q;

		if (r != 0) {
			p = q;
			q = r;
		}
	} while (r != 0);

	return q;
}