#include <iostream>
#include "Grid.h"

using namespace std;

void showMainMenu();
void showGameMenu();

// Constants to exit the menus
const int EXIT_OPTION = 4, EXIT_GAME_OPTION = 4;

int main()
{
	Grid userGrid;
	const int MAX_DIFFICULTY = 9, MIN_DIFFICULTY = 1;
	int userOption, gameMenuOption, userRow, userColumn;

	int userDifficulty = 5; // Assigned by default to a 5 (Medium level of difficulty)

	do {
		showMainMenu();
		cout << "Enter your choise: ";
		cin >> userOption;
		cout << endl << endl;

		switch (userOption)
		{
			// * * * START OF THE NEW GAME * * * 
		case 1: {

			userGrid = Grid();
			userGrid.newGame(userDifficulty);

			do {
				cout << endl << "      ===GRID===" << endl;
				userGrid.print();
				showGameMenu();
				cout << "Enter your choice: ";
				cin >> gameMenuOption;
				cout << endl << endl;

				switch (gameMenuOption)
				{
				case 1: {
					// Check for an invalid input of row
					 do {
						cout << "Enter row (0-" << MAX_ROW - 1 <<"): ";
						cin >> userRow;
						if (userRow < 0 || userRow >= MAX_ROW)
							cout << "Wrong input, try again!" << endl;
					 } while (userRow < 0 || userRow >= MAX_ROW);

					 // Check for an invalid input of column
					do {
						cout << "Enter column (0-" << MAX_COLUMN - 1 << "): ";
						cin >> userColumn;
						if (userColumn < 0 || userColumn >= MAX_COLUMN)
							cout << "Wrong input, try again!" << endl;
					} while (userColumn < 0 || userColumn >= MAX_COLUMN);

					// After a new turn user cannot redo any of his previous undo's
					userGrid.resetRedoCounter();

					// If user already undid some amount of turns after a new turn he will be allowed to make an extra undo (max amount of undo is 5)
					userGrid.decreaseUndoCounter();

					userGrid.increaseGrid(userRow, userColumn);

					// Checking if user won
					if (userGrid.end()) {
						cout << endl << endl << " * * * Congratulations! You won! * * * " << endl;
						
						// Setting user game menu choise to an exit value
						gameMenuOption = EXIT_GAME_OPTION;
					}
					break;
				}

				case 2: {
					userGrid.undo();
					break;
				}

				case 3: {
					userGrid.redo();
					break;
				}

				case EXIT_OPTION:
					userGrid.newGame(0);
					break;

					// Check for an invalid input of game menu choise
				default:
					cout << "You've entered a number out of range! Try again!" << endl;
					break;
				}

			} while (gameMenuOption != EXIT_GAME_OPTION);
			break;

			// * * * END OF THE NEW GAME * * * 
		}

			// Re-assigning of the difficulty variable that is initially 5
			// Check for an invalid input of difficulty level
		case 2: {
			do {
				cout << "Select level of difficulty (" << MIN_DIFFICULTY << " - " << MAX_DIFFICULTY << "):";
				cin >> userDifficulty;

				if (userDifficulty < MIN_DIFFICULTY || userDifficulty > MAX_DIFFICULTY)
					cout << "You seleced level of difficulty that is out of range! Try again!" << endl;
			} while (userDifficulty < MIN_DIFFICULTY || userDifficulty > MAX_DIFFICULTY);
			break;
		}

			// Credits of the author
		case 3: {
			cout << "Author of the Documentation: Ivan Kosiakov" << endl
				<< "Author of the Code: Ivan Kosiakov" << endl
				<< "Date of the creation: 09.12.2022" << endl
				<< "Task assigned by Dr Andreas Savva" << endl;
			break;
		}

		case 4:
			// No code needed
			break;

			// Check for an invalid input of main menu choise
		default:
			cout << "You've entered a number out of range! Try again!" << endl;
			break;
		}

	} while (userOption != EXIT_OPTION);

	cout << "Bye!" << endl;
	return 0;
}

/* Main Menu function.
 *  
 * @brief This function shows a menu in the console that considers options of the: Start New Game, Select Level of Difficulty, Credits and Exit.
 */
void showMainMenu() {
	cout << endl << "===MAIN MENU===" << endl
		<< "1) Start New Game" << endl
		<< "2) Select Level of Difficulty" << endl
		<< "3) Credits" << endl
		<< EXIT_OPTION << ") Exit" << endl;
}

/* Main Menu function.
 *
 * @brief This function shows a game menu in the console that considers option of the: Select Position, Undo, Redo and Back to Main Menu.
 */
void showGameMenu() {
	cout << endl << "1) Select Position" << endl
		<< "2) Undo" << endl
		<< "3) Redo" << endl
		<< EXIT_GAME_OPTION << ") Back to Main Menu" << endl;
}
