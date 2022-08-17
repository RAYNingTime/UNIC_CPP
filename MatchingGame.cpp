#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void clearScreen();
int main()
{
	int const MAX_BOARD = 8, MAX_LINE = 3;
	int amountTurn = 1, columnPos1, rowPos1, columnPos2, rowPos2, firstPos, secondPos, amountStars, rowRand, columnRand, counterRand = 0;
	char answerBoard[3][3] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' },
		userBoard[3][3] = { '*', '*', '*', '*', '*', '*', '*', '*', '*' },
		answer, letter = 97;
	bool repeat = false, win, correct;

	cout << "Welcome to the Matching Game. At each move, choose two positions that you think match." << endl << endl;

	do {
		for (int i = 0; i < 8; i++) {
			rowRand = rand() % 3;
			columnRand = rand() % 3;
			if (answerBoard[rowRand][columnRand] == ' ')
				answerBoard[rowRand][columnRand] = letter;
			else {
				i--;
				counterRand--;
			}

			if (counterRand % 2 == 1)
				letter++;

			counterRand++;
		}

		do {
			srand(time(NULL));

			win = false;

			cout << "Board is: " << endl;
			for (int i = 0; i < MAX_LINE; i++) {
				for (int j = 0; j < MAX_LINE; j++) {
					cout << userBoard[i][j] << " ";
				}
				cout << endl;
			}
			do {
				correct = true;
				cout << endl << "Move #" << amountTurn << ": Enter two positions to match : ";
				cin >> firstPos >> secondPos;

				firstPos--;
				rowPos1 = firstPos % 3;
				if (firstPos >= 0 && firstPos <= 2)
					columnPos1 = 0;
				else if (firstPos >= 3 && firstPos <= 5)
					columnPos1 = 1;
				else if (firstPos >= 6 && firstPos <= 8)
					columnPos1 = 2;
				else
					correct = false;

				secondPos--;
				rowPos2 = secondPos % 3;
				if (secondPos >= 0 && secondPos <= 2)
					columnPos2 = 0;
				else if (secondPos >= 3 && secondPos <= 5)
					columnPos2 = 1;
				else if (secondPos >= 6 && secondPos <= 8)
					columnPos2 = 2;
				else {
					correct = false;
				}

				if (correct != true)
					cout << "You've entered an invaid number! Try again!" << endl;
				else if (firstPos == secondPos) {
					cout << "You should select two different position!" << endl;
					correct = false;
				}
			} while (correct != true);

			cout << endl << endl << "Board is: " << endl;
			for (int i = 0; i < MAX_LINE; i++) {
				for (int j = 0; j < MAX_LINE; j++) {
					if ((i == columnPos1 && j == rowPos1) || (i == columnPos2 && j == rowPos2))
						cout << answerBoard[i][j] << " ";
					else
						cout << userBoard[i][j] << " ";
				}
				cout << endl;
			}

			if (answerBoard[columnPos1][rowPos1] == answerBoard[columnPos2][rowPos2]) {
				userBoard[columnPos1][rowPos1] = answerBoard[columnPos1][rowPos1];
				userBoard[columnPos2][rowPos2] = answerBoard[columnPos2][rowPos2];
			}

			amountStars = 0;
			for (int i = 0; i < MAX_LINE; i++) {
				for (int j = 0; j < MAX_LINE; j++) {
					if (userBoard[i][j] == '*') {
						amountStars++;
					}
				}
			}
			Sleep(2000);

			if (amountStars == 1)
				win = true;
			clearScreen();
			amountTurn++;
		} while (win != true);

		cout << "You did it in " << amountTurn << " moves! Play again (Y or N)?";
		do {
			cin >> answer;

			if (answer == 'Y') {
				repeat = true;
				cout << "Game is restarting..." << endl;

				for (int i = 0; i < MAX_LINE; i++) {
					for (int j = 0; j < MAX_LINE; j++) {
						userBoard[i][j] = '*';
					}
				}
				amountTurn = 1;
				Sleep(2000);
				clearScreen();
			}
			else if (answer == 'N') {
				repeat = false;
				cout << "Bye.";
			}
			else cout << "You've entered an invalid symbol! Try again!";
		} while (answer != 'Y' && answer != 'N');
	} while (repeat == true);
}//main

void clearScreen() {
	for (int i = 0; i < 50; i++)
		cout << " " << endl;
}
