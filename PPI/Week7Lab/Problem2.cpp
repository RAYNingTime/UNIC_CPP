#include <iostream>

/*
Ask for character letter and integer value n. 
Display on the screen the letter character n times on a single line. 
Repeat the process by asking the user if he/she wants to continue.
*/

using namespace std;

int main()
{
	char letter, answer;
	int times;
	bool nextRound = true;

	while (nextRound == true) {
		cout << "Enter a letter" << endl;
		cin >> letter;

		cout << "Enter amount of times" << endl;
		cin >> times;

		for (int i = 0; i <= times; i++) {
			cout << letter;
		}

		cout << endl << "Would you like to continue? [Y/N]" << endl;
		cin >> answer;
		if (answer == 'Y') {
			nextRound = true;
		}
		else if (answer == 'N') {
			nextRound = false;
		}
		else {
			cout << "You entered a wrong digit. Ending a program." << endl;
			nextRound = false;
		}
	}

	cout << "Program is stopped!";

	return 0;
}
