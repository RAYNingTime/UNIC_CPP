//Write a program that prompts the user for a character and displays its ASCII code as well as the ASCII codes for the next 3 characters. 

#include <iostream>

using namespace std;

int main()
{
	char x, y;
	int i;

	cout << "Enter a character: ";
	cin >> x;
	cout << endl;

	// Using loop "for" to increase char x on 1 for 4 times
	for (i = x; i < x + 4; i++)
	{
		y = i;
		cout << "ASII code for " << y << " is " << i << endl;
	}

	return 0;
}
