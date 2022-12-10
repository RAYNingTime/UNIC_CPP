// Write a program that prompts the user to enter a number and displays n^1,n^2.n^3,n^4,n^5.

#include <iostream>

using namespace std;

int main()
{
	double x, y;
	int n;

	cout << "Enter a number: ";
	cin >> x;
	cout << endl;

	for (int n = 1; n < 6; n++) { // Start cycle "for" with increasing "n" for +1 each circle. Maximal amout of circles - 5.
		y = pow(x, n);
		cout << x << " raised in the power of " << n << ": " << y << endl; // Console out is gonna be number "x" in the power of "n"
	}

	return 0;
}
