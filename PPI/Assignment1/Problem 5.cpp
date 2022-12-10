//Write a program that prompts the user to enter an uppercase letterand converts it to
//a lowercase letter.Hint: In the ASCII table the uppercase letters appear before the
//lowercase letters.The offset between any uppercase letterand its corresponding
//lowercase letter is the same.

#include <iostream>

using namespace std;

int main()
{
	char x;
	cout << "Enter an uppercase letter: ";
	cin >> x;
	cout << endl;

	if (x < 65 || x > 90) { // Cheking if symbol ASCII code bigger then 65 and lower then 89
		cout << "You entered a wrong symbol!";
		return 0;
	}

	x = x + 32;

	cout << "The lowercase letter is " << x;

	return 0;
}
