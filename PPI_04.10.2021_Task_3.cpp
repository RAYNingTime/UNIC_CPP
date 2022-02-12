/*
Ask the user to enter 2 digits and swap them.

Made by Ivan Kosiakov on 04/10/2021
*/

#include <iostream>

using namespace std;

int main() {
	double	 a, b, c;
	cout << " Enter that you want to change" << endl;
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << "Your numbers is: " << a << " and " << b;
	return 0;
}