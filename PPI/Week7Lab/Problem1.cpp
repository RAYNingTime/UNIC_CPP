#include <iostream>

/*
Accept from the user an integer number x. 
If the number x is positive, determine if x is a multiple of 4. 
Repeat the process until the user enters 0.
*/

using namespace std;

int main()
{
	int xNum = 1;

	while (xNum != 0)
	{
		cout << "Enter a number:" << endl
			<< "[Type 0 to turn off the programm]" << endl;
		cin >> xNum;

		if (xNum != 0) {
			if (xNum % 4 == 0) {
				cout << xNum << " is multiple of 4" << endl;
			}
			else
				cout << xNum << " is not multiple of 4" << endl;
		}
	}

	cout << "End of the program." << endl;

	return 0;
}
